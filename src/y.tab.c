/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
enum yytokentype
{
	ACCEPT_PASSWORD = 258,
	ACTION = 259,
	ADMIN = 260,
	AFTYPE = 261,
	T_ALLOW = 262,
	ANTI_NICK_FLOOD = 263,
	ANTI_SPAM_EXIT_MESSAGE_TIME = 264,
	ANTI_SPAM_CONNECT_NUMERIC = 265,
	AUTOCONN = 266,
	T_BLOCK = 267,
	BURST_AWAY = 268,
	BURST_TOPICWHO = 269,
	BYTES = 270,
	KBYTES = 271,
	MBYTES = 272,
	GBYTES = 273,
	TBYTES = 274,
	CALLER_ID_WAIT = 275,
	CAN_FLOOD = 276,
	CAN_IDLE = 277,
	CHANNEL = 278,
	CIDR_BITLEN_IPV4 = 279,
	CIDR_BITLEN_IPV6 = 280,
	CIPHER_PREFERENCE = 281,
	CLASS = 282,
	CLOAK_KEY1 = 283,
	CLOAK_KEY2 = 284,
	CLOAK_KEY3 = 285,
	COMPRESSED = 286,
	COMPRESSION_LEVEL = 287,
	CONNECT = 288,
	CONNECTFREQ = 289,
	CRYPTLINK = 290,
	CYCLE_ON_HOSTCHANGE = 291,
	DEFAULT_CIPHER_PREFERENCE = 292,
	DEFAULT_FLOODCOUNT = 293,
	DEFAULT_SPLIT_SERVER_COUNT = 294,
	DEFAULT_SPLIT_USER_COUNT = 295,
	DENY = 296,
	DESCRIPTION = 297,
	DIE = 298,
	DISABLE_AUTH = 299,
	DISABLE_FAKE_CHANNELS = 300,
	DISABLE_HIDDEN = 301,
	DISABLE_LOCAL_CHANNELS = 302,
	DISABLE_REMOTE_COMMANDS = 303,
	DOT_IN_IP6_ADDR = 304,
	DOTS_IN_IDENT = 305,
	DURATION = 306,
	EGDPOOL_PATH = 307,
	EMAIL = 308,
	ENABLE = 309,
	ENCRYPTED = 310,
	EXCEED_LIMIT = 311,
	EXEMPT = 312,
	FAILED_OPER_NOTICE = 313,
	FAKENAME = 314,
	IRCD_FLAGS = 315,
	FLATTEN_LINKS = 316,
	FFAILED_OPERLOG = 317,
	FKILLLOG = 318,
	FKLINELOG = 319,
	FGLINELOG = 320,
	FIOERRLOG = 321,
	FOPERLOG = 322,
	FOPERSPYLOG = 323,
	FUSERLOG = 324,
	GECOS = 325,
	GENERAL = 326,
	GLINE = 327,
	GLINES = 328,
	GLINE_EXEMPT = 329,
	GLINE_LOG = 330,
	GLINE_TIME = 331,
	GLINE_MIN_CIDR = 332,
	GLINE_MIN_CIDR6 = 333,
	GLOBAL_KILL = 334,
	IRCD_AUTH = 335,
	NEED_IDENT = 336,
	HAVENT_READ_CONF = 337,
	HIDDEN = 338,
	HIDDEN_ADMIN = 339,
	HIDDEN_NAME = 340,
	HIDDEN_OPER = 341,
	HIDE_SERVER_IPS = 342,
	HIDE_SERVERS = 343,
	HIDE_SPOOF_IPS = 344,
	HOST = 345,
	HUB = 346,
	HUB_MASK = 347,
	IDLETIME = 348,
	IGNORE_BOGUS_TS = 349,
	INVISIBLE_ON_CONNECT = 350,
	IP = 351,
	KILL = 352,
	KILL_CHASE_TIME_LIMIT = 353,
	KLINE = 354,
	KLINE_EXEMPT = 355,
	KLINE_REASON = 356,
	KLINE_WITH_REASON = 357,
	KNOCK_DELAY = 358,
	KNOCK_DELAY_CHANNEL = 359,
	LAZYLINK = 360,
	LEAF_MASK = 361,
	LINKS_DELAY = 362,
	LISTEN = 363,
	T_LOG = 364,
	LOGGING = 365,
	LOG_LEVEL = 366,
	MAX_ACCEPT = 367,
	MAX_BANS = 368,
	MAX_CHANS_PER_USER = 369,
	MAX_GLOBAL = 370,
	MAX_IDENT = 371,
	MAX_LOCAL = 372,
	MAX_NICK_CHANGES = 373,
	MAX_NICK_TIME = 374,
	MAX_NUMBER = 375,
	MAX_TARGETS = 376,
	MESSAGE_LOCALE = 377,
	MIN_NONWILDCARD = 378,
	MIN_NONWILDCARD_SIMPLE = 379,
	MODULE = 380,
	MODULES = 381,
	NAME = 382,
	NEED_PASSWORD = 383,
	NETWORK_DESC = 384,
	NETWORK_NAME = 385,
	NICK = 386,
	NICK_CHANGES = 387,
	NO_CREATE_ON_SPLIT = 388,
	NO_JOIN_ON_SPLIT = 389,
	NO_OPER_FLOOD = 390,
	NO_TILDE = 391,
	NOT = 392,
	NUMBER = 393,
	NUMBER_PER_IDENT = 394,
	NUMBER_PER_CIDR = 395,
	NUMBER_PER_IP = 396,
	NUMBER_PER_IP_GLOBAL = 397,
	OPERATOR = 398,
	OPERS_BYPASS_CALLERID = 399,
	OPER_LOG = 400,
	OPER_ONLY_UMODES = 401,
	OPER_PASS_RESV = 402,
	OPER_SPY_T = 403,
	OPER_UMODES = 404,
	JOIN_FLOOD_COUNT = 405,
	JOIN_FLOOD_TIME = 406,
	PACE_WAIT = 407,
	PACE_WAIT_SIMPLE = 408,
	PASSWORD = 409,
	PATH = 410,
	PING_COOKIE = 411,
	PING_TIME = 412,
	PING_WARNING = 413,
	PORT = 414,
	QSTRING = 415,
	QUIET_ON_BAN = 416,
	REASON = 417,
	REDIRPORT = 418,
	REDIRSERV = 419,
	REGEX_T = 420,
	REHASH = 421,
	TREJECT_HOLD_TIME = 422,
	REMOTE = 423,
	REMOTEBAN = 424,
	RESTRICT_CHANNELS = 425,
	RESTRICTED = 426,
	RSA_PRIVATE_KEY_FILE = 427,
	RSA_PUBLIC_KEY_FILE = 428,
	SSL_CERTIFICATE_FILE = 429,
	RESV = 430,
	RESV_EXEMPT = 431,
	SECONDS = 432,
	MINUTES = 433,
	HOURS = 434,
	DAYS = 435,
	WEEKS = 436,
	SENDQ = 437,
	SEND_PASSWORD = 438,
	SERVERHIDE = 439,
	SERVERINFO = 440,
	SERVICES = 441,
	SERVICES_NAME = 442,
	SERVLINK_PATH = 443,
	IRCD_SID = 444,
	TKLINE_EXPIRE_NOTICES = 445,
	T_SHARED = 446,
	T_CLUSTER = 447,
	TYPE = 448,
	SHORT_MOTD = 449,
	SILENT = 450,
	SPOOF = 451,
	SPOOF_NOTICE = 452,
	STATS_E_DISABLED = 453,
	STATS_I_OPER_ONLY = 454,
	STATS_K_OPER_ONLY = 455,
	STATS_O_OPER_ONLY = 456,
	STATS_P_OPER_ONLY = 457,
	TBOOL = 458,
	TMASKED = 459,
	T_REJECT = 460,
	TS_MAX_DELTA = 461,
	TS_WARN_DELTA = 462,
	TWODOTS = 463,
	T_ALL = 464,
	T_BOTS = 465,
	T_SOFTCALLERID = 466,
	T_CALLERID = 467,
	T_CCONN = 468,
	T_CCONN_FULL = 469,
	T_CLIENT_FLOOD = 470,
	T_DEAF = 471,
	T_DEBUG = 472,
	T_DRONE = 473,
	T_EXTERNAL = 474,
	T_FULL = 475,
	T_HIDECHANNELS = 476,
	T_INVISIBLE = 477,
	T_IPV4 = 478,
	T_IPV6 = 479,
	T_LOCOPS = 480,
	T_LOGPATH = 481,
	T_L_CRIT = 482,
	T_L_DEBUG = 483,
	T_L_ERROR = 484,
	T_L_INFO = 485,
	T_L_NOTICE = 486,
	T_L_TRACE = 487,
	T_L_WARN = 488,
	T_MAX_CLIENTS = 489,
	T_NCHANGE = 490,
	T_OPERWALL = 491,
	T_REJ = 492,
	T_SERVNOTICE = 493,
	T_SKILL = 494,
	T_SPY = 495,
	T_SSL = 496,
	T_UMODES = 497,
	T_UNAUTH = 498,
	T_UNRESV = 499,
	T_UNXLINE = 500,
	T_WALLOP = 501,
	THROTTLE_TIME = 502,
	TOPICBURST = 503,
	TRUE_NO_OPER_FLOOD = 504,
	TKLINE = 505,
	TXLINE = 506,
	TRESV = 507,
	UNKLINE = 508,
	USER = 509,
	USE_EGD = 510,
	USE_EXCEPT = 511,
	USE_INVEX = 512,
	USE_KNOCK = 513,
	USE_LOGGING = 514,
	USE_WHOIS_ACTUALLY = 515,
	VHOST = 516,
	VHOST6 = 517,
	XLINE = 518,
	WARN = 519,
	WARN_NO_NLINE = 520
};
#endif
/* Tokens.  */
#define ACCEPT_PASSWORD 258
#define ACTION 259
#define ADMIN 260
#define AFTYPE 261
#define T_ALLOW 262
#define ANTI_NICK_FLOOD 263
#define ANTI_SPAM_EXIT_MESSAGE_TIME 264
#define ANTI_SPAM_CONNECT_NUMERIC 265
#define AUTOCONN 266
#define T_BLOCK 267
#define BURST_AWAY 268
#define BURST_TOPICWHO 269
#define BYTES 270
#define KBYTES 271
#define MBYTES 272
#define GBYTES 273
#define TBYTES 274
#define CALLER_ID_WAIT 275
#define CAN_FLOOD 276
#define CAN_IDLE 277
#define CHANNEL 278
#define CIDR_BITLEN_IPV4 279
#define CIDR_BITLEN_IPV6 280
#define CIPHER_PREFERENCE 281
#define CLASS 282
#define CLOAK_KEY1 283
#define CLOAK_KEY2 284
#define CLOAK_KEY3 285
#define COMPRESSED 286
#define COMPRESSION_LEVEL 287
#define CONNECT 288
#define CONNECTFREQ 289
#define CRYPTLINK 290
#define CYCLE_ON_HOSTCHANGE 291
#define DEFAULT_CIPHER_PREFERENCE 292
#define DEFAULT_FLOODCOUNT 293
#define DEFAULT_SPLIT_SERVER_COUNT 294
#define DEFAULT_SPLIT_USER_COUNT 295
#define DENY 296
#define DESCRIPTION 297
#define DIE 298
#define DISABLE_AUTH 299
#define DISABLE_FAKE_CHANNELS 300
#define DISABLE_HIDDEN 301
#define DISABLE_LOCAL_CHANNELS 302
#define DISABLE_REMOTE_COMMANDS 303
#define DOT_IN_IP6_ADDR 304
#define DOTS_IN_IDENT 305
#define DURATION 306
#define EGDPOOL_PATH 307
#define EMAIL 308
#define ENABLE 309
#define ENCRYPTED 310
#define EXCEED_LIMIT 311
#define EXEMPT 312
#define FAILED_OPER_NOTICE 313
#define FAKENAME 314
#define IRCD_FLAGS 315
#define FLATTEN_LINKS 316
#define FFAILED_OPERLOG 317
#define FKILLLOG 318
#define FKLINELOG 319
#define FGLINELOG 320
#define FIOERRLOG 321
#define FOPERLOG 322
#define FOPERSPYLOG 323
#define FUSERLOG 324
#define GECOS 325
#define GENERAL 326
#define GLINE 327
#define GLINES 328
#define GLINE_EXEMPT 329
#define GLINE_LOG 330
#define GLINE_TIME 331
#define GLINE_MIN_CIDR 332
#define GLINE_MIN_CIDR6 333
#define GLOBAL_KILL 334
#define IRCD_AUTH 335
#define NEED_IDENT 336
#define HAVENT_READ_CONF 337
#define HIDDEN 338
#define HIDDEN_ADMIN 339
#define HIDDEN_NAME 340
#define HIDDEN_OPER 341
#define HIDE_SERVER_IPS 342
#define HIDE_SERVERS 343
#define HIDE_SPOOF_IPS 344
#define HOST 345
#define HUB 346
#define HUB_MASK 347
#define IDLETIME 348
#define IGNORE_BOGUS_TS 349
#define INVISIBLE_ON_CONNECT 350
#define IP 351
#define KILL 352
#define KILL_CHASE_TIME_LIMIT 353
#define KLINE 354
#define KLINE_EXEMPT 355
#define KLINE_REASON 356
#define KLINE_WITH_REASON 357
#define KNOCK_DELAY 358
#define KNOCK_DELAY_CHANNEL 359
#define LAZYLINK 360
#define LEAF_MASK 361
#define LINKS_DELAY 362
#define LISTEN 363
#define T_LOG 364
#define LOGGING 365
#define LOG_LEVEL 366
#define MAX_ACCEPT 367
#define MAX_BANS 368
#define MAX_CHANS_PER_USER 369
#define MAX_GLOBAL 370
#define MAX_IDENT 371
#define MAX_LOCAL 372
#define MAX_NICK_CHANGES 373
#define MAX_NICK_TIME 374
#define MAX_NUMBER 375
#define MAX_TARGETS 376
#define MESSAGE_LOCALE 377
#define MIN_NONWILDCARD 378
#define MIN_NONWILDCARD_SIMPLE 379
#define MODULE 380
#define MODULES 381
#define NAME 382
#define NEED_PASSWORD 383
#define NETWORK_DESC 384
#define NETWORK_NAME 385
#define NICK 386
#define NICK_CHANGES 387
#define NO_CREATE_ON_SPLIT 388
#define NO_JOIN_ON_SPLIT 389
#define NO_OPER_FLOOD 390
#define NO_TILDE 391
#define NOT 392
#define NUMBER 393
#define NUMBER_PER_IDENT 394
#define NUMBER_PER_CIDR 395
#define NUMBER_PER_IP 396
#define NUMBER_PER_IP_GLOBAL 397
#define OPERATOR 398
#define OPERS_BYPASS_CALLERID 399
#define OPER_LOG 400
#define OPER_ONLY_UMODES 401
#define OPER_PASS_RESV 402
#define OPER_SPY_T 403
#define OPER_UMODES 404
#define JOIN_FLOOD_COUNT 405
#define JOIN_FLOOD_TIME 406
#define PACE_WAIT 407
#define PACE_WAIT_SIMPLE 408
#define PASSWORD 409
#define PATH 410
#define PING_COOKIE 411
#define PING_TIME 412
#define PING_WARNING 413
#define PORT 414
#define QSTRING 415
#define QUIET_ON_BAN 416
#define REASON 417
#define REDIRPORT 418
#define REDIRSERV 419
#define REGEX_T 420
#define REHASH 421
#define TREJECT_HOLD_TIME 422
#define REMOTE 423
#define REMOTEBAN 424
#define RESTRICT_CHANNELS 425
#define RESTRICTED 426
#define RSA_PRIVATE_KEY_FILE 427
#define RSA_PUBLIC_KEY_FILE 428
#define SSL_CERTIFICATE_FILE 429
#define RESV 430
#define RESV_EXEMPT 431
#define SECONDS 432
#define MINUTES 433
#define HOURS 434
#define DAYS 435
#define WEEKS 436
#define SENDQ 437
#define SEND_PASSWORD 438
#define SERVERHIDE 439
#define SERVERINFO 440
#define SERVICES 441
#define SERVICES_NAME 442
#define SERVLINK_PATH 443
#define IRCD_SID 444
#define TKLINE_EXPIRE_NOTICES 445
#define T_SHARED 446
#define T_CLUSTER 447
#define TYPE 448
#define SHORT_MOTD 449
#define SILENT 450
#define SPOOF 451
#define SPOOF_NOTICE 452
#define STATS_E_DISABLED 453
#define STATS_I_OPER_ONLY 454
#define STATS_K_OPER_ONLY 455
#define STATS_O_OPER_ONLY 456
#define STATS_P_OPER_ONLY 457
#define TBOOL 458
#define TMASKED 459
#define T_REJECT 460
#define TS_MAX_DELTA 461
#define TS_WARN_DELTA 462
#define TWODOTS 463
#define T_ALL 464
#define T_BOTS 465
#define T_SOFTCALLERID 466
#define T_CALLERID 467
#define T_CCONN 468
#define T_CCONN_FULL 469
#define T_CLIENT_FLOOD 470
#define T_DEAF 471
#define T_DEBUG 472
#define T_DRONE 473
#define T_EXTERNAL 474
#define T_FULL 475
#define T_HIDECHANNELS 476
#define T_INVISIBLE 477
#define T_IPV4 478
#define T_IPV6 479
#define T_LOCOPS 480
#define T_LOGPATH 481
#define T_L_CRIT 482
#define T_L_DEBUG 483
#define T_L_ERROR 484
#define T_L_INFO 485
#define T_L_NOTICE 486
#define T_L_TRACE 487
#define T_L_WARN 488
#define T_MAX_CLIENTS 489
#define T_NCHANGE 490
#define T_OPERWALL 491
#define T_REJ 492
#define T_SERVNOTICE 493
#define T_SKILL 494
#define T_SPY 495
#define T_SSL 496
#define T_UMODES 497
#define T_UNAUTH 498
#define T_UNRESV 499
#define T_UNXLINE 500
#define T_WALLOP 501
#define THROTTLE_TIME 502
#define TOPICBURST 503
#define TRUE_NO_OPER_FLOOD 504
#define TKLINE 505
#define TXLINE 506
#define TRESV 507
#define UNKLINE 508
#define USER 509
#define USE_EGD 510
#define USE_EXCEPT 511
#define USE_INVEX 512
#define USE_KNOCK 513
#define USE_LOGGING 514
#define USE_WHOIS_ACTUALLY 515
#define VHOST 516
#define VHOST6 517
#define XLINE 518
#define WARN 519
#define WARN_NO_NLINE 520




/* Copy the first part of user declarations.  */
#line 25 "ircd_parser.y"


#define YY_NO_UNPUT
#include <sys/types.h>

#include "stdinc.h"
#include "ircd.h"
#include "tools.h"
#include "list.h"
#include "s_conf.h"
#include "event.h"
#include "s_log.h"
#include "client.h"		/* for UMODE_ALL only */
#include "pcre.h"
#include "irc_string.h"
#include "irc_getaddrinfo.h"
#include "sprintf_irc.h"
#include "memory.h"
#include "modules.h"
#include "s_serv.h"		/* for CAP_LL / IsCapable */
#include "hostmask.h"
#include "send.h"
#include "listener.h"
#include "resv.h"
#include "numeric.h"
#include "s_user.h"

#ifdef HAVE_LIBCRYPTO
#include <openssl/rsa.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#endif

static char *class_name = NULL;
static struct ConfItem *yy_conf = NULL;
static struct AccessItem *yy_aconf = NULL;
static struct MatchItem *yy_match_item = NULL;
static struct ClassItem *yy_class = NULL;
static char *yy_class_name = NULL;

static dlink_list col_conf_list = { NULL, NULL, 0 };
static dlink_list hub_conf_list = { NULL, NULL, 0 };
static dlink_list leaf_conf_list = { NULL, NULL, 0 };
static unsigned int listener_flags = 0;
static unsigned int regex_ban = 0;
static char userbuf[IRCD_BUFSIZE];
static char hostbuf[IRCD_BUFSIZE];
static char reasonbuf[REASONLEN + 1];
static char gecos_name[REALLEN * 4];

extern dlink_list gdeny_items;	/* XXX */

static char *resv_reason = NULL;
static char *listener_address = NULL;
static int not_atom = 0;

struct CollectItem
{
	dlink_node node;
	char *name;
	char *user;
	char *host;
	char *passwd;
	int port;
	int flags;
#ifdef HAVE_LIBCRYPTO
	char *rsa_public_key_file;
	RSA *rsa_public_key;
#endif
};

static void
free_collect_item(struct CollectItem *item)
{
	MyFree(item->name);
	MyFree(item->user);
	MyFree(item->host);
	MyFree(item->passwd);
#ifdef HAVE_LIBCRYPTO
	MyFree(item->rsa_public_key_file);
#endif
	MyFree(item);
}

static void
unhook_hub_leaf_confs(void)
{
	dlink_node *ptr;
	dlink_node *next_ptr;
	struct CollectItem *yy_hconf;
	struct CollectItem *yy_lconf;

	DLINK_FOREACH_SAFE(ptr, next_ptr, hub_conf_list.head)
	{
		yy_hconf = ptr->data;
		dlinkDelete(&yy_hconf->node, &hub_conf_list);
		free_collect_item(yy_hconf);
	}

	DLINK_FOREACH_SAFE(ptr, next_ptr, leaf_conf_list.head)
	{
		yy_lconf = ptr->data;
		dlinkDelete(&yy_lconf->node, &leaf_conf_list);
		free_collect_item(yy_lconf);
	}
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 133 "ircd_parser.y"
{
	int number;
	char *string;
}
/* Line 187 of yacc.c.  */
#line 739 "y.tab.c"
YYSTYPE;
# define yystype YYSTYPE	/* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 752 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h>		/* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h>		/* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e)		/* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID(int i)
#else
static int
YYID(i)
     int i;
#endif
{
	return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h>		/* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h>		/* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h>	/* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032	/* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h>		/* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc(YYSIZE_T);		/* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free(void *);		/* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
	yytype_int16 yyss;
	YYSTYPE yyvs;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1444

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  271
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  347
/* YYNRULES -- Number of rules.  */
#define YYNRULES  751
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1513

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   520

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] = {
	0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 270, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 266,
	2, 269, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 268, 2, 267, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
	5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
	15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
	25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
	35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
	45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
	55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
	65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
	75, 76, 77, 78, 79, 80, 81, 82, 83, 84,
	85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
	95, 96, 97, 98, 99, 100, 101, 102, 103, 104,
	105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
	115, 116, 117, 118, 119, 120, 121, 122, 123, 124,
	125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
	135, 136, 137, 138, 139, 140, 141, 142, 143, 144,
	145, 146, 147, 148, 149, 150, 151, 152, 153, 154,
	155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
	165, 166, 167, 168, 169, 170, 171, 172, 173, 174,
	175, 176, 177, 178, 179, 180, 181, 182, 183, 184,
	185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
	195, 196, 197, 198, 199, 200, 201, 202, 203, 204,
	205, 206, 207, 208, 209, 210, 211, 212, 213, 214,
	215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
	225, 226, 227, 228, 229, 230, 231, 232, 233, 234,
	235, 236, 237, 238, 239, 240, 241, 242, 243, 244,
	245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
	255, 256, 257, 258, 259, 260, 261, 262, 263, 264,
	265
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] = {
	0, 0, 3, 4, 7, 9, 11, 13, 15, 17,
	19, 21, 23, 25, 27, 29, 31, 33, 35, 37,
	39, 41, 43, 45, 47, 50, 53, 54, 56, 59,
	63, 67, 71, 75, 79, 80, 82, 85, 89, 93,
	97, 103, 106, 108, 110, 112, 115, 120, 125, 131,
	134, 136, 138, 140, 142, 144, 146, 148, 150, 152,
	154, 156, 158, 161, 166, 171, 176, 181, 186, 191,
	196, 201, 206, 211, 216, 222, 225, 227, 229, 231,
	233, 236, 241, 246, 251, 257, 260, 262, 264, 266,
	268, 270, 272, 274, 276, 278, 280, 282, 284, 286,
	289, 294, 299, 304, 309, 314, 319, 324, 329, 334,
	339, 344, 349, 354, 359, 364, 369, 374, 379, 380,
	388, 389, 391, 394, 396, 398, 400, 402, 404, 406,
	408, 410, 412, 414, 416, 418, 420, 422, 424, 426,
	428, 430, 432, 434, 436, 438, 440, 443, 448, 450,
	455, 460, 465, 470, 475, 476, 482, 486, 488, 490,
	492, 494, 496, 498, 500, 502, 504, 506, 508, 510,
	512, 514, 516, 518, 520, 522, 524, 526, 528, 533,
	538, 543, 548, 553, 558, 563, 568, 573, 578, 583,
	588, 593, 598, 599, 605, 609, 611, 612, 616, 617,
	620, 622, 624, 626, 628, 630, 632, 634, 636, 638,
	640, 642, 644, 646, 648, 650, 652, 653, 661, 662,
	664, 667, 669, 671, 673, 675, 677, 679, 681, 683,
	685, 687, 689, 691, 693, 695, 698, 703, 705, 710,
	715, 720, 725, 730, 735, 740, 745, 750, 755, 760,
	765, 766, 773, 774, 780, 784, 786, 788, 790, 793,
	795, 797, 799, 801, 803, 806, 807, 813, 817, 819,
	821, 825, 830, 835, 836, 843, 846, 848, 850, 852,
	854, 856, 858, 860, 862, 864, 866, 868, 870, 872,
	874, 876, 878, 880, 883, 888, 893, 898, 903, 908,
	909, 915, 919, 921, 922, 926, 927, 930, 932, 934,
	936, 938, 940, 942, 944, 946, 948, 950, 955, 960,
	965, 970, 975, 980, 985, 990, 995, 1000, 1001, 1008,
	1011, 1013, 1015, 1017, 1019, 1022, 1027, 1032, 1037, 1038,
	1045, 1048, 1050, 1052, 1054, 1056, 1059, 1064, 1069, 1070,
	1076, 1080, 1082, 1084, 1086, 1088, 1090, 1092, 1094, 1096,
	1098, 1100, 1102, 1104, 1106, 1108, 1109, 1116, 1119, 1121,
	1123, 1125, 1128, 1133, 1134, 1140, 1144, 1146, 1148, 1150,
	1152, 1154, 1156, 1158, 1160, 1162, 1164, 1166, 1168, 1169,
	1177, 1178, 1180, 1183, 1185, 1187, 1189, 1191, 1193, 1195,
	1197, 1199, 1201, 1203, 1205, 1207, 1209, 1211, 1213, 1215,
	1217, 1219, 1221, 1223, 1226, 1231, 1233, 1238, 1243, 1248,
	1253, 1258, 1263, 1268, 1273, 1274, 1280, 1284, 1286, 1287,
	1291, 1292, 1295, 1297, 1299, 1301, 1303, 1305, 1307, 1312,
	1317, 1322, 1327, 1332, 1337, 1342, 1347, 1352, 1357, 1358,
	1365, 1366, 1372, 1376, 1378, 1380, 1383, 1385, 1387, 1389,
	1391, 1393, 1398, 1403, 1404, 1411, 1414, 1416, 1418, 1420,
	1422, 1427, 1432, 1438, 1441, 1443, 1445, 1447, 1452, 1453,
	1460, 1461, 1467, 1471, 1473, 1475, 1478, 1480, 1482, 1484,
	1486, 1488, 1493, 1498, 1504, 1507, 1509, 1511, 1513, 1515,
	1517, 1519, 1521, 1523, 1525, 1527, 1529, 1531, 1533, 1535,
	1537, 1539, 1541, 1543, 1545, 1547, 1549, 1551, 1553, 1555,
	1557, 1559, 1561, 1563, 1565, 1567, 1569, 1571, 1573, 1575,
	1577, 1579, 1581, 1583, 1585, 1587, 1589, 1591, 1593, 1595,
	1597, 1599, 1601, 1603, 1605, 1607, 1609, 1611, 1613, 1615,
	1617, 1619, 1621, 1623, 1625, 1627, 1629, 1631, 1636, 1641,
	1646, 1651, 1656, 1661, 1666, 1671, 1676, 1681, 1686, 1691,
	1696, 1701, 1706, 1711, 1716, 1721, 1726, 1731, 1736, 1741,
	1746, 1751, 1756, 1761, 1766, 1771, 1776, 1781, 1786, 1791,
	1796, 1801, 1806, 1811, 1816, 1821, 1826, 1831, 1836, 1841,
	1846, 1851, 1856, 1861, 1866, 1871, 1876, 1881, 1886, 1891,
	1896, 1901, 1906, 1907, 1913, 1917, 1919, 1921, 1923, 1925,
	1927, 1929, 1931, 1933, 1935, 1937, 1939, 1941, 1943, 1945,
	1947, 1949, 1951, 1953, 1955, 1957, 1959, 1960, 1966, 1970,
	1972, 1974, 1976, 1978, 1980, 1982, 1984, 1986, 1988, 1990,
	1992, 1994, 1996, 1998, 2000, 2002, 2004, 2006, 2008, 2010,
	2012, 2017, 2022, 2027, 2032, 2037, 2038, 2045, 2048, 2050,
	2052, 2054, 2056, 2058, 2060, 2062, 2064, 2069, 2074, 2075,
	2081, 2085, 2087, 2089, 2091, 2096, 2101, 2102, 2108, 2112,
	2114, 2116, 2118, 2124, 2127, 2129, 2131, 2133, 2135, 2137,
	2139, 2141, 2143, 2145, 2147, 2149, 2151, 2153, 2155, 2157,
	2159, 2161, 2163, 2165, 2167, 2169, 2174, 2179, 2184, 2189,
	2194, 2199, 2204, 2209, 2214, 2219, 2224, 2229, 2234, 2239,
	2244, 2249, 2254, 2259, 2264, 2270, 2273, 2275, 2277, 2279,
	2281, 2283, 2285, 2287, 2289, 2291, 2296, 2301, 2306, 2311,
	2316, 2321
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] = {
	272, 0, -1, -1, 272, 273, -1, 297, -1, 303,
	-1, 318, -1, 586, -1, 355, -1, 374, -1, 388,
	-1, 283, -1, 608, -1, 414, -1, 421, -1, 431,
	-1, 440, -1, 471, -1, 481, -1, 487, -1, 501,
	-1, 570, -1, 491, -1, 278, -1, 1, 266, -1,
	1, 267, -1, -1, 275, -1, 138, 274, -1, 138,
	177, 274, -1, 138, 178, 274, -1, 138, 179, 274,
	-1, 138, 180, 274, -1, 138, 181, 274, -1, -1,
	277, -1, 138, 276, -1, 138, 15, 276, -1, 138,
	16, 276, -1, 138, 17, 276, -1, 126, 268, 279,
	267, 266, -1, 279, 280, -1, 280, -1, 281, -1,
	282, -1, 1, 266, -1, 125, 269, 160, 266, -1,
	155, 269, 160, 266, -1, 185, 268, 284, 267, 266,
	-1, 284, 285, -1, 285, -1, 288, -1, 293, -1,
	296, -1, 290, -1, 291, -1, 292, -1, 295, -1,
	287, -1, 294, -1, 289, -1, 286, -1, 1, 266,
	-1, 174, 269, 160, 266, -1, 172, 269, 160, 266,
	-1, 127, 269, 160, 266, -1, 189, 269, 160, 266,
	-1, 42, 269, 160, 266, -1, 130, 269, 160, 266,
	-1, 129, 269, 160, 266, -1, 261, 269, 160, 266,
	-1, 262, 269, 160, 266, -1, 234, 269, 138, 266,
	-1, 91, 269, 203, 266, -1, 5, 268, 298, 267,
	266, -1, 298, 299, -1, 299, -1, 300, -1, 302,
	-1, 301, -1, 1, 266, -1, 127, 269, 160, 266,
	-1, 53, 269, 160, 266, -1, 42, 269, 160, 266,
	-1, 110, 268, 304, 267, 266, -1, 304, 305, -1,
	305, -1, 306, -1, 307, -1, 316, -1, 317, -1,
	308, -1, 310, -1, 312, -1, 313, -1, 315, -1,
	311, -1, 314, -1, 309, -1, 1, 266, -1, 226,
	269, 160, 266, -1, 145, 269, 160, 266, -1, 69,
	269, 160, 266, -1, 62, 269, 160, 266, -1, 67,
	269, 160, 266, -1, 68, 269, 160, 266, -1, 65,
	269, 160, 266, -1, 64, 269, 160, 266, -1, 66,
	269, 160, 266, -1, 63, 269, 160, 266, -1, 111,
	269, 227, 266, -1, 111, 269, 229, 266, -1, 111,
	269, 233, 266, -1, 111, 269, 231, 266, -1, 111,
	269, 232, 266, -1, 111, 269, 230, 266, -1, 111,
	269, 228, 266, -1, 259, 269, 203, 266, -1, -1,
	143, 319, 320, 268, 321, 267, 266, -1, -1, 324,
	-1, 321, 322, -1, 322, -1, 323, -1, 325, -1,
	326, -1, 345, -1, 346, -1, 330, -1, 329, -1,
	334, -1, 335, -1, 337, -1, 338, -1, 339, -1,
	340, -1, 341, -1, 336, -1, 342, -1, 343, -1,
	344, -1, 347, -1, 327, -1, 328, -1, 348, -1,
	1, 266, -1, 127, 269, 160, 266, -1, 160, -1,
	254, 269, 160, 266, -1, 154, 269, 160, 266, -1,
	55, 269, 203, 266, -1, 173, 269, 160, 266, -1,
	27, 269, 160, 266, -1, -1, 242, 331, 269, 332,
	266, -1, 332, 270, 333, -1, 333, -1, 210, -1,
	213, -1, 214, -1, 216, -1, 217, -1, 220, -1,
	239, -1, 235, -1, 237, -1, 243, -1, 240, -1,
	219, -1, 236, -1, 238, -1, 222, -1, 246, -1,
	211, -1, 212, -1, 225, -1, 221, -1, 79, 269,
	203, 266, -1, 168, 269, 203, 266, -1, 169, 269,
	203, 266, -1, 99, 269, 203, 266, -1, 263, 269,
	203, 266, -1, 253, 269, 203, 266, -1, 72, 269,
	203, 266, -1, 132, 269, 203, 266, -1, 43, 269,
	203, 266, -1, 166, 269, 203, 266, -1, 5, 269,
	203, 266, -1, 84, 269, 203, 266, -1, 86, 269,
	203, 266, -1, 236, 269, 203, 266, -1, -1, 60,
	349, 269, 350, 266, -1, 350, 270, 351, -1, 351,
	-1, -1, 137, 352, 354, -1, -1, 353, 354, -1,
	79, -1, 168, -1, 99, -1, 253, -1, 263, -1,
	72, -1, 43, -1, 166, -1, 5, -1, 84, -1,
	132, -1, 236, -1, 148, -1, 86, -1, 169, -1,
	55, -1, -1, 27, 356, 357, 268, 358, 267, 266,
	-1, -1, 361, -1, 358, 359, -1, 359, -1, 360,
	-1, 371, -1, 372, -1, 362, -1, 363, -1, 373,
	-1, 364, -1, 365, -1, 366, -1, 367, -1, 368,
	-1, 369, -1, 370, -1, 1, 266, -1, 127, 269,
	160, 266, -1, 160, -1, 157, 269, 275, 266, -1,
	158, 269, 275, 266, -1, 141, 269, 138, 266, -1,
	34, 269, 275, 266, -1, 120, 269, 138, 266, -1,
	115, 269, 138, 266, -1, 117, 269, 138, 266, -1,
	116, 269, 138, 266, -1, 182, 269, 277, 266, -1,
	24, 269, 138, 266, -1, 25, 269, 138, 266, -1,
	140, 269, 138, 266, -1, -1, 108, 375, 268, 380,
	267, 266, -1, -1, 60, 377, 269, 378, 266, -1,
	378, 270, 379, -1, 379, -1, 241, -1, 83, -1,
	380, 381, -1, 381, -1, 382, -1, 376, -1, 386,
	-1, 387, -1, 1, 266, -1, -1, 159, 269, 384,
	383, 266, -1, 384, 270, 385, -1, 385, -1, 138,
	-1, 138, 208, 138, -1, 96, 269, 160, 266, -1,
	90, 269, 160, 266, -1, -1, 80, 389, 268, 390,
	267, 266, -1, 390, 391, -1, 391, -1, 392, -1,
	393, -1, 395, -1, 397, -1, 404, -1, 405, -1,
	406, -1, 408, -1, 409, -1, 410, -1, 394, -1,
	411, -1, 412, -1, 407, -1, 413, -1, 396, -1,
	1, 266, -1, 254, 269, 160, 266, -1, 154, 269,
	160, 266, -1, 197, 269, 203, 266, -1, 27, 269,
	160, 266, -1, 55, 269, 203, 266, -1, -1, 60,
	398, 269, 399, 266, -1, 399, 270, 400, -1, 400,
	-1, -1, 137, 401, 403, -1, -1, 402, 403, -1,
	197, -1, 56, -1, 100, -1, 81, -1, 21, -1,
	22, -1, 136, -1, 74, -1, 176, -1, 128, -1,
	100, 269, 203, 266, -1, 81, 269, 203, 266, -1,
	56, 269, 203, 266, -1, 21, 269, 203, 266, -1,
	136, 269, 203, 266, -1, 74, 269, 203, 266, -1,
	196, 269, 160, 266, -1, 164, 269, 160, 266, -1,
	163, 269, 138, 266, -1, 128, 269, 203, 266, -1,
	-1, 175, 415, 268, 416, 267, 266, -1, 416, 417,
	-1, 417, -1, 418, -1, 419, -1, 420, -1, 1,
	266, -1, 162, 269, 160, 266, -1, 23, 269, 160,
	266, -1, 131, 269, 160, 266, -1, -1, 191, 422,
	268, 423, 267, 266, -1, 423, 424, -1, 424, -1,
	425, -1, 426, -1, 427, -1, 1, 266, -1, 127,
	269, 160, 266, -1, 254, 269, 160, 266, -1, -1,
	193, 428, 269, 429, 266, -1, 429, 270, 430, -1,
	430, -1, 99, -1, 250, -1, 253, -1, 263, -1,
	251, -1, 245, -1, 175, -1, 252, -1, 244, -1,
	225, -1, 186, -1, 166, -1, 209, -1, -1, 192,
	432, 268, 433, 267, 266, -1, 433, 434, -1, 434,
	-1, 435, -1, 436, -1, 1, 266, -1, 127, 269,
	160, 266, -1, -1, 193, 437, 269, 438, 266, -1,
	438, 270, 439, -1, 439, -1, 99, -1, 250, -1,
	253, -1, 263, -1, 251, -1, 245, -1, 175, -1,
	252, -1, 244, -1, 225, -1, 209, -1, -1, 33,
	441, 442, 268, 443, 267, 266, -1, -1, 446, -1,
	443, 444, -1, 444, -1, 445, -1, 447, -1, 448,
	-1, 449, -1, 450, -1, 452, -1, 451, -1, 453,
	-1, 454, -1, 467, -1, 468, -1, 469, -1, 465,
	-1, 462, -1, 464, -1, 463, -1, 461, -1, 470,
	-1, 466, -1, 1, 266, -1, 127, 269, 160, 266,
	-1, 160, -1, 90, 269, 160, 266, -1, 261, 269,
	160, 266, -1, 183, 269, 160, 266, -1, 3, 269,
	160, 266, -1, 159, 269, 138, 266, -1, 6, 269,
	223, 266, -1, 6, 269, 224, 266, -1, 59, 269,
	160, 266, -1, -1, 60, 455, 269, 456, 266, -1,
	456, 270, 457, -1, 457, -1, -1, 137, 458, 460,
	-1, -1, 459, 460, -1, 105, -1, 31, -1, 35,
	-1, 11, -1, 13, -1, 248, -1, 173, 269, 160,
	266, -1, 55, 269, 203, 266, -1, 35, 269, 203,
	266, -1, 31, 269, 203, 266, -1, 11, 269, 203,
	266, -1, 248, 269, 203, 266, -1, 92, 269, 160,
	266, -1, 106, 269, 160, 266, -1, 27, 269, 160,
	266, -1, 26, 269, 160, 266, -1, -1, 97, 472,
	268, 477, 267, 266, -1, -1, 193, 474, 269, 475,
	266, -1, 475, 270, 476, -1, 476, -1, 165, -1,
	477, 478, -1, 478, -1, 479, -1, 480, -1, 473,
	-1, 1, -1, 254, 269, 160, 266, -1, 162, 269,
	160, 266, -1, -1, 41, 482, 268, 483, 267, 266,
	-1, 483, 484, -1, 484, -1, 485, -1, 486, -1,
	1, -1, 96, 269, 160, 266, -1, 162, 269, 160,
	266, -1, 57, 268, 488, 267, 266, -1, 488, 489,
	-1, 489, -1, 490, -1, 1, -1, 96, 269, 160,
	266, -1, -1, 70, 492, 268, 497, 267, 266, -1,
	-1, 193, 494, 269, 495, 266, -1, 495, 270, 496,
	-1, 496, -1, 165, -1, 497, 498, -1, 498, -1,
	499, -1, 500, -1, 493, -1, 1, -1, 127, 269,
	160, 266, -1, 162, 269, 160, 266, -1, 71, 268,
	502, 267, 266, -1, 502, 503, -1, 503, -1, 511,
	-1, 512, -1, 514, -1, 515, -1, 516, -1, 517,
	-1, 518, -1, 519, -1, 520, -1, 521, -1, 522,
	-1, 510, -1, 524, -1, 525, -1, 530, -1, 531,
	-1, 547, -1, 533, -1, 535, -1, 537, -1, 536,
	-1, 540, -1, 534, -1, 541, -1, 542, -1, 543,
	-1, 544, -1, 546, -1, 545, -1, 561, -1, 548,
	-1, 552, -1, 553, -1, 557, -1, 538, -1, 539,
	-1, 567, -1, 565, -1, 566, -1, 549, -1, 513,
	-1, 550, -1, 532, -1, 551, -1, 568, -1, 556,
	-1, 523, -1, 569, -1, 554, -1, 555, -1, 506,
	-1, 509, -1, 504, -1, 505, -1, 507, -1, 508,
	-1, 526, -1, 527, -1, 528, -1, 529, -1, 1,
	-1, 77, 269, 138, 266, -1, 78, 269, 138, 266,
	-1, 13, 269, 203, 266, -1, 260, 269, 203, 266,
	-1, 167, 269, 275, 266, -1, 190, 269, 203, 266,
	-1, 98, 269, 138, 266, -1, 89, 269, 203, 266,
	-1, 94, 269, 203, 266, -1, 48, 269, 203, 266,
	-1, 58, 269, 203, 266, -1, 8, 269, 203, 266,
	-1, 119, 269, 275, 266, -1, 118, 269, 138, 266,
	-1, 112, 269, 138, 266, -1, 9, 269, 275, 266,
	-1, 10, 269, 203, 266, -1, 207, 269, 275, 266,
	-1, 206, 269, 275, 266, -1, 82, 269, 138, 266,
	-1, 102, 269, 203, 266, -1, 101, 269, 160, 266,
	-1, 28, 269, 160, 266, -1, 29, 269, 160, 266,
	-1, 30, 269, 160, 266, -1, 187, 269, 160, 266,
	-1, 95, 269, 203, 266, -1, 265, 269, 203, 266,
	-1, 198, 269, 203, 266, -1, 201, 269, 203, 266,
	-1, 202, 269, 203, 266, -1, 200, 269, 203, 266,
	-1, 200, 269, 204, 266, -1, 199, 269, 203, 266,
	-1, 199, 269, 204, 266, -1, 152, 269, 275, 266,
	-1, 20, 269, 275, 266, -1, 144, 269, 203, 266,
	-1, 153, 269, 275, 266, -1, 194, 269, 203, 266,
	-1, 135, 269, 203, 266, -1, 249, 269, 203, 266,
	-1, 147, 269, 203, 266, -1, 122, 269, 160, 266,
	-1, 93, 269, 275, 266, -1, 50, 269, 138, 266,
	-1, 121, 269, 138, 266, -1, 188, 269, 160, 266,
	-1, 37, 269, 160, 266, -1, 32, 269, 138, 266,
	-1, 255, 269, 203, 266, -1, 52, 269, 160, 266,
	-1, 156, 269, 203, 266, -1, 44, 269, 203, 266,
	-1, 247, 269, 275, 266, -1, -1, 149, 558, 269,
	559, 266, -1, 559, 270, 560, -1, 560, -1, 210,
	-1, 213, -1, 214, -1, 216, -1, 217, -1, 220,
	-1, 239, -1, 235, -1, 237, -1, 243, -1, 240,
	-1, 219, -1, 236, -1, 238, -1, 222, -1, 246,
	-1, 211, -1, 212, -1, 225, -1, 221, -1, -1,
	146, 562, 269, 563, 266, -1, 563, 270, 564, -1,
	564, -1, 210, -1, 213, -1, 214, -1, 216, -1,
	217, -1, 220, -1, 239, -1, 235, -1, 237, -1,
	243, -1, 240, -1, 219, -1, 236, -1, 238, -1,
	222, -1, 246, -1, 211, -1, 212, -1, 225, -1,
	221, -1, 123, 269, 138, 266, -1, 124, 269, 138,
	266, -1, 38, 269, 138, 266, -1, 215, 269, 277,
	266, -1, 49, 269, 203, 266, -1, -1, 73, 571,
	268, 572, 267, 266, -1, 572, 573, -1, 573, -1,
	574, -1, 575, -1, 576, -1, 580, -1, 581, -1,
	582, -1, 1, -1, 54, 269, 203, 266, -1, 51,
	269, 275, 266, -1, -1, 110, 577, 269, 578, 266,
	-1, 578, 270, 579, -1, 579, -1, 205, -1, 12,
	-1, 254, 269, 160, 266, -1, 127, 269, 160, 266,
	-1, -1, 4, 583, 269, 584, 266, -1, 584, 270,
	585, -1, 585, -1, 205, -1, 12, -1, 23, 268,
	587, 267, 266, -1, 587, 588, -1, 588, -1, 592,
	-1, 593, -1, 594, -1, 595, -1, 600, -1, 596,
	-1, 597, -1, 598, -1, 599, -1, 601, -1, 602,
	-1, 603, -1, 591, -1, 604, -1, 605, -1, 606,
	-1, 607, -1, 590, -1, 589, -1, 1, -1, 36,
	269, 203, 266, -1, 45, 269, 203, 266, -1, 170,
	269, 203, 266, -1, 47, 269, 203, 266, -1, 256,
	269, 203, 266, -1, 257, 269, 203, 266, -1, 258,
	269, 203, 266, -1, 103, 269, 275, 266, -1, 104,
	269, 275, 266, -1, 114, 269, 138, 266, -1, 161,
	269, 203, 266, -1, 113, 269, 138, 266, -1, 40,
	269, 138, 266, -1, 39, 269, 138, 266, -1, 133,
	269, 203, 266, -1, 134, 269, 203, 266, -1, 14,
	269, 203, 266, -1, 150, 269, 138, 266, -1, 151,
	269, 275, 266, -1, 184, 268, 609, 267, 266, -1,
	609, 610, -1, 610, -1, 611, -1, 612, -1, 614,
	-1, 616, -1, 615, -1, 613, -1, 617, -1, 1,
	-1, 61, 269, 203, 266, -1, 88, 269, 203, 266,
	-1, 85, 269, 160, 266, -1, 107, 269, 275, 266,
	-1, 83, 269, 203, 266, -1, 46, 269, 203, 266,
	-1, 87, 269, 203, 266, -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] = {
	0, 402, 402, 403, 406, 407, 408, 409, 410, 411,
	412, 413, 414, 415, 416, 417, 418, 419, 420, 421,
	422, 423, 424, 425, 426, 427, 431, 431, 432, 436,
	440, 444, 448, 452, 458, 458, 459, 460, 461, 462,
	469, 472, 472, 473, 473, 473, 475, 492, 503, 506,
	507, 508, 508, 509, 509, 510, 510, 511, 512, 512,
	513, 513, 514, 516, 550, 610, 624, 639, 648, 662,
	671, 699, 729, 752, 802, 804, 804, 805, 805, 806,
	806, 808, 817, 826, 839, 841, 842, 844, 844, 845,
	846, 846, 847, 847, 848, 848, 849, 849, 850, 851,
	853, 857, 861, 868, 875, 882, 889, 896, 903, 910,
	917, 921, 925, 929, 933, 937, 941, 947, 957, 956,
	1050, 1050, 1051, 1051, 1052, 1052, 1052, 1052, 1053, 1053,
	1054, 1054, 1054, 1055, 1055, 1055, 1056, 1056, 1056, 1057,
	1057, 1057, 1057, 1058, 1058, 1059, 1059, 1061, 1073, 1085,
	1119, 1131, 1142, 1184, 1194, 1193, 1199, 1199, 1200, 1204,
	1208, 1212, 1216, 1220, 1224, 1228, 1232, 1236, 1240, 1244,
	1248, 1252, 1256, 1260, 1264, 1268, 1272, 1276, 1282, 1293,
	1304, 1315, 1326, 1337, 1348, 1359, 1370, 1381, 1392, 1403,
	1414, 1425, 1437, 1436, 1440, 1440, 1441, 1441, 1442, 1442,
	1444, 1451, 1458, 1465, 1472, 1479, 1486, 1493, 1500, 1507,
	1514, 1521, 1528, 1535, 1542, 1549, 1563, 1562, 1611, 1611,
	1613, 1613, 1614, 1615, 1615, 1616, 1617, 1618, 1619, 1620,
	1621, 1622, 1623, 1624, 1625, 1626, 1628, 1637, 1646, 1652,
	1658, 1664, 1670, 1676, 1682, 1688, 1694, 1700, 1706, 1712,
	1722, 1721, 1738, 1737, 1742, 1742, 1743, 1747, 1753, 1753,
	1754, 1754, 1754, 1754, 1754, 1756, 1756, 1758, 1758, 1760,
	1774, 1794, 1803, 1816, 1815, 1884, 1884, 1885, 1885, 1885,
	1885, 1886, 1886, 1887, 1887, 1887, 1888, 1888, 1889, 1889,
	1889, 1890, 1890, 1890, 1892, 1929, 1942, 1953, 1962, 1974,
	1973, 1977, 1977, 1978, 1978, 1979, 1979, 1981, 1989, 1996,
	2003, 2010, 2017, 2024, 2031, 2038, 2045, 2054, 2065, 2076,
	2087, 2098, 2109, 2121, 2140, 2150, 2159, 2175, 2174, 2190,
	2190, 2191, 2191, 2191, 2191, 2193, 2202, 2217, 2231, 2230,
	2246, 2246, 2247, 2247, 2247, 2247, 2249, 2258, 2281, 2280,
	2286, 2286, 2287, 2291, 2295, 2299, 2303, 2307, 2311, 2315,
	2319, 2323, 2327, 2331, 2335, 2345, 2344, 2361, 2361, 2362,
	2362, 2362, 2364, 2371, 2370, 2376, 2376, 2377, 2381, 2385,
	2389, 2393, 2397, 2401, 2405, 2409, 2413, 2417, 2427, 2426,
	2572, 2572, 2573, 2573, 2574, 2574, 2574, 2575, 2575, 2576,
	2576, 2577, 2577, 2577, 2578, 2578, 2578, 2579, 2579, 2579,
	2580, 2580, 2581, 2581, 2583, 2595, 2607, 2616, 2642, 2660,
	2678, 2684, 2688, 2696, 2706, 2705, 2709, 2709, 2710, 2710,
	2711, 2711, 2713, 2720, 2731, 2738, 2745, 2752, 2762, 2803,
	2814, 2825, 2840, 2851, 2862, 2875, 2888, 2897, 2933, 2932,
	2996, 2995, 2999, 2999, 3000, 3006, 3006, 3007, 3007, 3007,
	3007, 3009, 3028, 3038, 3037, 3059, 3059, 3060, 3060, 3060,
	3062, 3071, 3083, 3085, 3085, 3086, 3086, 3088, 3110, 3109,
	3151, 3150, 3154, 3154, 3155, 3161, 3161, 3162, 3162, 3162,
	3162, 3164, 3170, 3179, 3182, 3182, 3183, 3183, 3184, 3184,
	3185, 3185, 3186, 3186, 3187, 3188, 3188, 3189, 3189, 3190,
	3190, 3191, 3191, 3192, 3192, 3193, 3193, 3194, 3194, 3195,
	3195, 3196, 3196, 3197, 3197, 3198, 3198, 3199, 3199, 3200,
	3200, 3201, 3201, 3202, 3202, 3203, 3203, 3204, 3204, 3205,
	3205, 3206, 3206, 3207, 3207, 3208, 3208, 3209, 3209, 3210,
	3210, 3211, 3212, 3212, 3212, 3213, 3214, 3218, 3223, 3228,
	3233, 3238, 3243, 3248, 3253, 3258, 3263, 3268, 3273, 3278,
	3283, 3288, 3293, 3298, 3303, 3308, 3314, 3325, 3330, 3339,
	3348, 3357, 3366, 3375, 3380, 3385, 3390, 3395, 3400, 3403,
	3408, 3411, 3416, 3421, 3426, 3431, 3436, 3441, 3446, 3451,
	3456, 3467, 3472, 3477, 3482, 3491, 3523, 3541, 3546, 3555,
	3560, 3565, 3571, 3570, 3575, 3575, 3576, 3579, 3582, 3585,
	3588, 3591, 3594, 3597, 3600, 3603, 3606, 3609, 3612, 3615,
	3618, 3621, 3624, 3627, 3630, 3633, 3639, 3638, 3643, 3643,
	3644, 3647, 3650, 3653, 3656, 3659, 3662, 3665, 3668, 3671,
	3674, 3677, 3680, 3683, 3686, 3689, 3692, 3695, 3698, 3701,
	3706, 3711, 3716, 3721, 3726, 3735, 3734, 3758, 3758, 3759,
	3760, 3761, 3762, 3763, 3764, 3765, 3767, 3773, 3780, 3779,
	3784, 3784, 3785, 3789, 3795, 3829, 3839, 3838, 3888, 3888,
	3889, 3893, 3902, 3905, 3905, 3906, 3906, 3907, 3907, 3908,
	3908, 3909, 3909, 3910, 3910, 3911, 3912, 3912, 3913, 3913,
	3914, 3914, 3915, 3916, 3916, 3918, 3923, 3928, 3933, 3938,
	3943, 3948, 3953, 3958, 3963, 3968, 3973, 3978, 3983, 3988,
	3993, 3998, 4003, 4008, 4016, 4019, 4019, 4020, 4020, 4021,
	4022, 4023, 4023, 4024, 4025, 4027, 4033, 4039, 4048, 4062,
	4068, 4074
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] = {
	"$end", "error", "$undefined", "ACCEPT_PASSWORD", "ACTION", "ADMIN",
	"AFTYPE", "T_ALLOW", "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME",
	"ANTI_SPAM_CONNECT_NUMERIC", "AUTOCONN", "T_BLOCK", "BURST_AWAY",
	"BURST_TOPICWHO", "BYTES", "KBYTES", "MBYTES", "GBYTES", "TBYTES",
	"CALLER_ID_WAIT", "CAN_FLOOD", "CAN_IDLE", "CHANNEL", "CIDR_BITLEN_IPV4",
	"CIDR_BITLEN_IPV6", "CIPHER_PREFERENCE", "CLASS", "CLOAK_KEY1",
	"CLOAK_KEY2", "CLOAK_KEY3", "COMPRESSED", "COMPRESSION_LEVEL", "CONNECT",
	"CONNECTFREQ", "CRYPTLINK", "CYCLE_ON_HOSTCHANGE",
	"DEFAULT_CIPHER_PREFERENCE", "DEFAULT_FLOODCOUNT",
	"DEFAULT_SPLIT_SERVER_COUNT", "DEFAULT_SPLIT_USER_COUNT", "DENY",
	"DESCRIPTION", "DIE", "DISABLE_AUTH", "DISABLE_FAKE_CHANNELS",
	"DISABLE_HIDDEN", "DISABLE_LOCAL_CHANNELS", "DISABLE_REMOTE_COMMANDS",
	"DOT_IN_IP6_ADDR", "DOTS_IN_IDENT", "DURATION", "EGDPOOL_PATH", "EMAIL",
	"ENABLE", "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT", "FAILED_OPER_NOTICE",
	"FAKENAME", "IRCD_FLAGS", "FLATTEN_LINKS", "FFAILED_OPERLOG", "FKILLLOG",
	"FKLINELOG", "FGLINELOG", "FIOERRLOG", "FOPERLOG", "FOPERSPYLOG",
	"FUSERLOG", "GECOS", "GENERAL", "GLINE", "GLINES", "GLINE_EXEMPT",
	"GLINE_LOG", "GLINE_TIME", "GLINE_MIN_CIDR", "GLINE_MIN_CIDR6",
	"GLOBAL_KILL", "IRCD_AUTH", "NEED_IDENT", "HAVENT_READ_CONF", "HIDDEN",
	"HIDDEN_ADMIN", "HIDDEN_NAME", "HIDDEN_OPER", "HIDE_SERVER_IPS",
	"HIDE_SERVERS", "HIDE_SPOOF_IPS", "HOST", "HUB", "HUB_MASK", "IDLETIME",
	"IGNORE_BOGUS_TS", "INVISIBLE_ON_CONNECT", "IP", "KILL",
	"KILL_CHASE_TIME_LIMIT", "KLINE", "KLINE_EXEMPT", "KLINE_REASON",
	"KLINE_WITH_REASON", "KNOCK_DELAY", "KNOCK_DELAY_CHANNEL", "LAZYLINK",
	"LEAF_MASK", "LINKS_DELAY", "LISTEN", "T_LOG", "LOGGING", "LOG_LEVEL",
	"MAX_ACCEPT", "MAX_BANS", "MAX_CHANS_PER_USER", "MAX_GLOBAL",
	"MAX_IDENT", "MAX_LOCAL", "MAX_NICK_CHANGES", "MAX_NICK_TIME",
	"MAX_NUMBER", "MAX_TARGETS", "MESSAGE_LOCALE", "MIN_NONWILDCARD",
	"MIN_NONWILDCARD_SIMPLE", "MODULE", "MODULES", "NAME", "NEED_PASSWORD",
	"NETWORK_DESC", "NETWORK_NAME", "NICK", "NICK_CHANGES",
	"NO_CREATE_ON_SPLIT", "NO_JOIN_ON_SPLIT", "NO_OPER_FLOOD", "NO_TILDE",
	"NOT", "NUMBER", "NUMBER_PER_IDENT", "NUMBER_PER_CIDR", "NUMBER_PER_IP",
	"NUMBER_PER_IP_GLOBAL", "OPERATOR", "OPERS_BYPASS_CALLERID", "OPER_LOG",
	"OPER_ONLY_UMODES", "OPER_PASS_RESV", "OPER_SPY_T", "OPER_UMODES",
	"JOIN_FLOOD_COUNT", "JOIN_FLOOD_TIME", "PACE_WAIT", "PACE_WAIT_SIMPLE",
	"PASSWORD", "PATH", "PING_COOKIE", "PING_TIME", "PING_WARNING", "PORT",
	"QSTRING", "QUIET_ON_BAN", "REASON", "REDIRPORT", "REDIRSERV", "REGEX_T",
	"REHASH", "TREJECT_HOLD_TIME", "REMOTE", "REMOTEBAN",
	"RESTRICT_CHANNELS", "RESTRICTED", "RSA_PRIVATE_KEY_FILE",
	"RSA_PUBLIC_KEY_FILE", "SSL_CERTIFICATE_FILE", "RESV", "RESV_EXEMPT",
	"SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "SENDQ", "SEND_PASSWORD",
	"SERVERHIDE", "SERVERINFO", "SERVICES", "SERVICES_NAME", "SERVLINK_PATH",
	"IRCD_SID", "TKLINE_EXPIRE_NOTICES", "T_SHARED", "T_CLUSTER", "TYPE",
	"SHORT_MOTD", "SILENT", "SPOOF", "SPOOF_NOTICE", "STATS_E_DISABLED",
	"STATS_I_OPER_ONLY", "STATS_K_OPER_ONLY", "STATS_O_OPER_ONLY",
	"STATS_P_OPER_ONLY", "TBOOL", "TMASKED", "T_REJECT", "TS_MAX_DELTA",
	"TS_WARN_DELTA", "TWODOTS", "T_ALL", "T_BOTS", "T_SOFTCALLERID",
	"T_CALLERID", "T_CCONN", "T_CCONN_FULL", "T_CLIENT_FLOOD", "T_DEAF",
	"T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL", "T_HIDECHANNELS",
	"T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT",
	"T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE",
	"T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ",
	"T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL", "T_UMODES", "T_UNAUTH",
	"T_UNRESV", "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TOPICBURST",
	"TRUE_NO_OPER_FLOOD", "TKLINE", "TXLINE", "TRESV", "UNKLINE", "USER",
	"USE_EGD", "USE_EXCEPT", "USE_INVEX", "USE_KNOCK", "USE_LOGGING",
	"USE_WHOIS_ACTUALLY", "VHOST", "VHOST6", "XLINE", "WARN",
	"WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", "','", "$accept", "conf",
	"conf_item", "timespec_", "timespec", "sizespec_", "sizespec",
	"modules_entry", "modules_items", "modules_item", "modules_module",
	"modules_path", "serverinfo_entry", "serverinfo_items",
	"serverinfo_item", "serverinfo_ssl_certificate_file",
	"serverinfo_rsa_private_key_file", "serverinfo_name", "serverinfo_sid",
	"serverinfo_description", "serverinfo_network_name",
	"serverinfo_network_desc", "serverinfo_vhost", "serverinfo_vhost6",
	"serverinfo_max_clients", "serverinfo_hub", "admin_entry", "admin_items",
	"admin_item", "admin_name", "admin_email", "admin_description",
	"logging_entry", "logging_items", "logging_item", "logging_path",
	"logging_oper_log", "logging_fuserlog", "logging_ffailed_operlog",
	"logging_foperlog", "logging_foperspylog", "logging_fglinelog",
	"logging_fklinelog", "logging_ioerrlog", "logging_killlog",
	"logging_log_level", "logging_use_logging", "oper_entry", "@1",
	"oper_name_b", "oper_items", "oper_item", "oper_name", "oper_name_t",
	"oper_user", "oper_password", "oper_encrypted",
	"oper_rsa_public_key_file", "oper_class", "oper_umodes", "@2",
	"oper_umodes_items", "oper_umodes_item", "oper_global_kill",
	"oper_remote", "oper_remoteban", "oper_kline", "oper_xline",
	"oper_unkline", "oper_gline", "oper_nick_changes", "oper_die",
	"oper_rehash", "oper_admin", "oper_hidden_admin", "oper_hidden_oper",
	"oper_operwall", "oper_flags", "@3", "oper_flags_items",
	"oper_flags_item", "@4", "@5", "oper_flags_item_atom", "class_entry",
	"@6", "class_name_b", "class_items", "class_item", "class_name",
	"class_name_t", "class_ping_time", "class_ping_warning",
	"class_number_per_ip", "class_connectfreq", "class_max_number",
	"class_max_global", "class_max_local", "class_max_ident", "class_sendq",
	"class_cidr_bitlen_ipv4", "class_cidr_bitlen_ipv6",
	"class_number_per_cidr", "listen_entry", "@7", "listen_flags", "@8",
	"listen_flags_items", "listen_flags_item", "listen_items", "listen_item",
	"listen_port", "@9", "port_items", "port_item", "listen_address",
	"listen_host", "auth_entry", "@10", "auth_items", "auth_item",
	"auth_user", "auth_passwd", "auth_spoof_notice", "auth_class",
	"auth_encrypted", "auth_flags", "@11", "auth_flags_items",
	"auth_flags_item", "@12", "@13", "auth_flags_item_atom",
	"auth_kline_exempt", "auth_need_ident", "auth_exceed_limit",
	"auth_can_flood", "auth_no_tilde", "auth_gline_exempt", "auth_spoof",
	"auth_redir_serv", "auth_redir_port", "auth_need_password", "resv_entry",
	"@14", "resv_items", "resv_item", "resv_creason", "resv_channel",
	"resv_nick", "shared_entry", "@15", "shared_items", "shared_item",
	"shared_name", "shared_user", "shared_type", "@16", "shared_types",
	"shared_type_item", "cluster_entry", "@17", "cluster_items",
	"cluster_item", "cluster_name", "cluster_type", "@18", "cluster_types",
	"cluster_type_item", "connect_entry", "@19", "connect_name_b",
	"connect_items", "connect_item", "connect_name", "connect_name_t",
	"connect_host", "connect_vhost", "connect_send_password",
	"connect_accept_password", "connect_port", "connect_aftype",
	"connect_fakename", "connect_flags", "@20", "connect_flags_items",
	"connect_flags_item", "@21", "@22", "connect_flags_item_atom",
	"connect_rsa_public_key_file", "connect_encrypted", "connect_cryptlink",
	"connect_compressed", "connect_auto", "connect_topicburst",
	"connect_hub_mask", "connect_leaf_mask", "connect_class",
	"connect_cipher_preference", "kill_entry", "@23", "kill_type", "@24",
	"kill_type_items", "kill_type_item", "kill_items", "kill_item",
	"kill_user", "kill_reason", "deny_entry", "@25", "deny_items",
	"deny_item", "deny_ip", "deny_reason", "exempt_entry", "exempt_items",
	"exempt_item", "exempt_ip", "gecos_entry", "@26", "gecos_flags", "@27",
	"gecos_flags_items", "gecos_flags_item", "gecos_items", "gecos_item",
	"gecos_name", "gecos_reason", "general_entry", "general_items",
	"general_item", "general_gline_min_cidr", "general_gline_min_cidr6",
	"general_burst_away", "general_use_whois_actually",
	"general_reject_hold_time", "general_tkline_expire_notices",
	"general_kill_chase_time_limit", "general_hide_spoof_ips",
	"general_ignore_bogus_ts", "general_disable_remote_commands",
	"general_failed_oper_notice", "general_anti_nick_flood",
	"general_max_nick_time", "general_max_nick_changes",
	"general_max_accept", "general_anti_spam_exit_message_time",
	"general_anti_spam_connect_numeric", "general_ts_warn_delta",
	"general_ts_max_delta", "general_havent_read_conf",
	"general_kline_with_reason", "general_kline_reason",
	"general_cloak_key1", "general_cloak_key2", "general_cloak_key3",
	"general_services_name", "general_invisible_on_connect",
	"general_warn_no_nline", "general_stats_e_disabled",
	"general_stats_o_oper_only", "general_stats_P_oper_only",
	"general_stats_k_oper_only", "general_stats_i_oper_only",
	"general_pace_wait", "general_caller_id_wait",
	"general_opers_bypass_callerid", "general_pace_wait_simple",
	"general_short_motd", "general_no_oper_flood",
	"general_true_no_oper_flood", "general_oper_pass_resv",
	"general_message_locale", "general_idletime", "general_dots_in_ident",
	"general_max_targets", "general_servlink_path",
	"general_default_cipher_preference", "general_compression_level",
	"general_use_egd", "general_egdpool_path", "general_ping_cookie",
	"general_disable_auth", "general_throttle_time", "general_oper_umodes",
	"@28", "umode_oitems", "umode_oitem", "general_oper_only_umodes", "@29",
	"umode_items", "umode_item", "general_min_nonwildcard",
	"general_min_nonwildcard_simple", "general_default_floodcount",
	"general_client_flood", "general_dot_in_ip6_addr", "gline_entry", "@30",
	"gline_items", "gline_item", "gline_enable", "gline_duration",
	"gline_logging", "@31", "gline_logging_types", "gline_logging_type_item",
	"gline_user", "gline_server", "gline_action", "@32", "gdeny_types",
	"gdeny_type_item", "channel_entry", "channel_items", "channel_item",
	"channel_cycle_on_hostchange", "channel_disable_fake_channels",
	"channel_restrict_channels", "channel_disable_local_channels",
	"channel_use_except", "channel_use_invex", "channel_use_knock",
	"channel_knock_delay", "channel_knock_delay_channel",
	"channel_max_chans_per_user", "channel_quiet_on_ban", "channel_max_bans",
	"channel_default_split_user_count", "channel_default_split_server_count",
	"channel_no_create_on_split", "channel_no_join_on_split",
	"channel_burst_topicwho", "channel_jflood_count", "channel_jflood_time",
	"serverhide_entry", "serverhide_items", "serverhide_item",
	"serverhide_flatten_links", "serverhide_hide_servers",
	"serverhide_hidden_name", "serverhide_links_delay", "serverhide_hidden",
	"serverhide_disable_hidden", "serverhide_hide_server_ips", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] = {
	0, 256, 257, 258, 259, 260, 261, 262, 263, 264,
	265, 266, 267, 268, 269, 270, 271, 272, 273, 274,
	275, 276, 277, 278, 279, 280, 281, 282, 283, 284,
	285, 286, 287, 288, 289, 290, 291, 292, 293, 294,
	295, 296, 297, 298, 299, 300, 301, 302, 303, 304,
	305, 306, 307, 308, 309, 310, 311, 312, 313, 314,
	315, 316, 317, 318, 319, 320, 321, 322, 323, 324,
	325, 326, 327, 328, 329, 330, 331, 332, 333, 334,
	335, 336, 337, 338, 339, 340, 341, 342, 343, 344,
	345, 346, 347, 348, 349, 350, 351, 352, 353, 354,
	355, 356, 357, 358, 359, 360, 361, 362, 363, 364,
	365, 366, 367, 368, 369, 370, 371, 372, 373, 374,
	375, 376, 377, 378, 379, 380, 381, 382, 383, 384,
	385, 386, 387, 388, 389, 390, 391, 392, 393, 394,
	395, 396, 397, 398, 399, 400, 401, 402, 403, 404,
	405, 406, 407, 408, 409, 410, 411, 412, 413, 414,
	415, 416, 417, 418, 419, 420, 421, 422, 423, 424,
	425, 426, 427, 428, 429, 430, 431, 432, 433, 434,
	435, 436, 437, 438, 439, 440, 441, 442, 443, 444,
	445, 446, 447, 448, 449, 450, 451, 452, 453, 454,
	455, 456, 457, 458, 459, 460, 461, 462, 463, 464,
	465, 466, 467, 468, 469, 470, 471, 472, 473, 474,
	475, 476, 477, 478, 479, 480, 481, 482, 483, 484,
	485, 486, 487, 488, 489, 490, 491, 492, 493, 494,
	495, 496, 497, 498, 499, 500, 501, 502, 503, 504,
	505, 506, 507, 508, 509, 510, 511, 512, 513, 514,
	515, 516, 517, 518, 519, 520, 59, 125, 123, 61,
	44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] = {
	0, 271, 272, 272, 273, 273, 273, 273, 273, 273,
	273, 273, 273, 273, 273, 273, 273, 273, 273, 273,
	273, 273, 273, 273, 273, 273, 274, 274, 275, 275,
	275, 275, 275, 275, 276, 276, 277, 277, 277, 277,
	278, 279, 279, 280, 280, 280, 281, 282, 283, 284,
	284, 285, 285, 285, 285, 285, 285, 285, 285, 285,
	285, 285, 285, 286, 287, 288, 289, 290, 291, 292,
	293, 294, 295, 296, 297, 298, 298, 299, 299, 299,
	299, 300, 301, 302, 303, 304, 304, 305, 305, 305,
	305, 305, 305, 305, 305, 305, 305, 305, 305, 305,
	306, 307, 308, 309, 310, 311, 312, 313, 314, 315,
	316, 316, 316, 316, 316, 316, 316, 317, 319, 318,
	320, 320, 321, 321, 322, 322, 322, 322, 322, 322,
	322, 322, 322, 322, 322, 322, 322, 322, 322, 322,
	322, 322, 322, 322, 322, 322, 322, 323, 324, 325,
	326, 327, 328, 329, 331, 330, 332, 332, 333, 333,
	333, 333, 333, 333, 333, 333, 333, 333, 333, 333,
	333, 333, 333, 333, 333, 333, 333, 333, 334, 335,
	336, 337, 338, 339, 340, 341, 342, 343, 344, 345,
	346, 347, 349, 348, 350, 350, 352, 351, 353, 351,
	354, 354, 354, 354, 354, 354, 354, 354, 354, 354,
	354, 354, 354, 354, 354, 354, 356, 355, 357, 357,
	358, 358, 359, 359, 359, 359, 359, 359, 359, 359,
	359, 359, 359, 359, 359, 359, 360, 361, 362, 363,
	364, 365, 366, 367, 368, 369, 370, 371, 372, 373,
	375, 374, 377, 376, 378, 378, 379, 379, 380, 380,
	381, 381, 381, 381, 381, 383, 382, 384, 384, 385,
	385, 386, 387, 389, 388, 390, 390, 391, 391, 391,
	391, 391, 391, 391, 391, 391, 391, 391, 391, 391,
	391, 391, 391, 391, 392, 393, 394, 395, 396, 398,
	397, 399, 399, 401, 400, 402, 400, 403, 403, 403,
	403, 403, 403, 403, 403, 403, 403, 404, 405, 406,
	407, 408, 409, 410, 411, 412, 413, 415, 414, 416,
	416, 417, 417, 417, 417, 418, 419, 420, 422, 421,
	423, 423, 424, 424, 424, 424, 425, 426, 428, 427,
	429, 429, 430, 430, 430, 430, 430, 430, 430, 430,
	430, 430, 430, 430, 430, 432, 431, 433, 433, 434,
	434, 434, 435, 437, 436, 438, 438, 439, 439, 439,
	439, 439, 439, 439, 439, 439, 439, 439, 441, 440,
	442, 442, 443, 443, 444, 444, 444, 444, 444, 444,
	444, 444, 444, 444, 444, 444, 444, 444, 444, 444,
	444, 444, 444, 444, 445, 446, 447, 448, 449, 450,
	451, 452, 452, 453, 455, 454, 456, 456, 458, 457,
	459, 457, 460, 460, 460, 460, 460, 460, 461, 462,
	463, 464, 465, 466, 467, 468, 469, 470, 472, 471,
	474, 473, 475, 475, 476, 477, 477, 478, 478, 478,
	478, 479, 480, 482, 481, 483, 483, 484, 484, 484,
	485, 486, 487, 488, 488, 489, 489, 490, 492, 491,
	494, 493, 495, 495, 496, 497, 497, 498, 498, 498,
	498, 499, 500, 501, 502, 502, 503, 503, 503, 503,
	503, 503, 503, 503, 503, 503, 503, 503, 503, 503,
	503, 503, 503, 503, 503, 503, 503, 503, 503, 503,
	503, 503, 503, 503, 503, 503, 503, 503, 503, 503,
	503, 503, 503, 503, 503, 503, 503, 503, 503, 503,
	503, 503, 503, 503, 503, 503, 503, 503, 503, 503,
	503, 503, 503, 503, 503, 503, 503, 504, 505, 506,
	507, 508, 509, 510, 511, 512, 513, 514, 515, 516,
	517, 518, 519, 520, 521, 522, 523, 524, 525, 526,
	527, 528, 529, 530, 531, 532, 533, 534, 535, 535,
	536, 536, 537, 538, 539, 540, 541, 542, 543, 544,
	545, 546, 547, 548, 549, 550, 551, 552, 553, 554,
	555, 556, 558, 557, 559, 559, 560, 560, 560, 560,
	560, 560, 560, 560, 560, 560, 560, 560, 560, 560,
	560, 560, 560, 560, 560, 560, 562, 561, 563, 563,
	564, 564, 564, 564, 564, 564, 564, 564, 564, 564,
	564, 564, 564, 564, 564, 564, 564, 564, 564, 564,
	565, 566, 567, 568, 569, 571, 570, 572, 572, 573,
	573, 573, 573, 573, 573, 573, 574, 575, 577, 576,
	578, 578, 579, 579, 580, 581, 583, 582, 584, 584,
	585, 585, 586, 587, 587, 588, 588, 588, 588, 588,
	588, 588, 588, 588, 588, 588, 588, 588, 588, 588,
	588, 588, 588, 588, 588, 589, 590, 591, 592, 593,
	594, 595, 596, 597, 598, 599, 600, 601, 602, 603,
	604, 605, 606, 607, 608, 609, 609, 610, 610, 610,
	610, 610, 610, 610, 610, 611, 612, 613, 614, 615,
	616, 617
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] = {
	0, 2, 0, 2, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 2, 2, 0, 1, 2, 3,
	3, 3, 3, 3, 0, 1, 2, 3, 3, 3,
	5, 2, 1, 1, 1, 2, 4, 4, 5, 2,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 2, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 5, 2, 1, 1, 1, 1,
	2, 4, 4, 4, 5, 2, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 2,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 0, 7,
	0, 1, 2, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 2, 4, 1, 4,
	4, 4, 4, 4, 0, 5, 3, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 0, 5, 3, 1, 0, 3, 0, 2,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 0, 7, 0, 1,
	2, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 2, 4, 1, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	0, 6, 0, 5, 3, 1, 1, 1, 2, 1,
	1, 1, 1, 1, 2, 0, 5, 3, 1, 1,
	3, 4, 4, 0, 6, 2, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 2, 4, 4, 4, 4, 4, 0,
	5, 3, 1, 0, 3, 0, 2, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 0, 6, 2,
	1, 1, 1, 1, 2, 4, 4, 4, 0, 6,
	2, 1, 1, 1, 1, 2, 4, 4, 0, 5,
	3, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 0, 6, 2, 1, 1,
	1, 2, 4, 0, 5, 3, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 0, 7,
	0, 1, 2, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 2, 4, 1, 4, 4, 4, 4,
	4, 4, 4, 4, 0, 5, 3, 1, 0, 3,
	0, 2, 1, 1, 1, 1, 1, 1, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 0, 6,
	0, 5, 3, 1, 1, 2, 1, 1, 1, 1,
	1, 4, 4, 0, 6, 2, 1, 1, 1, 1,
	4, 4, 5, 2, 1, 1, 1, 4, 0, 6,
	0, 5, 3, 1, 1, 2, 1, 1, 1, 1,
	1, 4, 4, 5, 2, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 0, 5, 3, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 0, 5, 3, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	4, 4, 4, 4, 4, 0, 6, 2, 1, 1,
	1, 1, 1, 1, 1, 1, 4, 4, 0, 5,
	3, 1, 1, 1, 4, 4, 0, 5, 3, 1,
	1, 1, 5, 2, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 5, 2, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 4, 4, 4, 4, 4,
	4, 4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] = {
	2, 0, 1, 0, 0, 0, 216, 388, 463, 0,
	478, 0, 665, 273, 448, 250, 0, 0, 118, 327,
	0, 0, 338, 365, 3, 23, 11, 4, 5, 6,
	8, 9, 10, 13, 14, 15, 16, 17, 18, 19,
	22, 20, 21, 7, 12, 24, 25, 0, 0, 218,
	390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 120, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 76, 77, 79, 78, 714, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 694, 713, 712,
	707, 695, 696, 697, 698, 700, 701, 702, 703, 699,
	704, 705, 706, 708, 709, 710, 711, 237, 0, 219,
	415, 0, 391, 0, 476, 0, 0, 474, 475, 0,
	556, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 636, 0, 612,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 495, 548, 549, 546, 550, 551, 547, 507,
	496, 497, 536, 498, 499, 500, 501, 502, 503, 504,
	505, 506, 542, 508, 509, 552, 553, 554, 555, 510,
	511, 538, 513, 518, 514, 516, 515, 530, 531, 517,
	519, 520, 521, 522, 524, 523, 512, 526, 535, 537,
	539, 527, 528, 544, 545, 541, 529, 525, 533, 534,
	532, 540, 543, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 86, 87, 88, 91, 98, 92, 96, 93, 94,
	97, 95, 89, 90, 0, 0, 0, 0, 42, 43,
	44, 148, 0, 121, 0, 744, 0, 0, 0, 0,
	0, 0, 0, 0, 736, 737, 738, 742, 739, 741,
	740, 743, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 50, 61, 58, 51, 60,
	54, 55, 56, 52, 59, 57, 53, 0, 0, 80,
	0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 693, 0, 0, 469, 0,
	0, 0, 466, 467, 468, 0, 0, 473, 490, 0,
	0, 480, 489, 0, 486, 487, 488, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 494, 675,
	686, 0, 0, 678, 0, 0, 0, 668, 669, 670,
	671, 672, 673, 674, 0, 0, 0, 0, 0, 299,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 276, 277, 278, 287, 279, 292, 280, 281,
	282, 283, 290, 284, 285, 286, 288, 289, 291, 460,
	0, 450, 0, 459, 0, 456, 457, 458, 0, 252,
	0, 0, 0, 261, 0, 259, 260, 262, 263, 99,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 85, 45, 0, 0, 0, 41, 0,
	0, 0, 0, 0, 0, 330, 331, 332, 333, 0,
	0, 0, 0, 0, 0, 0, 0, 735, 62, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 49, 0, 0, 348, 0, 0, 341, 342, 343,
	344, 0, 0, 373, 0, 368, 369, 370, 0, 0,
	0, 74, 0, 0, 0, 0, 0, 0, 26, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 692, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 221, 222,
	225, 226, 228, 229, 230, 231, 232, 233, 234, 223,
	224, 227, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 424, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 393, 394, 395, 396, 397, 398, 400,
	399, 401, 402, 410, 407, 409, 408, 406, 412, 403,
	404, 405, 411, 0, 0, 0, 465, 0, 472, 0,
	0, 0, 0, 485, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	34, 0, 0, 0, 0, 0, 0, 493, 0, 0,
	0, 0, 0, 0, 0, 667, 293, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 275, 0, 0, 0, 0, 455,
	264, 0, 0, 0, 0, 0, 258, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 84, 0, 0, 40, 0,
	0, 0, 0, 0, 192, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
	0, 0, 0, 123, 124, 125, 126, 143, 144, 130,
	129, 131, 132, 138, 133, 134, 135, 136, 137, 139,
	140, 141, 127, 128, 142, 145, 334, 0, 0, 0,
	0, 329, 0, 0, 0, 0, 0, 0, 0, 734,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 48, 345, 0, 0, 0, 0, 340, 371, 0,
	0, 0, 367, 83, 82, 81, 731, 715, 728, 727,
	716, 718, 26, 26, 26, 26, 26, 28, 27, 722,
	723, 726, 724, 729, 730, 732, 733, 725, 717, 719,
	720, 721, 235, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 220, 413, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 392,
	0, 0, 464, 477, 0, 0, 0, 479, 568, 572,
	573, 559, 593, 579, 580, 581, 606, 605, 662, 610,
	566, 664, 602, 608, 567, 557, 558, 576, 564, 601,
	565, 583, 563, 578, 577, 571, 570, 569, 603, 600,
	660, 661, 597, 594, 640, 656, 657, 641, 642, 643,
	644, 651, 645, 659, 654, 658, 647, 652, 648, 653,
	646, 650, 649, 655, 0, 639, 599, 616, 632, 633,
	617, 618, 619, 620, 627, 621, 635, 630, 634, 623,
	628, 624, 629, 622, 626, 625, 631, 0, 615, 592,
	595, 609, 561, 582, 604, 562, 596, 585, 590, 591,
	588, 589, 586, 587, 575, 574, 34, 34, 34, 36,
	35, 663, 611, 598, 607, 560, 584, 0, 0, 0,
	0, 0, 0, 666, 0, 0, 0, 0, 305, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	274, 0, 0, 0, 449, 0, 0, 0, 269, 265,
	268, 251, 103, 109, 107, 106, 108, 104, 105, 102,
	110, 116, 111, 115, 113, 114, 112, 101, 100, 117,
	46, 47, 146, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 122, 0, 0, 0,
	328, 750, 745, 749, 747, 751, 746, 748, 67, 73,
	65, 69, 68, 64, 63, 66, 72, 70, 71, 0,
	0, 0, 339, 0, 0, 366, 29, 30, 31, 32,
	33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 217, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 430, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 389, 470, 471, 491, 492,
	484, 0, 483, 637, 0, 613, 0, 37, 38, 39,
	691, 690, 0, 689, 677, 676, 683, 682, 0, 681,
	685, 684, 320, 297, 298, 319, 303, 0, 302, 0,
	322, 318, 317, 326, 321, 295, 325, 324, 323, 296,
	294, 462, 454, 0, 453, 461, 257, 256, 0, 255,
	272, 271, 0, 0, 0, 0, 0, 0, 0, 198,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 119, 336, 337,
	335, 346, 352, 363, 358, 362, 364, 361, 360, 357,
	353, 356, 359, 354, 355, 0, 351, 347, 372, 377,
	383, 387, 386, 385, 382, 378, 381, 384, 379, 380,
	0, 376, 247, 248, 241, 243, 245, 244, 242, 236,
	249, 240, 238, 239, 246, 419, 421, 422, 442, 447,
	446, 441, 440, 439, 423, 428, 0, 427, 0, 416,
	444, 445, 414, 420, 438, 418, 443, 417, 481, 0,
	638, 614, 687, 0, 679, 0, 0, 300, 305, 311,
	312, 308, 314, 310, 309, 316, 313, 315, 307, 306,
	451, 0, 253, 0, 270, 267, 266, 188, 153, 186,
	151, 196, 0, 195, 0, 184, 178, 189, 190, 181,
	147, 185, 150, 187, 179, 180, 152, 191, 158, 174,
	175, 159, 160, 161, 162, 169, 163, 177, 172, 176,
	165, 170, 166, 171, 164, 168, 167, 173, 0, 157,
	183, 149, 182, 349, 0, 374, 0, 0, 425, 430,
	435, 436, 433, 434, 432, 437, 431, 482, 688, 680,
	304, 301, 452, 254, 0, 193, 198, 208, 206, 215,
	205, 200, 209, 213, 202, 210, 212, 207, 201, 214,
	211, 203, 204, 199, 155, 0, 350, 375, 429, 426,
	197, 194, 156
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] = {
	-1, 1, 24, 917, 918, 1079, 1080, 25, 287, 288,
	289, 290, 26, 324, 325, 326, 327, 328, 329, 330,
	331, 332, 333, 334, 335, 336, 27, 71, 72, 73,
	74, 75, 28, 270, 271, 272, 273, 274, 275, 276,
	277, 278, 279, 280, 281, 282, 283, 29, 61, 292,
	842, 843, 844, 293, 845, 846, 847, 848, 849, 850,
	1161, 1458, 1459, 851, 852, 853, 854, 855, 856, 857,
	858, 859, 860, 861, 862, 863, 864, 865, 1147, 1422,
	1423, 1484, 1424, 1503, 30, 49, 118, 627, 628, 629,
	119, 630, 631, 632, 633, 634, 635, 636, 637, 638,
	639, 640, 641, 31, 58, 513, 791, 1288, 1289, 514,
	515, 516, 1294, 1119, 1120, 517, 518, 32, 56, 481,
	482, 483, 484, 485, 486, 487, 488, 771, 1267, 1268,
	1396, 1269, 1409, 489, 490, 491, 492, 493, 494, 495,
	496, 497, 498, 33, 62, 544, 545, 546, 547, 548,
	34, 65, 576, 577, 578, 579, 580, 894, 1335, 1336,
	35, 66, 584, 585, 586, 587, 900, 1350, 1351, 36,
	50, 121, 662, 663, 664, 122, 665, 666, 667, 668,
	669, 670, 671, 672, 958, 1376, 1377, 1467, 1378, 1476,
	673, 674, 675, 676, 677, 678, 679, 680, 681, 682,
	37, 57, 503, 786, 1283, 1284, 504, 505, 506, 507,
	38, 51, 371, 372, 373, 374, 39, 126, 127, 128,
	40, 53, 382, 691, 1241, 1242, 383, 384, 385, 386,
	41, 191, 192, 193, 194, 195, 196, 197, 198, 199,
	200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
	210, 211, 212, 213, 214, 215, 216, 217, 218, 219,
	220, 221, 222, 223, 224, 225, 226, 227, 228, 229,
	230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
	240, 241, 242, 243, 244, 245, 246, 425, 1057, 1058,
	247, 423, 1034, 1035, 248, 249, 250, 251, 252, 42,
	55, 456, 457, 458, 459, 460, 761, 1258, 1259, 461,
	462, 463, 758, 1252, 1253, 43, 96, 97, 98, 99,
	100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
	110, 111, 112, 113, 114, 115, 116, 44, 303, 304,
	305, 306, 307, 308, 309, 310, 311
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -830
static const yytype_int16 yypact[] = {
	-830, 854, -830, -250, -254, -240, -830, -830, -830, -229,
	-830, -227, -830, -830, -830, -830, -224, -219, -830, -830,
	-199, -186, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, 26, 719, -124,
	-70, -172, 12, -163, 538, -147, -129, -116, -113, 536,
	24, -48, -103, 467, 351, -68, -61, -41, -42, -39,
	-36, 11, -830, -830, -830, -830, -830, -33, -30, -26,
	-24, -19, -11, -9, -8, -7, -5, -3, -2, 25,
	37, 39, 40, 42, 44, 46, 47, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, 15, -830,
	-830, 30, -830, 5, -830, 48, 7, -830, -830, 243,
	-830, 49, 52, 56, 57, 59, 60, 66, 67, 71,
	73, 74, 77, 81, 84, 85, 91, 92, 93, 97,
	98, 99, 104, 108, 109, 113, 114, 116, 118, 126,
	128, 129, 137, 138, 148, 151, 152, -830, 153, -830,
	155, 166, 168, 169, 170, 171, 172, 174, 175, 176,
	178, 180, 181, 182, 184, 187, 188, 190, 193, 195,
	196, 22, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, 375, 746, 2, 329, 75, 197, 198,
	201, 213, 214, 218, 220, 221, 222, 224, 225, 226,
	347, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, 83, 227, 228, 80, -830, -830,
	-830, -830, 33, -830, 124, -830, 229, 230, 231, 232,
	234, 235, 236, 185, -830, -830, -830, -830, -830, -830,
	-830, -830, 130, 238, 240, 241, 242, 245, 246, 247,
	248, 250, 251, 252, 274, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, 3, 8, -830,
	294, 326, 352, 256, -830, 321, 323, 389, 391, 327,
	330, 394, 394, 396, 400, 339, 340, 407, 394, 346,
	350, 353, 356, 357, 295, -830, 833, 745, -830, 293,
	300, 23, -830, -830, -830, 404, 299, -830, -830, 302,
	303, -830, -830, 21, -830, -830, -830, 374, 394, 376,
	377, 394, 418, 421, 423, 451, 431, 456, 392, 405,
	406, 459, 447, 408, 472, 479, 480, 416, 394, 419,
	420, 483, 464, 425, 488, 492, 394, 496, 475, 499,
	500, 438, 439, 380, 440, 382, 394, 394, 442, 394,
	486, 493, 449, 452, 455, -148, -119, 461, 462, 394,
	394, 516, 394, 463, 465, 466, 468, 401, -830, -830,
	-830, 403, 409, -830, 410, 411, 105, -830, -830, -830,
	-830, -830, -830, -830, 417, 424, 426, 427, 428, -830,
	432, 433, 441, 443, 444, 445, 448, 454, 474, 481,
	485, 264, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	491, -830, 494, -830, 117, -830, -830, -830, 422, -830,
	505, 508, 509, -830, 17, -830, -830, -830, -830, -830,
	514, 517, 529, 540, 547, 548, 549, 551, 244, 556,
	558, 473, 458, -830, -830, 561, 570, 469, -830, 643,
	495, 510, 512, 513, 72, -830, -830, -830, -830, 528,
	531, 546, 581, 554, 562, 394, 503, -830, -830, 630,
	588, 632, 634, 636, 639, 647, 648, 672, 653, 654,
	553, -830, 555, 557, -830, 559, 9, -830, -830, -830,
	-830, 563, 569, -830, 45, -830, -830, -830, 564, 565,
	573, -830, 574, 575, 576, 578, 579, 582, 253, 583,
	584, 594, 595, 597, 598, 599, 600, 605, 609, 610,
	612, 618, -830, 622, 617, 623, 624, 625, 633, 644,
	645, 646, 650, 651, 652, 657, 660, 217, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, 635, 661, 662, 663, 664, 667, 668, 670,
	671, 676, -830, 677, 678, 683, 685, 687, 688, 689,
	692, 694, 296, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, 655, 665, 637, -830, 642, -830, 731,
	739, 696, 656, -830, 675, 700, 701, 702, 703, 704,
	705, 706, 713, 715, 716, 718, 720, 721, 722, 723,
	726, 729, 730, 732, 733, 735, 736, 737, 738, 741,
	742, 743, 744, 750, 752, 757, 758, 759, 760, 761,
	853, 764, 890, 765, 768, 770, 771, 774, 775, 776,
	777, 778, 781, 782, 783, 784, 785, 788, 789, 790,
	4, 791, 796, 802, 810, 811, 813, -830, 766, 394,
	614, 812, 756, 763, 814, -830, -830, 621, 825, 709,
	714, 815, 809, 879, 880, 882, 883, 845, 767, 851,
	868, 884, 934, 829, -830, 937, 836, 938, 842, -830,
	-830, 844, 954, 956, 979, 852, -830, 855, 856, 857,
	858, 865, 866, 869, 876, 885, 887, 888, 889, 891,
	892, 893, 894, 895, 902, -830, 903, 905, -830, 906,
	850, 881, 907, 908, -830, 909, 910, 911, 912, 913,
	914, 915, 916, 917, 918, 919, 920, 921, -830, 922,
	923, 924, 127, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, 960, 974, 985,
	928, -830, 929, 930, 931, 932, 933, 935, 936, -830,
	939, 940, 941, 942, 943, 944, 945, 946, 947, 948,
	949, -830, -830, 996, 950, 1014, 951, -830, -830, 1015,
	952, 957, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, 394, 394, 394, 394, 394, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, 1062, 1065, 394, 1066, 1078, 1080, 1082,
	1064, 1084, 1087, 394, 394, 516, 961, -830, -830, 1068,
	29, 1023, 1069, 1070, 1028, 1029, 1030, 1074, 966, 1076,
	1077, 1079, 1081, 1100, 1083, 1085, 1037, 1086, 976, -830,
	978, 981, -830, -830, 982, 983, 682, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -255, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -237, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, 516, 516, 516, -830,
	-830, -830, -830, -830, -830, -830, -830, 14, 984, 986,
	35, 987, 988, -830, 989, 990, 991, 992, 1114, 993,
	994, 995, 997, 998, 999, 1000, 1001, 1002, 1003, 1004,
	-830, 1005, 1097, 1006, -830, -78, 1007, 1008, 1067, 1009,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, 1073, 1117, 1075, 1088, 1011, 1089, 1090,
	1091, 1092, 1093, 1121, 1094, 1122, 1095, 1096, 1098, 1123,
	1099, 1016, 1101, 1124, 1102, 1020, -830, 1021, 1022, 1024,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, 1034,
	769, 1040, -830, 1041, 808, -830, -830, -830, -830, -830,
	-830, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050,
	1051, 1052, 1053, 1054, -830, 1055, 1056, 1057, 1058, 1059,
	1060, 1061, 1063, 1071, 1072, 1152, 1103, 1104, 1105, 1106,
	1107, 1108, 1109, 1110, 1111, -830, -830, -830, -830, -830,
	-830, -232, -830, -830, 853, -830, 890, -830, -830, -830,
	-830, -830, -208, -830, -830, -830, -830, -830, -173, -830,
	-830, -830, -830, -830, -830, -830, -830, -168, -830, 762,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -156, -830, -830, -830, -830, -144, -830,
	-830, -830, 1165, 979, 1112, 1113, 1115, 1116, 1118, 1191,
	1119, 1120, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132,
	1133, 1134, 1135, 927, 1136, 1137, 1138, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -139, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-137, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -108, -830, 32, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, 682,
	-830, -830, -830, 14, -830, 35, 762, -830, 1114, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, 1097, -830, -78, -830, -830, -830, -830, -830, -830,
	-830, -830, -93, -830, 620, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -82, -830,
	-830, -830, -830, -830, 769, -830, 808, 32, -830, 1152,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, 620, -830, 1191, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, 927, -830, -830, -830, -830,
	-830, -830, -830
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] = {
	-830, -830, -830, -722, -351, -829, -439, -830, -830, 1139,
	-830, -830, -830, -830, 1010, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, 1259, -830,
	-830, -830, -830, -830, 1140, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, 489, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -170, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-154, -830, -830, -151, -830, -830, -830, -830, 712, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -77, -830,
	826, -830, -830, -830, 50, -830, -830, -830, -830, -830,
	860, -830, -830, -830, -830, -830, -830, -830, -830, -56,
	-830, -830, -52, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, 801, -830, -830, -830,
	-830, -830, -830, 772, -830, -830, -830, -830, -830, -118,
	-830, -830, -830, 773, -830, -830, -830, -830, -117, -830,
	-830, -830, -830, 690, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -122, -830, -830, -114,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -60, -830, 846, -830, -830,
	-830, -830, -830, 1012, -830, -830, -830, -830, 1228, -830,
	-830, -830, -830, -830, -830, -34, -830, 973, -830, -830,
	-830, -830, 1167, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, 115,
	-830, -830, -830, 119, -830, -830, -830, -830, -830, -830,
	-830, -830, 904, -830, -830, -830, -830, -830, -31, -830,
	-830, -830, -830, -830, -28, -830, -830, 1263, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, -830,
	-830, -830, -830, -830, -830, -830, -830, -830, -830, 1141,
	-830, -830, -830, -830, -830, -830, -830
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] = {
	599, 600, 751, 499, 572, 1286, 368, 606, 124, 581,
	572, 1243, 67, 124, 47, 1244, 45, 46, 508, 1076,
	1077, 1078, 378, 130, 368, 284, 1250, 67, 48, 1245,
	131, 132, 133, 1246, 1388, 134, 117, 695, 1389, 52,
	698, 54, 135, 1470, 59, 1471, 581, 1256, 76, 60,
	136, 137, 138, 68, 139, 742, 743, 715, 1392, 140,
	141, 77, 1393, 1472, 69, 723, 142, 1473, 68, 63,
	143, 144, 145, 540, 146, 733, 734, 509, 736, 69,
	147, 284, 64, 78, 744, 745, 79, 80, 748, 749,
	120, 752, 81, 1394, 82, 541, 123, 1395, 1397, 148,
	149, 369, 1398, 125, 150, 129, 449, 510, 125, 450,
	1410, 151, 291, 511, 1411, 152, 153, 154, 499, 369,
	155, 253, 1412, 156, 157, 540, 1413, 1463, 819, 1465,
	573, 1464, 820, 1466, 158, 582, 573, 1474, 70, 254,
	159, 160, 750, 161, 162, 163, 164, 541, 379, 285,
	83, 84, 255, 70, 821, 256, 451, 165, 1468, 452,
	85, 86, 1469, 1287, 500, 294, 166, 370, 167, 168,
	822, 169, 582, 1485, 170, 171, 512, 1486, 172, 286,
	87, 88, 823, 380, 1504, 370, 295, 824, 1505, 173,
	1196, 1197, 1198, 1199, 1200, 501, 574, 89, 90, 825,
	337, 583, 574, 542, 878, 285, 826, 338, 91, 174,
	175, 827, 176, 828, 381, 453, 177, 92, 613, 1251,
	178, 179, 180, 181, 182, 339, 829, 340, 183, 184,
	341, 296, 454, 342, 543, 286, 345, 185, 583, 346,
	1257, 614, 615, 347, 378, 348, 297, 1247, 1248, 1249,
	349, 616, 1216, 1217, 830, 542, 502, 575, 350, 831,
	351, 352, 353, 575, 354, 464, 355, 356, 298, 186,
	299, 187, 300, 301, 376, 312, 896, 188, 343, 500,
	1475, 832, 189, 366, 795, 465, 543, 190, 692, 447,
	685, 466, 302, 833, 357, 834, 835, 642, 367, 643,
	836, 539, 644, 93, 94, 95, 358, 645, 359, 360,
	501, 361, 901, 362, 364, 363, 313, 375, 387, 467,
	468, 388, 646, 647, 469, 389, 390, 648, 391, 392,
	508, 649, 617, 618, 619, 393, 394, 620, 470, 870,
	395, 519, 396, 397, 621, 471, 398, 537, 257, 534,
	399, 650, 312, 400, 401, 651, 652, 622, 623, 455,
	402, 403, 404, 837, 472, 314, 405, 406, 407, 838,
	379, 502, 764, 408, 624, 625, 449, 409, 410, 450,
	839, 840, 411, 412, 788, 413, 653, 414, 654, 509,
	841, 598, 473, 313, 1165, 415, 558, 416, 417, 626,
	474, 315, 655, 316, 317, 380, 418, 419, 1088, 258,
	259, 260, 261, 262, 263, 264, 265, 420, 475, 510,
	421, 422, 424, 656, 426, 511, 451, 476, 477, 452,
	912, 913, 914, 915, 916, 427, 381, 428, 429, 430,
	431, 432, 314, 433, 434, 435, 318, 436, 319, 437,
	438, 439, 556, 440, 588, 657, 441, 442, 266, 443,
	478, 479, 444, 320, 445, 446, 520, 521, 295, 658,
	522, 805, 806, 807, 808, 809, 810, 811, 315, 659,
	316, 317, 523, 524, 946, 453, 589, 525, 512, 526,
	527, 528, 267, 529, 530, 531, 535, 536, 549, 550,
	551, 552, 454, 553, 554, 555, 1213, 559, 321, 560,
	561, 562, 590, 296, 563, 564, 565, 566, 480, 567,
	568, 569, 591, 318, 592, 319, 593, 594, 297, 595,
	596, 783, 598, 597, 601, 322, 323, 257, 602, 130,
	320, 570, 603, 604, 660, 605, 131, 132, 133, 607,
	298, 134, 299, 608, 300, 301, 609, 661, 135, 610,
	611, 612, 683, 968, 687, 688, 136, 137, 138, 684,
	139, 689, 690, 268, 302, 140, 141, 694, 699, 696,
	697, 700, 142, 701, 1203, 321, 143, 144, 145, 702,
	146, 703, 1211, 1212, 704, 705, 147, 708, 258, 259,
	260, 261, 262, 263, 264, 265, 269, 709, 706, 707,
	711, 710, 322, 323, 532, 148, 149, 712, 713, 714,
	150, 718, 716, 717, 719, 1487, 721, 151, 720, 455,
	722, 152, 153, 154, 724, 725, 155, 726, 727, 156,
	157, 728, 729, 731, 819, 735, 737, 266, 820, 730,
	158, 732, 739, 738, 750, 740, 159, 160, 741, 161,
	162, 163, 164, 1488, 746, 747, 753, 757, 754, 755,
	821, 756, 759, 165, 797, 1489, 814, 798, 760, 762,
	763, 267, 166, 766, 167, 168, 822, 169, 790, 799,
	170, 171, 1490, 767, 172, 768, 769, 770, 823, 1491,
	800, 772, 773, 824, 1492, 173, 1493, 801, 802, 803,
	774, 804, 775, 776, 777, 825, 812, 778, 813, 1494,
	76, 816, 826, 779, 815, 174, 175, 827, 176, 828,
	817, 872, 177, 77, 873, 818, 178, 179, 180, 181,
	182, 875, 829, 780, 183, 184, 642, 464, 643, 874,
	781, 644, 1495, 185, 782, 78, 645, 876, 79, 80,
	785, 866, 268, 787, 81, 877, 82, 465, 1496, 879,
	830, 646, 647, 466, 792, 831, 648, 793, 794, 867,
	649, 868, 869, 1399, 1400, 186, 1497, 187, 1498, 1499,
	880, 881, 882, 188, 883, 269, 884, 832, 189, 885,
	650, 467, 468, 190, 651, 652, 469, 886, 887, 833,
	888, 834, 835, 889, 890, 970, 836, 1089, 1401, 891,
	470, 892, 83, 84, 1094, 971, 893, 471, 895, 898,
	903, 904, 85, 86, 613, 653, 1402, 654, 899, 905,
	906, 907, 908, 1403, 909, 910, 472, 1240, 911, 919,
	920, 655, 87, 88, 2, 3, 1500, 614, 615, 4,
	921, 922, 1404, 923, 924, 925, 926, 616, 1322, 89,
	90, 927, 656, 1501, 473, 928, 929, 5, 930, 837,
	91, 6, 474, 1502, 931, 838, 933, 7, 932, 92,
	1405, 974, 934, 935, 936, 8, 839, 840, 1406, 975,
	475, 948, 937, 972, 657, 1105, 841, 1339, 973, 476,
	477, 9, 1096, 938, 939, 940, 1091, 1097, 658, 941,
	942, 943, 977, 1092, 10, 11, 944, 12, 659, 945,
	949, 950, 951, 952, 13, 1323, 953, 954, 1407, 955,
	956, 978, 478, 479, 1324, 957, 959, 960, 617, 618,
	619, 14, 961, 620, 962, 1325, 963, 964, 965, 1408,
	621, 966, 15, 967, 16, 976, 979, 980, 981, 982,
	983, 984, 985, 622, 623, 93, 94, 95, 1326, 986,
	17, 987, 988, 1340, 989, 1095, 990, 991, 992, 993,
	624, 625, 994, 660, 1327, 995, 996, 18, 997, 998,
	480, 999, 1000, 1001, 1002, 1104, 661, 1003, 1004, 1005,
	1006, 1106, 1099, 1328, 1329, 626, 1007, 1341, 1008, 1330,
	1331, 1332, 1333, 1009, 1010, 1011, 1012, 1013, 1107, 19,
	1036, 1059, 1334, 1342, 1060, 1087, 1061, 1062, 20, 21,
	1063, 1064, 1065, 1066, 1067, 22, 23, 1068, 1069, 1070,
	1071, 1072, 1343, 1344, 1073, 1074, 1075, 1081, 1345, 1346,
	1347, 1348, 1082, 1014, 1015, 1016, 1017, 1018, 1083, 1019,
	1020, 1349, 1021, 1022, 1023, 1024, 1084, 1085, 1025, 1086,
	1093, 1090, 1100, 1101, 1098, 1102, 1103, 1108, 1026, 1027,
	1028, 1029, 1030, 1031, 1109, 1110, 1032, 1111, 1113, 1033,
	1037, 1038, 1039, 1040, 1041, 1112, 1042, 1043, 1114, 1044,
	1045, 1046, 1047, 1115, 1116, 1048, 1117, 1118, 1121, 1143,
	1167, 1122, 1123, 1124, 1125, 1049, 1050, 1051, 1052, 1053,
	1054, 1126, 1127, 1055, 1168, 1128, 1056, 1438, 1439, 1440,
	1441, 1442, 1129, 1443, 1444, 1169, 1445, 1446, 1447, 1448,
	1144, 1130, 1449, 1131, 1132, 1133, 1189, 1134, 1135, 1136,
	1137, 1138, 1450, 1451, 1452, 1453, 1454, 1455, 1139, 1140,
	1456, 1141, 1142, 1457, 1191, 1193, 1145, 1146, 1148, 1149,
	1150, 1151, 1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159,
	1160, 1162, 1163, 1164, 1170, 1171, 1172, 1173, 1174, 1175,
	1201, 1176, 1177, 1202, 1204, 1178, 1179, 1180, 1181, 1182,
	1183, 1184, 1185, 1186, 1187, 1188, 1205, 1192, 1206, 1190,
	1207, 1194, 1209, 1195, 1208, 1210, 1218, 1214, 1215, 1219,
	1220, 1221, 1222, 1223, 1224, 1225, 1226, 1227, 1230, 1228,
	1233, 1229, 1235, 1231, 1236, 1232, 1234, 1237, 1238, 1239,
	1254, 1266, 1255, 1260, 1261, 1262, 1263, 1264, 1265, 1270,
	1271, 1272, 1282, 1273, 1274, 1275, 1276, 1277, 1278, 1279,
	1280, 1281, 1285, 1290, 1291, 1292, 1295, 1296, 1297, 1293,
	1299, 1305, 1307, 1311, 1315, 1313, 1317, 1318, 1319, 1375,
	1320, 1298, 1300, 1301, 1302, 1303, 1304, 1306, 1308, 1309,
	1321, 1310, 1312, 1414, 1314, 1316, 1337, 1338, 1352, 1353,
	1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363,
	1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1421, 1372,
	344, 1166, 1511, 1510, 571, 1512, 1483, 1373, 1374, 947,
	796, 784, 1481, 1415, 1480, 871, 1506, 1509, 897, 1507,
	789, 1482, 969, 1508, 377, 1477, 693, 902, 448, 365,
	765, 1391, 0, 1390, 1479, 1478, 0, 0, 0, 1379,
	1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1416, 1417,
	0, 1418, 1419, 686, 1420, 1425, 1426, 0, 0, 0,
	0, 1427, 1428, 1429, 1430, 1431, 1432, 1433, 1434, 1435,
	1436, 1437, 1460, 1461, 1462, 0, 0, 0, 0, 0,
	533, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 538, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 557
};

static const yytype_int16 yycheck[] = {
	351, 352, 441, 1, 1, 83, 1, 358, 1, 1,
	1, 266, 1, 1, 268, 270, 266, 267, 1, 15,
	16, 17, 1, 1, 1, 1, 12, 1, 268, 266,
	8, 9, 10, 270, 266, 13, 160, 388, 270, 268,
	391, 268, 20, 11, 268, 13, 1, 12, 1, 268,
	28, 29, 30, 42, 32, 203, 204, 408, 266, 37,
	38, 14, 270, 31, 53, 416, 44, 35, 42, 268,
	48, 49, 50, 1, 52, 426, 427, 60, 429, 53,
	58, 1, 268, 36, 203, 204, 39, 40, 439, 440,
	160, 442, 45, 266, 47, 23, 268, 270, 266, 77,
	78, 96, 270, 96, 82, 268, 1, 90, 96, 4,
	266, 89, 160, 96, 270, 93, 94, 95, 1, 96,
	98, 268, 266, 101, 102, 1, 270, 266, 1, 266,
	127, 270, 5, 270, 112, 127, 127, 105, 127, 268,
	118, 119, 138, 121, 122, 123, 124, 23, 127, 125,
	103, 104, 268, 127, 27, 268, 51, 135, 266, 54,
	113, 114, 270, 241, 162, 268, 144, 162, 146, 147,
	43, 149, 127, 266, 152, 153, 159, 270, 156, 155,
	133, 134, 55, 162, 266, 162, 1, 60, 270, 167,
	912, 913, 914, 915, 916, 193, 193, 150, 151, 72,
	268, 193, 193, 131, 555, 125, 79, 268, 161, 187,
	188, 84, 190, 86, 193, 110, 194, 170, 1, 205,
	198, 199, 200, 201, 202, 266, 99, 269, 206, 207,
	269, 46, 127, 269, 162, 155, 269, 215, 193, 269,
	205, 24, 25, 269, 1, 269, 61, 1076, 1077, 1078,
	269, 34, 223, 224, 127, 131, 254, 254, 269, 132,
	269, 269, 269, 254, 269, 1, 269, 269, 83, 247,
	85, 249, 87, 88, 267, 1, 267, 255, 267, 162,
	248, 154, 260, 268, 267, 21, 162, 265, 267, 267,
	267, 27, 107, 166, 269, 168, 169, 1, 268, 3,
	173, 268, 6, 256, 257, 258, 269, 11, 269, 269,
	193, 269, 267, 269, 267, 269, 42, 269, 269, 55,
	56, 269, 26, 27, 60, 269, 269, 31, 269, 269,
	1, 35, 115, 116, 117, 269, 269, 120, 74, 267,
	269, 266, 269, 269, 127, 81, 269, 267, 1, 266,
	269, 55, 1, 269, 269, 59, 60, 140, 141, 254,
	269, 269, 269, 236, 100, 91, 269, 269, 269, 242,
	127, 254, 267, 269, 157, 158, 1, 269, 269, 4,
	253, 254, 269, 269, 267, 269, 90, 269, 92, 60,
	263, 138, 128, 42, 267, 269, 266, 269, 269, 182,
	136, 127, 106, 129, 130, 162, 269, 269, 759, 62,
	63, 64, 65, 66, 67, 68, 69, 269, 154, 90,
	269, 269, 269, 127, 269, 96, 51, 163, 164, 54,
	177, 178, 179, 180, 181, 269, 193, 269, 269, 269,
	269, 269, 91, 269, 269, 269, 172, 269, 174, 269,
	269, 269, 267, 269, 160, 159, 269, 269, 111, 269,
	196, 197, 269, 189, 269, 269, 269, 269, 1, 173,
	269, 227, 228, 229, 230, 231, 232, 233, 127, 183,
	129, 130, 269, 269, 267, 110, 160, 269, 159, 269,
	269, 269, 145, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 127, 269, 269, 269, 945, 269, 234, 269,
	269, 269, 160, 46, 269, 269, 269, 269, 254, 269,
	269, 269, 266, 172, 203, 174, 203, 138, 61, 138,
	203, 267, 138, 203, 138, 261, 262, 1, 138, 1,
	189, 267, 203, 203, 248, 138, 8, 9, 10, 203,
	83, 13, 85, 203, 87, 88, 203, 261, 20, 203,
	203, 266, 269, 267, 160, 266, 28, 29, 30, 269,
	32, 269, 269, 226, 107, 37, 38, 203, 160, 203,
	203, 160, 44, 160, 935, 234, 48, 49, 50, 138,
	52, 160, 943, 944, 138, 203, 58, 138, 62, 63,
	64, 65, 66, 67, 68, 69, 259, 160, 203, 203,
	138, 203, 261, 262, 267, 77, 78, 138, 138, 203,
	82, 138, 203, 203, 160, 5, 138, 89, 203, 254,
	138, 93, 94, 95, 138, 160, 98, 138, 138, 101,
	102, 203, 203, 203, 1, 203, 160, 111, 5, 269,
	112, 269, 203, 160, 138, 203, 118, 119, 203, 121,
	122, 123, 124, 43, 203, 203, 203, 266, 203, 203,
	27, 203, 269, 135, 160, 55, 203, 160, 269, 269,
	269, 145, 144, 266, 146, 147, 43, 149, 266, 160,
	152, 153, 72, 269, 156, 269, 269, 269, 55, 79,
	160, 269, 269, 60, 84, 167, 86, 160, 160, 160,
	269, 160, 269, 269, 269, 72, 160, 269, 160, 99,
	1, 160, 79, 269, 266, 187, 188, 84, 190, 86,
	160, 203, 194, 14, 203, 266, 198, 199, 200, 201,
	202, 160, 99, 269, 206, 207, 1, 1, 3, 203,
	269, 6, 132, 215, 269, 36, 11, 203, 39, 40,
	269, 266, 226, 269, 45, 203, 47, 21, 148, 266,
	127, 26, 27, 27, 269, 132, 31, 269, 269, 269,
	35, 269, 269, 21, 22, 247, 166, 249, 168, 169,
	160, 203, 160, 255, 160, 259, 160, 154, 260, 160,
	55, 55, 56, 265, 59, 60, 60, 160, 160, 166,
	138, 168, 169, 160, 160, 160, 173, 203, 56, 266,
	74, 266, 103, 104, 203, 160, 269, 81, 269, 266,
	266, 266, 113, 114, 1, 90, 74, 92, 269, 266,
	266, 266, 266, 81, 266, 266, 100, 165, 266, 266,
	266, 106, 133, 134, 0, 1, 236, 24, 25, 5,
	266, 266, 100, 266, 266, 266, 266, 34, 99, 150,
	151, 266, 127, 253, 128, 266, 266, 23, 266, 236,
	161, 27, 136, 263, 266, 242, 269, 33, 266, 170,
	128, 160, 269, 269, 269, 41, 253, 254, 136, 160,
	154, 266, 269, 266, 159, 138, 263, 99, 266, 163,
	164, 57, 203, 269, 269, 269, 160, 203, 173, 269,
	269, 269, 266, 160, 70, 71, 269, 73, 183, 269,
	269, 269, 269, 269, 80, 166, 269, 269, 176, 269,
	269, 266, 196, 197, 175, 269, 269, 269, 115, 116,
	117, 97, 269, 120, 269, 186, 269, 269, 269, 197,
	127, 269, 108, 269, 110, 269, 266, 266, 266, 266,
	266, 266, 266, 140, 141, 256, 257, 258, 209, 266,
	126, 266, 266, 175, 266, 160, 266, 266, 266, 266,
	157, 158, 266, 248, 225, 266, 266, 143, 266, 266,
	254, 266, 266, 266, 266, 160, 261, 266, 266, 266,
	266, 160, 203, 244, 245, 182, 266, 209, 266, 250,
	251, 252, 253, 266, 266, 266, 266, 266, 160, 175,
	266, 266, 263, 225, 266, 269, 266, 266, 184, 185,
	266, 266, 266, 266, 266, 191, 192, 266, 266, 266,
	266, 266, 244, 245, 266, 266, 266, 266, 250, 251,
	252, 253, 266, 210, 211, 212, 213, 214, 266, 216,
	217, 263, 219, 220, 221, 222, 266, 266, 225, 266,
	266, 269, 203, 203, 269, 203, 203, 203, 235, 236,
	237, 238, 239, 240, 160, 266, 243, 160, 160, 246,
	210, 211, 212, 213, 214, 269, 216, 217, 266, 219,
	220, 221, 222, 269, 160, 225, 160, 138, 266, 269,
	160, 266, 266, 266, 266, 235, 236, 237, 238, 239,
	240, 266, 266, 243, 160, 266, 246, 210, 211, 212,
	213, 214, 266, 216, 217, 160, 219, 220, 221, 222,
	269, 266, 225, 266, 266, 266, 160, 266, 266, 266,
	266, 266, 235, 236, 237, 238, 239, 240, 266, 266,
	243, 266, 266, 246, 160, 160, 269, 269, 269, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 269, 269, 266, 266, 266, 266, 266, 266,
	138, 266, 266, 138, 138, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 138, 266, 138, 269,
	138, 269, 138, 266, 160, 138, 203, 266, 160, 160,
	160, 203, 203, 203, 160, 269, 160, 160, 138, 160,
	203, 160, 266, 160, 266, 160, 160, 266, 266, 266,
	266, 137, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 165, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 208, 203, 160, 203, 270,
	269, 160, 160, 160, 160, 269, 266, 266, 266, 137,
	266, 203, 203, 203, 203, 203, 203, 203, 203, 203,
	266, 203, 203, 138, 203, 203, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 137, 266,
	71, 842, 1486, 1484, 324, 1505, 1413, 266, 266, 627,
	514, 481, 1398, 1293, 1396, 544, 1464, 1469, 576, 1466,
	504, 1411, 662, 1467, 126, 1389, 383, 584, 191, 96,
	456, 1246, -1, 1244, 1395, 1393, -1, -1, -1, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	-1, 266, 266, 371, 266, 266, 266, -1, -1, -1,
	-1, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, -1, -1, -1, -1, -1,
	270, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, 287, -1, -1, -1,
	-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, -1, 303
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] = {
	0, 272, 0, 1, 5, 23, 27, 33, 41, 57,
	70, 71, 73, 80, 97, 108, 110, 126, 143, 175,
	184, 185, 191, 192, 273, 278, 283, 297, 303, 318,
	355, 374, 388, 414, 421, 431, 440, 471, 481, 487,
	491, 501, 570, 586, 608, 266, 267, 268, 268, 356,
	441, 482, 268, 492, 268, 571, 389, 472, 375, 268,
	268, 319, 415, 268, 268, 422, 432, 1, 42, 53,
	127, 298, 299, 300, 301, 302, 1, 14, 36, 39,
	40, 45, 47, 103, 104, 113, 114, 133, 134, 150,
	151, 161, 170, 256, 257, 258, 587, 588, 589, 590,
	591, 592, 593, 594, 595, 596, 597, 598, 599, 600,
	601, 602, 603, 604, 605, 606, 607, 160, 357, 361,
	160, 442, 446, 268, 1, 96, 488, 489, 490, 268,
	1, 8, 9, 10, 13, 20, 28, 29, 30, 32,
	37, 38, 44, 48, 49, 50, 52, 58, 77, 78,
	82, 89, 93, 94, 95, 98, 101, 102, 112, 118,
	119, 121, 122, 123, 124, 135, 144, 146, 147, 149,
	152, 153, 156, 167, 187, 188, 190, 194, 198, 199,
	200, 201, 202, 206, 207, 215, 247, 249, 255, 260,
	265, 502, 503, 504, 505, 506, 507, 508, 509, 510,
	511, 512, 513, 514, 515, 516, 517, 518, 519, 520,
	521, 522, 523, 524, 525, 526, 527, 528, 529, 530,
	531, 532, 533, 534, 535, 536, 537, 538, 539, 540,
	541, 542, 543, 544, 545, 546, 547, 548, 549, 550,
	551, 552, 553, 554, 555, 556, 557, 561, 565, 566,
	567, 568, 569, 268, 268, 268, 268, 1, 62, 63,
	64, 65, 66, 67, 68, 69, 111, 145, 226, 259,
	304, 305, 306, 307, 308, 309, 310, 311, 312, 313,
	314, 315, 316, 317, 1, 125, 155, 279, 280, 281,
	282, 160, 320, 324, 268, 1, 46, 61, 83, 85,
	87, 88, 107, 609, 610, 611, 612, 613, 614, 615,
	616, 617, 1, 42, 91, 127, 129, 130, 172, 174,
	189, 234, 261, 262, 284, 285, 286, 287, 288, 289,
	290, 291, 292, 293, 294, 295, 296, 268, 268, 266,
	269, 269, 269, 267, 299, 269, 269, 269, 269, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 269, 269, 267, 588, 268, 268, 1, 96,
	162, 483, 484, 485, 486, 269, 267, 489, 1, 127,
	162, 193, 493, 497, 498, 499, 500, 269, 269, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 269, 562, 269, 558, 269, 269, 269, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 269, 269, 269, 269, 269, 267, 503, 1,
	4, 51, 54, 110, 127, 254, 572, 573, 574, 575,
	576, 580, 581, 582, 1, 21, 27, 55, 56, 60,
	74, 81, 100, 128, 136, 154, 163, 164, 196, 197,
	254, 390, 391, 392, 393, 394, 395, 396, 397, 404,
	405, 406, 407, 408, 409, 410, 411, 412, 413, 1,
	162, 193, 254, 473, 477, 478, 479, 480, 1, 60,
	90, 96, 159, 376, 380, 381, 382, 386, 387, 266,
	269, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 267, 305, 266, 269, 269, 267, 280, 268,
	1, 23, 131, 162, 416, 417, 418, 419, 420, 269,
	269, 269, 269, 269, 269, 269, 267, 610, 266, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	267, 285, 1, 127, 193, 254, 423, 424, 425, 426,
	427, 1, 127, 193, 433, 434, 435, 436, 160, 160,
	160, 266, 203, 203, 138, 138, 203, 203, 138, 275,
	275, 138, 138, 203, 203, 138, 275, 203, 203, 203,
	203, 203, 266, 1, 24, 25, 34, 115, 116, 117,
	120, 127, 140, 141, 157, 158, 182, 358, 359, 360,
	362, 363, 364, 365, 366, 367, 368, 369, 370, 371,
	372, 373, 1, 3, 6, 11, 26, 27, 31, 35,
	55, 59, 60, 90, 92, 106, 127, 159, 173, 183,
	248, 261, 443, 444, 445, 447, 448, 449, 450, 451,
	452, 453, 454, 461, 462, 463, 464, 465, 466, 467,
	468, 469, 470, 269, 269, 267, 484, 160, 266, 269,
	269, 494, 267, 498, 203, 275, 203, 203, 275, 160,
	160, 160, 138, 160, 138, 203, 203, 203, 138, 160,
	203, 138, 138, 138, 203, 275, 203, 203, 138, 160,
	203, 138, 138, 275, 138, 160, 138, 138, 203, 203,
	269, 203, 269, 275, 275, 203, 275, 160, 160, 203,
	203, 203, 203, 204, 203, 204, 203, 203, 275, 275,
	138, 277, 275, 203, 203, 203, 203, 266, 583, 269,
	269, 577, 269, 269, 267, 573, 266, 269, 269, 269,
	269, 398, 269, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 269, 267, 391, 269, 474, 269, 267, 478,
	266, 377, 269, 269, 269, 267, 381, 160, 160, 160,
	160, 160, 160, 160, 160, 227, 228, 229, 230, 231,
	232, 233, 160, 160, 203, 266, 160, 160, 266, 1,
	5, 27, 43, 55, 60, 72, 79, 84, 86, 99,
	127, 132, 154, 166, 168, 169, 173, 236, 242, 253,
	254, 263, 321, 322, 323, 325, 326, 327, 328, 329,
	330, 334, 335, 336, 337, 338, 339, 340, 341, 342,
	343, 344, 345, 346, 347, 348, 266, 269, 269, 269,
	267, 417, 203, 203, 203, 160, 203, 203, 275, 266,
	160, 203, 160, 160, 160, 160, 160, 160, 138, 160,
	160, 266, 266, 269, 428, 269, 267, 424, 266, 269,
	437, 267, 434, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 177, 178, 179, 180, 181, 274, 275, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 269, 269, 269, 269, 267, 359, 266, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 455, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 267, 444,
	160, 160, 266, 266, 160, 160, 269, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 210, 211, 212, 213, 214, 216,
	217, 219, 220, 221, 222, 225, 235, 236, 237, 238,
	239, 240, 243, 246, 563, 564, 266, 210, 211, 212,
	213, 214, 216, 217, 219, 220, 221, 222, 225, 235,
	236, 237, 238, 239, 240, 243, 246, 559, 560, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 15, 16, 17, 276,
	277, 266, 266, 266, 266, 266, 266, 269, 275, 203,
	269, 160, 160, 266, 203, 160, 203, 203, 269, 203,
	203, 203, 203, 203, 160, 138, 160, 160, 203, 160,
	266, 160, 269, 160, 266, 269, 160, 160, 138, 384,
	385, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 269, 269, 269, 269, 349, 269, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	269, 331, 269, 269, 269, 267, 322, 160, 160, 160,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 160,
	269, 160, 266, 160, 269, 266, 274, 274, 274, 274,
	274, 138, 138, 275, 138, 138, 138, 138, 160, 138,
	138, 275, 275, 277, 266, 160, 223, 224, 203, 160,
	160, 203, 203, 203, 160, 269, 160, 160, 160, 160,
	138, 160, 160, 203, 160, 266, 266, 266, 266, 266,
	165, 495, 496, 266, 270, 266, 270, 276, 276, 276,
	12, 205, 584, 585, 266, 266, 12, 205, 578, 579,
	266, 266, 266, 266, 266, 266, 137, 399, 400, 402,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 165, 475, 476, 266, 83, 241, 378, 379,
	266, 266, 208, 270, 383, 203, 160, 203, 203, 269,
	203, 203, 203, 203, 203, 160, 203, 160, 203, 203,
	203, 160, 203, 269, 203, 160, 203, 266, 266, 266,
	266, 266, 99, 166, 175, 186, 209, 225, 244, 245,
	250, 251, 252, 253, 263, 429, 430, 266, 266, 99,
	175, 209, 225, 244, 245, 250, 251, 252, 253, 263,
	438, 439, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 137, 456, 457, 459, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 266, 270,
	564, 560, 266, 270, 266, 270, 401, 266, 270, 21,
	22, 56, 74, 81, 100, 128, 136, 176, 197, 403,
	266, 270, 266, 270, 138, 385, 266, 266, 266, 266,
	266, 137, 350, 351, 353, 266, 266, 266, 266, 266,
	266, 266, 266, 266, 266, 266, 266, 266, 210, 211,
	212, 213, 214, 216, 217, 219, 220, 221, 222, 225,
	235, 236, 237, 238, 239, 240, 243, 246, 332, 333,
	266, 266, 266, 266, 270, 266, 270, 458, 266, 270,
	11, 13, 31, 35, 105, 248, 460, 496, 585, 579,
	403, 400, 476, 379, 352, 266, 270, 5, 43, 55,
	72, 79, 84, 86, 99, 132, 148, 166, 168, 169,
	236, 253, 263, 354, 266, 270, 430, 439, 460, 457,
	354, 351, 333
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h>		/* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

 /*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
	static void
yy_symbol_value_print(FILE * yyoutput, int yytype, YYSTYPE const *const yyvaluep)
#else
	static void
yy_symbol_value_print(yyoutput, yytype, yyvaluep)
     FILE *yyoutput;
     int yytype;
     YYSTYPE const *const yyvaluep;
#endif
{
	if(!yyvaluep)
		return;
# ifdef YYPRINT
	if(yytype < YYNTOKENS)
		YYPRINT(yyoutput, yytoknum[yytype], *yyvaluep);
# else
	YYUSE(yyoutput);
# endif
	switch (yytype)
	{
	default:
		break;
	}
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print(FILE * yyoutput, int yytype, YYSTYPE const *const yyvaluep)
#else
static void
yy_symbol_print(yyoutput, yytype, yyvaluep)
     FILE *yyoutput;
     int yytype;
     YYSTYPE const *const yyvaluep;
#endif
{
	if(yytype < YYNTOKENS)
		YYFPRINTF(yyoutput, "token %s (", yytname[yytype]);
	else
		YYFPRINTF(yyoutput, "nterm %s (", yytname[yytype]);

	yy_symbol_value_print(yyoutput, yytype, yyvaluep);
	YYFPRINTF(yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print(yytype_int16 * bottom, yytype_int16 * top)
#else
static void
yy_stack_print(bottom, top)
     yytype_int16 *bottom;
     yytype_int16 *top;
#endif
{
	YYFPRINTF(stderr, "Stack now");
	for(; bottom <= top; ++bottom)
		YYFPRINTF(stderr, " %d", *bottom);
	YYFPRINTF(stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print(YYSTYPE * yyvsp, int yyrule)
#else
static void
yy_reduce_print(yyvsp, yyrule)
     YYSTYPE *yyvsp;
     int yyrule;
#endif
{
	int yynrhs = yyr2[yyrule];
	int yyi;
	unsigned long int yylno = yyrline[yyrule];
	YYFPRINTF(stderr, "Reducing stack by rule %d (line %lu):\n", yyrule - 1, yylno);
	/* The symbols being reduced.  */
	for(yyi = 0; yyi < yynrhs; yyi++)
	{
		fprintf(stderr, "   $%d = ", yyi + 1);
		yy_symbol_print(stderr, yyrhs[yyprhs[yyrule] + yyi],
				&(yyvsp[(yyi + 1) - (yynrhs)]));
		fprintf(stderr, "\n");
	}
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen(const char *yystr)
#else
static YYSIZE_T
yystrlen(yystr)
     const char *yystr;
#endif
{
	YYSIZE_T yylen;
	for(yylen = 0; yystr[yylen]; yylen++)
		continue;
	return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy(char *yydest, const char *yysrc)
#else
static char *
yystpcpy(yydest, yysrc)
     char *yydest;
     const char *yysrc;
#endif
{
	char *yyd = yydest;
	const char *yys = yysrc;

	while((*yyd++ = *yys++) != '\0')
		continue;

	return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr(char *yyres, const char *yystr)
{
	if(*yystr == '"')
	{
		YYSIZE_T yyn = 0;
		char const *yyp = yystr;

		for(;;)
			switch (*++yyp)
			{
			case '\'':
			case ',':
				goto do_not_strip_quotes;

			case '\\':
				if(*++yyp != '\\')
					goto do_not_strip_quotes;
				/* Fall through.  */
			default:
				if(yyres)
					yyres[yyn] = *yyp;
				yyn++;
				break;

			case '"':
				if(yyres)
					yyres[yyn] = '\0';
				return yyn;
			}
	      do_not_strip_quotes:;
	}

	if(!yyres)
		return yystrlen(yystr);

	return yystpcpy(yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error(char *yyresult, int yystate, int yychar)
{
	int yyn = yypact[yystate];

	if(!(YYPACT_NINF < yyn && yyn <= YYLAST))
		return 0;
	else
	{
		int yytype = YYTRANSLATE(yychar);
		YYSIZE_T yysize0 = yytnamerr(0, yytname[yytype]);
		YYSIZE_T yysize = yysize0;
		YYSIZE_T yysize1;
		int yysize_overflow = 0;
		enum
		{ YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
		char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
		int yyx;

# if 0
		/* This is so xgettext sees the translatable formats that are
		   constructed on the fly.  */
		YY_("syntax error, unexpected %s");
		YY_("syntax error, unexpected %s, expecting %s");
		YY_("syntax error, unexpected %s, expecting %s or %s");
		YY_("syntax error, unexpected %s, expecting %s or %s or %s");
		YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
		char *yyfmt;
		char const *yyf;
		static char const yyunexpected[] = "syntax error, unexpected %s";
		static char const yyexpecting[] = ", expecting %s";
		static char const yyor[] = " or %s";
		char yyformat[sizeof yyunexpected
			      + sizeof yyexpecting - 1
			      + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2) * (sizeof yyor - 1))];
		char const *yyprefix = yyexpecting;

		/* Start YYX at -YYN if negative to avoid negative indexes in
		   YYCHECK.  */
		int yyxbegin = yyn < 0 ? -yyn : 0;

		/* Stay within bounds of both yycheck and yytname.  */
		int yychecklim = YYLAST - yyn + 1;
		int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
		int yycount = 1;

		yyarg[0] = yytname[yytype];
		yyfmt = yystpcpy(yyformat, yyunexpected);

		for(yyx = yyxbegin; yyx < yyxend; ++yyx)
			if(yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
			{
				if(yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
				{
					yycount = 1;
					yysize = yysize0;
					yyformat[sizeof yyunexpected - 1] = '\0';
					break;
				}
				yyarg[yycount++] = yytname[yyx];
				yysize1 = yysize + yytnamerr(0, yytname[yyx]);
				yysize_overflow |= (yysize1 < yysize);
				yysize = yysize1;
				yyfmt = yystpcpy(yyfmt, yyprefix);
				yyprefix = yyor;
			}

		yyf = YY_(yyformat);
		yysize1 = yysize + yystrlen(yyf);
		yysize_overflow |= (yysize1 < yysize);
		yysize = yysize1;

		if(yysize_overflow)
			return YYSIZE_MAXIMUM;

		if(yyresult)
		{
			/* Avoid sprintf, as that infringes on the user's name space.
			   Don't have undefined behavior even if the translation
			   produced a string with the wrong number of "%s"s.  */
			char *yyp = yyresult;
			int yyi = 0;
			while((*yyp = *yyf) != '\0')
			{
				if(*yyp == '%' && yyf[1] == 's' && yyi < yycount)
				{
					yyp += yytnamerr(yyp, yyarg[yyi++]);
					yyf += 2;
				}
				else
				{
					yyp++;
					yyf++;
				}
			}
		}
		return yysize;
	}
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

 /*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
	static void
yydestruct(const char *yymsg, int yytype, YYSTYPE * yyvaluep)
#else
	static void
yydestruct(yymsg, yytype, yyvaluep)
     const char *yymsg;
     int yytype;
     YYSTYPE *yyvaluep;
#endif
{
	YYUSE(yyvaluep);

	if(!yymsg)
		yymsg = "Deleting";
	YY_SYMBOL_PRINT(yymsg, yytype, yyvaluep, yylocationp);

	switch (yytype)
	{

	default:
		break;
	}
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse(void *YYPARSE_PARAM);
#else
int yyparse();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse(void);
#else
int yyparse();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse(void *YYPARSE_PARAM)
#else
int
yyparse(YYPARSE_PARAM)
     void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse(void)
#else
int
yyparse()
#endif
#endif
{

	int yystate;
	int yyn;
	int yyresult;
	/* Number of tokens to shift before error messages enabled.  */
	int yyerrstatus;
	/* Look-ahead token as an internal (translated) token number.  */
	int yytoken = 0;
#if YYERROR_VERBOSE
	/* Buffer for error messages, and its allocated size.  */
	char yymsgbuf[128];
	char *yymsg = yymsgbuf;
	YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

	/* Three stacks and their tools:
	   `yyss': related to states,
	   `yyvs': related to semantic values,
	   `yyls': related to locations.

	   Refer to the stacks thru separate pointers, to allow yyoverflow
	   to reallocate them elsewhere.  */

	/* The state stack.  */
	yytype_int16 yyssa[YYINITDEPTH];
	yytype_int16 *yyss = yyssa;
	yytype_int16 *yyssp;

	/* The semantic value stack.  */
	YYSTYPE yyvsa[YYINITDEPTH];
	YYSTYPE *yyvs = yyvsa;
	YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

	YYSIZE_T yystacksize = YYINITDEPTH;

	/* The variables used to return semantic value and location from the
	   action routines.  */
	YYSTYPE yyval;


	/* The number of symbols on the RHS of the reduced rule.
	   Keep to zero when no symbol should be popped.  */
	int yylen = 0;

	YYDPRINTF((stderr, "Starting parse\n"));

	yystate = 0;
	yyerrstatus = 0;
	yynerrs = 0;
	yychar = YYEMPTY;	/* Cause a token to be read.  */

	/* Initialize stack pointers.
	   Waste one element of value and location stack
	   so that they stay on the same level as the state stack.
	   The wasted elements are never initialized.  */

	yyssp = yyss;
	yyvsp = yyvs;

	goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
      yynewstate:
	/* In all cases, when you get here, the value and location stacks
	   have just been pushed.  So pushing a state here evens the stacks.  */
	yyssp++;

      yysetstate:
	*yyssp = yystate;

	if(yyss + yystacksize - 1 <= yyssp)
	{
		/* Get the current used size of the three stacks, in elements.  */
		YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
		{
			/* Give user a chance to reallocate the stack.  Use copies of
			   these so that the &'s don't force the real ones into
			   memory.  */
			YYSTYPE *yyvs1 = yyvs;
			yytype_int16 *yyss1 = yyss;


			/* Each stack pointer address is followed by the size of the
			   data in use in that stack, in bytes.  This used to be a
			   conditional around just the two extra args, but that might
			   be undefined if yyoverflow is a macro.  */
			yyoverflow(YY_("memory exhausted"),
				   &yyss1, yysize * sizeof(*yyssp),
				   &yyvs1, yysize * sizeof(*yyvsp), &yystacksize);

			yyss = yyss1;
			yyvs = yyvs1;
		}
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
		goto yyexhaustedlab;
# else
		/* Extend the stack our own way.  */
		if(YYMAXDEPTH <= yystacksize)
			goto yyexhaustedlab;
		yystacksize *= 2;
		if(YYMAXDEPTH < yystacksize)
			yystacksize = YYMAXDEPTH;

		{
			yytype_int16 *yyss1 = yyss;
			union yyalloc *yyptr =
				(union yyalloc *) YYSTACK_ALLOC(YYSTACK_BYTES(yystacksize));
			if(!yyptr)
				goto yyexhaustedlab;
			YYSTACK_RELOCATE(yyss);
			YYSTACK_RELOCATE(yyvs);

#  undef YYSTACK_RELOCATE
			if(yyss1 != yyssa)
				YYSTACK_FREE(yyss1);
		}
# endif
#endif /* no yyoverflow */

		yyssp = yyss + yysize - 1;
		yyvsp = yyvs + yysize - 1;


		YYDPRINTF((stderr, "Stack size increased to %lu\n",
			   (unsigned long int) yystacksize));

		if(yyss + yystacksize - 1 <= yyssp)
			YYABORT;
	}

	YYDPRINTF((stderr, "Entering state %d\n", yystate));

	goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
      yybackup:

	/* Do appropriate processing given the current state.  Read a
	   look-ahead token if we need one and don't already have one.  */

	/* First try to decide what to do without reference to look-ahead token.  */
	yyn = yypact[yystate];
	if(yyn == YYPACT_NINF)
		goto yydefault;

	/* Not known => get a look-ahead token if don't already have one.  */

	/* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
	if(yychar == YYEMPTY)
	{
		YYDPRINTF((stderr, "Reading a token: "));
		yychar = YYLEX;
	}

	if(yychar <= YYEOF)
	{
		yychar = yytoken = YYEOF;
		YYDPRINTF((stderr, "Now at end of input.\n"));
	}
	else
	{
		yytoken = YYTRANSLATE(yychar);
		YY_SYMBOL_PRINT("Next token is", yytoken, &yylval, &yylloc);
	}

	/* If the proper action on seeing token YYTOKEN is to reduce or to
	   detect an error, take that action.  */
	yyn += yytoken;
	if(yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
		goto yydefault;
	yyn = yytable[yyn];
	if(yyn <= 0)
	{
		if(yyn == 0 || yyn == YYTABLE_NINF)
			goto yyerrlab;
		yyn = -yyn;
		goto yyreduce;
	}

	if(yyn == YYFINAL)
		YYACCEPT;

	/* Count tokens shifted since error; after three, turn off error
	   status.  */
	if(yyerrstatus)
		yyerrstatus--;

	/* Shift the look-ahead token.  */
	YY_SYMBOL_PRINT("Shifting", yytoken, &yylval, &yylloc);

	/* Discard the shifted token unless it is eof.  */
	if(yychar != YYEOF)
		yychar = YYEMPTY;

	yystate = yyn;
	*++yyvsp = yylval;

	goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
      yydefault:
	yyn = yydefact[yystate];
	if(yyn == 0)
		goto yyerrlab;
	goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
      yyreduce:
	/* yyn is the number of a rule to reduce with.  */
	yylen = yyr2[yyn];

	/* If YYLEN is nonzero, implement the default value of the action:
	   `$$ = $1'.

	   Otherwise, the following line sets YYVAL to garbage.
	   This behavior is undocumented and Bison
	   users should not rely upon it.  Assigning to YYVAL
	   unconditionally makes the parser a bit smaller, and it avoids a
	   GCC warning that YYVAL may be used uninitialized.  */
	yyval = yyvsp[1 - yylen];


	YY_REDUCE_PRINT(yyn);
	switch (yyn)
	{
	case 26:
#line 431 "ircd_parser.y"
		{
			(yyval.number) = 0;
		}
		break;

	case 28:
#line 433 "ircd_parser.y"
		{
			(yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number);
		}
		break;

	case 29:
#line 437 "ircd_parser.y"
		{
			(yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);
		}
		break;

	case 30:
#line 441 "ircd_parser.y"
		{
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 + (yyvsp[(3) - (3)].number);
		}
		break;

	case 31:
#line 445 "ircd_parser.y"
		{
			(yyval.number) =
				(yyvsp[(1) - (3)].number) * 60 * 60 + (yyvsp[(3) - (3)].number);
		}
		break;

	case 32:
#line 449 "ircd_parser.y"
		{
			(yyval.number) =
				(yyvsp[(1) - (3)].number) * 60 * 60 * 24 +
				(yyvsp[(3) - (3)].number);
		}
		break;

	case 33:
#line 453 "ircd_parser.y"
		{
			(yyval.number) =
				(yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 7 +
				(yyvsp[(3) - (3)].number);
		}
		break;

	case 34:
#line 458 "ircd_parser.y"
		{
			(yyval.number) = 0;
		}
		break;

	case 36:
#line 459 "ircd_parser.y"
		{
			(yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number);
		}
		break;

	case 37:
#line 460 "ircd_parser.y"
		{
			(yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);
		}
		break;

	case 38:
#line 461 "ircd_parser.y"
		{
			(yyval.number) =
				(yyvsp[(1) - (3)].number) * 1024 + (yyvsp[(3) - (3)].number);
		}
		break;

	case 39:
#line 462 "ircd_parser.y"
		{
			(yyval.number) =
				(yyvsp[(1) - (3)].number) * 1024 * 1024 + (yyvsp[(3) - (3)].number);
		}
		break;

	case 46:
#line 476 "ircd_parser.y"
		{
#ifndef STATIC_MODULES		/* NOOP in the static case */
			if(ypass == 2)
			{
				char *m_bn;

				m_bn = basename(yylval.string);

				/* I suppose we should just ignore it if it is already loaded(since
				 * otherwise we would flood the opers on rehash) -A1kmm.
				 */
				add_conf_module(yylval.string);
			}
#endif
		}
		break;

	case 47:
#line 493 "ircd_parser.y"
		{
#ifndef STATIC_MODULES
			if(ypass == 2)
				mod_add_path(yylval.string);
#endif
		}
		break;

	case 63:
#line 517 "ircd_parser.y"
		{
#ifdef HAVE_LIBCRYPTO
			if(ypass == 2 && ServerInfo.ctx)
			{
				if(!ServerInfo.rsa_private_key_file)
				{
					yyerror("No rsa_private_key_file specified, SSL disabled");
					break;
				}

				if(SSL_CTX_use_certificate_file(ServerInfo.ctx,
								yylval.string,
								SSL_FILETYPE_PEM) <= 0)
				{
					yyerror(ERR_lib_error_string(ERR_get_error()));
					break;
				}

				if(SSL_CTX_use_PrivateKey_file(ServerInfo.ctx,
							       ServerInfo.rsa_private_key_file,
							       SSL_FILETYPE_PEM) <= 0)
				{
					yyerror(ERR_lib_error_string(ERR_get_error()));
					break;
				}

				if(!SSL_CTX_check_private_key(ServerInfo.ctx))
				{
					yyerror("RSA private key does not match the SSL certificate public key!");
					break;
				}
			}
#endif
		}
		break;

	case 64:
#line 551 "ircd_parser.y"
		{
#ifdef HAVE_LIBCRYPTO
			if(ypass == 1)
			{
				BIO *file;

				if(ServerInfo.rsa_private_key)
				{
					RSA_free(ServerInfo.rsa_private_key);
					ServerInfo.rsa_private_key = NULL;
				}

				if(ServerInfo.rsa_private_key_file)
				{
					MyFree(ServerInfo.rsa_private_key_file);
					ServerInfo.rsa_private_key_file = NULL;
				}

				DupString(ServerInfo.rsa_private_key_file, yylval.string);

				if((file = BIO_new_file(yylval.string, "r")) == NULL)
				{
					yyerror("File open failed, ignoring");
					break;
				}

				ServerInfo.rsa_private_key =
					(RSA *) PEM_read_bio_RSAPrivateKey(file, NULL, 0, NULL);

				BIO_set_close(file, BIO_CLOSE);
				BIO_free(file);

				if(ServerInfo.rsa_private_key == NULL)
				{
					yyerror("Couldn't extract key, ignoring");
					break;
				}

				if(!RSA_check_key(ServerInfo.rsa_private_key))
				{
					RSA_free(ServerInfo.rsa_private_key);
					ServerInfo.rsa_private_key = NULL;

					yyerror("Invalid key, ignoring");
					break;
				}

				/* require 2048 bit (256 byte) key */
				if(RSA_size(ServerInfo.rsa_private_key) != 256)
				{
					RSA_free(ServerInfo.rsa_private_key);
					ServerInfo.rsa_private_key = NULL;

					yyerror("Not a 2048 bit key, ignoring");
				}
			}
#endif
		}
		break;

	case 65:
#line 611 "ircd_parser.y"
		{
			/* this isn't rehashable */
			if(ypass == 2)
			{
				if(ServerInfo.name == NULL)
				{
					/* the ircd will exit() in main() if we dont set one */
					if(strlen(yylval.string) <= HOSTLEN)
						DupString(ServerInfo.name, yylval.string);
				}
			}
		}
		break;

	case 66:
#line 625 "ircd_parser.y"
		{
			/* this isn't rehashable */
			if(ypass == 2 && !ServerInfo.sid)
			{
				if(valid_sid(yylval.string))
					DupString(ServerInfo.sid, yylval.string);
				else
				{
					ilog(L_ERROR,
					     "Ignoring config file entry SID -- invalid SID. Aborting.");
					exit(0);
				}
			}
		}
		break;

	case 67:
#line 640 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(ServerInfo.description);
				DupString(ServerInfo.description, yylval.string);
			}
		}
		break;

	case 68:
#line 649 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				char *p;

				if((p = strchr(yylval.string, ' ')) != NULL)
					p = '\0';

				MyFree(ServerInfo.network_name);
				DupString(ServerInfo.network_name, yylval.string);
			}
		}
		break;

	case 69:
#line 663 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(ServerInfo.network_desc);
				DupString(ServerInfo.network_desc, yylval.string);
			}
		}
		break;

	case 70:
#line 672 "ircd_parser.y"
		{
			if(ypass == 2 && *yylval.string != '*')
			{
				struct addrinfo hints, *res;

				memset(&hints, 0, sizeof(hints));

				hints.ai_family = AF_UNSPEC;
				hints.ai_socktype = SOCK_STREAM;
				hints.ai_flags = AI_PASSIVE | AI_NUMERICHOST;

				if(irc_getaddrinfo(yylval.string, NULL, &hints, &res))
					ilog(L_ERROR, "Invalid netmask for server vhost(%s)",
					     yylval.string);
				else
				{
					assert(res != NULL);

					memcpy(&ServerInfo.ip, res->ai_addr, res->ai_addrlen);
					ServerInfo.ip.ss.ss_family = res->ai_family;
					ServerInfo.ip.ss_len = res->ai_addrlen;
					irc_freeaddrinfo(res);

					ServerInfo.specific_ipv4_vhost = 1;
				}
			}
		}
		break;

	case 71:
#line 700 "ircd_parser.y"
		{
#ifdef IPV6
			if(ypass == 2 && *yylval.string != '*')
			{
				struct addrinfo hints, *res;

				memset(&hints, 0, sizeof(hints));

				hints.ai_family = AF_UNSPEC;
				hints.ai_socktype = SOCK_STREAM;
				hints.ai_flags = AI_PASSIVE | AI_NUMERICHOST;

				if(irc_getaddrinfo(yylval.string, NULL, &hints, &res))
					ilog(L_ERROR, "Invalid netmask for server vhost6(%s)",
					     yylval.string);
				else
				{
					assert(res != NULL);

					memcpy(&ServerInfo.ip6, res->ai_addr, res->ai_addrlen);
					ServerInfo.ip6.ss.ss_family = res->ai_family;
					ServerInfo.ip6.ss_len = res->ai_addrlen;
					irc_freeaddrinfo(res);

					ServerInfo.specific_ipv6_vhost = 1;
				}
			}
#endif
		}
		break;

	case 72:
#line 730 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				recalc_fdlimit(NULL);

				if((yyvsp[(3) - (4)].number) < MAXCLIENTS_MIN)
				{
					char buf[IRCD_BUFSIZE];
					ircsprintf(buf, "MAXCLIENTS too low, setting to %d",
						   MAXCLIENTS_MIN);
					yyerror(buf);
				}
				else if((yyvsp[(3) - (4)].number) > MAXCLIENTS_MAX)
				{
					char buf[IRCD_BUFSIZE];
					ircsprintf(buf, "MAXCLIENTS too high, setting to %d",
						   MAXCLIENTS_MAX);
					yyerror(buf);
				}
				else
					ServerInfo.max_clients = (yyvsp[(3) - (4)].number);
			}
		}
		break;

	case 73:
#line 753 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
				{
					/* Don't become a hub if we have a lazylink active. */
					if(!ServerInfo.hub && uplink && IsCapable(uplink, CAP_LL))
					{
						sendto_realops_flags(UMODE_ALL, L_ALL,
								     "Ignoring config file line hub=yes; "
								     "due to active LazyLink (%s)",
								     uplink->name);
					}
					else
					{
						ServerInfo.hub = 1;
						uplink = NULL;
						delete_capability("HUB");
						add_capability("HUB", CAP_HUB, 1);
					}
				}
				else if(ServerInfo.hub)
				{
					dlink_node *ptr = NULL;

					ServerInfo.hub = 0;
					delete_capability("HUB");

					/* Don't become a leaf if we have a lazylink active. */
					DLINK_FOREACH(ptr, serv_list.head)
					{
						const struct Client *acptr = ptr->data;
						if(MyConnect(acptr) && IsCapable(acptr, CAP_LL))
						{
							sendto_realops_flags(UMODE_ALL, L_ALL,
									     "Ignoring config file line hub=no; "
									     "due to active LazyLink (%s)",
									     acptr->name);
							add_capability("HUB", CAP_HUB, 1);
							ServerInfo.hub = 1;
							break;
						}
					}
				}
			}
		}
		break;

	case 81:
#line 809 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(AdminInfo.name);
				DupString(AdminInfo.name, yylval.string);
			}
		}
		break;

	case 82:
#line 818 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(AdminInfo.email);
				DupString(AdminInfo.email, yylval.string);
			}
		}
		break;

	case 83:
#line 827 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(AdminInfo.description);
				DupString(AdminInfo.description, yylval.string);
			}
		}
		break;

	case 100:
#line 854 "ircd_parser.y"
		{
		}
		break;

	case 101:
#line 858 "ircd_parser.y"
		{
		}
		break;

	case 102:
#line 862 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(ConfigLoggingEntry.userlog, yylval.string,
					sizeof(ConfigLoggingEntry.userlog));
		}
		break;

	case 103:
#line 869 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
					sizeof(ConfigLoggingEntry.failed_operlog));
		}
		break;

	case 104:
#line 876 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(ConfigLoggingEntry.operlog, yylval.string,
					sizeof(ConfigLoggingEntry.operlog));
		}
		break;

	case 105:
#line 883 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
					sizeof(ConfigLoggingEntry.operspylog));
		}
		break;

	case 106:
#line 890 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
					sizeof(ConfigLoggingEntry.glinelog));
		}
		break;

	case 107:
#line 897 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
					sizeof(ConfigLoggingEntry.klinelog));
		}
		break;

	case 108:
#line 904 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
					sizeof(ConfigLoggingEntry.ioerrlog));
		}
		break;

	case 109:
#line 911 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(ConfigLoggingEntry.killlog, yylval.string,
					sizeof(ConfigLoggingEntry.killlog));
		}
		break;

	case 110:
#line 918 "ircd_parser.y"
		{
			if(ypass == 2)
				set_log_level(L_CRIT);
		}
		break;

	case 111:
#line 922 "ircd_parser.y"
		{
			if(ypass == 2)
				set_log_level(L_ERROR);
		}
		break;

	case 112:
#line 926 "ircd_parser.y"
		{
			if(ypass == 2)
				set_log_level(L_WARN);
		}
		break;

	case 113:
#line 930 "ircd_parser.y"
		{
			if(ypass == 2)
				set_log_level(L_NOTICE);
		}
		break;

	case 114:
#line 934 "ircd_parser.y"
		{
			if(ypass == 2)
				set_log_level(L_TRACE);
		}
		break;

	case 115:
#line 938 "ircd_parser.y"
		{
			if(ypass == 2)
				set_log_level(L_INFO);
		}
		break;

	case 116:
#line 942 "ircd_parser.y"
		{
			if(ypass == 2)
				set_log_level(L_DEBUG);
		}
		break;

	case 117:
#line 948 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigLoggingEntry.use_logging = yylval.number;
		}
		break;

	case 118:
#line 957 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				yy_conf = make_conf_item(OPER_TYPE);
				yy_aconf = map_to_conf(yy_conf);
				SetConfEncrypted(yy_aconf);	/* Yes, the default is encrypted */
			}
			else
			{
				MyFree(class_name);
				class_name = NULL;
			}
		}
		break;

	case 119:
#line 970 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct CollectItem *yy_tmp;
				dlink_node *ptr;
				dlink_node *next_ptr;

				conf_add_class_to_conf(yy_conf, class_name);

				/* Now, make sure there is a copy of the "base" given oper
				 * block in each of the collected copies
				 */

				DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
				{
					struct AccessItem *new_aconf;
					struct ConfItem *new_conf;
					yy_tmp = ptr->data;

					new_conf = make_conf_item(OPER_TYPE);
					new_aconf = (struct AccessItem *) map_to_conf(new_conf);

					new_aconf->flags = yy_aconf->flags;

					if(yy_conf->name != NULL)
						DupString(new_conf->name, yy_conf->name);
					if(yy_tmp->user != NULL)
						DupString(new_aconf->user, yy_tmp->user);
					else
						DupString(new_aconf->user, "*");
					if(yy_tmp->host != NULL)
						DupString(new_aconf->host, yy_tmp->host);
					else
						DupString(new_aconf->host, "*");
					conf_add_class_to_conf(new_conf, class_name);
					if(yy_aconf->passwd != NULL)
						DupString(new_aconf->passwd, yy_aconf->passwd);

					new_aconf->port = yy_aconf->port;
#ifdef HAVE_LIBCRYPTO
					if(yy_aconf->rsa_public_key_file != NULL)
					{
						BIO *file;

						DupString(new_aconf->rsa_public_key_file,
							  yy_aconf->rsa_public_key_file);

						file = BIO_new_file(yy_aconf->rsa_public_key_file,
								    "r");
						new_aconf->rsa_public_key =
							(RSA *) PEM_read_bio_RSA_PUBKEY(file, NULL,
											0, NULL);
						BIO_set_close(file, BIO_CLOSE);
						BIO_free(file);
					}
#endif

#ifdef HAVE_LIBCRYPTO
					if(yy_tmp->name
					   && (yy_tmp->passwd || yy_aconf->rsa_public_key)
					   && yy_tmp->host)
#else
					if(yy_tmp->name && yy_tmp->passwd && yy_tmp->host)
#endif
					{
						conf_add_class_to_conf(new_conf, class_name);
						if(yy_tmp->name != NULL)
							DupString(new_conf->name, yy_tmp->name);
					}

					dlinkDelete(&yy_tmp->node, &col_conf_list);
					free_collect_item(yy_tmp);
				}

				yy_conf = NULL;
				yy_aconf = NULL;


				MyFree(class_name);
				class_name = NULL;
			}
		}
		break;

	case 147:
#line 1062 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(strlen(yylval.string) > OPERNICKLEN)
					yylval.string[OPERNICKLEN] = '\0';

				MyFree(yy_conf->name);
				DupString(yy_conf->name, yylval.string);
			}
		}
		break;

	case 148:
#line 1074 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(strlen(yylval.string) > OPERNICKLEN)
					yylval.string[OPERNICKLEN] = '\0';

				MyFree(yy_conf->name);
				DupString(yy_conf->name, yylval.string);
			}
		}
		break;

	case 149:
#line 1086 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct split_nuh_item nuh;

				nuh.nuhmask = yylval.string;
				nuh.nickptr = NULL;
				nuh.userptr = userbuf;
				nuh.hostptr = hostbuf;

				nuh.nicksize = 0;
				nuh.usersize = sizeof(userbuf);
				nuh.hostsize = sizeof(hostbuf);

				split_nuh(&nuh);

				if(yy_aconf->user == NULL)
				{
					DupString(yy_aconf->user, userbuf);
					DupString(yy_aconf->host, hostbuf);
				}
				else
				{
					struct CollectItem *yy_tmp =
						MyMalloc(sizeof(struct CollectItem));

					DupString(yy_tmp->user, userbuf);
					DupString(yy_tmp->host, hostbuf);

					dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
				}
			}
		}
		break;

	case 150:
#line 1120 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yy_aconf->passwd != NULL)
					memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

				MyFree(yy_aconf->passwd);
				DupString(yy_aconf->passwd, yylval.string);
			}
		}
		break;

	case 151:
#line 1132 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					SetConfEncrypted(yy_aconf);
				else
					ClearConfEncrypted(yy_aconf);
			}
		}
		break;

	case 152:
#line 1143 "ircd_parser.y"
		{
#ifdef HAVE_LIBCRYPTO
			if(ypass == 2)
			{
				BIO *file;

				if(yy_aconf->rsa_public_key != NULL)
				{
					RSA_free(yy_aconf->rsa_public_key);
					yy_aconf->rsa_public_key = NULL;
				}

				if(yy_aconf->rsa_public_key_file != NULL)
				{
					MyFree(yy_aconf->rsa_public_key_file);
					yy_aconf->rsa_public_key_file = NULL;
				}

				DupString(yy_aconf->rsa_public_key_file, yylval.string);
				file = BIO_new_file(yylval.string, "r");

				if(file == NULL)
				{
					yyerror("Ignoring rsa_public_key_file -- file doesn't exist");
					break;
				}

				yy_aconf->rsa_public_key =
					(RSA *) PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);

				if(yy_aconf->rsa_public_key == NULL)
				{
					yyerror("Ignoring rsa_public_key_file -- Key invalid; check key syntax.");
					break;
				}

				BIO_set_close(file, BIO_CLOSE);
				BIO_free(file);
			}
#endif /* HAVE_LIBCRYPTO */
		}
		break;

	case 153:
#line 1185 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(class_name);
				DupString(class_name, yylval.string);
			}
		}
		break;

	case 154:
#line 1194 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes = 0;
		}
		break;

	case 158:
#line 1201 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_BOTS;
		}
		break;

	case 159:
#line 1205 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_CCONN;
		}
		break;

	case 160:
#line 1209 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_CCONN_FULL;
		}
		break;

	case 161:
#line 1213 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_DEAF;
		}
		break;

	case 162:
#line 1217 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_DEBUG;
		}
		break;

	case 163:
#line 1221 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_FULL;
		}
		break;

	case 164:
#line 1225 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_SKILL;
		}
		break;

	case 165:
#line 1229 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_NCHANGE;
		}
		break;

	case 166:
#line 1233 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_REJ;
		}
		break;

	case 167:
#line 1237 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_UNAUTH;
		}
		break;

	case 168:
#line 1241 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_SPY;
		}
		break;

	case 169:
#line 1245 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_EXTERNAL;
		}
		break;

	case 170:
#line 1249 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_OPERWALL;
		}
		break;

	case 171:
#line 1253 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_SERVNOTICE;
		}
		break;

	case 172:
#line 1257 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_INVISIBLE;
		}
		break;

	case 173:
#line 1261 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_WALLOP;
		}
		break;

	case 174:
#line 1265 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_SOFTCALLERID;
		}
		break;

	case 175:
#line 1269 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_CALLERID;
		}
		break;

	case 176:
#line 1273 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_LOCOPS;
		}
		break;

	case 177:
#line 1277 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->modes |= UMODE_HIDECHANNELS;
		}
		break;

	case 178:
#line 1283 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
				else
					yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
			}
		}
		break;

	case 179:
#line 1294 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_REMOTE;
				else
					yy_aconf->port &= ~OPER_FLAG_REMOTE;
			}
		}
		break;

	case 180:
#line 1305 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_REMOTEBAN;
				else
					yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
			}
		}
		break;

	case 181:
#line 1316 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_K;
				else
					yy_aconf->port &= ~OPER_FLAG_K;
			}
		}
		break;

	case 182:
#line 1327 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_X;
				else
					yy_aconf->port &= ~OPER_FLAG_X;
			}
		}
		break;

	case 183:
#line 1338 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_UNKLINE;
				else
					yy_aconf->port &= ~OPER_FLAG_UNKLINE;
			}
		}
		break;

	case 184:
#line 1349 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_GLINE;
				else
					yy_aconf->port &= ~OPER_FLAG_GLINE;
			}
		}
		break;

	case 185:
#line 1360 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_N;
				else
					yy_aconf->port &= ~OPER_FLAG_N;
			}
		}
		break;

	case 186:
#line 1371 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_DIE;
				else
					yy_aconf->port &= ~OPER_FLAG_DIE;
			}
		}
		break;

	case 187:
#line 1382 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_REHASH;
				else
					yy_aconf->port &= ~OPER_FLAG_REHASH;
			}
		}
		break;

	case 188:
#line 1393 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_ADMIN;
				else
					yy_aconf->port &= ~OPER_FLAG_ADMIN;
			}
		}
		break;

	case 189:
#line 1404 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
				else
					yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
			}
		}
		break;

	case 190:
#line 1415 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
				else
					yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
			}
		}
		break;

	case 191:
#line 1426 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->port |= OPER_FLAG_OPERWALL;
				else
					yy_aconf->port &= ~OPER_FLAG_OPERWALL;
			}
		}
		break;

	case 192:
#line 1437 "ircd_parser.y"
		{
		}
		break;

	case 196:
#line 1441 "ircd_parser.y"
		{
			not_atom = 1;
		}
		break;

	case 198:
#line 1442 "ircd_parser.y"
		{
			not_atom = 0;
		}
		break;

	case 200:
#line 1445 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
				else
					yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
			}
		}
		break;

	case 201:
#line 1452 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_REMOTE;
				else
					yy_aconf->port |= OPER_FLAG_REMOTE;
			}
		}
		break;

	case 202:
#line 1459 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_K;
				else
					yy_aconf->port |= OPER_FLAG_K;
			}
		}
		break;

	case 203:
#line 1466 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_UNKLINE;
				else
					yy_aconf->port |= OPER_FLAG_UNKLINE;
			}
		}
		break;

	case 204:
#line 1473 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_X;
				else
					yy_aconf->port |= OPER_FLAG_X;
			}
		}
		break;

	case 205:
#line 1480 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_GLINE;
				else
					yy_aconf->port |= OPER_FLAG_GLINE;
			}
		}
		break;

	case 206:
#line 1487 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_DIE;
				else
					yy_aconf->port |= OPER_FLAG_DIE;
			}
		}
		break;

	case 207:
#line 1494 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_REHASH;
				else
					yy_aconf->port |= OPER_FLAG_REHASH;
			}
		}
		break;

	case 208:
#line 1501 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_ADMIN;
				else
					yy_aconf->port |= OPER_FLAG_ADMIN;
			}
		}
		break;

	case 209:
#line 1508 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
				else
					yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
			}
		}
		break;

	case 210:
#line 1515 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_N;
				else
					yy_aconf->port |= OPER_FLAG_N;
			}
		}
		break;

	case 211:
#line 1522 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_OPERWALL;
				else
					yy_aconf->port |= OPER_FLAG_OPERWALL;
			}
		}
		break;

	case 212:
#line 1529 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
				else
					yy_aconf->port |= OPER_FLAG_OPER_SPY;
			}
		}
		break;

	case 213:
#line 1536 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
				else
					yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
			}
		}
		break;

	case 214:
#line 1543 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
				else
					yy_aconf->port |= OPER_FLAG_REMOTEBAN;
			}
		}
		break;

	case 215:
#line 1550 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					ClearConfEncrypted(yy_aconf);
				else
					SetConfEncrypted(yy_aconf);
			}
		}
		break;

	case 216:
#line 1563 "ircd_parser.y"
		{
			if(ypass == 1)
			{
				yy_conf = make_conf_item(CLASS_TYPE);
				yy_class = map_to_conf(yy_conf);
			}
		}
		break;

	case 217:
#line 1570 "ircd_parser.y"
		{
			if(ypass == 1)
			{
				struct ConfItem *cconf = NULL;
				struct ClassItem *class = NULL;

				if(yy_class_name == NULL)
					delete_conf_item(yy_conf);
				else
				{
					cconf = find_exact_name_conf(CLASS_TYPE, yy_class_name,
								     NULL, NULL);

					if(cconf != NULL)	/* The class existed already */
					{
						int user_count = 0;

						rebuild_cidr_class(cconf, yy_class);

						class = map_to_conf(cconf);

						user_count = class->curr_user_count;
						memcpy(class, yy_class, sizeof(*class));
						class->curr_user_count = user_count;
						class->active = 1;

						delete_conf_item(yy_conf);

						MyFree(cconf->name);	/* Allows case change of class name */
						cconf->name = yy_class_name;
					}
					else	/* Brand new class */
					{
						MyFree(yy_conf->name);	/* just in case it was allocated */
						yy_conf->name = yy_class_name;
						yy_class->active = 1;
					}
				}
				yy_class_name = NULL;
			}
		}
		break;

	case 236:
#line 1629 "ircd_parser.y"
		{
			if(ypass == 1)
			{
				MyFree(yy_class_name);
				DupString(yy_class_name, yylval.string);
			}
		}
		break;

	case 237:
#line 1638 "ircd_parser.y"
		{
			if(ypass == 1)
			{
				MyFree(yy_class_name);
				DupString(yy_class_name, yylval.string);
			}
		}
		break;

	case 238:
#line 1647 "ircd_parser.y"
		{
			if(ypass == 1)
				PingFreq(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 239:
#line 1653 "ircd_parser.y"
		{
			if(ypass == 1)
				PingWarning(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 240:
#line 1659 "ircd_parser.y"
		{
			if(ypass == 1)
				MaxPerIp(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 241:
#line 1665 "ircd_parser.y"
		{
			if(ypass == 1)
				ConFreq(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 242:
#line 1671 "ircd_parser.y"
		{
			if(ypass == 1)
				MaxTotal(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 243:
#line 1677 "ircd_parser.y"
		{
			if(ypass == 1)
				MaxGlobal(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 244:
#line 1683 "ircd_parser.y"
		{
			if(ypass == 1)
				MaxLocal(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 245:
#line 1689 "ircd_parser.y"
		{
			if(ypass == 1)
				MaxIdent(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 246:
#line 1695 "ircd_parser.y"
		{
			if(ypass == 1)
				MaxSendq(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 247:
#line 1701 "ircd_parser.y"
		{
			if(ypass == 1)
				CidrBitlenIPV4(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 248:
#line 1707 "ircd_parser.y"
		{
			if(ypass == 1)
				CidrBitlenIPV6(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 249:
#line 1713 "ircd_parser.y"
		{
			if(ypass == 1)
				NumberPerCidr(yy_class) = (yyvsp[(3) - (4)].number);
		}
		break;

	case 250:
#line 1722 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				listener_address = NULL;
				listener_flags = 0;
			}
		}
		break;

	case 251:
#line 1729 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(listener_address);
				listener_address = NULL;
			}
		}
		break;

	case 252:
#line 1738 "ircd_parser.y"
		{
			listener_flags = 0;
		}
		break;

	case 256:
#line 1744 "ircd_parser.y"
		{
			if(ypass == 2)
				listener_flags |= LISTENER_SSL;
		}
		break;

	case 257:
#line 1748 "ircd_parser.y"
		{
			if(ypass == 2)
				listener_flags |= LISTENER_HIDDEN;
		}
		break;

	case 265:
#line 1756 "ircd_parser.y"
		{
			listener_flags = 0;
		}
		break;

	case 269:
#line 1761 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if((listener_flags & LISTENER_SSL))
#ifdef HAVE_LIBCRYPTO
					if(!ServerInfo.ctx)
#endif
					{
						yyerror("SSL not available - port closed");
						break;
					}
				add_listener((yyvsp[(1) - (1)].number), listener_address,
					     listener_flags);
			}
		}
		break;

	case 270:
#line 1775 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				int i;

				if((listener_flags & LISTENER_SSL))
#ifdef HAVE_LIBCRYPTO
					if(!ServerInfo.ctx)
#endif
					{
						yyerror("SSL not available - port closed");
						break;
					}

				for(i = (yyvsp[(1) - (3)].number); i <= (yyvsp[(3) - (3)].number);
				    ++i)
					add_listener(i, listener_address, listener_flags);
			}
		}
		break;

	case 271:
#line 1795 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(listener_address);
				DupString(listener_address, yylval.string);
			}
		}
		break;

	case 272:
#line 1804 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(listener_address);
				DupString(listener_address, yylval.string);
			}
		}
		break;

	case 273:
#line 1816 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				yy_conf = make_conf_item(CLIENT_TYPE);
				yy_aconf = map_to_conf(yy_conf);
			}
			else
			{
				MyFree(class_name);
				class_name = NULL;
			}
		}
		break;

	case 274:
#line 1828 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct CollectItem *yy_tmp = NULL;
				dlink_node *ptr = NULL, *next_ptr = NULL;

				if(yy_aconf->user && yy_aconf->host)
				{
					conf_add_class_to_conf(yy_conf, class_name);
					add_conf_by_address(CONF_CLIENT, yy_aconf);
				}
				else
					delete_conf_item(yy_conf);

				/* copy over settings from first struct */
				DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
				{
					struct AccessItem *new_aconf;
					struct ConfItem *new_conf;

					new_conf = make_conf_item(CLIENT_TYPE);
					new_aconf = map_to_conf(new_conf);

					yy_tmp = ptr->data;

					assert(yy_tmp->user && yy_tmp->host);

					if(yy_aconf->passwd != NULL)
						DupString(new_aconf->passwd, yy_aconf->passwd);
					if(yy_conf->name != NULL)
						DupString(new_conf->name, yy_conf->name);
					if(yy_aconf->passwd != NULL)
						DupString(new_aconf->passwd, yy_aconf->passwd);

					new_aconf->flags = yy_aconf->flags;
					new_aconf->port = yy_aconf->port;

					DupString(new_aconf->user, yy_tmp->user);
					collapse(new_aconf->user);

					DupString(new_aconf->host, yy_tmp->host);
					collapse(new_aconf->host);

					conf_add_class_to_conf(new_conf, class_name);
					add_conf_by_address(CONF_CLIENT, new_aconf);
					dlinkDelete(&yy_tmp->node, &col_conf_list);
					free_collect_item(yy_tmp);
				}

				MyFree(class_name);
				class_name = NULL;
				yy_conf = NULL;
				yy_aconf = NULL;
			}
		}
		break;

	case 294:
#line 1893 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct CollectItem *yy_tmp = NULL;
				struct split_nuh_item nuh;

				nuh.nuhmask = yylval.string;
				nuh.nickptr = NULL;
				nuh.userptr = userbuf;
				nuh.hostptr = hostbuf;

				nuh.nicksize = 0;
				nuh.usersize = sizeof(userbuf);
				nuh.hostsize = sizeof(hostbuf);

				split_nuh(&nuh);

				if(yy_aconf->user == NULL)
				{
					DupString(yy_aconf->user, userbuf);
					DupString(yy_aconf->host, hostbuf);
				}
				else
				{
					yy_tmp = MyMalloc(sizeof(struct CollectItem));

					DupString(yy_tmp->user, userbuf);
					DupString(yy_tmp->host, hostbuf);

					dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
				}
			}
		}
		break;

	case 295:
#line 1930 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				/* be paranoid */
				if(yy_aconf->passwd != NULL)
					memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

				MyFree(yy_aconf->passwd);
				DupString(yy_aconf->passwd, yylval.string);
			}
		}
		break;

	case 296:
#line 1943 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
				else
					yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
			}
		}
		break;

	case 297:
#line 1954 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(class_name);
				DupString(class_name, yylval.string);
			}
		}
		break;

	case 298:
#line 1963 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					SetConfEncrypted(yy_aconf);
				else
					ClearConfEncrypted(yy_aconf);
			}
		}
		break;

	case 299:
#line 1974 "ircd_parser.y"
		{
		}
		break;

	case 303:
#line 1978 "ircd_parser.y"
		{
			not_atom = 1;
		}
		break;

	case 305:
#line 1979 "ircd_parser.y"
		{
			not_atom = 0;
		}
		break;

	case 307:
#line 1982 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
				else
					yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
			}

		}
		break;

	case 308:
#line 1990 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
				else
					yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
			}
		}
		break;

	case 309:
#line 1997 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
				else
					yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
			}
		}
		break;

	case 310:
#line 2004 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
				else
					yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
			}
		}
		break;

	case 311:
#line 2011 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
				else
					yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
			}
		}
		break;

	case 312:
#line 2018 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
				else
					yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
			}
		}
		break;

	case 313:
#line 2025 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
				else
					yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
			}
		}
		break;

	case 314:
#line 2032 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
				else
					yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
			}
		}
		break;

	case 315:
#line 2039 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
				else
					yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
			}
		}
		break;

	case 316:
#line 2046 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
				else
					yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
			}
		}
		break;

	case 317:
#line 2055 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
				else
					yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
			}
		}
		break;

	case 318:
#line 2066 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
				else
					yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
			}
		}
		break;

	case 319:
#line 2077 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
				else
					yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
			}
		}
		break;

	case 320:
#line 2088 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
				else
					yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
			}
		}
		break;

	case 321:
#line 2099 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
				else
					yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
			}
		}
		break;

	case 322:
#line 2110 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
				else
					yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
			}
		}
		break;

	case 323:
#line 2122 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(yy_conf->name);

				if(strlen(yylval.string) < HOSTLEN)
				{
					DupString(yy_conf->name, yylval.string);
					yy_aconf->flags |= CONF_FLAGS_SPOOF_IP;
				}
				else
				{
					ilog(L_ERROR, "Spoofs must be less than %d..ignoring it",
					     HOSTLEN);
					yy_conf->name = NULL;
				}
			}
		}
		break;

	case 324:
#line 2141 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				yy_aconf->flags |= CONF_FLAGS_REDIR;
				MyFree(yy_conf->name);
				DupString(yy_conf->name, yylval.string);
			}
		}
		break;

	case 325:
#line 2151 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				yy_aconf->flags |= CONF_FLAGS_REDIR;
				yy_aconf->port = (yyvsp[(3) - (4)].number);
			}
		}
		break;

	case 326:
#line 2160 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
				else
					yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
			}
		}
		break;

	case 327:
#line 2175 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(resv_reason);
				resv_reason = NULL;
			}
		}
		break;

	case 328:
#line 2182 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(resv_reason);
				resv_reason = NULL;
			}
		}
		break;

	case 335:
#line 2194 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(resv_reason);
				DupString(resv_reason, yylval.string);
			}
		}
		break;

	case 336:
#line 2203 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(IsChanPrefix(*yylval.string))
				{
					char def_reason[] = "No reason";

					create_channel_resv(yylval.string,
							    resv_reason !=
							    NULL ? resv_reason : def_reason, 1);
				}
			}
			/* ignore it for now.. but we really should make a warning if
			 * its an erroneous name --fl_ */
		}
		break;

	case 337:
#line 2218 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				char def_reason[] = "No reason";

				create_nick_resv(yylval.string,
						 resv_reason != NULL ? resv_reason : def_reason, 1);
			}
		}
		break;

	case 338:
#line 2231 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				yy_conf = make_conf_item(ULINE_TYPE);
				yy_match_item = map_to_conf(yy_conf);
				yy_match_item->action = SHARED_ALL;
			}
		}
		break;

	case 339:
#line 2239 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				yy_conf = NULL;
			}
		}
		break;

	case 346:
#line 2250 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(yy_conf->name);
				DupString(yy_conf->name, yylval.string);
			}
		}
		break;

	case 347:
#line 2259 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct split_nuh_item nuh;

				nuh.nuhmask = yylval.string;
				nuh.nickptr = NULL;
				nuh.userptr = userbuf;
				nuh.hostptr = hostbuf;

				nuh.nicksize = 0;
				nuh.usersize = sizeof(userbuf);
				nuh.hostsize = sizeof(hostbuf);

				split_nuh(&nuh);

				DupString(yy_match_item->user, userbuf);
				DupString(yy_match_item->host, hostbuf);
			}
		}
		break;

	case 348:
#line 2281 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action = 0;
		}
		break;

	case 352:
#line 2288 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_KLINE;
		}
		break;

	case 353:
#line 2292 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_TKLINE;
		}
		break;

	case 354:
#line 2296 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_UNKLINE;
		}
		break;

	case 355:
#line 2300 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_XLINE;
		}
		break;

	case 356:
#line 2304 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_TXLINE;
		}
		break;

	case 357:
#line 2308 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_UNXLINE;
		}
		break;

	case 358:
#line 2312 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_RESV;
		}
		break;

	case 359:
#line 2316 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_TRESV;
		}
		break;

	case 360:
#line 2320 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_UNRESV;
		}
		break;

	case 361:
#line 2324 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_LOCOPS;
		}
		break;

	case 362:
#line 2328 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_SERVICES;
		}
		break;

	case 363:
#line 2332 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action |= SHARED_REHASH;
		}
		break;

	case 364:
#line 2336 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_match_item->action = SHARED_ALL;
		}
		break;

	case 365:
#line 2345 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				yy_conf = make_conf_item(CLUSTER_TYPE);
				yy_conf->flags = SHARED_ALL;
			}
		}
		break;

	case 366:
#line 2352 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yy_conf->name == NULL)
					DupString(yy_conf->name, "*");
				yy_conf = NULL;
			}
		}
		break;

	case 372:
#line 2365 "ircd_parser.y"
		{
			if(ypass == 2)
				DupString(yy_conf->name, yylval.string);
		}
		break;

	case 373:
#line 2371 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags = 0;
		}
		break;

	case 377:
#line 2378 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags |= SHARED_KLINE;
		}
		break;

	case 378:
#line 2382 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags |= SHARED_TKLINE;
		}
		break;

	case 379:
#line 2386 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags |= SHARED_UNKLINE;
		}
		break;

	case 380:
#line 2390 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags |= SHARED_XLINE;
		}
		break;

	case 381:
#line 2394 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags |= SHARED_TXLINE;
		}
		break;

	case 382:
#line 2398 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags |= SHARED_UNXLINE;
		}
		break;

	case 383:
#line 2402 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags |= SHARED_RESV;
		}
		break;

	case 384:
#line 2406 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags |= SHARED_TRESV;
		}
		break;

	case 385:
#line 2410 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags |= SHARED_UNRESV;
		}
		break;

	case 386:
#line 2414 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags |= SHARED_LOCOPS;
		}
		break;

	case 387:
#line 2418 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_conf->flags = SHARED_ALL;
		}
		break;

	case 388:
#line 2427 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				yy_conf = make_conf_item(SERVER_TYPE);
				yy_aconf = (struct AccessItem *) map_to_conf(yy_conf);
				yy_aconf->passwd = NULL;
				/* defaults */
				yy_aconf->port = PORTNUM;

				if(ConfigFileEntry.burst_away)
					yy_aconf->flags = CONF_FLAGS_BURST_AWAY;
			}
			else
			{
				MyFree(class_name);
				class_name = NULL;
			}
		}
		break;

	case 389:
#line 2445 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct CollectItem *yy_hconf = NULL;
				struct CollectItem *yy_lconf = NULL;
				dlink_node *ptr;
				dlink_node *next_ptr;
#ifdef HAVE_LIBCRYPTO
				if(yy_aconf->host &&
				   ((yy_aconf->passwd && yy_aconf->spasswd) ||
				    (yy_aconf->rsa_public_key && IsConfCryptLink(yy_aconf))))
#else /* !HAVE_LIBCRYPTO */
				if(yy_aconf->host && !IsConfCryptLink(yy_aconf) &&
				   yy_aconf->passwd && yy_aconf->spasswd)
#endif /* !HAVE_LIBCRYPTO */
				{
					if(conf_add_server(yy_conf, class_name) == -1)
					{
						delete_conf_item(yy_conf);
						yy_conf = NULL;
						yy_aconf = NULL;
					}
				}
				else
				{
					/* Even if yy_conf ->name is NULL
					 * should still unhook any hub/leaf confs still pending
					 */
					unhook_hub_leaf_confs();

					if(yy_conf->name != NULL)
					{
#ifndef HAVE_LIBCRYPTO
						if(IsConfCryptLink(yy_aconf))
							yyerror("Ignoring connect block -- no OpenSSL support");
#else
						if(IsConfCryptLink(yy_aconf)
						   && !yy_aconf->rsa_public_key)
							yyerror("Ignoring connect block -- missing key");
#endif
						if(yy_aconf->host == NULL)
							yyerror("Ignoring connect block -- missing host");
						else if(!IsConfCryptLink(yy_aconf) &&
							(!yy_aconf->passwd || !yy_aconf->spasswd))
							yyerror("Ignoring connect block -- missing password");
					}


					/* XXX
					 * This fixes a try_connections() core (caused by invalid class_ptr
					 * pointers) reported by metalrock. That's an ugly fix, but there
					 * is currently no better way. The entire config subsystem needs an
					 * rewrite ASAP. make_conf_item() shouldn't really add things onto
					 * a doubly linked list immediately without any sanity checks!  -Michael
					 */
					delete_conf_item(yy_conf);

					yy_aconf = NULL;
					yy_conf = NULL;
				}

				/*
				 * yy_conf is still pointing at the server that is having
				 * a connect block built for it. This means, y_aconf->name 
				 * points to the actual irc name this server will be known as.
				 * Now this new server has a set or even just one hub_mask (or leaf_mask)
				 * given in the link list at yy_hconf. Fill in the HUB confs
				 * from this link list now.
				 */
				DLINK_FOREACH_SAFE(ptr, next_ptr, hub_conf_list.head)
				{
					struct ConfItem *new_hub_conf;
					struct MatchItem *match_item;

					yy_hconf = ptr->data;

					/* yy_conf == NULL is a fatal error for this connect block! */
					if((yy_conf != NULL) && (yy_conf->name != NULL))
					{
						new_hub_conf = make_conf_item(HUB_TYPE);
						match_item =
							(struct MatchItem *)
							map_to_conf(new_hub_conf);
						DupString(new_hub_conf->name, yy_conf->name);
						if(yy_hconf->user != NULL)
							DupString(match_item->user, yy_hconf->user);
						else
							DupString(match_item->user, "*");
						if(yy_hconf->host != NULL)
							DupString(match_item->host, yy_hconf->host);
						else
							DupString(match_item->host, "*");
					}
					dlinkDelete(&yy_hconf->node, &hub_conf_list);
					free_collect_item(yy_hconf);
				}

				/* Ditto for the LEAF confs */

				DLINK_FOREACH_SAFE(ptr, next_ptr, leaf_conf_list.head)
				{
					struct ConfItem *new_leaf_conf;
					struct MatchItem *match_item;

					yy_lconf = ptr->data;

					if((yy_conf != NULL) && (yy_conf->name != NULL))
					{
						new_leaf_conf = make_conf_item(LEAF_TYPE);
						match_item =
							(struct MatchItem *)
							map_to_conf(new_leaf_conf);
						DupString(new_leaf_conf->name, yy_conf->name);
						if(yy_lconf->user != NULL)
							DupString(match_item->user, yy_lconf->user);
						else
							DupString(match_item->user, "*");
						if(yy_lconf->host != NULL)
							DupString(match_item->host, yy_lconf->host);
						else
							DupString(match_item->host, "*");
					}
					dlinkDelete(&yy_lconf->node, &leaf_conf_list);
					free_collect_item(yy_lconf);
				}
				MyFree(class_name);
				class_name = NULL;
				yy_conf = NULL;
				yy_aconf = NULL;
			}
		}
		break;

	case 414:
#line 2584 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yy_conf->name != NULL)
					yyerror("Multiple connect name entry");

				MyFree(yy_conf->name);
				DupString(yy_conf->name, yylval.string);
			}
		}
		break;

	case 415:
#line 2596 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yy_conf->name != NULL)
					yyerror("Multiple connect name entry");

				MyFree(yy_conf->name);
				DupString(yy_conf->name, yylval.string);
			}
		}
		break;

	case 416:
#line 2608 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(yy_aconf->host);
				DupString(yy_aconf->host, yylval.string);
			}
		}
		break;

	case 417:
#line 2617 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct addrinfo hints, *res;

				memset(&hints, 0, sizeof(hints));

				hints.ai_family = AF_UNSPEC;
				hints.ai_socktype = SOCK_STREAM;
				hints.ai_flags = AI_PASSIVE | AI_NUMERICHOST;

				if(irc_getaddrinfo(yylval.string, NULL, &hints, &res))
					ilog(L_ERROR, "Invalid netmask for server vhost(%s)",
					     yylval.string);
				else
				{
					assert(res != NULL);

					memcpy(&yy_aconf->my_ipnum, res->ai_addr, res->ai_addrlen);
					yy_aconf->my_ipnum.ss.ss_family = res->ai_family;
					yy_aconf->my_ipnum.ss_len = res->ai_addrlen;
					irc_freeaddrinfo(res);
				}
			}
		}
		break;

	case 418:
#line 2643 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if((yyvsp[(3) - (4)].string)[0] == ':')
					yyerror("Server passwords cannot begin with a colon");
				else if(strchr((yyvsp[(3) - (4)].string), ' ') != NULL)
					yyerror("Server passwords cannot contain spaces");
				else
				{
					if(yy_aconf->spasswd != NULL)
						memset(yy_aconf->spasswd, 0,
						       strlen(yy_aconf->spasswd));

					MyFree(yy_aconf->spasswd);
					DupString(yy_aconf->spasswd, yylval.string);
				}
			}
		}
		break;

	case 419:
#line 2661 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if((yyvsp[(3) - (4)].string)[0] == ':')
					yyerror("Server passwords cannot begin with a colon");
				else if(strchr((yyvsp[(3) - (4)].string), ' ') != NULL)
					yyerror("Server passwords cannot contain spaces");
				else
				{
					if(yy_aconf->passwd != NULL)
						memset(yy_aconf->passwd, 0,
						       strlen(yy_aconf->passwd));

					MyFree(yy_aconf->passwd);
					DupString(yy_aconf->passwd, yylval.string);
				}
			}
		}
		break;

	case 420:
#line 2679 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->port = (yyvsp[(3) - (4)].number);
		}
		break;

	case 421:
#line 2685 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->aftype = AF_INET;
		}
		break;

	case 422:
#line 2689 "ircd_parser.y"
		{
#ifdef IPV6
			if(ypass == 2)
				yy_aconf->aftype = AF_INET6;
#endif
		}
		break;

	case 423:
#line 2697 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(yy_aconf->fakename);
				DupString(yy_aconf->fakename, yylval.string);
			}
		}
		break;

	case 424:
#line 2706 "ircd_parser.y"
		{
		}
		break;

	case 428:
#line 2710 "ircd_parser.y"
		{
			not_atom = 1;
		}
		break;

	case 430:
#line 2711 "ircd_parser.y"
		{
			not_atom = 0;
		}
		break;

	case 432:
#line 2714 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					ClearConfLazyLink(yy_aconf);
				else
					SetConfLazyLink(yy_aconf);
			}
		}
		break;

	case 433:
#line 2721 "ircd_parser.y"
		{
			if(ypass == 2)
#ifndef HAVE_LIBZ
				yyerror("Ignoring flags = compressed; -- no zlib support");
#else
			{
				if(not_atom)
					ClearConfCompressed(yy_aconf);
				else
					SetConfCompressed(yy_aconf);
			}
#endif
		}
		break;

	case 434:
#line 2732 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					ClearConfCryptLink(yy_aconf);
				else
					SetConfCryptLink(yy_aconf);
			}
		}
		break;

	case 435:
#line 2739 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					ClearConfAllowAutoConn(yy_aconf);
				else
					SetConfAllowAutoConn(yy_aconf);
			}
		}
		break;

	case 436:
#line 2746 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					ClearConfAwayBurst(yy_aconf);
				else
					SetConfAwayBurst(yy_aconf);
			}
		}
		break;

	case 437:
#line 2753 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(not_atom)
					ClearConfTopicBurst(yy_aconf);
				else
					SetConfTopicBurst(yy_aconf);
			}
		}
		break;

	case 438:
#line 2763 "ircd_parser.y"
		{
#ifdef HAVE_LIBCRYPTO
			if(ypass == 2)
			{
				BIO *file;

				if(yy_aconf->rsa_public_key != NULL)
				{
					RSA_free(yy_aconf->rsa_public_key);
					yy_aconf->rsa_public_key = NULL;
				}

				if(yy_aconf->rsa_public_key_file != NULL)
				{
					MyFree(yy_aconf->rsa_public_key_file);
					yy_aconf->rsa_public_key_file = NULL;
				}

				DupString(yy_aconf->rsa_public_key_file, yylval.string);

				if((file = BIO_new_file(yylval.string, "r")) == NULL)
				{
					yyerror("Ignoring rsa_public_key_file -- file doesn't exist");
					break;
				}

				yy_aconf->rsa_public_key =
					(RSA *) PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);

				if(yy_aconf->rsa_public_key == NULL)
				{
					yyerror("Ignoring rsa_public_key_file -- Key invalid; check key syntax.");
					break;
				}

				BIO_set_close(file, BIO_CLOSE);
				BIO_free(file);
			}
#endif /* HAVE_LIBCRYPTO */
		}
		break;

	case 439:
#line 2804 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_ENCRYPTED;
				else
					yy_aconf->flags &= ~CONF_FLAGS_ENCRYPTED;
			}
		}
		break;

	case 440:
#line 2815 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
				else
					yy_aconf->flags &= ~CONF_FLAGS_CRYPTLINK;
			}
		}
		break;

	case 441:
#line 2826 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
#ifndef HAVE_LIBZ
					yyerror("Ignoring compressed=yes; -- no zlib support");
#else
					yy_aconf->flags |= CONF_FLAGS_COMPRESSED;
#endif
				else
					yy_aconf->flags &= ~CONF_FLAGS_COMPRESSED;
			}
		}
		break;

	case 442:
#line 2841 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
				else
					yy_aconf->flags &= ~CONF_FLAGS_ALLOW_AUTO_CONN;
			}
		}
		break;

	case 443:
#line 2852 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.number)
					SetConfTopicBurst(yy_aconf);
				else
					ClearConfTopicBurst(yy_aconf);
			}
		}
		break;

	case 444:
#line 2863 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct CollectItem *yy_tmp;

				yy_tmp = (struct CollectItem *)
					MyMalloc(sizeof(struct CollectItem));
				DupString(yy_tmp->host, yylval.string);
				DupString(yy_tmp->user, "*");
				dlinkAdd(yy_tmp, &yy_tmp->node, &hub_conf_list);
			}
		}
		break;

	case 445:
#line 2876 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct CollectItem *yy_tmp;

				yy_tmp = (struct CollectItem *)
					MyMalloc(sizeof(struct CollectItem));
				DupString(yy_tmp->host, yylval.string);
				DupString(yy_tmp->user, "*");
				dlinkAdd(yy_tmp, &yy_tmp->node, &leaf_conf_list);
			}
		}
		break;

	case 446:
#line 2889 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(class_name);
				DupString(class_name, yylval.string);
			}
		}
		break;

	case 447:
#line 2898 "ircd_parser.y"
		{
#ifdef HAVE_LIBCRYPTO
			if(ypass == 2)
			{
				struct EncCapability *ecap;
				const char *cipher_name;
				int found = 0;

				yy_aconf->cipher_preference = NULL;
				cipher_name = yylval.string;

				for(ecap = CipherTable; ecap->name; ecap++)
				{
					if((irccmp(ecap->name, cipher_name) == 0) &&
					   (ecap->cap & CAP_ENC_MASK))
					{
						yy_aconf->cipher_preference = ecap;
						found = 1;
						break;
					}
				}

				if(!found)
					yyerror("Invalid cipher");
			}
#else
			if(ypass == 2)
				yyerror("Ignoring cipher_preference -- no OpenSSL support");
#endif
		}
		break;

	case 448:
#line 2933 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
				regex_ban = 0;
			}
		}
		break;

	case 449:
#line 2940 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(userbuf[0] && hostbuf[0])
				{
					if(regex_ban)
					{
						pcre *exp_user = NULL;
						pcre *exp_host = NULL;
						const char *errptr = NULL;

						if(!(exp_user = ircd_pcre_compile(userbuf, &errptr))
						   || !(exp_host =
							ircd_pcre_compile(hostbuf, &errptr)))
						{
							ilog(L_ERROR,
							     "Failed to add regular expression based K-Line: %s",
							     errptr);
							break;
						}

						yy_conf = make_conf_item(RKLINE_TYPE);
						yy_aconf = map_to_conf(yy_conf);

						yy_aconf->regexuser = exp_user;
						yy_aconf->regexhost = exp_host;

						DupString(yy_aconf->user, userbuf);
						DupString(yy_aconf->host, hostbuf);

						if(reasonbuf[0])
							DupString(yy_aconf->reason, reasonbuf);
						else
							DupString(yy_aconf->reason, "No reason");
					}
					else
					{
						yy_conf = make_conf_item(KLINE_TYPE);
						yy_aconf = map_to_conf(yy_conf);

						DupString(yy_aconf->user, userbuf);
						DupString(yy_aconf->host, hostbuf);

						if(reasonbuf[0])
							DupString(yy_aconf->reason, reasonbuf);
						else
							DupString(yy_aconf->reason, "No reason");
						add_conf_by_address(CONF_KILL, yy_aconf);
					}
				}
				else
					delete_conf_item(yy_conf);

				yy_conf = NULL;
				yy_aconf = NULL;
			}
		}
		break;

	case 450:
#line 2996 "ircd_parser.y"
		{
		}
		break;

	case 454:
#line 3001 "ircd_parser.y"
		{
			if(ypass == 2)
				regex_ban = 1;
		}
		break;

	case 461:
#line 3010 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct split_nuh_item nuh;

				nuh.nuhmask = yylval.string;
				nuh.nickptr = NULL;
				nuh.userptr = userbuf;
				nuh.hostptr = hostbuf;

				nuh.nicksize = 0;
				nuh.usersize = sizeof(userbuf);
				nuh.hostsize = sizeof(hostbuf);

				split_nuh(&nuh);
			}
		}
		break;

	case 462:
#line 3029 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
		}
		break;

	case 463:
#line 3038 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				yy_conf = make_conf_item(DLINE_TYPE);
				yy_aconf = map_to_conf(yy_conf);
				/* default reason */
				DupString(yy_aconf->reason, "No reason");
			}
		}
		break;

	case 464:
#line 3047 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yy_aconf->host
				   && parse_netmask(yy_aconf->host, NULL, NULL) != HM_HOST)
					add_conf_by_address(CONF_DLINE, yy_aconf);
				else
					delete_conf_item(yy_conf);
				yy_conf = NULL;
				yy_aconf = NULL;
			}
		}
		break;

	case 470:
#line 3063 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(yy_aconf->host);
				DupString(yy_aconf->host, yylval.string);
			}
		}
		break;

	case 471:
#line 3072 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(yy_aconf->reason);
				DupString(yy_aconf->reason, yylval.string);
			}
		}
		break;

	case 477:
#line 3089 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(yylval.string[0]
				   && parse_netmask(yylval.string, NULL, NULL) != HM_HOST)
				{
					yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
					yy_aconf = map_to_conf(yy_conf);
					DupString(yy_aconf->host, yylval.string);

					add_conf_by_address(CONF_EXEMPTDLINE, yy_aconf);

					yy_conf = NULL;
					yy_aconf = NULL;
				}
			}
		}
		break;

	case 478:
#line 3110 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				regex_ban = 0;
				reasonbuf[0] = gecos_name[0] = '\0';
			}
		}
		break;

	case 479:
#line 3117 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(gecos_name[0])
				{
					if(regex_ban)
					{
						pcre *exp_p = NULL;
						const char *errptr = NULL;

						if(!
						   (exp_p = ircd_pcre_compile(gecos_name, &errptr)))
						{
							ilog(L_ERROR,
							     "Failed to add regular expression based X-Line: %s",
							     errptr);
							break;
						}

						yy_conf = make_conf_item(RXLINE_TYPE);
						yy_conf->regexpname = exp_p;
					}
					else
						yy_conf = make_conf_item(XLINE_TYPE);

					yy_match_item = map_to_conf(yy_conf);
					DupString(yy_conf->name, gecos_name);

					if(reasonbuf[0])
						DupString(yy_match_item->reason, reasonbuf);
					else
						DupString(yy_match_item->reason, "No reason");
				}
			}
		}
		break;

	case 480:
#line 3151 "ircd_parser.y"
		{
		}
		break;

	case 484:
#line 3156 "ircd_parser.y"
		{
			if(ypass == 2)
				regex_ban = 1;
		}
		break;

	case 491:
#line 3165 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
		}
		break;

	case 492:
#line 3171 "ircd_parser.y"
		{
			if(ypass == 2)
				strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
		}
		break;

	case 557:
#line 3219 "ircd_parser.y"
		{
			ConfigFileEntry.gline_min_cidr = (yyvsp[(3) - (4)].number);
		}
		break;

	case 558:
#line 3224 "ircd_parser.y"
		{
			ConfigFileEntry.gline_min_cidr6 = (yyvsp[(3) - (4)].number);
		}
		break;

	case 559:
#line 3229 "ircd_parser.y"
		{
			ConfigFileEntry.burst_away = yylval.number;
		}
		break;

	case 560:
#line 3234 "ircd_parser.y"
		{
			ConfigFileEntry.use_whois_actually = yylval.number;
		}
		break;

	case 561:
#line 3239 "ircd_parser.y"
		{
			GlobalSetOptions.rejecttime = yylval.number;
		}
		break;

	case 562:
#line 3244 "ircd_parser.y"
		{
			ConfigFileEntry.tkline_expire_notices = yylval.number;
		}
		break;

	case 563:
#line 3249 "ircd_parser.y"
		{
			ConfigFileEntry.kill_chase_time_limit = (yyvsp[(3) - (4)].number);
		}
		break;

	case 564:
#line 3254 "ircd_parser.y"
		{
			ConfigFileEntry.hide_spoof_ips = yylval.number;
		}
		break;

	case 565:
#line 3259 "ircd_parser.y"
		{
			ConfigFileEntry.ignore_bogus_ts = yylval.number;
		}
		break;

	case 566:
#line 3264 "ircd_parser.y"
		{
			ConfigFileEntry.disable_remote = yylval.number;
		}
		break;

	case 567:
#line 3269 "ircd_parser.y"
		{
			ConfigFileEntry.failed_oper_notice = yylval.number;
		}
		break;

	case 568:
#line 3274 "ircd_parser.y"
		{
			ConfigFileEntry.anti_nick_flood = yylval.number;
		}
		break;

	case 569:
#line 3279 "ircd_parser.y"
		{
			ConfigFileEntry.max_nick_time = (yyvsp[(3) - (4)].number);
		}
		break;

	case 570:
#line 3284 "ircd_parser.y"
		{
			ConfigFileEntry.max_nick_changes = (yyvsp[(3) - (4)].number);
		}
		break;

	case 571:
#line 3289 "ircd_parser.y"
		{
			ConfigFileEntry.max_accept = (yyvsp[(3) - (4)].number);
		}
		break;

	case 572:
#line 3294 "ircd_parser.y"
		{
			ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[(3) - (4)].number);
		}
		break;

	case 573:
#line 3299 "ircd_parser.y"
		{
			ConfigFileEntry.anti_spam_connect_numeric = yylval.number;
		}
		break;

	case 574:
#line 3304 "ircd_parser.y"
		{
			ConfigFileEntry.ts_warn_delta = (yyvsp[(3) - (4)].number);
		}
		break;

	case 575:
#line 3309 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigFileEntry.ts_max_delta = (yyvsp[(3) - (4)].number);
		}
		break;

	case 576:
#line 3315 "ircd_parser.y"
		{
			if(((yyvsp[(3) - (4)].number) > 0) && ypass == 1)
			{
				ilog(L_CRIT, "You haven't read your config file properly.");
				ilog(L_CRIT,
				     "There is a line in the example conf that will kill your server if not removed.");
				ilog(L_CRIT,
				     "Consider actually reading/editing the conf file, and removing this line.");
				exit(0);
			}
		}
		break;

	case 577:
#line 3326 "ircd_parser.y"
		{
			ConfigFileEntry.kline_with_reason = yylval.number;
		}
		break;

	case 578:
#line 3331 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(ConfigFileEntry.kline_reason);
				DupString(ConfigFileEntry.kline_reason, yylval.string);
			}
		}
		break;

	case 579:
#line 3340 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(ConfigFileEntry.cloak_key1);
				DupString(ConfigFileEntry.cloak_key1, yylval.string);
			}
		}
		break;

	case 580:
#line 3349 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(ConfigFileEntry.cloak_key2);
				DupString(ConfigFileEntry.cloak_key2, yylval.string);
			}
		}
		break;

	case 581:
#line 3358 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(ConfigFileEntry.cloak_key3);
				DupString(ConfigFileEntry.cloak_key3, yylval.string);
			}
		}
		break;

	case 582:
#line 3367 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(ConfigFileEntry.services_name);
				DupString(ConfigFileEntry.services_name, yylval.string);
			}
		}
		break;

	case 583:
#line 3376 "ircd_parser.y"
		{
			ConfigFileEntry.invisible_on_connect = yylval.number;
		}
		break;

	case 584:
#line 3381 "ircd_parser.y"
		{
			ConfigFileEntry.warn_no_nline = yylval.number;
		}
		break;

	case 585:
#line 3386 "ircd_parser.y"
		{
			ConfigFileEntry.stats_e_disabled = yylval.number;
		}
		break;

	case 586:
#line 3391 "ircd_parser.y"
		{
			ConfigFileEntry.stats_o_oper_only = yylval.number;
		}
		break;

	case 587:
#line 3396 "ircd_parser.y"
		{
			ConfigFileEntry.stats_P_oper_only = yylval.number;
		}
		break;

	case 588:
#line 3401 "ircd_parser.y"
		{
			ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
		}
		break;

	case 589:
#line 3404 "ircd_parser.y"
		{
			ConfigFileEntry.stats_k_oper_only = 1;
		}
		break;

	case 590:
#line 3409 "ircd_parser.y"
		{
			ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
		}
		break;

	case 591:
#line 3412 "ircd_parser.y"
		{
			ConfigFileEntry.stats_i_oper_only = 1;
		}
		break;

	case 592:
#line 3417 "ircd_parser.y"
		{
			ConfigFileEntry.pace_wait = (yyvsp[(3) - (4)].number);
		}
		break;

	case 593:
#line 3422 "ircd_parser.y"
		{
			ConfigFileEntry.caller_id_wait = (yyvsp[(3) - (4)].number);
		}
		break;

	case 594:
#line 3427 "ircd_parser.y"
		{
			ConfigFileEntry.opers_bypass_callerid = yylval.number;
		}
		break;

	case 595:
#line 3432 "ircd_parser.y"
		{
			ConfigFileEntry.pace_wait_simple = (yyvsp[(3) - (4)].number);
		}
		break;

	case 596:
#line 3437 "ircd_parser.y"
		{
			ConfigFileEntry.short_motd = yylval.number;
		}
		break;

	case 597:
#line 3442 "ircd_parser.y"
		{
			ConfigFileEntry.no_oper_flood = yylval.number;
		}
		break;

	case 598:
#line 3447 "ircd_parser.y"
		{
			ConfigFileEntry.true_no_oper_flood = yylval.number;
		}
		break;

	case 599:
#line 3452 "ircd_parser.y"
		{
			ConfigFileEntry.oper_pass_resv = yylval.number;
		}
		break;

	case 600:
#line 3457 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(strlen(yylval.string) > LOCALE_LENGTH - 2)
					yylval.string[LOCALE_LENGTH - 1] = '\0';

				set_locale(yylval.string);
			}
		}
		break;

	case 601:
#line 3468 "ircd_parser.y"
		{
			ConfigFileEntry.idletime = (yyvsp[(3) - (4)].number);
		}
		break;

	case 602:
#line 3473 "ircd_parser.y"
		{
			ConfigFileEntry.dots_in_ident = (yyvsp[(3) - (4)].number);
		}
		break;

	case 603:
#line 3478 "ircd_parser.y"
		{
			ConfigFileEntry.max_targets = (yyvsp[(3) - (4)].number);
		}
		break;

	case 604:
#line 3483 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(ConfigFileEntry.servlink_path);
				DupString(ConfigFileEntry.servlink_path, yylval.string);
			}
		}
		break;

	case 605:
#line 3492 "ircd_parser.y"
		{
#ifdef HAVE_LIBCRYPTO
			if(ypass == 2)
			{
				struct EncCapability *ecap;
				const char *cipher_name;
				int found = 0;

				ConfigFileEntry.default_cipher_preference = NULL;
				cipher_name = yylval.string;

				for(ecap = CipherTable; ecap->name; ecap++)
				{
					if((irccmp(ecap->name, cipher_name) == 0) &&
					   (ecap->cap & CAP_ENC_MASK))
					{
						ConfigFileEntry.default_cipher_preference = ecap;
						found = 1;
						break;
					}
				}

				if(!found)
					yyerror("Invalid cipher");
			}
#else
			if(ypass == 2)
				yyerror("Ignoring default_cipher_preference -- no OpenSSL support");
#endif
		}
		break;

	case 606:
#line 3524 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				ConfigFileEntry.compression_level = (yyvsp[(3) - (4)].number);
#ifndef HAVE_LIBZ
				yyerror("Ignoring compression_level -- no zlib support");
#else
				if((ConfigFileEntry.compression_level < 1) ||
				   (ConfigFileEntry.compression_level > 9))
				{
					yyerror("Ignoring invalid compression_level, using default");
					ConfigFileEntry.compression_level = 0;
				}
#endif
			}
		}
		break;

	case 607:
#line 3542 "ircd_parser.y"
		{
			ConfigFileEntry.use_egd = yylval.number;
		}
		break;

	case 608:
#line 3547 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(ConfigFileEntry.egdpool_path);
				DupString(ConfigFileEntry.egdpool_path, yylval.string);
			}
		}
		break;

	case 609:
#line 3556 "ircd_parser.y"
		{
			ConfigFileEntry.ping_cookie = yylval.number;
		}
		break;

	case 610:
#line 3561 "ircd_parser.y"
		{
			ConfigFileEntry.disable_auth = yylval.number;
		}
		break;

	case 611:
#line 3566 "ircd_parser.y"
		{
			ConfigFileEntry.throttle_time = yylval.number;
		}
		break;

	case 612:
#line 3571 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes = 0;
		}
		break;

	case 616:
#line 3577 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_BOTS;
		}
		break;

	case 617:
#line 3580 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_CCONN;
		}
		break;

	case 618:
#line 3583 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_CCONN_FULL;
		}
		break;

	case 619:
#line 3586 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_DEAF;
		}
		break;

	case 620:
#line 3589 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
		}
		break;

	case 621:
#line 3592 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_FULL;
		}
		break;

	case 622:
#line 3595 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_SKILL;
		}
		break;

	case 623:
#line 3598 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
		}
		break;

	case 624:
#line 3601 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_REJ;
		}
		break;

	case 625:
#line 3604 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
		}
		break;

	case 626:
#line 3607 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_SPY;
		}
		break;

	case 627:
#line 3610 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
		}
		break;

	case 628:
#line 3613 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
		}
		break;

	case 629:
#line 3616 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
		}
		break;

	case 630:
#line 3619 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
		}
		break;

	case 631:
#line 3622 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
		}
		break;

	case 632:
#line 3625 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
		}
		break;

	case 633:
#line 3628 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
		}
		break;

	case 634:
#line 3631 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
		}
		break;

	case 635:
#line 3634 "ircd_parser.y"
		{
			ConfigFileEntry.oper_umodes |= UMODE_HIDECHANNELS;
		}
		break;

	case 636:
#line 3639 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes = 0;
		}
		break;

	case 640:
#line 3645 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
		}
		break;

	case 641:
#line 3648 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
		}
		break;

	case 642:
#line 3651 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_CCONN_FULL;
		}
		break;

	case 643:
#line 3654 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
		}
		break;

	case 644:
#line 3657 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
		}
		break;

	case 645:
#line 3660 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
		}
		break;

	case 646:
#line 3663 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
		}
		break;

	case 647:
#line 3666 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
		}
		break;

	case 648:
#line 3669 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
		}
		break;

	case 649:
#line 3672 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
		}
		break;

	case 650:
#line 3675 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
		}
		break;

	case 651:
#line 3678 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
		}
		break;

	case 652:
#line 3681 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
		}
		break;

	case 653:
#line 3684 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
		}
		break;

	case 654:
#line 3687 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
		}
		break;

	case 655:
#line 3690 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
		}
		break;

	case 656:
#line 3693 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
		}
		break;

	case 657:
#line 3696 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
		}
		break;

	case 658:
#line 3699 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
		}
		break;

	case 659:
#line 3702 "ircd_parser.y"
		{
			ConfigFileEntry.oper_only_umodes |= UMODE_HIDECHANNELS;
		}
		break;

	case 660:
#line 3707 "ircd_parser.y"
		{
			ConfigFileEntry.min_nonwildcard = (yyvsp[(3) - (4)].number);
		}
		break;

	case 661:
#line 3712 "ircd_parser.y"
		{
			ConfigFileEntry.min_nonwildcard_simple = (yyvsp[(3) - (4)].number);
		}
		break;

	case 662:
#line 3717 "ircd_parser.y"
		{
			ConfigFileEntry.default_floodcount = (yyvsp[(3) - (4)].number);
		}
		break;

	case 663:
#line 3722 "ircd_parser.y"
		{
			ConfigFileEntry.client_flood = (yyvsp[(3) - (4)].number);
		}
		break;

	case 664:
#line 3727 "ircd_parser.y"
		{
			ConfigFileEntry.dot_in_ip6_addr = yylval.number;
		}
		break;

	case 665:
#line 3735 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				yy_conf = make_conf_item(GDENY_TYPE);
				yy_aconf = map_to_conf(yy_conf);
			}
		}
		break;

	case 666:
#line 3742 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				/*
				 * since we re-allocate yy_conf/yy_aconf after the end of action=, at the
				 * end we will have one extra, so we should free it.
				 */
				if(yy_conf->name == NULL || yy_aconf->user == NULL)
				{
					delete_conf_item(yy_conf);
					yy_conf = NULL;
					yy_aconf = NULL;
				}
			}
		}
		break;

	case 676:
#line 3768 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigFileEntry.glines = yylval.number;
		}
		break;

	case 677:
#line 3774 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigFileEntry.gline_time = (yyvsp[(3) - (4)].number);
		}
		break;

	case 678:
#line 3780 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigFileEntry.gline_logging = 0;
		}
		break;

	case 682:
#line 3786 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigFileEntry.gline_logging |= GDENY_REJECT;
		}
		break;

	case 683:
#line 3790 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigFileEntry.gline_logging |= GDENY_BLOCK;
		}
		break;

	case 684:
#line 3796 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct split_nuh_item nuh;

				nuh.nuhmask = yylval.string;
				nuh.nickptr = NULL;
				nuh.userptr = userbuf;
				nuh.hostptr = hostbuf;

				nuh.nicksize = 0;
				nuh.usersize = sizeof(userbuf);
				nuh.hostsize = sizeof(hostbuf);

				split_nuh(&nuh);

				if(yy_aconf->user == NULL)
				{
					DupString(yy_aconf->user, userbuf);
					DupString(yy_aconf->host, hostbuf);
				}
				else
				{
					struct CollectItem *yy_tmp =
						MyMalloc(sizeof(struct CollectItem));

					DupString(yy_tmp->user, userbuf);
					DupString(yy_tmp->host, hostbuf);

					dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
				}
			}
		}
		break;

	case 685:
#line 3830 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(yy_conf->name);
				DupString(yy_conf->name, yylval.string);
			}
		}
		break;

	case 686:
#line 3839 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->flags = 0;
		}
		break;

	case 687:
#line 3843 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				struct CollectItem *yy_tmp = NULL;
				dlink_node *ptr, *next_ptr;

				DLINK_FOREACH_SAFE(ptr, next_ptr, col_conf_list.head)
				{
					struct AccessItem *new_aconf;
					struct ConfItem *new_conf;

					yy_tmp = ptr->data;
					new_conf = make_conf_item(GDENY_TYPE);
					new_aconf = map_to_conf(new_conf);

					new_aconf->flags = yy_aconf->flags;

					if(yy_conf->name != NULL)
						DupString(new_conf->name, yy_conf->name);
					else
						DupString(new_conf->name, "*");
					if(yy_aconf->user != NULL)
						DupString(new_aconf->user, yy_tmp->user);
					else
						DupString(new_aconf->user, "*");
					if(yy_aconf->host != NULL)
						DupString(new_aconf->host, yy_tmp->host);
					else
						DupString(new_aconf->host, "*");

					dlinkDelete(&yy_tmp->node, &col_conf_list);
				}

				/*
				 * In case someone has fed us with more than one action= after user/name
				 * which would leak memory  -Michael
				 */
				if(yy_conf->name == NULL || yy_aconf->user == NULL)
					delete_conf_item(yy_conf);

				yy_conf = make_conf_item(GDENY_TYPE);
				yy_aconf = map_to_conf(yy_conf);
			}
		}
		break;

	case 690:
#line 3890 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->flags |= GDENY_REJECT;
		}
		break;

	case 691:
#line 3894 "ircd_parser.y"
		{
			if(ypass == 2)
				yy_aconf->flags |= GDENY_BLOCK;
		}
		break;

	case 715:
#line 3919 "ircd_parser.y"
		{
			ConfigChannel.cycle_on_hostchange = yylval.number;
		}
		break;

	case 716:
#line 3924 "ircd_parser.y"
		{
			ConfigChannel.disable_fake_channels = yylval.number;
		}
		break;

	case 717:
#line 3929 "ircd_parser.y"
		{
			ConfigChannel.restrict_channels = yylval.number;
		}
		break;

	case 718:
#line 3934 "ircd_parser.y"
		{
			ConfigChannel.disable_local_channels = yylval.number;
		}
		break;

	case 719:
#line 3939 "ircd_parser.y"
		{
			ConfigChannel.use_except = yylval.number;
		}
		break;

	case 720:
#line 3944 "ircd_parser.y"
		{
			ConfigChannel.use_invex = yylval.number;
		}
		break;

	case 721:
#line 3949 "ircd_parser.y"
		{
			ConfigChannel.use_knock = yylval.number;
		}
		break;

	case 722:
#line 3954 "ircd_parser.y"
		{
			ConfigChannel.knock_delay = (yyvsp[(3) - (4)].number);
		}
		break;

	case 723:
#line 3959 "ircd_parser.y"
		{
			ConfigChannel.knock_delay_channel = (yyvsp[(3) - (4)].number);
		}
		break;

	case 724:
#line 3964 "ircd_parser.y"
		{
			ConfigChannel.max_chans_per_user = (yyvsp[(3) - (4)].number);
		}
		break;

	case 725:
#line 3969 "ircd_parser.y"
		{
			ConfigChannel.quiet_on_ban = yylval.number;
		}
		break;

	case 726:
#line 3974 "ircd_parser.y"
		{
			ConfigChannel.max_bans = (yyvsp[(3) - (4)].number);
		}
		break;

	case 727:
#line 3979 "ircd_parser.y"
		{
			ConfigChannel.default_split_user_count = (yyvsp[(3) - (4)].number);
		}
		break;

	case 728:
#line 3984 "ircd_parser.y"
		{
			ConfigChannel.default_split_server_count = (yyvsp[(3) - (4)].number);
		}
		break;

	case 729:
#line 3989 "ircd_parser.y"
		{
			ConfigChannel.no_create_on_split = yylval.number;
		}
		break;

	case 730:
#line 3994 "ircd_parser.y"
		{
			ConfigChannel.no_join_on_split = yylval.number;
		}
		break;

	case 731:
#line 3999 "ircd_parser.y"
		{
			ConfigChannel.burst_topicwho = yylval.number;
		}
		break;

	case 732:
#line 4004 "ircd_parser.y"
		{
			GlobalSetOptions.joinfloodcount = yylval.number;
		}
		break;

	case 733:
#line 4009 "ircd_parser.y"
		{
			GlobalSetOptions.joinfloodtime = yylval.number;
		}
		break;

	case 745:
#line 4028 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigServerHide.flatten_links = yylval.number;
		}
		break;

	case 746:
#line 4034 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigServerHide.hide_servers = yylval.number;
		}
		break;

	case 747:
#line 4040 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				MyFree(ConfigServerHide.hidden_name);
				DupString(ConfigServerHide.hidden_name, yylval.string);
			}
		}
		break;

	case 748:
#line 4049 "ircd_parser.y"
		{
			if(ypass == 2)
			{
				if(((yyvsp[(3) - (4)].number) > 0)
				   && ConfigServerHide.links_disabled == 1)
				{
					eventAddIsh("write_links_file", write_links_file, NULL,
						    (yyvsp[(3) - (4)].number));
					ConfigServerHide.links_disabled = 0;
				}

				ConfigServerHide.links_delay = (yyvsp[(3) - (4)].number);
			}
		}
		break;

	case 749:
#line 4063 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigServerHide.hidden = yylval.number;
		}
		break;

	case 750:
#line 4069 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigServerHide.disable_hidden = yylval.number;
		}
		break;

	case 751:
#line 4075 "ircd_parser.y"
		{
			if(ypass == 2)
				ConfigServerHide.hide_server_ips = yylval.number;
		}
		break;


/* Line 1267 of yacc.c.  */
#line 7942 "y.tab.c"
	default:
		break;
	}
	YY_SYMBOL_PRINT("-> $$ =", yyr1[yyn], &yyval, &yyloc);

	YYPOPSTACK(yylen);
	yylen = 0;
	YY_STACK_PRINT(yyss, yyssp);

	*++yyvsp = yyval;


	/* Now `shift' the result of the reduction.  Determine what state
	   that goes to, based on the state we popped back to and the rule
	   number reduced by.  */

	yyn = yyr1[yyn];

	yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
	if(0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
		yystate = yytable[yystate];
	else
		yystate = yydefgoto[yyn - YYNTOKENS];

	goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
      yyerrlab:
	/* If not already recovering from an error, report this error.  */
	if(!yyerrstatus)
	{
		++yynerrs;
#if ! YYERROR_VERBOSE
		yyerror(YY_("syntax error"));
#else
		{
			YYSIZE_T yysize = yysyntax_error(0, yystate, yychar);
			if(yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
			{
				YYSIZE_T yyalloc = 2 * yysize;
				if(!(yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
					yyalloc = YYSTACK_ALLOC_MAXIMUM;
				if(yymsg != yymsgbuf)
					YYSTACK_FREE(yymsg);
				yymsg = (char *) YYSTACK_ALLOC(yyalloc);
				if(yymsg)
					yymsg_alloc = yyalloc;
				else
				{
					yymsg = yymsgbuf;
					yymsg_alloc = sizeof yymsgbuf;
				}
			}

			if(0 < yysize && yysize <= yymsg_alloc)
			{
				(void) yysyntax_error(yymsg, yystate, yychar);
				yyerror(yymsg);
			}
			else
			{
				yyerror(YY_("syntax error"));
				if(yysize != 0)
					goto yyexhaustedlab;
			}
		}
#endif
	}



	if(yyerrstatus == 3)
	{
		/* If just tried and failed to reuse look-ahead token after an
		   error, discard it.  */

		if(yychar <= YYEOF)
		{
			/* Return failure if at end of input.  */
			if(yychar == YYEOF)
				YYABORT;
		}
		else
		{
			yydestruct("Error: discarding", yytoken, &yylval);
			yychar = YYEMPTY;
		}
	}

	/* Else will try to reuse look-ahead token after shifting the error
	   token.  */
	goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
      yyerrorlab:

	/* Pacify compilers like GCC when the user code never invokes
	   YYERROR and the label yyerrorlab therefore never appears in user
	   code.  */
	if( /*CONSTCOND*/ 0)
		goto yyerrorlab;

	/* Do not reclaim the symbols of the rule which action triggered
	   this YYERROR.  */
	YYPOPSTACK(yylen);
	yylen = 0;
	YY_STACK_PRINT(yyss, yyssp);
	yystate = *yyssp;
	goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
      yyerrlab1:
	yyerrstatus = 3;	/* Each real token shifted decrements this.  */

	for(;;)
	{
		yyn = yypact[yystate];
		if(yyn != YYPACT_NINF)
		{
			yyn += YYTERROR;
			if(0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
			{
				yyn = yytable[yyn];
				if(0 < yyn)
					break;
			}
		}

		/* Pop the current state because it cannot handle the error token.  */
		if(yyssp == yyss)
			YYABORT;


		yydestruct("Error: popping", yystos[yystate], yyvsp);
		YYPOPSTACK(1);
		yystate = *yyssp;
		YY_STACK_PRINT(yyss, yyssp);
	}

	if(yyn == YYFINAL)
		YYACCEPT;

	*++yyvsp = yylval;


	/* Shift the error token.  */
	YY_SYMBOL_PRINT("Shifting", yystos[yyn], yyvsp, yylsp);

	yystate = yyn;
	goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
      yyacceptlab:
	yyresult = 0;
	goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
      yyabortlab:
	yyresult = 1;
	goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
      yyexhaustedlab:
	yyerror(YY_("memory exhausted"));
	yyresult = 2;
	/* Fall through.  */
#endif

      yyreturn:
	if(yychar != YYEOF && yychar != YYEMPTY)
		yydestruct("Cleanup: discarding lookahead", yytoken, &yylval);
	/* Do not reclaim the symbols of the rule which action triggered
	   this YYABORT or YYACCEPT.  */
	YYPOPSTACK(yylen);
	YY_STACK_PRINT(yyss, yyssp);
	while(yyssp != yyss)
	{
		yydestruct("Cleanup: popping", yystos[*yyssp], yyvsp);
		YYPOPSTACK(1);
	}
#ifndef yyoverflow
	if(yyss != yyssa)
		YYSTACK_FREE(yyss);
#endif
#if YYERROR_VERBOSE
	if(yymsg != yymsgbuf)
		YYSTACK_FREE(yymsg);
#endif
	/* Make sure YYID is used.  */
	return YYID(yyresult);
}
