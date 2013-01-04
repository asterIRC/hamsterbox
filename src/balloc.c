/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *
 *  Copyright (C) 2002 by the past and present ircd coders, and others.
 *  Original credit lines follow:
 *
 *  File:   balloc.c
 *  Owner:  Wohali (Joan Touzet)
 *  
 *  Modified 2001/11/29 for mmap() support by Aaron Sethman <androsyn@ratbox.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *  USA
 */

/*! \file balloc.c
 * \brief A block allocator
 * \version $Id: balloc.c 403 2006-06-14 05:04:42Z jon $
 * 
 * About the block allocator
 *
 * Basically we have three ways of getting memory off of the operating
 * system. Below are this list of methods and the order of preference.
 *
 * 1. mmap() anonymous pages with the MMAP_ANON flag.\n
 * 2. mmap() via the /dev/zero trick.\n
 * 3. malloc()\n
 *
 * The advantages of 1 and 2 are this.  We can munmap() the pages which will
 * return the pages back to the operating system, thus reducing the size 
 * of the process as the memory is unused.  malloc() on many systems just keeps
 * a heap of memory to itself, which never gets given back to the OS, except on
 * exit.  This of course is bad, if say we have an event that causes us to allocate
 * say, 200MB of memory, while our normal memory consumption would be 15MB.  In the
 * malloc() case, the amount of memory allocated to our process never goes down, as
 * malloc() has it locked up in its heap.  With the mmap() method, we can munmap()
 * the block and return it back to the OS, thus causing our memory consumption to go
 * down after we no longer need it.
 */

#include "stdinc.h"
#ifdef HAVE_MMAP		/* We've got mmap() that is good */
#include <sys/mman.h>

/* HP-UX sucks */
#ifdef MAP_ANONYMOUS
#ifndef MAP_ANON
#define MAP_ANON MAP_ANONYMOUS
#endif
#endif /* MAP_ANONYMOUS */
#endif

#include "ircd.h"
#include "balloc.h"
#include "irc_string.h"
#include "tools.h"
#include "client.h"
#include "send.h"
#include "numeric.h"
#include "fdlist.h"
#include "event.h"


static dlink_list heap_list;

static void BlockHeapGarbageCollect(BlockHeap *);
static void heap_garbage_collection(void *);

/*! \brief Returns memory for the block back to either the malloc heap
 *         in case of !HAVE_MMAP, or back to the OS otherwise.
 * \param ptr  Pointer to memory to be freed
 * \param size The size of the memory space
 */
static inline void
free_block(void *ptr, size_t size)
{
#ifdef HAVE_MMAP
	munmap(ptr, size);
#else
	free(ptr);
#endif
}

#ifdef HAVE_MMAP
#ifndef MAP_ANON		/* But we cannot mmap() anonymous pages */
				/* So we mmap() /dev/zero, which is just as good */
static fde_t dpfd;
#endif
#endif

/*! \brief Opens /dev/zero and saves the file handle for
 * future allocations.
 */
void
initBlockHeap(void)
{
#ifdef HAVE_MMAP
#ifndef MAP_ANON
	int zero_fd = open("/dev/zero", O_RDWR);

	if(zero_fd < 0)
		outofmemory();
	fd_open(&dpfd, zero_fd, 0, "Anonymous mmap()");
#endif
#endif
	eventAdd("heap_garbage_collection", &heap_garbage_collection, NULL, 119);
}

/*!
 * \param size Size of block to allocate
 * \return Address pointer to allocated data space
 */
static inline void *
get_block(size_t size)
{
#ifdef HAVE_MMAP
	void *ptr = NULL;

#ifndef MAP_ANON
	ptr = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE, dpfd.fd, 0);
#else
	ptr = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANON, -1, 0);
#endif
	return ptr == MAP_FAILED ? NULL : ptr;
#else
	return malloc(size);
#endif
}

static void
heap_garbage_collection(void *arg)
{
	dlink_node *ptr;

	DLINK_FOREACH(ptr, heap_list.head)
		BlockHeapGarbageCollect(ptr->data);
}

/*! \brief Allocates a new block for addition to a blockheap
 * \param bh Pointer to parent blockheap
 * \return 0 if successful, 1 if not
 */
static int
newblock(BlockHeap *bh)
{
	Block *b;
	int i;

	/* Setup the initial data structure. */
	if((b = MyMalloc(sizeof(Block))) == NULL)
		return 1;

	b->heap = bh;
	b->freeElems = bh->elemsPerBlock;
	b->elems = get_block(bh->elemsPerBlock * (bh->elemSize + sizeof(MemBlock)));

	if(b->elems == NULL)
		return 1;

	/* Setup our blocks now */
	for(i = 0; i < bh->elemsPerBlock; ++i)
	{
		MemBlock *block = (MemBlock *) ((size_t) b->elems + i * (bh->elemSize + sizeof(MemBlock)));
		block->block = b;
		block->data = (void *) ((size_t) block + sizeof(MemBlock));
		dlinkAdd(block, &block->self, &bh->free_list);
	}

	dlinkAdd(b, &b->node, &bh->blocks);

	return 0;
}

/*! \brief Creates a new blockheap
 *
 * Creates a new blockheap from which smaller blocks can be allocated.
 * Intended to be used instead of multiple calls to malloc() when
 * performance is an issue.
 *
 * \param name          Name of the blockheap
 * \param elemsize      Size of the basic element to be stored
 * \param elemsperblock Number of elements to be stored in a single block of
 *                      memory.  When the blockheap runs out of free memory,
 *                      it will allocate elemsize * elemsperblock more.
 * \return Pointer to new BlockHeap, or NULL if unsuccessful
 */
BlockHeap *
BlockHeapCreate(const char *const name, size_t elemsize, int elemsperblock)
{
	BlockHeap *bh = NULL;
	assert(elemsize > 0 && elemsperblock > 0);

	/* Catch idiotic requests up front */
	if((elemsize <= 0) || (elemsperblock <= 0))
		outofmemory();	/* die.. out of memory */

	/* Allocate our new BlockHeap */
	if((bh = MyMalloc(sizeof(BlockHeap))) == NULL)
		outofmemory();	/* die.. out of memory */

	if((elemsize % sizeof(void *)) != 0)
	{
		/* Pad to even pointer boundary */
		elemsize += sizeof(void *);
		elemsize &= ~(sizeof(void *) - 1);
	}

	bh->name = name;
	bh->elemSize = elemsize;
	bh->elemsPerBlock = elemsperblock;

	/* Be sure our malloc was successful */
	if(newblock(bh))
	{
		if(bh != NULL)
			MyFree(bh);

		outofmemory();	/* die.. out of memory */
	}

	assert(bh);

	dlinkAdd(bh, &bh->node, &heap_list);

	return bh;
}

/*! \brief Returns a pointer to a struct within our BlockHeap that's free for
 *         the taking.
 * \param bh Pointer to the Blockheap
 * \return Address pointer to allocated data space, or NULL if unsuccessful
 */
void *
BlockHeapAlloc(BlockHeap * bh)
{
	assert(bh != NULL);

	if (dlink_list_length(&bh->free_list) == 0)
	{
		/* Allocate new block and assign */
		/* newblock returns 1 if unsuccessful, 0 if not */
		if(newblock(bh))
		{
			/* That didn't work..try to garbage collect */
			BlockHeapGarbageCollect(bh);

			if(newblock(bh))
				outofmemory();	/* Well that didn't work either...bail */
		}
	}

	assert(dlink_list_length(&bh->free_list));

	MemBlock *b = bh->free_list.head->data;
	dlinkDelete(&b->self, &bh->free_list);
	dlinkAdd(b, &b->self, &bh->used_list);

	--b->block->freeElems;
	assert(b->block->freeElems >= 0);

	memset(b->data, 0, bh->elemSize);
	return b->data;
}

/*! \brief Returns an element to the free pool, does not free()
 * \param bh  Pointer to BlockHeap containing element
 * \param ptr Pointer to element to be "freed"
 * \return 0 if successful, 1 if element not contained within BlockHeap
 */
int
BlockHeapFree(BlockHeap * bh, void *ptr)
{
	Block *block;
	MemBlock *memblock;

	assert(bh != NULL);
	assert(ptr != NULL);

	memblock = (void *) ((size_t) ptr - sizeof(MemBlock));

	assert(memblock->block != NULL);
	if(memblock->block == NULL)
		outofmemory();

	block = memblock->block;
	++block->freeElems;
	mem_frob(ptr, bh->elemSize);

	dlinkDelete(&memblock->self, &bh->used_list);
	dlinkAdd(memblock, &memblock->self, &bh->free_list);
	return 0;
}

/*! \brief Performs garbage collection on the block heap.
 *
 * Performs garbage collection on the block heap.  Any blocks that are
 * completely unallocated are removed from the heap.  Garbage collection
 * will \b never remove the root node of the heap.
 *
 * \param bh Pointer to the BlockHeap to be cleaned up
 */
static void
BlockHeapGarbageCollect(BlockHeap * bh)
{
	dlink_node *ptr, *next_ptr;

	assert(bh != NULL);

	if (dlink_list_length(&bh->free_list) < bh->elemsPerBlock || dlink_list_length(&bh->blocks) == 1)
	{
		/* There couldn't possibly be an entire free block.  Return. */
		return;
	}

	DLINK_FOREACH_SAFE(ptr, next_ptr, bh->blocks.head)
	{
		Block *walker = ptr->data;

		if(walker->freeElems == bh->elemsPerBlock)
		{
			dlink_node *ptr2, *next_ptr2;

			DLINK_FOREACH_SAFE(ptr2, next_ptr2, bh->free_list.head)
			{
				MemBlock *b = ptr2->data;
				if (b->block->heap == bh)
					dlinkDelete(&b->self, &bh->free_list);
			}

			free_block(walker->elems, bh->elemsPerBlock * (bh->elemSize + sizeof(MemBlock)));
			dlinkDelete(&walker->node, &bh->blocks);
			MyFree(walker);
		}
	}
}

/*! \brief Completely free()s a BlockHeap.  Use for cleanup.
 * \param bh Pointer to the BlockHeap to be destroyed
 */
void
BlockHeapDestroy(BlockHeap * bh)
{
	dlink_node *ptr;

	DLINK_FOREACH(ptr, bh->blocks.head)
	{
		Block *b = ptr->data;
		free_block(b->elems, bh->elemsPerBlock * (bh->elemSize + sizeof(MemBlock)));
		MyFree(b);
	}

	dlinkDelete(&bh->node, &heap_list);
	MyFree(bh);
}

/*! \brief Returns the number of bytes being used
 * \param bh Pointer to a BlockHeap
 * \return Number of bytes being used
 */
static size_t
block_heap_get_used_mem(const BlockHeap * const bh)
{
	return (((dlink_list_length(&bh->blocks) *
		  bh->elemsPerBlock) - dlink_list_length(&bh->free_list)) * (bh->elemSize + sizeof(MemBlock)));
}

/*! \brief Returns the number of bytes being free for further allocations
 * \param bh Pointer to a BlockHeap
 * \return Number of bytes being free for further allocations
 */
static size_t
block_heap_get_free_mem(const BlockHeap * const bh)
{
	return (dlink_list_length(&bh->free_list) * (bh->elemSize + sizeof(MemBlock)));
}

/*! \brief Returns the total number of bytes of memory belonging to a heap
 * \param bh Pointer to a BlockHeap
 * \return Total number of bytes of memory belonging to a heap
 */
static size_t
block_heap_get_size_mem(const BlockHeap * const bh)
{
	return (((dlink_list_length(&bh->blocks) * bh->elemsPerBlock)) * (bh->elemSize + sizeof(MemBlock)));
}

/*! \brief Returns the number of elements being used.
 * \param bh Pointer to a BlockHeap
 * \return Number of elements being free for further allocations
 */
static unsigned int
block_heap_get_used_elm(const BlockHeap * const bh)
{
	return ((dlink_list_length(&bh->blocks) * bh->elemsPerBlock) - dlink_list_length(&bh->free_list));
}

/*! \brief Returns the number of elements being free for further allocations.
 * \param bh Pointer to a BlockHeap
 * \return Number of elements being free for further allocations
 */
static unsigned int
block_heap_get_free_elm(const BlockHeap * const bh)
{
	return dlink_list_length(&bh->free_list);
}

/*! \brief Returns the number of total elements belonging to a heap.
 *         Includes \b free and \b used elements.
 * \param bh Pointer to a BlockHeap
 * \return Number of total elements belonging to a heap
 */
static unsigned int
block_heap_get_size_elm(const BlockHeap * const bh)
{
	return (dlink_list_length(&bh->blocks) * bh->elemsPerBlock);
}

void
block_heap_report_stats(struct Client *client_p)
{
	dlink_node *node;

	DLINK_FOREACH(node, heap_list.head)
	{
		const BlockHeap *bh = node->data;

		sendto_one(client_p, ":%s %d %s z :%s mempool: used %u/%u free %u/%u (size %u/%u)",
			   me.name, RPL_STATSDEBUG, client_p->name, bh->name,
			   block_heap_get_used_elm(bh),
			   block_heap_get_used_mem(bh),
			   block_heap_get_free_elm(bh),
			   block_heap_get_free_mem(bh),
			   block_heap_get_size_elm(bh), block_heap_get_size_mem(bh));
	}
}
