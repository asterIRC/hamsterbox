/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_chghost.c: Allows changing hostname of connected clients.
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
 *  $Id: m_chghost.c 495 2007-07-08 23:26:42Z jon $
 */

/* List of ircd includes from ../include/ */
#include "stdinc.h"
#include "handlers.h"
#include "client.h"
#include "channel.h"
#include "common.h"		/* FALSE bleah */
#include "ircd.h"
#include "irc_string.h"
#include "numeric.h"
#include "fdlist.h"
#include "s_bsd.h"
#include "s_conf.h"
#include "s_log.h"
#include "s_serv.h"
#include "send.h"
#include "msg.h"
#include "parse.h"
#include "modules.h"
#include "s_user.h"
#include "hash.h"

static void me_chghost(struct Client *, struct Client *, int, char *[]);

struct Message chghost_msgtab = {
	"CHGHOST", 0, 0, 2, 0, MFLG_SLOW, 0,
	{m_unregistered, m_ignore, m_ignore, me_chghost, m_ignore, m_ignore}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
	mod_add_cmd(&chghost_msgtab);
}

void
_moddeinit(void)
{
	mod_del_cmd(&chghost_msgtab);
}

const char *_version = "$Revision: 495 $";
#endif

static void
me_chghost(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
	struct Client *target_p = NULL;

	if(parc < 3)
		return;

	if(!IsServer(source_p))
		return;

	if((target_p = find_client(parv[1])) == NULL)
		return;

	if(!IsClient(target_p))
		return;

	if(strlen(parv[2]) > HOSTLEN || !*parv[2] || !valid_hostname(parv[2]))
		return;

	if(!strcmp(target_p->host, parv[2]))
		return;

	if(ConfigChannel.cycle_on_hostchange)
		do_hostchange_quits(target_p);

	strlcpy(target_p->host, parv[2], sizeof(target_p->host));

	if(ConfigChannel.cycle_on_hostchange)
		do_hostchange_joins(target_p);
}
