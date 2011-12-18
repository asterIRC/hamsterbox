/************************************************************************
 *   IRC - Internet Relay Chat
 *   Copyright (C) 2011 Plexus Development Team
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 1, or (at your option)
 *   any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *   $Id$
 */

#include "client.h"
#include "dnsbl.h"
#include "s_conf.h"
#include "hostmask.h"
#include "s_misc.h"
#include "ircd.h"
#include "s_log.h"
#include "send.h"
#include "list.h"
#include "sprintf_irc.h"
#include "irc_res.h"
#include "s_user.h"
#include "irc_string.h"

/*
 * dnsbl_callback
 *
 * inputs       - A DnsblInfo structure
 * reply        - DNS reply
 * side effects - May Dline the IP being queried
 */
static void
dnsbl_callback(void *ptr, struct DNSReply *reply)
{
	struct DnsblInfo *dnsbl = (struct DnsblInfo *) ptr;
	struct Client *cptr = dnsbl->cptr;
	struct AccessItem *dline = find_conf_by_address(cptr->sockhost, &cptr->localClient->ip, CONF_DLINE | 1, AF_INET, NULL, NULL, NULL);

	assert(MyClient(cptr));

	dlinkFindDelete(&cptr->localClient->dnsbl_queries, dnsbl);

	if (reply != NULL && dline == NULL)
	{
		struct sockaddr_in *addr = (struct sockaddr_in *) &reply->addr;

		if ((addr->sin_addr.s_addr & 0xF0FFFFFF) == 0x7F)
		{
			struct ConfItem *dnsbl_aconf = find_conf_name(&dnsbl_items, dnsbl->dnsbl_host, DNSBL_TYPE);
			int result = addr->sin_addr.s_addr >> 24;
			char reason_buffer[512] = "Blacklisted IP";
			const char *current_date = smalldate(CurrentTime);

			struct ConfItem *conf = make_conf_item(DLINE_TYPE);
			dline = map_to_conf(conf);

			DupString(dline->host, cptr->sockhost);
			dline->hold = CurrentTime + dnsbl->duration;

			if (dnsbl->reason != NULL)
			{
				int i = 0, written = 0, len = strlen(dnsbl->reason), ip_len = strlen(cptr->sockhost), date_len = strlen(current_date);
				for (; i < len && written < sizeof(reason_buffer) - 1; ++i)
				{
					if (dnsbl->reason[i] == '%' && dnsbl->reason[i + 1] == 'i' && written + ip_len < sizeof(reason_buffer) - 1)
					{
						memcpy(&reason_buffer[written], cptr->sockhost, ip_len);
						written += ip_len;
						++i;
					}
					else if (dnsbl->reason[i] == '%' && dnsbl->reason[i + 1] == 'd' && written + date_len < sizeof(reason_buffer) - 1)
					{
						memcpy(&reason_buffer[written], current_date, date_len);
						written += date_len;
						++i;
					}
					else if (dnsbl->reason[i] == '%' && dnsbl->reason[i + 1] == 'c')
					{
						reason_buffer[written++] += result + 48;
						++i;
					}
					else
						reason_buffer[written++] = dnsbl->reason[i];
				}

				reason_buffer[written++] = 0;
			}

			DupString(dline->reason, reason_buffer);

			add_temp_line(conf);
			ilog(L_TRACE, "%s added temporary %d min. D-Line for [%s] [%s]",
				me.name, dnsbl->duration / 60, dline->host, dline->reason);
			sendto_realops_flags(UMODE_ALL, L_ALL, "%s added temporary %d min. D-Line for [%s] [%s]",
				me.name, dnsbl->duration / 60,
				dline->host, dline->reason);

			rehashed_klines = 1;

			if (dnsbl_aconf != NULL)
			{
				struct DnsblItem *dnsbl_item = map_to_conf(dnsbl_aconf);
				++dnsbl_item->hits;
			}
		}
	}

	if (dline == NULL && cptr->localClient->dnsbl_queries.length == 0)
	{
		cptr->localClient->registration &= ~REG_NEED_DNSBL;
		if (!cptr->localClient->registration)
		{
			char buf[USERLEN + 1];

			strlcpy(buf, cptr->username, sizeof(buf));
			register_local_user(cptr, cptr, cptr->name, buf);
		}
	}

	MyFree(dnsbl->dnsbl_host);
	MyFree(dnsbl->reason);
	MyFree(dnsbl);
}


/*
 * start_dnsbl_lookup
 *
 * inputs       - struct Client *
 * side effects - The client is checked for being on the DNS blacklists.
 */
void
start_dnsbl_lookup(struct Client *cptr)
{
	struct sockaddr_in *addr;
	unsigned long ip;
	struct in_addr lookup_addr;
	char reverse_ip[INET_ADDRSTRLEN];
	dlink_node *ptr;

	if (!MyConnect(cptr) || cptr->localClient->ip.ss.ss_family != AF_INET)
		return;
	else if (dnsbl_items.length == 0)
		return;

	addr = (struct sockaddr_in *) &cptr->localClient->ip;
	ip = addr->sin_addr.s_addr;

	lookup_addr.s_addr = (ip << 24) | ((ip & 0xFF00) << 8) | ((ip & 0xFF0000) >> 8) | (ip >> 24);

	if (inet_ntop(AF_INET, &lookup_addr, reverse_ip, sizeof(reverse_ip)) == NULL)
		return;

	cptr->localClient->registration |= REG_NEED_DNSBL;

	DLINK_FOREACH(ptr, dnsbl_items.head)
	{
		struct ConfItem *conf = (struct ConfItem *) ptr->data;
		struct DnsblItem *d_conf = map_to_conf(conf);

		struct DnsblInfo *info = MyMalloc(sizeof(struct DnsblInfo));
		char host_buf[128];

		dlinkAdd(info, make_dlink_node(), &cptr->localClient->dnsbl_queries);

		ircsprintf(host_buf, "%s.%s", reverse_ip, conf->name);

		info->cptr = cptr;
		DupString(info->dnsbl_host, conf->name);
		info->duration = d_conf->duration;
		DupString(info->reason, d_conf->reason);

		info->query.ptr = info;
		info->query.callback = dnsbl_callback;
		gethost_byname_type(host_buf, &info->query, T_A);
	}
}

/*
 * clear_dnsbl_lookup
 *
 * inputs       - struct Client *
 * side effects - Pending DNS queries for this client will be canceled
 */
void
clear_dnsbl_lookup(struct Client *cptr)
{
	dlink_node *ptr, *nexptr;

	if (!MyConnect(cptr))
		return;

	DLINK_FOREACH_SAFE(ptr, nexptr, cptr->localClient->dnsbl_queries.head)
	{
		struct DnsblInfo *info = (struct DnsblInfo *) ptr->data;

		delete_resolver_queries(&info->query);

		MyFree(info->dnsbl_host);
		MyFree(info->reason);
		MyFree(info);

		dlinkDelete(ptr, &cptr->localClient->dnsbl_queries);
	}

	cptr->localClient->registration &= ~REG_NEED_DNSBL;
}

