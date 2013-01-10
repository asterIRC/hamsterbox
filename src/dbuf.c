/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  dbuf.c: Supports dynamic data blocks.
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
 *
 */

#include "stdinc.h"
#include "balloc.h"
#include "common.h"
#include "dbuf.h"
#include "list.h"
#include "tools.h"
#include "memory.h"

static BlockHeap *dbuf_heap;

void
dbuf_init(void)
{
	dbuf_heap = BlockHeapCreate("dbuf", sizeof(struct dbuf_block), DBUF_HEAP_SIZE);
}

void dbuf_add(struct dbuf_queue *qptr, struct dbuf_block *bptr)
{
	assert(bptr->size > 0);

	bptr->refs++;
	dlinkAddTail(bptr, make_dlink_node(), &qptr->blocks);

	qptr->total_size += bptr->size;
}

void dbuf_delete(struct dbuf_queue *qptr, size_t count)
{
	assert(qptr->total_size >= count);

	qptr->total_size -= count;

	while (count > 0 && dlink_list_length(&qptr->blocks) > 0)
	{
		dlink_node *node = qptr->blocks.head;
		struct dbuf_block *buffer = node->data;
		size_t avail;

		assert(buffer->size > qptr->pos);
		avail = buffer->size - qptr->pos;

		if (count >= avail)
		{
			count -= avail;

			buffer->refs--;
			dbuf_ref_free(buffer);

			dlinkDelete(node, &qptr->blocks);
			free_dlink_node(node);

			qptr->pos = 0;
		}
		else
		{
			qptr->pos += count;
			count = 0;
		}
	}
}

struct dbuf_block *dbuf_alloc()
{
	return BlockHeapAlloc(dbuf_heap);
}

void dbuf_ref_free(struct dbuf_block *bptr)
{
	if (bptr->refs <= 0)
		BlockHeapFree(dbuf_heap, bptr);
}

void dbuf_put(struct dbuf_block *dbuf, const char *pattern, ...)
{
	va_list args;

	assert(dbuf->refs == 0);

	va_start(args, pattern);
	dbuf_put_args(dbuf, pattern, args);
	va_end(args);
}

void dbuf_put_args(struct dbuf_block *dbuf, const char *data, va_list args)
{
	assert(dbuf->refs == 0);

	dbuf->size += vsnprintf(dbuf->data + dbuf->size, sizeof(dbuf->data) - dbuf->size, data, args);
	if (dbuf->size > sizeof(dbuf->data))
		dbuf->size = sizeof(dbuf->data); /* required by some versions of vsnprintf */
}

void dbuf_put_raw(struct dbuf_queue *qptr, const char *buf, size_t sz)
{
	struct dbuf_block *buffer;

	assert(sz > 0);

	if (dlink_list_length(&qptr->blocks) == 0)
	{
		buffer = BlockHeapAlloc(dbuf_heap);
		dlinkAddTail(buffer, make_dlink_node(), &qptr->blocks);
		assert(qptr->pos == 0);
	}

	do
	{
		size_t amount;

		buffer = qptr->blocks.tail->data;

		amount = sizeof(buffer->data) - buffer->size;
		if (!amount)
		{
			buffer = BlockHeapAlloc(dbuf_heap);
			dlinkAddTail(buffer, make_dlink_node(), &qptr->blocks);
		}

		if (amount > sz)
			amount = sz;

		memcpy(&buffer->data[buffer->size], buf, amount);
		buffer->size += amount;

		qptr->total_size += amount;

		sz -= amount;

		buf += amount;
	}
	while (sz > 0);
}

