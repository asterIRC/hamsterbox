/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *
 *  Copyright (C) 2002 by the past and present ircd coders, and others.
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

/*! \file balloc.h
 * \brief A block allocator
 * \version $Id: balloc.h 403 2006-06-14 05:04:42Z jon $
 */

#ifndef INCLUDED_balloc_h
#define INCLUDED_balloc_h

#include "setup.h"

#ifndef NOBALLOC
#include "client.h"
#include "tools.h"
#include "memory.h"
#include "ircd_defs.h"

/*! \brief BlockHeap contains the information for the root node of the
 *         memory heap.
 */
struct BlockHeap
{
	const char *name;	/*!< Name of the heap */
	size_t elemSize;	/*!< Size of each element to be stored */
	int elemsPerBlock;	/*!< Number of elements per block */

	dlink_node node;

	dlink_list blocks; /* Block heaps */

	dlink_list used_list, free_list; /* Memory blocks */
};

typedef struct BlockHeap BlockHeap;

/*! \brief Block contains status information for
 *         an allocated block in our heap.
 */
struct Block
{
	BlockHeap *heap;
	dlink_node node;
	int freeElems;		/*!< Number of available elems */
	void *elems;		/*!< Points to allocated memory */
};

typedef struct Block Block;

struct MemBlock
{
	dlink_node self;	/*!< Node for linking into free_list or used_list */
	Block *block;		/*!< Which block we belong to */
	void *data;		/* Memory associated with the block */
};
typedef struct MemBlock MemBlock;


extern int BlockHeapFree(BlockHeap *, void *);
extern void *BlockHeapAlloc(BlockHeap *);

extern BlockHeap *BlockHeapCreate(const char *const, size_t, int);
extern void BlockHeapDestroy(BlockHeap *);
extern void initBlockHeap(void);
extern void block_heap_report_stats(struct Client *);
#else /* NOBALLOC */

typedef struct BlockHeap BlockHeap;
/* This is really kludgy, passing ints as pointers is always bad. */
#define BlockHeapCreate(blah, es, epb) ((BlockHeap*)(es))
#define BlockHeapAlloc(x) MyMalloc((int)x)
#define BlockHeapFree(x,y) MyFree(y)
#endif /* NOBALLOC */
#endif /* INCLUDED_balloc_h */
