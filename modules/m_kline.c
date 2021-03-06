/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_kline.c: Bans a user.
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
 *  $Id: m_kline.c 505 2007-07-16 16:47:50Z jon $
 */

#include "stdinc.h"
#include "tools.h"
#include "channel.h"
#include "client.h"
#include "common.h"
#include "irc_string.h"
#include "sprintf_irc.h"
#include "ircd.h"
#include "hostmask.h"
#include "numeric.h"
#include "list.h"
#include "fdlist.h"
#include "s_bsd.h"
#include "s_conf.h"
#include "s_log.h"
#include "s_misc.h"
#include "send.h"
#include "hash.h"
#include "handlers.h"
#include "s_serv.h"
#include "msg.h"
#include "s_gline.h"
#include "parse.h"
#include "modules.h"
#include "tools.h"
#include "irc_getnameinfo.h"


static void me_kline(struct Client *, struct Client *, int, char **);
static void mo_kline(struct Client *, struct Client *, int, char **);
static void ms_kline(struct Client *, struct Client *, int, char **);
static void mo_dline(struct Client *, struct Client *, int, char **);
static void me_dline(struct Client *, struct Client *, int, char **);
static void me_unkline(struct Client *, struct Client *, int, char **);
static void mo_unkline(struct Client *, struct Client *, int, char **);
static void ms_unkline(struct Client *, struct Client *, int, char **);
static void mo_undline(struct Client *, struct Client *, int, char **);
static void me_undline(struct Client *, struct Client *, int, char **);

static int remove_tkline_match(const char *, const char *);
static int remove_tdline_match(const char *);

struct Message kline_msgtab = {
	"KLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
	{m_unregistered, m_not_oper, ms_kline, me_kline, mo_kline, m_ignore}
};

struct Message dline_msgtab = {
	"DLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
	{m_unregistered, m_not_oper, m_error, me_dline, mo_dline, m_ignore}
};

struct Message unkline_msgtab = {
	"UNKLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
	{m_unregistered, m_not_oper, ms_unkline, me_unkline, mo_unkline, m_ignore}
};

struct Message undline_msgtab = {
	"UNDLINE", 0, 0, 2, 0, MFLG_SLOW, 0,
	{m_unregistered, m_not_oper, m_error, me_undline, mo_undline, m_ignore}
};

#ifndef STATIC_MODULES
void
_modinit(void)
{
	mod_add_cmd(&kline_msgtab);
	mod_add_cmd(&unkline_msgtab);
	mod_add_cmd(&dline_msgtab);
	mod_add_cmd(&undline_msgtab);
	add_capability("KLN", CAP_KLN, 1);
	add_capability("UNKLN", CAP_UNKLN, 1);
}

void
_moddeinit(void)
{
	mod_del_cmd(&kline_msgtab);
	mod_del_cmd(&unkline_msgtab);
	mod_del_cmd(&dline_msgtab);
	mod_del_cmd(&undline_msgtab);
	delete_capability("UNKLN");
	delete_capability("KLN");
}

const char *_version = "$Revision: 505 $";
#endif

/* Local function prototypes */
static int already_placed_kline(struct Client *, const char *, const char *, int);
static void apply_tkline(struct Client *, struct ConfItem *, int);

static char buffer[IRCD_BUFSIZE];

/* mo_kline()
 *
 * inputs	- pointer to server
 *		- pointer to client
 *		- parameter count
 *		- parameter list
 * output	-
 * side effects - k line is added
 */
static void
mo_kline(struct Client *client_p, struct Client *source_p, int parc, char **parv)
{
	char *reason = NULL;
	char *oper_reason;
	char *user = NULL;
	char *host = NULL;
	const char *current_date;
	char *target_server = NULL;
	struct ConfItem *conf;
	struct AccessItem *aconf;
	time_t tkline_time = 0;
	time_t cur_time;

	if(!IsOperK(source_p))
	{
		sendto_one(source_p, form_str(ERR_NOPRIVS), me.name, source_p->name, "kline");
		return;
	}

	if(parse_aline("KLINE", source_p, parc, parv,
		       AWILD, &user, &host, &tkline_time, &target_server, &reason) < 0)
		return;

	if(target_server != NULL)
	{
		if(HasID(source_p))
		{
			sendto_server(NULL, source_p, NULL, CAP_KLN | CAP_TS6, NOCAPS, LL_ICLIENT,
				      ":%s KLINE %s %lu %s %s :%s",
				      source_p->id, target_server, (unsigned long) tkline_time,
				      user, host, reason);
			sendto_server(NULL, source_p, NULL, CAP_KLN, CAP_TS6, LL_ICLIENT,
				      ":%s KLINE %s %lu %s %s :%s",
				      source_p->name, target_server, (unsigned long) tkline_time,
				      user, host, reason);
		}
		else
			sendto_server(NULL, source_p, NULL, CAP_KLN, NOCAPS, LL_ICLIENT,
				      ":%s KLINE %s %lu %s %s :%s",
				      source_p->name, target_server, (unsigned long) tkline_time,
				      user, host, reason);

		/* Allow ON to apply local kline as well if it matches */
		if(!match(target_server, me.name))
			return;
	}
	else
		cluster_a_line(source_p, "KLINE", CAP_KLN, SHARED_KLINE,
			       "%d %s %s :%s", tkline_time, user, host, reason);

	if(already_placed_kline(source_p, user, host, YES))
		return;

	/* Look for an oper reason */
	if((oper_reason = strchr(reason, '|')) != NULL)
		*oper_reason++ = '\0';

	cur_time = CurrentTime;
	current_date = smalldate(cur_time);
	conf = make_conf_item(KLINE_TYPE);
	aconf = map_to_conf(conf);

	DupString(aconf->host, host);
	DupString(aconf->user, user);

	if(tkline_time != 0)
	{
		ircsprintf(buffer, "Temporary K-line %d min. - %s (%s)",
			   (int) (tkline_time / 60), reason, current_date);
		DupString(aconf->reason, buffer);

		if(oper_reason != NULL)
			DupString(aconf->oper_reason, oper_reason);
		apply_tkline(source_p, conf, tkline_time);
	}
	else
	{
		ircsprintf(buffer, "%s (%s)", reason, current_date);
		DupString(aconf->reason, buffer);

		if(oper_reason != NULL)
			DupString(aconf->oper_reason, oper_reason);

		add_conf_by_address(CONF_KILL, aconf);
		write_conf_line(source_p, conf, current_date, cur_time);
		/* Now, activate kline against current online clients */
		rehashed_klines = 1;
	}
}

/* me_kline - handle remote kline. no propagation */
static void
me_kline(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
	struct ConfItem *conf = NULL;
	struct AccessItem *aconf = NULL;
	int tkline_time;
	const char *current_date;
	time_t cur_time;
	char *kuser, *khost, *kreason, *oper_reason;

	if(parc != 6 || EmptyString(parv[5]))
		return;

	if(!match(parv[1], me.name))
		return;

	tkline_time = valid_tkline(parv[2], TK_SECONDS);
	kuser = parv[3];
	khost = parv[4];
	kreason = parv[5];

	if((oper_reason = strchr(kreason, '|')) != NULL)
		*oper_reason++ = '\0';

	cur_time = CurrentTime;
	current_date = smalldate(cur_time);

	if(find_matching_name_conf(ULINE_TYPE, source_p->servptr->name,
				   source_p->username, source_p->realhost, SHARED_KLINE))
	{
		if(!IsClient(source_p) || already_placed_kline(source_p, kuser, khost, YES))
			return;

		conf = make_conf_item(KLINE_TYPE);
		aconf = map_to_conf(conf);
		DupString(aconf->host, khost);
		DupString(aconf->user, kuser);

		if(tkline_time > 1)
		{
			ircsprintf(buffer, "Temporary K-line %d min. - %s (%s)",
				   (int) (tkline_time / 60), kreason, current_date);
			DupString(aconf->reason, buffer);

			if(oper_reason != NULL)
				DupString(aconf->oper_reason, oper_reason);
			apply_tkline(source_p, conf, tkline_time);
		}
		else
		{
			ircsprintf(buffer, "%s (%s)", kreason, current_date);
			DupString(aconf->reason, buffer);

			if(oper_reason != NULL)
				DupString(aconf->oper_reason, oper_reason);

			add_conf_by_address(CONF_KILL, aconf);
			write_conf_line(source_p, conf, current_date, cur_time);
			/* Now, activate kline against current online clients */
			rehashed_klines = 1;
		}
	}
}

static void
ms_kline(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
	if(parc != 6 || EmptyString(parv[5]))
		return;

	/* parv[0]  parv[1]        parv[2]      parv[3]  parv[4]  parv[5] */
	/* oper     target_server  tkline_time  user     host     reason */
	sendto_match_servs(source_p, parv[1], CAP_KLN,
			   "KLINE %s %s %s %s :%s", parv[1], parv[2], parv[3], parv[4], parv[5]);

	me_kline(client_p, source_p, parc, parv);
}

/* apply_tkline()
 *
 * inputs	-
 * output	- NONE
 * side effects	- tkline as given is placed
 */
static void
apply_tkline(struct Client *source_p, struct ConfItem *conf, int tkline_time)
{
	struct AccessItem *aconf;
	int services = 0;

	if(IsServices(source_p))
		services = 1;

	aconf = (struct AccessItem *) map_to_conf(conf);
	aconf->hold = CurrentTime + tkline_time;
	add_temp_line(conf);
	if(!services)
	{
		sendto_realops_flags(UMODE_ALL, L_ALL,
				     "%s added temporary %d min. K-Line for [%s@%s] [%s]",
				     get_oper_name(source_p), tkline_time / 60,
				     aconf->user, aconf->host, aconf->reason);
		sendto_one(source_p, ":%s NOTICE %s :Added temporary %d min. K-Line [%s@%s]",
			   MyConnect(source_p) ? me.name : ID_or_name(&me, source_p->from),
			   source_p->name, tkline_time / 60, aconf->user, aconf->host);
	}
	ilog(L_TRACE, "%s added temporary %d min. K-Line for [%s@%s] [%s]",
	     source_p->name, tkline_time / 60, aconf->user, aconf->host, aconf->reason);
	log_oper_action(LOG_TEMP_KLINE_TYPE, source_p, "[%s@%s] [%s]\n",
			aconf->user, aconf->host, aconf->reason);
	rehashed_klines = 1;
}

/* apply_tdline()
 *
 * inputs	-
 * output	- NONE
 * side effects	- tkline as given is placed
 */
static void
apply_tdline(struct Client *source_p, struct ConfItem *conf,
	     const char *current_date, int tkline_time)
{
	struct AccessItem *aconf;
	int services = 0;

	aconf = map_to_conf(conf);
	aconf->hold = CurrentTime + tkline_time;

	if (IsServices(source_p))
		services = 1;

	add_temp_line(conf);
	if (!services)
	{
		sendto_realops_flags(UMODE_ALL, L_ALL,
				     "%s added temporary %d min. D-Line for [%s] [%s]",
				     get_oper_name(source_p), tkline_time / 60, aconf->host, aconf->reason);

		sendto_one(source_p, ":%s NOTICE %s :Added temporary %d min. D-Line [%s]",
			   MyConnect(source_p) ? me.name : ID_or_name(&me, source_p->from),
			   source_p->name, tkline_time / 60, aconf->host);
	}
	ilog(L_TRACE, "%s added temporary %d min. D-Line for [%s] [%s]",
	     source_p->name, tkline_time / 60, aconf->host, aconf->reason);
	log_oper_action(LOG_TEMP_DLINE_TYPE, source_p, "[%s@%s] [%s]\n",
			aconf->user, aconf->host, aconf->reason);
	rehashed_klines = 1;
}

/* mo_dline()
 *
 * inputs	- pointer to server
 *		- pointer to client
 *		- parameter count
 *		- parameter list
 * output	-
 * side effects - D line is added
 *
 */
static void
mo_dline(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
	char def_reason[] = "No reason";
	char *dlhost, *oper_reason, *reason;
	const char *creason;
	const struct Client *target_p = NULL;
	struct irc_ssaddr daddr;
	struct ConfItem *conf = NULL;
	struct AccessItem *aconf = NULL;
	time_t tkline_time = 0;
	int bits, t;
	const char *current_date = NULL;
	time_t cur_time;
	char hostip[HOSTIPLEN];

	if(!IsOperK(source_p))
	{
		sendto_one(source_p, form_str(ERR_NOPRIVS), me.name, source_p->name, "kline");
		return;
	}

	if(parse_aline("DLINE", source_p, parc, parv, AWILD, &dlhost,
		       NULL, &tkline_time, NULL, &reason) < 0)
		return;

	if((t = parse_netmask(dlhost, NULL, &bits)) == HM_HOST)
	{
		if((target_p = find_chasing(client_p, source_p, dlhost, NULL)) == NULL)
			return;

		if(!MyConnect(target_p))
		{
			sendto_one(source_p,
				   ":%s NOTICE %s :Can't DLINE nick on another server",
				   me.name, source_p->name);
			return;
		}

		if(IsExemptKline(target_p))
		{
			sendto_one(source_p,
				   ":%s NOTICE %s :%s is E-lined", me.name,
				   source_p->name, target_p->name);
			return;
		}

		irc_getnameinfo((struct sockaddr *) &target_p->localClient->ip,
				target_p->localClient->ip.ss_len, hostip,
				sizeof(hostip), NULL, 0, NI_NUMERICHOST);

		dlhost = hostip;
		t = parse_netmask(dlhost, NULL, &bits);
		assert(t == HM_IPV4 || t == HM_IPV6);
	}

	if(bits < 8)
	{
		sendto_one(source_p,
			   ":%s NOTICE %s :For safety, bitmasks less than 8 require conf access.",
			   me.name, source_p->name);
		return;
	}

#ifdef IPV6
	if(t == HM_IPV6)
		t = AF_INET6;
	else
#endif
		t = AF_INET;

	parse_netmask(dlhost, &daddr, NULL);

	if((aconf = find_dline_conf(&daddr, t)) != NULL)
	{
		creason = aconf->reason ? aconf->reason : def_reason;
		if(IsConfExemptKline(aconf))
			sendto_one(source_p,
				   ":%s NOTICE %s :[%s] is (E)d-lined by [%s] - %s",
				   me.name, source_p->name, dlhost, aconf->host, creason);
		else
			sendto_one(source_p,
				   ":%s NOTICE %s :[%s] already D-lined by [%s] - %s",
				   me.name, source_p->name, dlhost, aconf->host, creason);
		return;
	}

	cur_time = CurrentTime;
	current_date = smalldate(cur_time);

	/* Look for an oper reason */
	if((oper_reason = strchr(reason, '|')) != NULL)
		*oper_reason++ = '\0';

	if(!valid_comment(source_p, reason, YES))
		return;

	conf = make_conf_item(DLINE_TYPE);
	aconf = map_to_conf(conf);
	DupString(aconf->host, dlhost);

	if(tkline_time != 0)
	{
		ircsprintf(buffer, "Temporary D-line %d min. - %s (%s)",
			   (int) (tkline_time / 60), reason, current_date);
		DupString(aconf->reason, buffer);
		if(oper_reason != NULL)
			DupString(aconf->oper_reason, oper_reason);
		apply_tdline(source_p, conf, current_date, tkline_time);
	}
	else
	{
		ircsprintf(buffer, "%s (%s)", reason, current_date);
		DupString(aconf->reason, buffer);
		if(oper_reason != NULL)
			DupString(aconf->oper_reason, oper_reason);
		add_conf_by_address(CONF_DLINE, aconf);
		write_conf_line(source_p, conf, current_date, cur_time);
	}

	rehashed_klines = 1;
}

/* already_placed_kline()
 * inputs	- user to complain to, username & host to check for
 * outputs	- returns 1 on existing K-line, 0 if doesn't exist
 * side effects	- notifies source_p if the K-line already exists
 */
/*
 * Note: This currently works if the new K-line is a special case of an
 *       existing K-line, but not the other way round. To do that we would
 *       have to walk the hash and check every existing K-line. -A1kmm.
 */
static int
already_placed_kline(struct Client *source_p, const char *luser, const char *lhost, int warn)
{
	const char *reason;
	struct irc_ssaddr iphost, *piphost;
	struct AccessItem *aconf;
	int t;

	if((t = parse_netmask(lhost, &iphost, &t)) != HM_HOST)
	{
#ifdef IPV6
		if(t == HM_IPV6)
			t = AF_INET6;
		else
#endif
			t = AF_INET;
		piphost = &iphost;
	}
	else
	{
		t = 0;
		piphost = NULL;
	}

	if((aconf = find_conf_by_address(lhost, piphost, CONF_KILL, t, luser, NULL, NULL)))
	{
		if(warn)
		{
			reason = aconf->reason ? aconf->reason : "No reason";
			sendto_one(source_p,
				   ":%s NOTICE %s :[%s@%s] already K-Lined by [%s@%s] - %s",
				   me.name, source_p->name, luser, lhost, aconf->user,
				   aconf->host, reason);
		}
		return (1);
	}

	return (0);
}

/*
** mo_unkline
** Added Aug 31, 1997 
** common (Keith Fralick) fralick@gate.net
**
**      parv[0] = sender
**      parv[1] = address to remove
*
*
*/
static void
mo_unkline(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
	char *target_server = NULL;
	char *user, *host;

	if(!IsOperUnkline(source_p))
	{
		sendto_one(source_p, form_str(ERR_NOPRIVS), me.name, source_p->name, "unkline");
		return;
	}

	if(parc < 2 || EmptyString(parv[1]))
	{
		sendto_one(source_p, form_str(ERR_NEEDMOREPARAMS),
			   me.name, source_p->name, "UNKLINE");
		return;
	}

	if(parse_aline("UNKLINE", source_p, parc, parv, 0, &user,
		       &host, NULL, &target_server, NULL) < 0)
		return;

	if(target_server != NULL)
	{
		sendto_match_servs(source_p, target_server, CAP_UNKLN,
				   "UNKLINE %s %s %s", target_server, user, host);

		/* Allow ON to apply local unkline as well if it matches */
		if(!match(target_server, me.name))
			return;
	}
	else
		cluster_a_line(source_p, "UNKLINE", CAP_UNKLN, SHARED_UNKLINE, "%s %s", user, host);

	if(remove_tkline_match(host, user))
	{
		sendto_one(source_p,
			   ":%s NOTICE %s :Un-klined [%s@%s] from temporary K-Lines",
			   me.name, source_p->name, user, host);
		sendto_realops_flags(UMODE_ALL, L_ALL,
				     "%s has removed the temporary K-Line for: [%s@%s]",
				     get_oper_name(source_p), user, host);
		ilog(L_NOTICE, "%s removed temporary K-Line for [%s@%s]",
		     source_p->name, user, host);
	}
	else if(del_conf_by_address(CONF_KILL, user, host) > 0)
	{
		remove_conf_line(KLINE_TYPE, source_p, user, host);
		sendto_one(source_p, ":%s NOTICE %s :K-Line for [%s@%s] is removed",
			   me.name, source_p->name, user, host);
		sendto_realops_flags(UMODE_ALL, L_ALL,
				     "%s has removed the K-Line for: [%s@%s]",
				     get_oper_name(source_p), user, host);
		ilog(L_NOTICE, "%s removed K-Line for [%s@%s]", source_p->name, user, host);
	}
	else
		sendto_one(source_p, ":%s NOTICE %s :No K-Line for [%s@%s] found",
			   me.name, source_p->name, user, host);
}

/* me_unkline()
 *
 * inputs	- server
 *		- client
 *		- parc
 *		- parv
 * outputs	- none
 * side effects	- if server is authorized, kline is removed
 *                does not propagate message
 */
static void
me_unkline(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
	const char *kuser, *khost;
	int services = 0;

	if(parc != 4)
		return;

	kuser = parv[2];
	khost = parv[3];

	if(!IsClient(source_p) || !match(parv[1], me.name))
		return;

	if(IsServices(source_p))
		services = 1;

	if(find_matching_name_conf(ULINE_TYPE,
				   source_p->servptr->name,
				   source_p->username, source_p->realhost, SHARED_UNKLINE))
	{
		if(remove_tkline_match(khost, kuser))
		{
			if(!services)
			{
				sendto_one(source_p,
					   ":%s NOTICE %s :Un-klined [%s@%s] from temporary K-Lines",
					   me.name, source_p->name, kuser, khost);
				sendto_realops_flags(UMODE_ALL, L_ALL,
						     "%s has removed the temporary K-Line for: [%s@%s]",
						     get_oper_name(source_p), kuser, khost);
			}
			ilog(L_NOTICE, "%s removed temporary K-Line for [%s@%s]",
			     source_p->name, kuser, khost);
		}
		else if(del_conf_by_address(CONF_KILL, kuser, khost) > 0)
		{
			remove_conf_line(KLINE_TYPE, source_p, kuser, khost);
			if(!services)
			{
				sendto_one(source_p, ":%s NOTICE %s :K-Line for [%s@%s] is removed",
					   me.name, source_p->name, kuser, khost);
				sendto_realops_flags(UMODE_ALL, L_ALL,
						     "%s has removed the K-Line for: [%s@%s]",
						     get_oper_name(source_p), kuser, khost);
			}

			ilog(L_NOTICE, "%s removed K-Line for [%s@%s]",
			     source_p->name, kuser, khost);
		}
		else if(!services)
			sendto_one(source_p, ":%s NOTICE %s :No K-Line for [%s@%s] found",
				   me.name, source_p->name, kuser, khost);
	}
}

/* ms_unkline - propagates and handles a remote unkline message */
static void
ms_unkline(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
	if(parc != 4)
		return;

	sendto_match_servs(source_p, parv[1], CAP_UNKLN,
			   "UNKLINE %s %s %s", parv[1], parv[2], parv[3]);

	me_unkline(client_p, source_p, parc, parv);
}

/* static int remove_tkline_match(const char *host, const char *user)
 * Input: A hostname, a username to unkline.
 * Output: returns YES on success, NO if no tkline removed.
 * Side effects: Any matching tklines are removed.
 */
static int
remove_tkline_match(const char *host, const char *user)
{
	struct ConfItem *conf;
	struct AccessItem *tk_c;
	dlink_node *tk_n;
	struct irc_ssaddr addr, caddr;
	int nm_t, cnm_t, bits, cbits;
	nm_t = parse_netmask(host, &addr, &bits);

	DLINK_FOREACH(tk_n, temporary_klines.head)
	{
		conf = tk_n->data;
		tk_c = map_to_conf(conf);
		cnm_t = parse_netmask(tk_c->host, &caddr, &cbits);
		if(cnm_t != nm_t || irccmp(user, tk_c->user))
			continue;
		if((nm_t == HM_HOST && !irccmp(tk_c->host, host)) ||
		   (nm_t == HM_IPV4 && bits == cbits && match_ipv4(&addr, &caddr, bits))
#ifdef IPV6
		   || (nm_t == HM_IPV6 && bits == cbits && match_ipv6(&addr, &caddr, bits))
#endif
			)
		{
			dlinkDelete(tk_n, &temporary_klines);
			ClearConfTemporary(tk_c);
			delete_one_address_conf(tk_c->host, tk_c);
			return (YES);
		}
	}

	return (NO);
}

/* static int remove_tdline_match(const char *host, const char *user)
 * Input: An ip to undline.
 * Output: returns YES on success, NO if no tdline removed.
 * Side effects: Any matching tdlines are removed.
 */
static int
remove_tdline_match(const char *cidr)
{
	struct ConfItem *conf;
	struct AccessItem *td_conf;
	dlink_node *td_node;
	struct irc_ssaddr addr, caddr;
	int nm_t, cnm_t, bits, cbits;
	nm_t = parse_netmask(cidr, &addr, &bits);

	DLINK_FOREACH(td_node, temporary_dlines.head)
	{
		conf = td_node->data;
		td_conf = map_to_conf(conf);
		cnm_t = parse_netmask(td_conf->host, &caddr, &cbits);

		if(cnm_t != nm_t)
			continue;

		if((nm_t == HM_HOST && !irccmp(td_conf->host, cidr)) ||
		   (nm_t == HM_IPV4 && bits == cbits && match_ipv4(&addr, &caddr, bits))
#ifdef IPV6
		   || (nm_t == HM_IPV6 && bits == cbits && match_ipv6(&addr, &caddr, bits))
#endif
			)
		{
			dlinkDelete(td_node, &temporary_dlines);
			ClearConfTemporary(td_conf);
			delete_one_address_conf(td_conf->host, td_conf);
			return (YES);
		}
	}

	return (NO);
}

/*
** m_undline
** added May 28th 2000 by Toby Verrall <toot@melnet.co.uk>
** based totally on m_unkline
** added to hybrid-7 7/11/2000 --is
**
**      parv[0] = sender nick
**      parv[1] = dline to remove
*/
static void
mo_undline(struct Client *client_p, struct Client *source_p, int parc, char *parv[])
{
	const char *cidr;

	if(!IsOperUnkline(source_p))
	{
		sendto_one(source_p, form_str(ERR_NOPRIVS), me.name, source_p->name, "undline");
		return;
	}

	cidr = parv[1];

	if(remove_tdline_match(cidr))
	{
		sendto_one(source_p,
			   ":%s NOTICE %s :Un-Dlined [%s] from temporary D-Lines",
			   me.name, source_p->name, cidr);
		sendto_realops_flags(UMODE_ALL, L_ALL,
				     "%s has removed the temporary D-Line for: [%s]",
				     get_oper_name(source_p), cidr);
		ilog(L_NOTICE, "%s removed temporary D-Line for [%s]", source_p->name, cidr);
	}
	else if(del_conf_by_address(CONF_DLINE | 1, NULL, cidr) > 0)
	{
		remove_conf_line(DLINE_TYPE, source_p, cidr, NULL);
		sendto_one(source_p, ":%s NOTICE %s :D-Line for [%s] is removed",
			   me.name, source_p->name, cidr);
		sendto_realops_flags(UMODE_ALL, L_ALL,
				     "%s has removed the D-Line for: [%s]",
				     get_oper_name(source_p), cidr);
		ilog(L_NOTICE, "%s removed D-Line for [%s]", get_oper_name(source_p), cidr);
	}
	else
		sendto_one(source_p, ":%s NOTICE %s :No D-Line for [%s] found",
			   me.name, source_p->name, cidr);
}

static void me_dline(struct Client *client_p, struct Client *source_p, int parc, char **parv)
{
	time_t tkline_time;
	char *kip, *kreason, *oper_reason;

	if(parc != 4 || EmptyString(parv[3]) || !IsClient(source_p))
		return;

	tkline_time = valid_tkline(parv[1], TK_SECONDS);
	kip = parv[2];
	kreason = parv[3];

	if((oper_reason = strchr(kreason, '|')) != NULL)
		*oper_reason++ = '\0';

	if(find_matching_name_conf(ULINE_TYPE, source_p->servptr->name, source_p->username, source_p->realhost, SHARED_KLINE))
	{
		struct irc_ssaddr daddr;
		int t = parse_netmask(kip, &daddr, NULL);
		struct ConfItem *conf;
		struct AccessItem *aconf;
		time_t cur_time;
		const char *current_date;

		if (find_dline_conf(&daddr, t) != NULL)
			return;

		conf = make_conf_item(DLINE_TYPE);
		aconf = map_to_conf(conf);
		DupString(aconf->host, kip);

		cur_time = CurrentTime;
		current_date = smalldate(cur_time);

		if(tkline_time != 0)
		{
			ircsprintf(buffer, "Temporary D-line %d min. - %s (%s)",
				   (int) (tkline_time / 60), kreason, current_date);
			DupString(aconf->reason, buffer);
			if(oper_reason != NULL)
				DupString(aconf->oper_reason, oper_reason);
			apply_tdline(source_p, conf, current_date, tkline_time);
		}
		else
		{
			ircsprintf(buffer, "%s (%s)", kreason, current_date);
			DupString(aconf->reason, buffer);
			if(oper_reason != NULL)
				DupString(aconf->oper_reason, oper_reason);
			add_conf_by_address(CONF_DLINE, aconf);
			write_conf_line(source_p, conf, current_date, cur_time);
		}

		rehashed_klines = 1;
	}
}

static void me_undline(struct Client *client_p, struct Client *source_p, int parc, char **parv)
{
	const char *ip;

	if(parc != 2)
		return;

	ip = parv[1];

	if(!IsClient(source_p))
		return;

	if(find_matching_name_conf(ULINE_TYPE, source_p->servptr->name, source_p->username, source_p->realhost, SHARED_UNKLINE))
	{
		if(remove_tdline_match(ip))
		{
			ilog(L_NOTICE, "%s removed temporary D-Line for [%s]", source_p->name, ip);
		}
		else if(del_conf_by_address(CONF_DLINE | 1, NULL, ip) > 0)
		{
			remove_conf_line(DLINE_TYPE, source_p, ip, NULL);
			ilog(L_NOTICE, "%s removed D-Line for [%s]", get_oper_name(source_p), ip);
		}
	}
}

