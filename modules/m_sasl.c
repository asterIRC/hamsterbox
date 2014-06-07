/************************************************************************
 *   IRC - Internet Relay Chat, doc/example_module.c
 *   Copyright (C) 2001 Hybrid Development Team
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
 *   $Id: example_module.c 131 2005-12-10 04:59:29Z jon $
 */

/* List of ircd includes from ../include/ 
 * These ones are necessary to build THIS module...
 */

#include "stdinc.h"

#include "client.h"
#include "hash.h"
#include "send.h"
#include "msg.h"
#include "modules.h"
#include "numeric.h"
#include "handlers.h"
#include "irc_string.h"
#include "s_serv.h"
#include "s_user.h"
#include "s_misc.h"
#include "s_stats.h"
#include "hook.h"
#include "string.h"
#include "../src/s_user.c"

/* OTHER USEFUL INCLUDES:
 * 
 * #include "handlers.h" <-- include this file to be able to use default
 * functions in place of your own 'Access Denied' kind of function
 * 
 * #include "numeric.h" <-- include this file to be able to use form_str,
 * standard message formats (see messages.tab and *.lang in messages/)
 * Examples are strewn all across the ircd code, so just grep a bit to
 * find one!
 *
 * #include "irc_string.h" <-- best to include this if you use *any*
 * string comparison or parsing functions, although they may be available
 * natively for your OS the prototypes in irc_string.h may be required for
 * others. */

/* Declare the void's initially up here, as modules don't have an
 * include file, we will normally have client_p, source_p, parc
 * and parv[] where:
 *
 * client_p == client issuing command
 * source_p == where the command came from
 * parc     == the number of parameters
 * parv     == an array of the parameters
 */
static void mr_authenticate(struct Client *, struct Client *, int, char *[]);
static void me_sasl(struct Client *, struct Client *, int, char *[]);

/*
 * Show the commands this module can handle in a msgtab
 * and give the msgtab a name, here its test_msgtab
 */
struct Message authenticate_msgtab = {
	/* This would add the command "TEST" which requires no additional
	 * parameters
	 */
	"AUTHENTICATE", 0, 0, 2, 1, MFLG_SLOW, 0,

	/* Fields are in order:
	 *-> {unregged, regged, remote, encap, oper, dummy}
	 * where:
	 * unregged == function to call for unregistered clients
	 * regged == function to call for normal users
	 * remote == function to call for servers/remote users
	 * encap == function to call for encap'd server/remote commands
	 * oper == function to call for operators
	 * dummy == function called when client is quarantined
	 */
	{mr_authenticate, m_ignore, m_ignore, m_ignore, m_ignore, m_ignore}
};

struct Message sasl_msgtab = {
	/* This would add the command "TEST" which requires no additional
	 * parameters
	 */
	"SASL", 0, 0, 5, 4, MFLG_SLOW, 0,

	/* Fields are in order:
	 *-> {unregged, regged, remote, encap, oper, dummy}
	 * where:
	 * unregged == function to call for unregistered clients
	 * regged == function to call for normal users
	 * remote == function to call for servers/remote users
	 * encap == function to call for encap'd server/remote commands
	 * oper == function to call for operators
	 * dummy == function called when client is quarantined
	 */
	{m_ignore, m_ignore, m_ignore, me_sasl, m_ignore, m_ignore}
};

/* That's the msgtab finished */

#ifndef STATIC_MODULES
/* Here we tell it what to do when the module is loaded */
void
_modinit(void)
{
	/* This will add the commands in test_msgtab (which is above) */
	mod_add_cmd(&authenticate_msgtab);
	mod_add_cmd(&sasl_msgtab);
}

/* here we tell it what to do when the module is unloaded */
void
_moddeinit(void)
{
	/* This will remove the commands in test_msgtab (which is above) */
	mod_del_cmd(&authenticate_msgtab);
	mod_del_cmd(&sasl_msgtab);
}

/* When we last modified the file (shown in /modlist), this is usually:
 */
const char *_version = "$Revision: 131 $";
#endif

/*
 * mr_test
 *      parv[0] = sender prefix
 *      parv[1] = parameter
 */

/* Here we have the functions themselves that we declared above,
 * and the fairly normal C coding
 */
static void
mr_authenticate(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
        if(strlen(parv[1]) > 400)
        {
                sendto_one(source_p, ":%s 905 %s :SASL message too long.", me.name, EmptyString(source_p->name) ? "*" : source_p->name);
                return;
        }

        if(!*source_p->id)
        {
                /* Allocate a UID. */
                strcpy(source_p->id, uid_get(NULL));
                hash_add_id(source_p);
        }

	struct Client *target_p = find_server(ConfigFileEntry.services_name);

	if (!target_p) {
		sendto_one(source_p, ":%s NOTICE * :Service login not successful; SASL server not connected",
			   me.name);
		return;
	}

        if (!strcmp(parv[1], "EXTERNAL") && source_p->certfp != NULL)
                sendto_one(target_p, ":%s ENCAP * SASL %s * S %s :%s", me.id,
                                source_p->id, parv[1],
                                source_p->certfp);
        else
                sendto_one(target_p, ":%s ENCAP * SASL %s * S :%s", me.id,
                                source_p->id, parv[1]);

	sendto_one(source_p, ":%s NOTICE * :Attempting service login.",
		   me.name);
}

/*
 * m_test
 *      parv[0] = sender prefix
 *      parv[1] = parameter
 */
/*
 * ms_test
 *      parv[0] = sender prefix
 *      parv[1] = parameter
 */
static void
me_sasl(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
	struct Client *target_p = hash_find_id(parv[1]);

        if(*parv[3] == 'C')
                sendto_one(target_p, "AUTHENTICATE %s", parv[4]);
        else if(*parv[3] == 'D')
        {
                if(*parv[4] == 'F')
                        sendto_one(target_p, ":%s NOTICE %s :AUTHENTICATION FAILED! :(", me.name, EmptyString(target_p->name) ? "*" : target_p->name);
                else if(*parv[4] == 'S') {
                        sendto_one(target_p, ":%s NOTICE %s :AUTHENTICATION SUCCEEDED! :)", me.name, EmptyString(target_p->name) ? "*" : target_p->name);
                }
        }

        return;
}

