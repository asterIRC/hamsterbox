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
   enum yytokentype {
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
     CLIENTCERT_HASH = 283,
     CLOAK_KEY1 = 284,
     CLOAK_KEY2 = 285,
     CLOAK_KEY3 = 286,
     COMPRESSED = 287,
     COMPRESSION_LEVEL = 288,
     CONNECT = 289,
     CONNECTFREQ = 290,
     CRYPTLINK = 291,
     CYCLE_ON_HOSTCHANGE = 292,
     DEFAULT_CIPHER_PREFERENCE = 293,
     DEFAULT_FLOODCOUNT = 294,
     DEFAULT_SPLIT_SERVER_COUNT = 295,
     DEFAULT_SPLIT_USER_COUNT = 296,
     DENY = 297,
     DESCRIPTION = 298,
     DIE = 299,
     DISABLE_AUTH = 300,
     DISABLE_FAKE_CHANNELS = 301,
     DISABLE_HIDDEN = 302,
     DISABLE_LOCAL_CHANNELS = 303,
     DISABLE_REMOTE_COMMANDS = 304,
     DOT_IN_IP6_ADDR = 305,
     DOTS_IN_IDENT = 306,
     DURATION = 307,
     EGDPOOL_PATH = 308,
     EMAIL = 309,
     ENABLE = 310,
     ENCRYPTED = 311,
     EXCEED_LIMIT = 312,
     EXEMPT = 313,
     FAILED_OPER_NOTICE = 314,
     FAKENAME = 315,
     IRCD_FLAGS = 316,
     FLATTEN_LINKS = 317,
     FFAILED_OPERLOG = 318,
     FKILLLOG = 319,
     FKLINELOG = 320,
     FGLINELOG = 321,
     FIOERRLOG = 322,
     FOPERLOG = 323,
     FOPERSPYLOG = 324,
     FUSERLOG = 325,
     GECOS = 326,
     GENERAL = 327,
     GLINE = 328,
     GLINES = 329,
     GLINE_EXEMPT = 330,
     GLINE_LOG = 331,
     GLINE_TIME = 332,
     GLINE_MIN_CIDR = 333,
     GLINE_MIN_CIDR6 = 334,
     GLOBAL_KILL = 335,
     IRCD_AUTH = 336,
     NEED_IDENT = 337,
     HAVENT_READ_CONF = 338,
     HIDDEN = 339,
     HIDDEN_ADMIN = 340,
     HIDDEN_NAME = 341,
     HIDDEN_OPER = 342,
     HIDE_SERVER_IPS = 343,
     HIDE_SERVERS = 344,
     HIDE_SPOOF_IPS = 345,
     HOST = 346,
     HUB = 347,
     HUB_MASK = 348,
     IDLETIME = 349,
     IGNORE_BOGUS_TS = 350,
     INVISIBLE_ON_CONNECT = 351,
     IP = 352,
     KILL = 353,
     KILL_CHASE_TIME_LIMIT = 354,
     KLINE = 355,
     KLINE_EXEMPT = 356,
     KLINE_REASON = 357,
     KLINE_WITH_REASON = 358,
     KNOCK_DELAY = 359,
     KNOCK_DELAY_CHANNEL = 360,
     LAZYLINK = 361,
     LEAF_MASK = 362,
     LINKS_DELAY = 363,
     LISTEN = 364,
     T_LOG = 365,
     LOGGING = 366,
     LOG_LEVEL = 367,
     MAX_ACCEPT = 368,
     MAX_BANS = 369,
     MAX_CHANS_PER_USER = 370,
     MAX_GLOBAL = 371,
     MAX_IDENT = 372,
     MAX_LOCAL = 373,
     MAX_NICK_CHANGES = 374,
     MAX_NICK_TIME = 375,
     MAX_NUMBER = 376,
     MAX_TARGETS = 377,
     MESSAGE_LOCALE = 378,
     MIN_NONWILDCARD = 379,
     MIN_NONWILDCARD_SIMPLE = 380,
     MODULE = 381,
     MODULES = 382,
     NAME = 383,
     NEED_PASSWORD = 384,
     IS_WEBIRC = 385,
     NETWORK_DESC = 386,
     NETWORK_NAME = 387,
     NICK = 388,
     NICK_CHANGES = 389,
     NO_CREATE_ON_SPLIT = 390,
     NO_JOIN_ON_SPLIT = 391,
     NO_OPER_FLOOD = 392,
     NO_TILDE = 393,
     NOT = 394,
     NUMBER = 395,
     NUMBER_PER_IDENT = 396,
     NUMBER_PER_CIDR = 397,
     NUMBER_PER_IP = 398,
     NUMBER_PER_IP_GLOBAL = 399,
     OPERATOR = 400,
     OPERS_BYPASS_CALLERID = 401,
     OPER_LOG = 402,
     OPER_ONLY_UMODES = 403,
     OPER_PASS_RESV = 404,
     OPER_SPY_T = 405,
     OPER_UMODES = 406,
     JOIN_FLOOD_COUNT = 407,
     JOIN_FLOOD_TIME = 408,
     PACE_WAIT = 409,
     PACE_WAIT_SIMPLE = 410,
     PASSWORD = 411,
     PATH = 412,
     PING_COOKIE = 413,
     PING_TIME = 414,
     PING_WARNING = 415,
     PORT = 416,
     QSTRING = 417,
     QUIET_ON_BAN = 418,
     REASON = 419,
     REDIRPORT = 420,
     REDIRSERV = 421,
     REGEX_T = 422,
     REHASH = 423,
     TREJECT_HOLD_TIME = 424,
     REMOTE = 425,
     REMOTEBAN = 426,
     RESTRICT_CHANNELS = 427,
     RESTRICTED = 428,
     RSA_PRIVATE_KEY_FILE = 429,
     RSA_PUBLIC_KEY_FILE = 430,
     SSL_CERTIFICATE_FILE = 431,
     RESV = 432,
     RESV_EXEMPT = 433,
     SECONDS = 434,
     MINUTES = 435,
     HOURS = 436,
     DAYS = 437,
     WEEKS = 438,
     SENDQ = 439,
     SEND_PASSWORD = 440,
     SERVERHIDE = 441,
     SERVERINFO = 442,
     SERVICES = 443,
     SERVICES_NAME = 444,
     SERVLINK_PATH = 445,
     IRCD_SID = 446,
     TKLINE_EXPIRE_NOTICES = 447,
     T_SHARED = 448,
     T_CLUSTER = 449,
     TYPE = 450,
     SHORT_MOTD = 451,
     SILENT = 452,
     SPOOF = 453,
     SPOOF_NOTICE = 454,
     STATS_E_DISABLED = 455,
     STATS_I_OPER_ONLY = 456,
     STATS_K_OPER_ONLY = 457,
     STATS_O_OPER_ONLY = 458,
     STATS_P_OPER_ONLY = 459,
     TBOOL = 460,
     TMASKED = 461,
     T_REJECT = 462,
     TS_MAX_DELTA = 463,
     TS_WARN_DELTA = 464,
     TWODOTS = 465,
     T_ALL = 466,
     T_BOTS = 467,
     T_SOFTCALLERID = 468,
     T_CALLERID = 469,
     T_CCONN = 470,
     T_CCONN_FULL = 471,
     T_CLIENT_FLOOD = 472,
     T_DEAF = 473,
     T_DEBUG = 474,
     T_DRONE = 475,
     T_EXTERNAL = 476,
     T_FULL = 477,
     T_HIDECHANNELS = 478,
     T_INVISIBLE = 479,
     T_IPV4 = 480,
     T_IPV6 = 481,
     T_LOCOPS = 482,
     T_LOGPATH = 483,
     T_L_CRIT = 484,
     T_L_DEBUG = 485,
     T_L_ERROR = 486,
     T_L_INFO = 487,
     T_L_NOTICE = 488,
     T_L_TRACE = 489,
     T_L_WARN = 490,
     T_MAX_CLIENTS = 491,
     T_NCHANGE = 492,
     T_OPERWALL = 493,
     T_REJ = 494,
     T_SERVNOTICE = 495,
     T_SKILL = 496,
     T_SPY = 497,
     T_SSL = 498,
     T_UMODES = 499,
     T_UNAUTH = 500,
     T_UNRESV = 501,
     T_UNXLINE = 502,
     T_WALLOP = 503,
     THROTTLE_TIME = 504,
     TOPICBURST = 505,
     TRUE_NO_OPER_FLOOD = 506,
     TKLINE = 507,
     TXLINE = 508,
     TRESV = 509,
     UNKLINE = 510,
     USER = 511,
     USE_EGD = 512,
     USE_EXCEPT = 513,
     USE_INVEX = 514,
     HIDE_KILLER = 515,
     USE_REGEX_BANS = 516,
     USE_KNOCK = 517,
     USE_LOGGING = 518,
     USE_WHOIS_ACTUALLY = 519,
     VHOST = 520,
     VHOST6 = 521,
     XLINE = 522,
     WARN = 523,
     WARN_NO_NLINE = 524
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
#define CLIENTCERT_HASH 283
#define CLOAK_KEY1 284
#define CLOAK_KEY2 285
#define CLOAK_KEY3 286
#define COMPRESSED 287
#define COMPRESSION_LEVEL 288
#define CONNECT 289
#define CONNECTFREQ 290
#define CRYPTLINK 291
#define CYCLE_ON_HOSTCHANGE 292
#define DEFAULT_CIPHER_PREFERENCE 293
#define DEFAULT_FLOODCOUNT 294
#define DEFAULT_SPLIT_SERVER_COUNT 295
#define DEFAULT_SPLIT_USER_COUNT 296
#define DENY 297
#define DESCRIPTION 298
#define DIE 299
#define DISABLE_AUTH 300
#define DISABLE_FAKE_CHANNELS 301
#define DISABLE_HIDDEN 302
#define DISABLE_LOCAL_CHANNELS 303
#define DISABLE_REMOTE_COMMANDS 304
#define DOT_IN_IP6_ADDR 305
#define DOTS_IN_IDENT 306
#define DURATION 307
#define EGDPOOL_PATH 308
#define EMAIL 309
#define ENABLE 310
#define ENCRYPTED 311
#define EXCEED_LIMIT 312
#define EXEMPT 313
#define FAILED_OPER_NOTICE 314
#define FAKENAME 315
#define IRCD_FLAGS 316
#define FLATTEN_LINKS 317
#define FFAILED_OPERLOG 318
#define FKILLLOG 319
#define FKLINELOG 320
#define FGLINELOG 321
#define FIOERRLOG 322
#define FOPERLOG 323
#define FOPERSPYLOG 324
#define FUSERLOG 325
#define GECOS 326
#define GENERAL 327
#define GLINE 328
#define GLINES 329
#define GLINE_EXEMPT 330
#define GLINE_LOG 331
#define GLINE_TIME 332
#define GLINE_MIN_CIDR 333
#define GLINE_MIN_CIDR6 334
#define GLOBAL_KILL 335
#define IRCD_AUTH 336
#define NEED_IDENT 337
#define HAVENT_READ_CONF 338
#define HIDDEN 339
#define HIDDEN_ADMIN 340
#define HIDDEN_NAME 341
#define HIDDEN_OPER 342
#define HIDE_SERVER_IPS 343
#define HIDE_SERVERS 344
#define HIDE_SPOOF_IPS 345
#define HOST 346
#define HUB 347
#define HUB_MASK 348
#define IDLETIME 349
#define IGNORE_BOGUS_TS 350
#define INVISIBLE_ON_CONNECT 351
#define IP 352
#define KILL 353
#define KILL_CHASE_TIME_LIMIT 354
#define KLINE 355
#define KLINE_EXEMPT 356
#define KLINE_REASON 357
#define KLINE_WITH_REASON 358
#define KNOCK_DELAY 359
#define KNOCK_DELAY_CHANNEL 360
#define LAZYLINK 361
#define LEAF_MASK 362
#define LINKS_DELAY 363
#define LISTEN 364
#define T_LOG 365
#define LOGGING 366
#define LOG_LEVEL 367
#define MAX_ACCEPT 368
#define MAX_BANS 369
#define MAX_CHANS_PER_USER 370
#define MAX_GLOBAL 371
#define MAX_IDENT 372
#define MAX_LOCAL 373
#define MAX_NICK_CHANGES 374
#define MAX_NICK_TIME 375
#define MAX_NUMBER 376
#define MAX_TARGETS 377
#define MESSAGE_LOCALE 378
#define MIN_NONWILDCARD 379
#define MIN_NONWILDCARD_SIMPLE 380
#define MODULE 381
#define MODULES 382
#define NAME 383
#define NEED_PASSWORD 384
#define IS_WEBIRC 385
#define NETWORK_DESC 386
#define NETWORK_NAME 387
#define NICK 388
#define NICK_CHANGES 389
#define NO_CREATE_ON_SPLIT 390
#define NO_JOIN_ON_SPLIT 391
#define NO_OPER_FLOOD 392
#define NO_TILDE 393
#define NOT 394
#define NUMBER 395
#define NUMBER_PER_IDENT 396
#define NUMBER_PER_CIDR 397
#define NUMBER_PER_IP 398
#define NUMBER_PER_IP_GLOBAL 399
#define OPERATOR 400
#define OPERS_BYPASS_CALLERID 401
#define OPER_LOG 402
#define OPER_ONLY_UMODES 403
#define OPER_PASS_RESV 404
#define OPER_SPY_T 405
#define OPER_UMODES 406
#define JOIN_FLOOD_COUNT 407
#define JOIN_FLOOD_TIME 408
#define PACE_WAIT 409
#define PACE_WAIT_SIMPLE 410
#define PASSWORD 411
#define PATH 412
#define PING_COOKIE 413
#define PING_TIME 414
#define PING_WARNING 415
#define PORT 416
#define QSTRING 417
#define QUIET_ON_BAN 418
#define REASON 419
#define REDIRPORT 420
#define REDIRSERV 421
#define REGEX_T 422
#define REHASH 423
#define TREJECT_HOLD_TIME 424
#define REMOTE 425
#define REMOTEBAN 426
#define RESTRICT_CHANNELS 427
#define RESTRICTED 428
#define RSA_PRIVATE_KEY_FILE 429
#define RSA_PUBLIC_KEY_FILE 430
#define SSL_CERTIFICATE_FILE 431
#define RESV 432
#define RESV_EXEMPT 433
#define SECONDS 434
#define MINUTES 435
#define HOURS 436
#define DAYS 437
#define WEEKS 438
#define SENDQ 439
#define SEND_PASSWORD 440
#define SERVERHIDE 441
#define SERVERINFO 442
#define SERVICES 443
#define SERVICES_NAME 444
#define SERVLINK_PATH 445
#define IRCD_SID 446
#define TKLINE_EXPIRE_NOTICES 447
#define T_SHARED 448
#define T_CLUSTER 449
#define TYPE 450
#define SHORT_MOTD 451
#define SILENT 452
#define SPOOF 453
#define SPOOF_NOTICE 454
#define STATS_E_DISABLED 455
#define STATS_I_OPER_ONLY 456
#define STATS_K_OPER_ONLY 457
#define STATS_O_OPER_ONLY 458
#define STATS_P_OPER_ONLY 459
#define TBOOL 460
#define TMASKED 461
#define T_REJECT 462
#define TS_MAX_DELTA 463
#define TS_WARN_DELTA 464
#define TWODOTS 465
#define T_ALL 466
#define T_BOTS 467
#define T_SOFTCALLERID 468
#define T_CALLERID 469
#define T_CCONN 470
#define T_CCONN_FULL 471
#define T_CLIENT_FLOOD 472
#define T_DEAF 473
#define T_DEBUG 474
#define T_DRONE 475
#define T_EXTERNAL 476
#define T_FULL 477
#define T_HIDECHANNELS 478
#define T_INVISIBLE 479
#define T_IPV4 480
#define T_IPV6 481
#define T_LOCOPS 482
#define T_LOGPATH 483
#define T_L_CRIT 484
#define T_L_DEBUG 485
#define T_L_ERROR 486
#define T_L_INFO 487
#define T_L_NOTICE 488
#define T_L_TRACE 489
#define T_L_WARN 490
#define T_MAX_CLIENTS 491
#define T_NCHANGE 492
#define T_OPERWALL 493
#define T_REJ 494
#define T_SERVNOTICE 495
#define T_SKILL 496
#define T_SPY 497
#define T_SSL 498
#define T_UMODES 499
#define T_UNAUTH 500
#define T_UNRESV 501
#define T_UNXLINE 502
#define T_WALLOP 503
#define THROTTLE_TIME 504
#define TOPICBURST 505
#define TRUE_NO_OPER_FLOOD 506
#define TKLINE 507
#define TXLINE 508
#define TRESV 509
#define UNKLINE 510
#define USER 511
#define USE_EGD 512
#define USE_EXCEPT 513
#define USE_INVEX 514
#define HIDE_KILLER 515
#define USE_REGEX_BANS 516
#define USE_KNOCK 517
#define USE_LOGGING 518
#define USE_WHOIS_ACTUALLY 519
#define VHOST 520
#define VHOST6 521
#define XLINE 522
#define WARN 523
#define WARN_NO_NLINE 524




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
#include "client.h"	/* for UMODE_ALL only */
#include "pcre.h"
#include "irc_string.h"
#include "irc_getaddrinfo.h"
#include "sprintf_irc.h"
#include "memory.h"
#include "modules.h"
#include "s_serv.h" /* for CAP_LL / IsCapable */
#include "s_misc.h" /* for certfp funcs */
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

static dlink_list col_conf_list  = { NULL, NULL, 0 };
static dlink_list hub_conf_list  = { NULL, NULL, 0 };
static dlink_list leaf_conf_list = { NULL, NULL, 0 };
static unsigned int listener_flags = 0;
static unsigned int regex_ban = 0;
static char userbuf[IRCD_BUFSIZE];
static char hostbuf[IRCD_BUFSIZE];
static char reasonbuf[REASONLEN + 1];
static char gecos_name[REALLEN * 4];

extern dlink_list gdeny_items; /* XXX */

static char *resv_reason = NULL;
static char *listener_address = NULL;
static int not_atom = 0;

struct CollectItem {
  dlink_node node;
  char *name;
  char *user;
  char *host;
  char *passwd;
  int  port;
  int  flags;
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
#line 134 "ircd_parser.y"
{
  int number;
  char *string;
}
/* Line 187 of yacc.c.  */
#line 748 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 761 "y.tab.c"

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
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
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
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
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
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
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
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
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
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
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
#define YYLAST   1484

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  275
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  354
/* YYNRULES -- Number of rules.  */
#define YYNRULES  766
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1549

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   524

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   274,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   270,
       2,   273,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   272,     2,   271,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    50,    53,    54,    56,    59,
      63,    67,    71,    75,    79,    80,    82,    85,    89,    93,
      97,   103,   106,   108,   110,   112,   115,   120,   125,   131,
     134,   136,   138,   140,   142,   144,   146,   148,   150,   152,
     154,   156,   158,   161,   166,   171,   176,   181,   186,   191,
     196,   201,   206,   211,   216,   222,   225,   227,   229,   231,
     233,   236,   241,   246,   251,   257,   260,   262,   264,   266,
     268,   270,   272,   274,   276,   278,   280,   282,   284,   286,
     289,   294,   299,   304,   309,   314,   319,   324,   329,   334,
     339,   344,   349,   354,   359,   364,   369,   374,   379,   380,
     388,   389,   391,   394,   396,   398,   400,   402,   404,   406,
     408,   410,   412,   414,   416,   418,   420,   422,   424,   426,
     428,   430,   432,   434,   436,   438,   440,   442,   444,   447,
     452,   454,   459,   464,   469,   474,   479,   484,   485,   491,
     495,   497,   499,   501,   503,   505,   507,   509,   511,   513,
     515,   517,   519,   521,   523,   525,   527,   529,   531,   533,
     535,   537,   542,   547,   552,   557,   562,   567,   572,   577,
     582,   587,   592,   597,   602,   607,   612,   613,   619,   623,
     625,   626,   630,   631,   634,   636,   638,   640,   642,   644,
     646,   648,   650,   652,   654,   656,   658,   660,   662,   664,
     666,   667,   675,   676,   678,   681,   683,   685,   687,   689,
     691,   693,   695,   697,   699,   701,   703,   705,   707,   709,
     712,   717,   719,   724,   729,   734,   739,   744,   749,   754,
     759,   764,   769,   774,   779,   780,   787,   788,   794,   798,
     800,   802,   804,   807,   809,   811,   813,   815,   817,   820,
     821,   827,   831,   833,   835,   839,   844,   849,   850,   857,
     860,   862,   864,   866,   868,   870,   872,   874,   876,   878,
     880,   882,   884,   886,   888,   890,   892,   894,   896,   898,
     901,   906,   911,   916,   921,   926,   931,   932,   938,   942,
     944,   945,   949,   950,   953,   955,   957,   959,   961,   963,
     965,   967,   969,   971,   973,   975,   980,   985,   990,   995,
    1000,  1005,  1010,  1015,  1020,  1025,  1030,  1031,  1038,  1041,
    1043,  1045,  1047,  1049,  1052,  1057,  1062,  1067,  1068,  1075,
    1078,  1080,  1082,  1084,  1086,  1089,  1094,  1099,  1100,  1106,
    1110,  1112,  1114,  1116,  1118,  1120,  1122,  1124,  1126,  1128,
    1130,  1132,  1134,  1136,  1138,  1139,  1146,  1149,  1151,  1153,
    1155,  1158,  1163,  1164,  1170,  1174,  1176,  1178,  1180,  1182,
    1184,  1186,  1188,  1190,  1192,  1194,  1196,  1198,  1199,  1207,
    1208,  1210,  1213,  1215,  1217,  1219,  1221,  1223,  1225,  1227,
    1229,  1231,  1233,  1235,  1237,  1239,  1241,  1243,  1245,  1247,
    1249,  1251,  1253,  1256,  1261,  1263,  1268,  1273,  1278,  1283,
    1288,  1293,  1298,  1303,  1304,  1310,  1314,  1316,  1317,  1321,
    1322,  1325,  1327,  1329,  1331,  1333,  1335,  1337,  1342,  1347,
    1352,  1357,  1362,  1367,  1372,  1377,  1382,  1387,  1388,  1395,
    1396,  1402,  1406,  1408,  1410,  1413,  1415,  1417,  1419,  1421,
    1423,  1428,  1433,  1434,  1441,  1444,  1446,  1448,  1450,  1452,
    1457,  1462,  1468,  1471,  1473,  1475,  1477,  1479,  1484,  1489,
    1490,  1497,  1498,  1504,  1508,  1510,  1512,  1515,  1517,  1519,
    1521,  1523,  1525,  1530,  1535,  1541,  1544,  1546,  1548,  1550,
    1552,  1554,  1556,  1558,  1560,  1562,  1564,  1566,  1568,  1570,
    1572,  1574,  1576,  1578,  1580,  1582,  1584,  1586,  1588,  1590,
    1592,  1594,  1596,  1598,  1600,  1602,  1604,  1606,  1608,  1610,
    1612,  1614,  1616,  1618,  1620,  1622,  1624,  1626,  1628,  1630,
    1632,  1634,  1636,  1638,  1640,  1642,  1644,  1646,  1648,  1650,
    1652,  1654,  1656,  1658,  1660,  1662,  1664,  1666,  1668,  1670,
    1675,  1680,  1685,  1690,  1695,  1700,  1705,  1710,  1715,  1720,
    1725,  1730,  1735,  1740,  1745,  1750,  1755,  1760,  1765,  1770,
    1775,  1780,  1785,  1790,  1795,  1800,  1805,  1810,  1815,  1820,
    1825,  1830,  1835,  1840,  1845,  1850,  1855,  1860,  1865,  1870,
    1875,  1880,  1885,  1890,  1895,  1900,  1905,  1910,  1915,  1920,
    1925,  1930,  1935,  1940,  1945,  1950,  1951,  1957,  1961,  1963,
    1965,  1967,  1969,  1971,  1973,  1975,  1977,  1979,  1981,  1983,
    1985,  1987,  1989,  1991,  1993,  1995,  1997,  1999,  2001,  2003,
    2004,  2010,  2014,  2016,  2018,  2020,  2022,  2024,  2026,  2028,
    2030,  2032,  2034,  2036,  2038,  2040,  2042,  2044,  2046,  2048,
    2050,  2052,  2054,  2056,  2061,  2066,  2071,  2076,  2081,  2082,
    2089,  2092,  2094,  2096,  2098,  2100,  2102,  2104,  2106,  2108,
    2113,  2118,  2119,  2125,  2129,  2131,  2133,  2135,  2140,  2145,
    2146,  2152,  2156,  2158,  2160,  2162,  2168,  2171,  2173,  2175,
    2177,  2179,  2181,  2183,  2185,  2187,  2189,  2191,  2193,  2195,
    2197,  2199,  2201,  2203,  2205,  2207,  2209,  2211,  2213,  2215,
    2220,  2225,  2230,  2235,  2240,  2245,  2250,  2255,  2260,  2265,
    2270,  2275,  2280,  2285,  2290,  2295,  2300,  2305,  2310,  2315,
    2321,  2324,  2326,  2328,  2330,  2332,  2334,  2336,  2338,  2340,
    2342,  2347,  2352,  2357,  2362,  2367,  2372
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     276,     0,    -1,    -1,   276,   277,    -1,   301,    -1,   307,
      -1,   322,    -1,   596,    -1,   361,    -1,   380,    -1,   394,
      -1,   287,    -1,   619,    -1,   422,    -1,   429,    -1,   439,
      -1,   448,    -1,   479,    -1,   489,    -1,   495,    -1,   510,
      -1,   580,    -1,   500,    -1,   282,    -1,     1,   270,    -1,
       1,   271,    -1,    -1,   279,    -1,   140,   278,    -1,   140,
     179,   278,    -1,   140,   180,   278,    -1,   140,   181,   278,
      -1,   140,   182,   278,    -1,   140,   183,   278,    -1,    -1,
     281,    -1,   140,   280,    -1,   140,    15,   280,    -1,   140,
      16,   280,    -1,   140,    17,   280,    -1,   127,   272,   283,
     271,   270,    -1,   283,   284,    -1,   284,    -1,   285,    -1,
     286,    -1,     1,   270,    -1,   126,   273,   162,   270,    -1,
     157,   273,   162,   270,    -1,   187,   272,   288,   271,   270,
      -1,   288,   289,    -1,   289,    -1,   292,    -1,   297,    -1,
     300,    -1,   294,    -1,   295,    -1,   296,    -1,   299,    -1,
     291,    -1,   298,    -1,   293,    -1,   290,    -1,     1,   270,
      -1,   176,   273,   162,   270,    -1,   174,   273,   162,   270,
      -1,   128,   273,   162,   270,    -1,   191,   273,   162,   270,
      -1,    43,   273,   162,   270,    -1,   132,   273,   162,   270,
      -1,   131,   273,   162,   270,    -1,   265,   273,   162,   270,
      -1,   266,   273,   162,   270,    -1,   236,   273,   140,   270,
      -1,    92,   273,   205,   270,    -1,     5,   272,   302,   271,
     270,    -1,   302,   303,    -1,   303,    -1,   304,    -1,   306,
      -1,   305,    -1,     1,   270,    -1,   128,   273,   162,   270,
      -1,    54,   273,   162,   270,    -1,    43,   273,   162,   270,
      -1,   111,   272,   308,   271,   270,    -1,   308,   309,    -1,
     309,    -1,   310,    -1,   311,    -1,   320,    -1,   321,    -1,
     312,    -1,   314,    -1,   316,    -1,   317,    -1,   319,    -1,
     315,    -1,   318,    -1,   313,    -1,     1,   270,    -1,   228,
     273,   162,   270,    -1,   147,   273,   162,   270,    -1,    70,
     273,   162,   270,    -1,    63,   273,   162,   270,    -1,    68,
     273,   162,   270,    -1,    69,   273,   162,   270,    -1,    66,
     273,   162,   270,    -1,    65,   273,   162,   270,    -1,    67,
     273,   162,   270,    -1,    64,   273,   162,   270,    -1,   112,
     273,   229,   270,    -1,   112,   273,   231,   270,    -1,   112,
     273,   235,   270,    -1,   112,   273,   233,   270,    -1,   112,
     273,   234,   270,    -1,   112,   273,   232,   270,    -1,   112,
     273,   230,   270,    -1,   263,   273,   205,   270,    -1,    -1,
     145,   323,   324,   272,   325,   271,   270,    -1,    -1,   328,
      -1,   325,   326,    -1,   326,    -1,   327,    -1,   329,    -1,
     331,    -1,   350,    -1,   351,    -1,   335,    -1,   334,    -1,
     339,    -1,   340,    -1,   342,    -1,   343,    -1,   344,    -1,
     345,    -1,   346,    -1,   341,    -1,   347,    -1,   348,    -1,
     349,    -1,   353,    -1,   332,    -1,   333,    -1,   330,    -1,
     352,    -1,   354,    -1,     1,   270,    -1,   128,   273,   162,
     270,    -1,   162,    -1,   256,   273,   162,   270,    -1,    28,
     273,   162,   270,    -1,   156,   273,   162,   270,    -1,    56,
     273,   205,   270,    -1,   175,   273,   162,   270,    -1,    27,
     273,   162,   270,    -1,    -1,   244,   336,   273,   337,   270,
      -1,   337,   274,   338,    -1,   338,    -1,   212,    -1,   215,
      -1,   216,    -1,   218,    -1,   219,    -1,   222,    -1,   241,
      -1,   237,    -1,   239,    -1,   245,    -1,   242,    -1,   221,
      -1,   238,    -1,   240,    -1,   224,    -1,   248,    -1,   213,
      -1,   214,    -1,   227,    -1,   223,    -1,    80,   273,   205,
     270,    -1,   170,   273,   205,   270,    -1,   171,   273,   205,
     270,    -1,   100,   273,   205,   270,    -1,   267,   273,   205,
     270,    -1,   255,   273,   205,   270,    -1,    73,   273,   205,
     270,    -1,   134,   273,   205,   270,    -1,    44,   273,   205,
     270,    -1,   168,   273,   205,   270,    -1,     5,   273,   205,
     270,    -1,    85,   273,   205,   270,    -1,    87,   273,   205,
     270,    -1,   150,   273,   205,   270,    -1,   238,   273,   205,
     270,    -1,    -1,    61,   355,   273,   356,   270,    -1,   356,
     274,   357,    -1,   357,    -1,    -1,   139,   358,   360,    -1,
      -1,   359,   360,    -1,    80,    -1,   170,    -1,   100,    -1,
     255,    -1,   267,    -1,    73,    -1,    44,    -1,   168,    -1,
       5,    -1,    85,    -1,   134,    -1,   238,    -1,   150,    -1,
      87,    -1,   171,    -1,    56,    -1,    -1,    27,   362,   363,
     272,   364,   271,   270,    -1,    -1,   367,    -1,   364,   365,
      -1,   365,    -1,   366,    -1,   377,    -1,   378,    -1,   368,
      -1,   369,    -1,   379,    -1,   370,    -1,   371,    -1,   372,
      -1,   373,    -1,   374,    -1,   375,    -1,   376,    -1,     1,
     270,    -1,   128,   273,   162,   270,    -1,   162,    -1,   159,
     273,   279,   270,    -1,   160,   273,   279,   270,    -1,   143,
     273,   140,   270,    -1,    35,   273,   279,   270,    -1,   121,
     273,   140,   270,    -1,   116,   273,   140,   270,    -1,   118,
     273,   140,   270,    -1,   117,   273,   140,   270,    -1,   184,
     273,   281,   270,    -1,    24,   273,   140,   270,    -1,    25,
     273,   140,   270,    -1,   142,   273,   140,   270,    -1,    -1,
     109,   381,   272,   386,   271,   270,    -1,    -1,    61,   383,
     273,   384,   270,    -1,   384,   274,   385,    -1,   385,    -1,
     243,    -1,    84,    -1,   386,   387,    -1,   387,    -1,   388,
      -1,   382,    -1,   392,    -1,   393,    -1,     1,   270,    -1,
      -1,   161,   273,   390,   389,   270,    -1,   390,   274,   391,
      -1,   391,    -1,   140,    -1,   140,   210,   140,    -1,    97,
     273,   162,   270,    -1,    91,   273,   162,   270,    -1,    -1,
      81,   395,   272,   396,   271,   270,    -1,   396,   397,    -1,
     397,    -1,   398,    -1,   399,    -1,   402,    -1,   404,    -1,
     411,    -1,   412,    -1,   413,    -1,   415,    -1,   416,    -1,
     417,    -1,   401,    -1,   420,    -1,   418,    -1,   419,    -1,
     414,    -1,   421,    -1,   403,    -1,   400,    -1,     1,   270,
      -1,   256,   273,   162,   270,    -1,   156,   273,   162,   270,
      -1,    28,   273,   162,   270,    -1,   199,   273,   205,   270,
      -1,    27,   273,   162,   270,    -1,    56,   273,   205,   270,
      -1,    -1,    61,   405,   273,   406,   270,    -1,   406,   274,
     407,    -1,   407,    -1,    -1,   139,   408,   410,    -1,    -1,
     409,   410,    -1,   199,    -1,    57,    -1,   101,    -1,    82,
      -1,    21,    -1,    22,    -1,   138,    -1,    75,    -1,   178,
      -1,   130,    -1,   129,    -1,   101,   273,   205,   270,    -1,
      82,   273,   205,   270,    -1,    57,   273,   205,   270,    -1,
      21,   273,   205,   270,    -1,   138,   273,   205,   270,    -1,
      75,   273,   205,   270,    -1,   198,   273,   162,   270,    -1,
     166,   273,   162,   270,    -1,   165,   273,   140,   270,    -1,
     130,   273,   205,   270,    -1,   129,   273,   205,   270,    -1,
      -1,   177,   423,   272,   424,   271,   270,    -1,   424,   425,
      -1,   425,    -1,   426,    -1,   427,    -1,   428,    -1,     1,
     270,    -1,   164,   273,   162,   270,    -1,    23,   273,   162,
     270,    -1,   133,   273,   162,   270,    -1,    -1,   193,   430,
     272,   431,   271,   270,    -1,   431,   432,    -1,   432,    -1,
     433,    -1,   434,    -1,   435,    -1,     1,   270,    -1,   128,
     273,   162,   270,    -1,   256,   273,   162,   270,    -1,    -1,
     195,   436,   273,   437,   270,    -1,   437,   274,   438,    -1,
     438,    -1,   100,    -1,   252,    -1,   255,    -1,   267,    -1,
     253,    -1,   247,    -1,   177,    -1,   254,    -1,   246,    -1,
     227,    -1,   188,    -1,   168,    -1,   211,    -1,    -1,   194,
     440,   272,   441,   271,   270,    -1,   441,   442,    -1,   442,
      -1,   443,    -1,   444,    -1,     1,   270,    -1,   128,   273,
     162,   270,    -1,    -1,   195,   445,   273,   446,   270,    -1,
     446,   274,   447,    -1,   447,    -1,   100,    -1,   252,    -1,
     255,    -1,   267,    -1,   253,    -1,   247,    -1,   177,    -1,
     254,    -1,   246,    -1,   227,    -1,   211,    -1,    -1,    34,
     449,   450,   272,   451,   271,   270,    -1,    -1,   454,    -1,
     451,   452,    -1,   452,    -1,   453,    -1,   455,    -1,   456,
      -1,   457,    -1,   458,    -1,   460,    -1,   459,    -1,   461,
      -1,   462,    -1,   475,    -1,   476,    -1,   477,    -1,   473,
      -1,   470,    -1,   472,    -1,   471,    -1,   469,    -1,   478,
      -1,   474,    -1,     1,   270,    -1,   128,   273,   162,   270,
      -1,   162,    -1,    91,   273,   162,   270,    -1,   265,   273,
     162,   270,    -1,   185,   273,   162,   270,    -1,     3,   273,
     162,   270,    -1,   161,   273,   140,   270,    -1,     6,   273,
     225,   270,    -1,     6,   273,   226,   270,    -1,    60,   273,
     162,   270,    -1,    -1,    61,   463,   273,   464,   270,    -1,
     464,   274,   465,    -1,   465,    -1,    -1,   139,   466,   468,
      -1,    -1,   467,   468,    -1,   106,    -1,    32,    -1,    36,
      -1,    11,    -1,    13,    -1,   250,    -1,   175,   273,   162,
     270,    -1,    56,   273,   205,   270,    -1,    36,   273,   205,
     270,    -1,    32,   273,   205,   270,    -1,    11,   273,   205,
     270,    -1,   250,   273,   205,   270,    -1,    93,   273,   162,
     270,    -1,   107,   273,   162,   270,    -1,    27,   273,   162,
     270,    -1,    26,   273,   162,   270,    -1,    -1,    98,   480,
     272,   485,   271,   270,    -1,    -1,   195,   482,   273,   483,
     270,    -1,   483,   274,   484,    -1,   484,    -1,   167,    -1,
     485,   486,    -1,   486,    -1,   487,    -1,   488,    -1,   481,
      -1,     1,    -1,   256,   273,   162,   270,    -1,   164,   273,
     162,   270,    -1,    -1,    42,   490,   272,   491,   271,   270,
      -1,   491,   492,    -1,   492,    -1,   493,    -1,   494,    -1,
       1,    -1,    97,   273,   162,   270,    -1,   164,   273,   162,
     270,    -1,    58,   272,   496,   271,   270,    -1,   496,   497,
      -1,   497,    -1,   498,    -1,   499,    -1,     1,    -1,    97,
     273,   162,   270,    -1,    28,   273,   162,   270,    -1,    -1,
      71,   501,   272,   506,   271,   270,    -1,    -1,   195,   503,
     273,   504,   270,    -1,   504,   274,   505,    -1,   505,    -1,
     167,    -1,   506,   507,    -1,   507,    -1,   508,    -1,   509,
      -1,   502,    -1,     1,    -1,   128,   273,   162,   270,    -1,
     164,   273,   162,   270,    -1,    72,   272,   511,   271,   270,
      -1,   511,   512,    -1,   512,    -1,   520,    -1,   521,    -1,
     523,    -1,   524,    -1,   525,    -1,   526,    -1,   527,    -1,
     528,    -1,   529,    -1,   530,    -1,   531,    -1,   519,    -1,
     533,    -1,   534,    -1,   539,    -1,   540,    -1,   557,    -1,
     542,    -1,   545,    -1,   547,    -1,   546,    -1,   550,    -1,
     543,    -1,   551,    -1,   552,    -1,   553,    -1,   554,    -1,
     556,    -1,   555,    -1,   571,    -1,   558,    -1,   562,    -1,
     563,    -1,   567,    -1,   548,    -1,   549,    -1,   577,    -1,
     575,    -1,   576,    -1,   559,    -1,   522,    -1,   560,    -1,
     541,    -1,   561,    -1,   578,    -1,   566,    -1,   532,    -1,
     579,    -1,   564,    -1,   565,    -1,   515,    -1,   518,    -1,
     513,    -1,   514,    -1,   516,    -1,   517,    -1,   544,    -1,
     535,    -1,   536,    -1,   537,    -1,   538,    -1,     1,    -1,
      78,   273,   140,   270,    -1,    79,   273,   140,   270,    -1,
      13,   273,   205,   270,    -1,   264,   273,   205,   270,    -1,
     169,   273,   279,   270,    -1,   192,   273,   205,   270,    -1,
      99,   273,   140,   270,    -1,    90,   273,   205,   270,    -1,
      95,   273,   205,   270,    -1,    49,   273,   205,   270,    -1,
      59,   273,   205,   270,    -1,     8,   273,   205,   270,    -1,
     120,   273,   279,   270,    -1,   119,   273,   140,   270,    -1,
     113,   273,   140,   270,    -1,     9,   273,   279,   270,    -1,
      10,   273,   205,   270,    -1,   209,   273,   279,   270,    -1,
     208,   273,   279,   270,    -1,    83,   273,   140,   270,    -1,
     103,   273,   205,   270,    -1,   102,   273,   162,   270,    -1,
      29,   273,   162,   270,    -1,    30,   273,   162,   270,    -1,
      31,   273,   162,   270,    -1,   189,   273,   162,   270,    -1,
      96,   273,   205,   270,    -1,   269,   273,   205,   270,    -1,
     200,   273,   205,   270,    -1,   203,   273,   205,   270,    -1,
     204,   273,   205,   270,    -1,   260,   273,   205,   270,    -1,
     202,   273,   205,   270,    -1,   202,   273,   206,   270,    -1,
     201,   273,   205,   270,    -1,   201,   273,   206,   270,    -1,
     154,   273,   279,   270,    -1,    20,   273,   279,   270,    -1,
     146,   273,   205,   270,    -1,   155,   273,   279,   270,    -1,
     196,   273,   205,   270,    -1,   137,   273,   205,   270,    -1,
     251,   273,   205,   270,    -1,   149,   273,   205,   270,    -1,
     123,   273,   162,   270,    -1,    94,   273,   279,   270,    -1,
      51,   273,   140,   270,    -1,   122,   273,   140,   270,    -1,
     190,   273,   162,   270,    -1,    38,   273,   162,   270,    -1,
      33,   273,   140,   270,    -1,   257,   273,   205,   270,    -1,
      53,   273,   162,   270,    -1,   158,   273,   205,   270,    -1,
      45,   273,   205,   270,    -1,   249,   273,   279,   270,    -1,
      -1,   151,   568,   273,   569,   270,    -1,   569,   274,   570,
      -1,   570,    -1,   212,    -1,   215,    -1,   216,    -1,   218,
      -1,   219,    -1,   222,    -1,   241,    -1,   237,    -1,   239,
      -1,   245,    -1,   242,    -1,   221,    -1,   238,    -1,   240,
      -1,   224,    -1,   248,    -1,   213,    -1,   214,    -1,   227,
      -1,   223,    -1,    -1,   148,   572,   273,   573,   270,    -1,
     573,   274,   574,    -1,   574,    -1,   212,    -1,   215,    -1,
     216,    -1,   218,    -1,   219,    -1,   222,    -1,   241,    -1,
     237,    -1,   239,    -1,   245,    -1,   242,    -1,   221,    -1,
     238,    -1,   240,    -1,   224,    -1,   248,    -1,   213,    -1,
     214,    -1,   227,    -1,   223,    -1,   124,   273,   140,   270,
      -1,   125,   273,   140,   270,    -1,    39,   273,   140,   270,
      -1,   217,   273,   281,   270,    -1,    50,   273,   205,   270,
      -1,    -1,    74,   581,   272,   582,   271,   270,    -1,   582,
     583,    -1,   583,    -1,   584,    -1,   585,    -1,   586,    -1,
     590,    -1,   591,    -1,   592,    -1,     1,    -1,    55,   273,
     205,   270,    -1,    52,   273,   279,   270,    -1,    -1,   111,
     587,   273,   588,   270,    -1,   588,   274,   589,    -1,   589,
      -1,   207,    -1,    12,    -1,   256,   273,   162,   270,    -1,
     128,   273,   162,   270,    -1,    -1,     4,   593,   273,   594,
     270,    -1,   594,   274,   595,    -1,   595,    -1,   207,    -1,
      12,    -1,    23,   272,   597,   271,   270,    -1,   597,   598,
      -1,   598,    -1,   602,    -1,   603,    -1,   604,    -1,   606,
      -1,   605,    -1,   611,    -1,   607,    -1,   608,    -1,   609,
      -1,   610,    -1,   612,    -1,   613,    -1,   614,    -1,   601,
      -1,   615,    -1,   616,    -1,   617,    -1,   618,    -1,   600,
      -1,   599,    -1,     1,    -1,    37,   273,   205,   270,    -1,
      46,   273,   205,   270,    -1,   172,   273,   205,   270,    -1,
      48,   273,   205,   270,    -1,   258,   273,   205,   270,    -1,
     259,   273,   205,   270,    -1,   261,   273,   205,   270,    -1,
     262,   273,   205,   270,    -1,   104,   273,   279,   270,    -1,
     105,   273,   279,   270,    -1,   115,   273,   140,   270,    -1,
     163,   273,   205,   270,    -1,   114,   273,   140,   270,    -1,
      41,   273,   140,   270,    -1,    40,   273,   140,   270,    -1,
     135,   273,   205,   270,    -1,   136,   273,   205,   270,    -1,
      14,   273,   205,   270,    -1,   152,   273,   140,   270,    -1,
     153,   273,   279,   270,    -1,   186,   272,   620,   271,   270,
      -1,   620,   621,    -1,   621,    -1,   622,    -1,   623,    -1,
     625,    -1,   627,    -1,   626,    -1,   624,    -1,   628,    -1,
       1,    -1,    62,   273,   205,   270,    -1,    89,   273,   205,
     270,    -1,    86,   273,   162,   270,    -1,   108,   273,   279,
     270,    -1,    84,   273,   205,   270,    -1,    47,   273,   205,
     270,    -1,    88,   273,   205,   270,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   407,   407,   408,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   436,   436,   437,   441,
     445,   449,   453,   457,   463,   463,   464,   465,   466,   467,
     474,   477,   477,   478,   478,   478,   480,   497,   508,   511,
     512,   513,   513,   514,   514,   515,   515,   516,   517,   517,
     518,   518,   519,   521,   555,   615,   629,   644,   653,   667,
     676,   704,   734,   757,   807,   809,   809,   810,   810,   811,
     811,   813,   822,   831,   844,   846,   847,   849,   849,   850,
     851,   851,   852,   852,   853,   853,   854,   854,   855,   856,
     858,   862,   866,   873,   880,   887,   894,   901,   908,   915,
     922,   926,   930,   934,   938,   942,   946,   952,   962,   961,
    1060,  1060,  1061,  1061,  1062,  1062,  1062,  1062,  1063,  1063,
    1064,  1064,  1064,  1065,  1065,  1065,  1066,  1066,  1066,  1067,
    1067,  1067,  1067,  1068,  1068,  1068,  1068,  1069,  1069,  1071,
    1083,  1095,  1129,  1148,  1160,  1171,  1213,  1223,  1222,  1228,
    1228,  1229,  1233,  1237,  1241,  1245,  1249,  1253,  1257,  1261,
    1265,  1269,  1273,  1277,  1281,  1285,  1289,  1293,  1297,  1301,
    1305,  1311,  1322,  1333,  1344,  1355,  1366,  1377,  1388,  1399,
    1410,  1421,  1432,  1443,  1454,  1465,  1477,  1476,  1480,  1480,
    1481,  1481,  1482,  1482,  1484,  1491,  1498,  1505,  1512,  1519,
    1526,  1533,  1540,  1547,  1554,  1561,  1568,  1575,  1582,  1589,
    1603,  1602,  1651,  1651,  1653,  1653,  1654,  1655,  1655,  1656,
    1657,  1658,  1659,  1660,  1661,  1662,  1663,  1664,  1665,  1666,
    1668,  1677,  1686,  1692,  1698,  1704,  1710,  1716,  1722,  1728,
    1734,  1740,  1746,  1752,  1762,  1761,  1778,  1777,  1782,  1782,
    1783,  1787,  1793,  1793,  1794,  1794,  1794,  1794,  1794,  1796,
    1796,  1798,  1798,  1800,  1814,  1834,  1843,  1856,  1855,  1930,
    1930,  1931,  1931,  1931,  1931,  1932,  1932,  1933,  1933,  1933,
    1934,  1934,  1934,  1935,  1935,  1935,  1936,  1936,  1936,  1936,
    1938,  1975,  1988,  2007,  2018,  2027,  2039,  2038,  2042,  2042,
    2043,  2043,  2044,  2044,  2046,  2054,  2061,  2068,  2075,  2082,
    2089,  2096,  2103,  2110,  2117,  2126,  2137,  2148,  2159,  2170,
    2181,  2193,  2212,  2222,  2231,  2242,  2258,  2257,  2273,  2273,
    2274,  2274,  2274,  2274,  2276,  2285,  2300,  2314,  2313,  2329,
    2329,  2330,  2330,  2330,  2330,  2332,  2341,  2364,  2363,  2369,
    2369,  2370,  2374,  2378,  2382,  2386,  2390,  2394,  2398,  2402,
    2406,  2410,  2414,  2418,  2428,  2427,  2444,  2444,  2445,  2445,
    2445,  2447,  2454,  2453,  2459,  2459,  2460,  2464,  2468,  2472,
    2476,  2480,  2484,  2488,  2492,  2496,  2500,  2510,  2509,  2655,
    2655,  2656,  2656,  2657,  2657,  2657,  2658,  2658,  2659,  2659,
    2660,  2660,  2660,  2661,  2661,  2661,  2662,  2662,  2662,  2663,
    2663,  2664,  2664,  2666,  2678,  2690,  2699,  2725,  2743,  2761,
    2767,  2771,  2779,  2789,  2788,  2792,  2792,  2793,  2793,  2794,
    2794,  2796,  2803,  2814,  2821,  2828,  2835,  2845,  2886,  2897,
    2908,  2923,  2934,  2945,  2958,  2971,  2980,  3016,  3015,  3079,
    3078,  3082,  3082,  3083,  3089,  3089,  3090,  3090,  3090,  3090,
    3092,  3111,  3121,  3120,  3142,  3142,  3143,  3143,  3143,  3145,
    3154,  3166,  3168,  3168,  3169,  3169,  3169,  3171,  3189,  3222,
    3221,  3263,  3262,  3266,  3266,  3267,  3273,  3273,  3274,  3274,
    3274,  3274,  3276,  3282,  3291,  3294,  3294,  3295,  3295,  3296,
    3296,  3297,  3297,  3298,  3298,  3299,  3300,  3300,  3301,  3301,
    3302,  3302,  3303,  3303,  3304,  3304,  3305,  3305,  3306,  3306,
    3307,  3307,  3308,  3308,  3309,  3309,  3310,  3310,  3311,  3311,
    3312,  3312,  3313,  3313,  3314,  3314,  3315,  3315,  3316,  3316,
    3317,  3317,  3318,  3318,  3319,  3319,  3320,  3320,  3321,  3321,
    3322,  3322,  3323,  3323,  3324,  3324,  3324,  3325,  3326,  3330,
    3335,  3340,  3345,  3350,  3355,  3360,  3365,  3370,  3375,  3380,
    3385,  3390,  3395,  3400,  3405,  3410,  3415,  3420,  3426,  3437,
    3442,  3451,  3460,  3469,  3478,  3487,  3492,  3497,  3502,  3507,
    3512,  3517,  3520,  3525,  3528,  3533,  3538,  3543,  3548,  3553,
    3558,  3563,  3568,  3573,  3584,  3589,  3594,  3599,  3608,  3640,
    3658,  3663,  3672,  3677,  3682,  3688,  3687,  3692,  3692,  3693,
    3696,  3699,  3702,  3705,  3708,  3711,  3714,  3717,  3720,  3723,
    3726,  3729,  3732,  3735,  3738,  3741,  3744,  3747,  3750,  3756,
    3755,  3760,  3760,  3761,  3764,  3767,  3770,  3773,  3776,  3779,
    3782,  3785,  3788,  3791,  3794,  3797,  3800,  3803,  3806,  3809,
    3812,  3815,  3818,  3823,  3828,  3833,  3838,  3843,  3852,  3851,
    3875,  3875,  3876,  3877,  3878,  3879,  3880,  3881,  3882,  3884,
    3890,  3897,  3896,  3901,  3901,  3902,  3906,  3912,  3946,  3956,
    3955,  4005,  4005,  4006,  4010,  4019,  4022,  4022,  4023,  4023,
    4024,  4024,  4024,  4025,  4025,  4026,  4026,  4027,  4027,  4028,
    4029,  4029,  4030,  4030,  4031,  4031,  4032,  4033,  4033,  4035,
    4040,  4045,  4050,  4055,  4060,  4065,  4070,  4075,  4080,  4085,
    4090,  4095,  4100,  4105,  4110,  4115,  4120,  4125,  4130,  4138,
    4141,  4141,  4142,  4142,  4143,  4144,  4145,  4145,  4146,  4147,
    4149,  4155,  4161,  4170,  4184,  4190,  4196
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ACTION", "ADMIN",
  "AFTYPE", "T_ALLOW", "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME",
  "ANTI_SPAM_CONNECT_NUMERIC", "AUTOCONN", "T_BLOCK", "BURST_AWAY",
  "BURST_TOPICWHO", "BYTES", "KBYTES", "MBYTES", "GBYTES", "TBYTES",
  "CALLER_ID_WAIT", "CAN_FLOOD", "CAN_IDLE", "CHANNEL", "CIDR_BITLEN_IPV4",
  "CIDR_BITLEN_IPV6", "CIPHER_PREFERENCE", "CLASS", "CLIENTCERT_HASH",
  "CLOAK_KEY1", "CLOAK_KEY2", "CLOAK_KEY3", "COMPRESSED",
  "COMPRESSION_LEVEL", "CONNECT", "CONNECTFREQ", "CRYPTLINK",
  "CYCLE_ON_HOSTCHANGE", "DEFAULT_CIPHER_PREFERENCE", "DEFAULT_FLOODCOUNT",
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
  "IS_WEBIRC", "NETWORK_DESC", "NETWORK_NAME", "NICK", "NICK_CHANGES",
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
  "USE_EGD", "USE_EXCEPT", "USE_INVEX", "HIDE_KILLER", "USE_REGEX_BANS",
  "USE_KNOCK", "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST", "VHOST6",
  "XLINE", "WARN", "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", "','",
  "$accept", "conf", "conf_item", "timespec_", "timespec", "sizespec_",
  "sizespec", "modules_entry", "modules_items", "modules_item",
  "modules_module", "modules_path", "serverinfo_entry", "serverinfo_items",
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
  "oper_user", "oper_client_certificate_hash", "oper_password",
  "oper_encrypted", "oper_rsa_public_key_file", "oper_class",
  "oper_umodes", "@2", "oper_umodes_items", "oper_umodes_item",
  "oper_global_kill", "oper_remote", "oper_remoteban", "oper_kline",
  "oper_xline", "oper_unkline", "oper_gline", "oper_nick_changes",
  "oper_die", "oper_rehash", "oper_admin", "oper_hidden_admin",
  "oper_hidden_oper", "oper_spy", "oper_operwall", "oper_flags", "@3",
  "oper_flags_items", "oper_flags_item", "@4", "@5",
  "oper_flags_item_atom", "class_entry", "@6", "class_name_b",
  "class_items", "class_item", "class_name", "class_name_t",
  "class_ping_time", "class_ping_warning", "class_number_per_ip",
  "class_connectfreq", "class_max_number", "class_max_global",
  "class_max_local", "class_max_ident", "class_sendq",
  "class_cidr_bitlen_ipv4", "class_cidr_bitlen_ipv6",
  "class_number_per_cidr", "listen_entry", "@7", "listen_flags", "@8",
  "listen_flags_items", "listen_flags_item", "listen_items", "listen_item",
  "listen_port", "@9", "port_items", "port_item", "listen_address",
  "listen_host", "auth_entry", "@10", "auth_items", "auth_item",
  "auth_user", "auth_passwd", "auth_client_certificate_hash",
  "auth_spoof_notice", "auth_class", "auth_encrypted", "auth_flags", "@11",
  "auth_flags_items", "auth_flags_item", "@12", "@13",
  "auth_flags_item_atom", "auth_kline_exempt", "auth_need_ident",
  "auth_exceed_limit", "auth_can_flood", "auth_no_tilde",
  "auth_gline_exempt", "auth_spoof", "auth_redir_serv", "auth_redir_port",
  "auth_webirc", "auth_need_password", "resv_entry", "@14", "resv_items",
  "resv_item", "resv_creason", "resv_channel", "resv_nick", "shared_entry",
  "@15", "shared_items", "shared_item", "shared_name", "shared_user",
  "shared_type", "@16", "shared_types", "shared_type_item",
  "cluster_entry", "@17", "cluster_items", "cluster_item", "cluster_name",
  "cluster_type", "@18", "cluster_types", "cluster_type_item",
  "connect_entry", "@19", "connect_name_b", "connect_items",
  "connect_item", "connect_name", "connect_name_t", "connect_host",
  "connect_vhost", "connect_send_password", "connect_accept_password",
  "connect_port", "connect_aftype", "connect_fakename", "connect_flags",
  "@20", "connect_flags_items", "connect_flags_item", "@21", "@22",
  "connect_flags_item_atom", "connect_rsa_public_key_file",
  "connect_encrypted", "connect_cryptlink", "connect_compressed",
  "connect_auto", "connect_topicburst", "connect_hub_mask",
  "connect_leaf_mask", "connect_class", "connect_cipher_preference",
  "kill_entry", "@23", "kill_type", "@24", "kill_type_items",
  "kill_type_item", "kill_items", "kill_item", "kill_user", "kill_reason",
  "deny_entry", "@25", "deny_items", "deny_item", "deny_ip", "deny_reason",
  "exempt_entry", "exempt_items", "exempt_item", "exempt_ip",
  "exempt_client_certificate_hash", "gecos_entry", "@26", "gecos_flags",
  "@27", "gecos_flags_items", "gecos_flags_item", "gecos_items",
  "gecos_item", "gecos_name", "gecos_reason", "general_entry",
  "general_items", "general_item", "general_gline_min_cidr",
  "general_gline_min_cidr6", "general_burst_away",
  "general_use_whois_actually", "general_reject_hold_time",
  "general_tkline_expire_notices", "general_kill_chase_time_limit",
  "general_hide_spoof_ips", "general_ignore_bogus_ts",
  "general_disable_remote_commands", "general_failed_oper_notice",
  "general_anti_nick_flood", "general_max_nick_time",
  "general_max_nick_changes", "general_max_accept",
  "general_anti_spam_exit_message_time",
  "general_anti_spam_connect_numeric", "general_ts_warn_delta",
  "general_ts_max_delta", "general_havent_read_conf",
  "general_kline_with_reason", "general_kline_reason",
  "general_cloak_key1", "general_cloak_key2", "general_cloak_key3",
  "general_services_name", "general_invisible_on_connect",
  "general_warn_no_nline", "general_stats_e_disabled",
  "general_stats_o_oper_only", "general_stats_P_oper_only",
  "general_hide_killer", "general_stats_k_oper_only",
  "general_stats_i_oper_only", "general_pace_wait",
  "general_caller_id_wait", "general_opers_bypass_callerid",
  "general_pace_wait_simple", "general_short_motd",
  "general_no_oper_flood", "general_true_no_oper_flood",
  "general_oper_pass_resv", "general_message_locale", "general_idletime",
  "general_dots_in_ident", "general_max_targets", "general_servlink_path",
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
  "channel_use_except", "channel_use_invex", "channel_use_regex_bans",
  "channel_use_knock", "channel_knock_delay",
  "channel_knock_delay_channel", "channel_max_chans_per_user",
  "channel_quiet_on_ban", "channel_max_bans",
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
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
      59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   275,   276,   276,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   278,   278,   279,   279,
     279,   279,   279,   279,   280,   280,   281,   281,   281,   281,
     282,   283,   283,   284,   284,   284,   285,   286,   287,   288,
     288,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   302,   303,   303,   303,
     303,   304,   305,   306,   307,   308,   308,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   320,   320,   320,   320,   320,   320,   321,   323,   322,
     324,   324,   325,   325,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   336,   335,   337,
     337,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   355,   354,   356,   356,
     358,   357,   359,   357,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     362,   361,   363,   363,   364,   364,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   381,   380,   383,   382,   384,   384,
     385,   385,   386,   386,   387,   387,   387,   387,   387,   389,
     388,   390,   390,   391,   391,   392,   393,   395,   394,   396,
     396,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     398,   399,   400,   401,   402,   403,   405,   404,   406,   406,
     408,   407,   409,   407,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   423,   422,   424,   424,
     425,   425,   425,   425,   426,   427,   428,   430,   429,   431,
     431,   432,   432,   432,   432,   433,   434,   436,   435,   437,
     437,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   440,   439,   441,   441,   442,   442,
     442,   443,   445,   444,   446,   446,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   449,   448,   450,
     450,   451,   451,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   460,   461,   463,   462,   464,   464,   466,   465,   467,
     465,   468,   468,   468,   468,   468,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   480,   479,   482,
     481,   483,   483,   484,   485,   485,   486,   486,   486,   486,
     487,   488,   490,   489,   491,   491,   492,   492,   492,   493,
     494,   495,   496,   496,   497,   497,   497,   498,   499,   501,
     500,   503,   502,   504,   504,   505,   506,   506,   507,   507,
     507,   507,   508,   509,   510,   511,   511,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   545,   546,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   568,   567,   569,   569,   570,
     570,   570,   570,   570,   570,   570,   570,   570,   570,   570,
     570,   570,   570,   570,   570,   570,   570,   570,   570,   572,
     571,   573,   573,   574,   574,   574,   574,   574,   574,   574,
     574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
     574,   574,   574,   575,   576,   577,   578,   579,   581,   580,
     582,   582,   583,   583,   583,   583,   583,   583,   583,   584,
     585,   587,   586,   588,   588,   589,   589,   590,   591,   593,
     592,   594,   594,   595,   595,   596,   597,   597,   598,   598,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   598,   598,   598,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   620,   621,   621,   621,   621,   621,   621,   621,   621,
     622,   623,   624,   625,   626,   627,   628
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     1,     2,     3,
       3,     3,     3,     3,     0,     1,     2,     3,     3,     3,
       5,     2,     1,     1,     1,     2,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       2,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     4,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     5,     3,     1,
       0,     3,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     6,     0,     5,     3,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     2,     0,
       5,     3,     1,     1,     3,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     4,     4,     4,     4,     0,     5,     3,     1,
       0,     3,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     2,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     2,     4,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     2,     1,     1,     1,
       2,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     7,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     0,     3,     0,
       2,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     6,     0,
       5,     3,     1,     1,     2,     1,     1,     1,     1,     1,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     4,
       4,     5,     2,     1,     1,     1,     1,     4,     4,     0,
       6,     0,     5,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     0,     5,     3,     1,     1,     1,     4,     4,     0,
       5,     3,     1,     1,     1,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   220,   397,   472,     0,
     489,     0,   678,   277,   457,   254,     0,     0,   118,   336,
       0,     0,   347,   374,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,   222,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,   728,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   707,   727,
     726,   721,   708,   709,   710,   712,   711,   714,   715,   716,
     717,   713,   718,   719,   720,   722,   723,   724,   725,   241,
       0,   223,   424,     0,   400,     0,   486,     0,     0,     0,
     483,   484,   485,     0,   568,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   649,     0,   625,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   506,   559,   560,
     557,   561,   562,   558,   518,   507,   508,   547,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   553,   519,   520,
     564,   565,   566,   567,   521,   522,   549,   524,   529,   563,
     525,   527,   526,   541,   542,   528,   530,   531,   532,   533,
     535,   534,   523,   537,   546,   548,   550,   538,   539,   555,
     556,   552,   540,   536,   544,   545,   543,   551,   554,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      91,    98,    92,    96,    93,    94,    97,    95,    89,    90,
       0,     0,     0,     0,    42,    43,    44,   150,     0,   121,
       0,   759,     0,     0,     0,     0,     0,     0,     0,     0,
     751,   752,   753,   757,   754,   756,   755,   758,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    61,    58,    51,    60,    54,    55,    56,    52,
      59,    57,    53,     0,     0,    80,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   706,     0,     0,   478,     0,     0,     0,   475,
     476,   477,     0,     0,     0,   482,   501,     0,     0,   491,
     500,     0,   497,   498,   499,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   505,   688,   699,
       0,     0,   691,     0,     0,     0,   681,   682,   683,   684,
     685,   686,   687,     0,     0,     0,     0,     0,     0,   306,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   280,   281,   282,   298,   291,   283,   297,
     284,   285,   286,   287,   295,   288,   289,   290,   293,   294,
     292,   296,   469,     0,   459,     0,   468,     0,   465,   466,
     467,     0,   256,     0,     0,     0,   265,     0,   263,   264,
     266,   267,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    45,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,   339,   340,
     341,   342,     0,     0,     0,     0,     0,     0,     0,     0,
     750,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,   357,     0,     0,
     350,   351,   352,   353,     0,     0,   382,     0,   377,   378,
     379,     0,     0,     0,    74,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   705,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,   226,   229,   230,   232,   233,   234,   235,
     236,   237,   238,   227,   228,   231,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   433,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   402,   403,   404,
     405,   406,   407,   409,   408,   410,   411,   419,   416,   418,
     417,   415,   421,   412,   413,   414,   420,     0,     0,     0,
     474,     0,     0,   481,     0,     0,     0,     0,   496,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,   504,     0,     0,     0,     0,     0,     0,
       0,   680,   299,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   279,     0,     0,     0,     0,   464,   268,     0,
       0,     0,     0,     0,   262,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,     0,     0,    40,     0,     0,     0,
       0,     0,     0,   196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
       0,     0,     0,   123,   124,   125,   145,   126,   143,   144,
     130,   129,   131,   132,   138,   133,   134,   135,   136,   137,
     139,   140,   141,   127,   128,   146,   142,   147,   343,     0,
       0,     0,     0,   338,     0,     0,     0,     0,     0,     0,
       0,   749,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,   354,     0,     0,     0,     0,   349,
     380,     0,     0,     0,   376,    83,    82,    81,   746,   729,
     743,   742,   730,   732,    26,    26,    26,    26,    26,    28,
      27,   737,   738,   741,   739,   744,   745,   747,   748,   740,
     731,   733,   734,   735,   736,   239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   422,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,     0,     0,   473,   488,   487,     0,     0,
       0,   490,   580,   584,   585,   571,   606,   591,   592,   593,
     619,   618,   675,   623,   578,   677,   615,   621,   579,   569,
     570,   588,   576,   614,   577,   595,   575,   590,   589,   583,
     582,   581,   616,   613,   673,   674,   610,   607,   653,   669,
     670,   654,   655,   656,   657,   664,   658,   672,   667,   671,
     660,   665,   661,   666,   659,   663,   662,   668,     0,   652,
     612,   629,   645,   646,   630,   631,   632,   633,   640,   634,
     648,   643,   647,   636,   641,   637,   642,   635,   639,   638,
     644,     0,   628,   605,   608,   622,   573,   594,   617,   574,
     609,   597,   603,   604,   601,   602,   598,   599,   587,   586,
      34,    34,    34,    36,    35,   676,   624,   611,   620,   600,
     572,   596,     0,     0,     0,     0,     0,     0,   679,     0,
       0,     0,     0,     0,   312,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   278,     0,     0,
       0,   458,     0,     0,     0,   273,   269,   272,   255,   103,
     109,   107,   106,   108,   104,   105,   102,   110,   116,   111,
     115,   113,   114,   112,   101,   100,   117,    46,    47,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,   337,
     765,   760,   764,   762,   766,   761,   763,    67,    73,    65,
      69,    68,    64,    63,    66,    72,    70,    71,     0,     0,
       0,   348,     0,     0,   375,    29,    30,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   439,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   398,   479,   480,   502,   503,   495,
       0,   494,   650,     0,   626,     0,    37,    38,    39,   704,
     703,     0,   702,   690,   689,   696,   695,     0,   694,   698,
     697,   328,   304,   302,   305,   327,   310,     0,   309,     0,
     330,   326,   325,   335,   334,   329,   301,   333,   332,   331,
     303,   300,   471,   463,     0,   462,   470,   261,   260,     0,
     259,   276,   275,     0,     0,     0,     0,     0,     0,     0,
       0,   202,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   345,   346,   344,   355,   361,   372,   367,   371,   373,
     370,   369,   366,   362,   365,   368,   363,   364,     0,   360,
     356,   381,   386,   392,   396,   395,   394,   391,   387,   390,
     393,   388,   389,     0,   385,   251,   252,   245,   247,   249,
     248,   246,   240,   253,   244,   242,   243,   250,   428,   430,
     431,   451,   456,   455,   450,   449,   448,   432,   437,     0,
     436,     0,   425,   453,   454,   423,   429,   447,   427,   452,
     426,   492,     0,   651,   627,   700,     0,   692,     0,     0,
     307,   312,   318,   319,   315,   321,   317,   316,   324,   323,
     320,   322,   314,   313,   460,     0,   257,     0,   274,   271,
     270,   191,   156,   152,   189,   154,   200,     0,   199,     0,
     187,   181,   192,   193,   184,   149,   188,   194,   153,   190,
     182,   183,   155,   195,   161,   177,   178,   162,   163,   164,
     165,   172,   166,   180,   175,   179,   168,   173,   169,   174,
     167,   171,   170,   176,     0,   160,   186,   151,   185,   358,
       0,   383,     0,     0,   434,   439,   444,   445,   442,   443,
     441,   446,   440,   493,   701,   693,   311,   308,   461,   258,
       0,   197,   202,   212,   210,   219,   209,   204,   213,   217,
     206,   214,   216,   211,   205,   218,   215,   207,   208,   203,
     158,     0,   359,   384,   438,   435,   201,   198,   159
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    24,   939,   940,  1103,  1104,    25,   293,   294,
     295,   296,    26,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,    27,    71,    72,    73,
      74,    75,    28,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,    29,    61,   298,
     862,   863,   864,   299,   865,   866,   867,   868,   869,   870,
     871,  1190,  1494,  1495,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   884,   885,   886,   887,
    1175,  1457,  1458,  1520,  1459,  1539,    30,    49,   120,   641,
     642,   643,   121,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   655,    31,    58,   526,   809,  1319,
    1320,   527,   528,   529,  1325,  1146,  1147,   530,   531,    32,
      56,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     788,  1297,  1298,  1429,  1299,  1443,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,    33,    62,   557,
     558,   559,   560,   561,    34,    65,   589,   590,   591,   592,
     593,   916,  1368,  1369,    35,    66,   597,   598,   599,   600,
     922,  1383,  1384,    36,    50,   123,   676,   677,   678,   124,
     679,   680,   681,   682,   683,   684,   685,   686,   981,  1409,
    1410,  1503,  1411,  1512,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,    37,    57,   516,   804,  1314,  1315,
     517,   518,   519,   520,    38,    51,   378,   379,   380,   381,
      39,   129,   130,   131,   132,    40,    53,   390,   706,  1270,
    1271,   391,   392,   393,   394,    41,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   433,  1081,  1082,   253,   431,  1058,  1059,
     254,   255,   256,   257,   258,    42,    55,   465,   466,   467,
     468,   469,   777,  1287,  1288,   470,   471,   472,   774,  1281,
    1282,    43,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    44,   309,   310,   311,   312,   313,
     314,   315,   316,   317
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -937
static const yytype_int16 yypact[] =
{
    -937,   936,  -937,  -267,  -261,  -253,  -937,  -937,  -937,  -232,
    -937,  -220,  -937,  -937,  -937,  -937,  -215,  -206,  -937,  -937,
    -200,  -193,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,    95,   660,   -68,
     -52,  -152,    25,  -151,   467,  -138,  -131,  -128,  -120,   623,
      91,    22,   -89,   487,   407,   -83,   -81,   -70,   -71,   -63,
     -30,    19,  -937,  -937,  -937,  -937,  -937,   -29,   -16,   -15,
     -14,   -13,    10,    29,    45,    49,    51,    54,    61,    65,
      69,    71,    72,    76,    77,    79,    82,   132,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
     -44,  -937,  -937,    67,  -937,    15,  -937,    90,    92,     9,
    -937,  -937,  -937,    60,  -937,    98,    99,   101,   102,   112,
     113,   114,   116,   123,   124,   125,   127,   134,   138,   140,
     142,   144,   146,   147,   150,   151,   152,   154,   160,   161,
     163,   167,   168,   169,   171,   176,   185,   186,   187,   189,
     190,  -937,   191,  -937,   192,   193,   194,   196,   200,   205,
     206,   208,   209,   210,   211,   212,   213,   216,   217,   218,
     219,   220,   221,   228,   234,   235,     5,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,   391,
     800,    21,   271,   -37,   240,   241,   242,   249,   250,   251,
     254,   256,   257,   259,   263,   264,   314,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
      39,   267,   268,    64,  -937,  -937,  -937,  -937,   223,  -937,
      28,  -937,   274,   275,   278,   279,   280,   281,   282,    27,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,    73,   283,
     285,   287,   291,   292,   294,   295,   299,   301,   305,   306,
     238,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,   166,    47,  -937,   120,   202,   237,    78,
    -937,   328,   339,   371,   442,   379,   383,   453,   453,   454,
     456,   392,   394,   460,   453,   397,   398,   400,   401,   402,
     403,   341,  -937,   829,   727,  -937,   344,   346,    48,  -937,
    -937,  -937,   277,   450,   350,  -937,  -937,   353,   355,  -937,
    -937,     4,  -937,  -937,  -937,   409,   453,   424,   425,   453,
     469,   470,   471,   494,   473,   497,   433,   434,   435,   501,
     480,   439,   505,   506,   508,   446,   453,   447,   448,   514,
     493,   455,   518,   522,   453,   524,   503,   537,   539,   475,
     476,   412,   477,   421,   453,   453,   491,   453,   536,   541,
     499,   500,   507,  -174,  -159,   509,   510,   453,   453,   559,
     453,   512,   515,   516,   520,   521,   440,  -937,  -937,  -937,
     438,   459,  -937,   464,   466,     8,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,   443,   468,   472,   474,   478,   479,  -937,
     482,   484,   485,   488,   489,   495,   496,   498,   504,   511,
     513,   525,   272,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,   526,  -937,   527,  -937,    32,  -937,  -937,
    -937,   449,  -937,   530,   531,   532,  -937,    26,  -937,  -937,
    -937,  -937,  -937,   561,   567,   578,   580,   581,   582,   584,
     586,   222,   587,   598,   562,   519,  -937,  -937,   604,   614,
     538,  -937,   622,   540,   533,   534,   542,     7,  -937,  -937,
    -937,  -937,   574,   575,   576,   620,   589,   606,   453,   547,
    -937,  -937,   629,   617,   657,   662,   663,   664,   669,   671,
     695,   674,   675,   568,  -937,   569,   570,  -937,   573,    75,
    -937,  -937,  -937,  -937,   571,   577,  -937,    20,  -937,  -937,
    -937,   572,   579,   588,  -937,   592,   595,   597,   599,   600,
     601,   177,   602,   603,   611,   613,   615,   621,   624,   625,
     626,   633,   634,   636,   637,   638,  -937,   639,   619,   640,
     641,   642,   643,   644,   647,   650,   652,   653,   654,   655,
     658,   288,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,   665,   661,   666,   667,
     670,   676,   678,   681,   682,   685,  -937,   687,   689,   691,
     696,   700,   701,   702,   703,   706,   260,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,   686,   690,   698,
    -937,   710,   711,  -937,   697,   712,   709,   713,  -937,   715,
     716,   717,   720,   721,   723,   725,   732,   733,   734,   735,
     736,   741,   742,   744,   745,   746,   748,   751,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   765,
     766,   767,   768,   769,   770,   919,   771,   956,   772,   774,
     776,   778,   779,   780,   781,   782,   784,   785,   787,   788,
     790,   791,   792,   794,   795,    53,   796,   797,   798,   801,
     802,   803,   804,  -937,   724,   453,   635,   807,   714,   722,
     805,  -937,  -937,   688,   728,   749,   705,   739,   809,   743,
     865,   871,   872,   878,   885,   929,   707,   930,   931,   893,
     938,   831,  -937,   940,   830,   942,   835,  -937,  -937,   833,
     945,   946,   747,   840,  -937,   841,   844,   845,   846,   847,
     848,   849,   850,   851,   854,   855,   856,   857,   858,   866,
     869,   874,   875,  -937,   877,   879,  -937,   880,   839,   881,
     882,   889,   890,  -937,   892,   900,   903,   908,   909,   911,
     912,   913,   914,   915,   916,   917,   918,   926,  -937,   927,
     937,   948,    70,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,   986,
     989,   990,   883,  -937,   896,   922,   932,   933,   943,   949,
     952,  -937,   953,   954,   955,   957,   958,   959,   966,   967,
     969,   970,   972,  -937,  -937,  1056,   971,  1064,   973,  -937,
    -937,  1083,   974,   976,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,   453,   453,   453,   453,   453,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,   793,  1108,   453,  1109,
    1110,  1111,  1112,  1091,  1114,  1115,   453,   453,   559,   987,
    -937,  -937,  1094,  -123,  1053,  1097,  1098,  1057,  1058,  1059,
    1099,   992,  1104,  1105,  1106,  1107,  1130,  1113,  1116,  1066,
    1117,  1002,  -937,  1003,  1004,  -937,  -937,  -937,  1006,  1007,
    1118,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -229,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -189,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
     559,   559,   559,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,    11,  1010,  1011,    12,  1012,  1013,  -937,  1014,
    1016,  1017,  1018,  1019,  1151,  1021,  1022,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  -937,  1033,  1137,
    1035,  -937,   -67,  1036,  1037,  1100,   594,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    1103,  1147,  1149,  1119,  1120,  1039,  1121,  1122,  1123,  1124,
    1125,  1152,  1126,  1127,  1153,  1128,  1129,  1131,  1154,  1132,
    1040,  1133,  1155,  1134,  1048,  -937,  1049,  1050,  1051,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  1052,   832,
    1065,  -937,  1070,   842,  -937,  -937,  -937,  -937,  -937,  -937,
    1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,
    1081,  1082,  1084,  -937,  1085,  1086,  1087,  1088,  1089,  1090,
    1092,  1093,  1095,  1096,  1184,  1101,  1102,  1135,  1136,  1138,
    1139,  1140,  1141,  1142,  -937,  -937,  -937,  -937,  -937,  -937,
    -188,  -937,  -937,   919,  -937,   956,  -937,  -937,  -937,  -937,
    -937,  -165,  -937,  -937,  -937,  -937,  -937,   -93,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,   -88,  -937,   823,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,   -45,  -937,  -937,  -937,  -937,   -40,
    -937,  -937,  -937,  1213,   747,  1143,  1144,  1145,  1146,  1148,
    1150,  1222,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,
    1164,  1165,  1166,  1167,  1168,  1169,   993,  1170,  1171,  1172,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,   -39,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,    31,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,    36,
    -937,   126,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  1118,  -937,  -937,  -937,    11,  -937,    12,   823,
    -937,  1151,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  1137,  -937,   -67,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,    37,  -937,   729,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,    66,  -937,  -937,  -937,  -937,  -937,
     832,  -937,   842,   126,  -937,  1184,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
     729,  -937,  1222,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,   993,  -937,  -937,  -937,  -937,  -937,  -937,  -937
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -937,  -937,  -937,  -685,  -357,  -936,  -447,  -937,  -937,  1173,
    -937,  -937,  -937,  -937,  1034,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  1296,  -937,
    -937,  -937,  -937,  -937,  1174,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,   517,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -173,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -153,  -937,  -937,  -150,  -937,  -937,  -937,  -937,
     737,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
     -74,  -937,   853,  -937,  -937,  -937,    50,  -937,  -937,  -937,
    -937,  -937,   884,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,   -56,  -937,  -937,   -48,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
     820,  -937,  -937,  -937,  -937,  -937,  -937,   799,  -937,  -937,
    -937,  -937,  -937,  -118,  -937,  -937,  -937,   786,  -937,  -937,
    -937,  -937,  -117,  -937,  -937,  -937,  -937,   708,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -119,  -937,  -937,  -116,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,   -55,
    -937,   876,  -937,  -937,  -937,  -937,  -937,  1020,  -937,  -937,
    -937,  -937,  1260,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
     -31,  -937,  1001,  -937,  -937,  -937,  -937,  1198,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,   121,  -937,  -937,  -937,   122,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,   934,  -937,
    -937,  -937,  -937,  -937,   -28,  -937,  -937,  -937,  -937,  -937,
     -25,  -937,  -937,  1300,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,  -937,
    -937,  -937,  -937,  -937,  -937,  -937,  1175,  -937,  -937,  -937,
    -937,  -937,  -937,  -937
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     612,   613,   766,    45,    46,   386,   134,   619,   553,   458,
     126,    47,   459,   135,   136,   137,   375,  1317,   138,    48,
      67,   594,   512,  1279,  1285,   139,   126,   521,   301,   553,
     554,   757,   758,   512,   140,   141,   142,   127,   143,   710,
      52,  1272,   713,   144,   145,  1273,   759,   760,   594,   375,
     146,   554,    54,   127,   147,   148,   149,    59,   150,   730,
     460,   386,    68,   461,   151,   290,    60,   738,  1100,  1101,
    1102,   837,    63,    69,   302,   838,   585,   748,   749,    64,
     751,  1274,  1421,   152,   153,  1275,  1422,   522,   154,   303,
     763,   764,   290,   767,   119,   155,    67,   839,   840,   156,
     157,   158,  1245,  1246,   159,  1425,   128,   160,   161,  1426,
     122,   304,   376,   305,   841,   306,   307,   523,   162,   462,
     125,   133,   128,   524,   163,   164,   842,   165,   166,   167,
     168,   843,   387,    76,   259,   308,   463,  1506,    68,  1507,
     555,   260,   169,   844,   261,   376,    77,    70,   595,    69,
     845,   170,   262,   171,   172,   846,   173,   847,  1508,   174,
     175,   555,  1509,   176,  1276,  1277,  1278,   585,   388,    78,
     848,   556,    79,    80,   177,   595,  1318,  1427,    81,   377,
      82,  1428,  1430,   300,   297,   513,  1431,   525,   387,   343,
     291,   344,   556,   765,   178,   179,   513,   180,   849,   389,
     345,   181,   346,   586,   850,   182,   183,   184,   185,   186,
     347,   900,   377,   187,   188,   596,   514,   291,  1280,  1286,
     851,   292,   189,    70,   388,  1444,   852,   514,   373,  1445,
    1446,  1499,  1510,   532,  1447,  1500,    83,    84,   853,   318,
     854,   855,   596,   348,   351,   856,    85,    86,   292,  1225,
    1226,  1227,  1228,  1229,   190,   389,   191,   352,   353,   354,
     355,   656,   192,   657,   464,   193,   658,    87,    88,   194,
     587,   659,   521,   473,   195,   707,   456,   515,   892,   780,
     384,   319,   601,   356,    89,    90,   660,   661,   515,   627,
     349,   923,   662,   474,   586,    91,   663,   813,   569,   475,
     476,  1501,   357,   806,    92,  1502,  1504,  1521,   857,   547,
    1505,  1522,   628,   629,   858,   263,   664,   611,   358,   699,
     665,   666,   359,   630,   360,   859,   860,   361,   477,   478,
     320,   588,   522,   479,   362,   550,  1540,   861,   363,   374,
    1541,  1194,   364,   571,   365,   366,   918,   480,   604,   367,
     368,   667,   369,   668,   481,   370,   934,   935,   936,   937,
     938,   587,   523,   382,   602,   383,   321,   669,   524,   322,
     323,   395,   396,   482,   397,   398,  1511,   264,   265,   266,
     267,   268,   269,   270,   271,   399,   400,   401,   670,   402,
      93,    94,   458,    95,    96,   459,   403,   404,   405,   603,
     406,   483,   484,   371,   631,   632,   633,   407,   318,   634,
     485,   408,   324,   409,   325,   410,   635,   411,  1113,   412,
     413,   671,   588,   414,   415,   416,   272,   417,   486,   326,
     636,   637,   525,   418,   419,   672,   420,   487,   488,   701,
     421,   422,   423,   460,   424,   673,   461,   638,   639,   425,
     319,   823,   824,   825,   826,   827,   828,   829,   426,   427,
     428,   273,   429,   430,   432,   434,   435,   436,   134,   437,
     489,   490,   640,   438,   327,   135,   136,   137,   439,   440,
     138,   441,   442,   443,   444,   445,   446,   139,   301,   447,
     448,   449,   450,   451,   452,   552,   140,   141,   142,   320,
     143,   453,   462,   328,   329,   144,   145,   454,   455,   583,
     674,   607,   146,   533,   534,   535,   147,   148,   149,   463,
     150,  1242,   536,   537,   538,   675,   151,   539,   491,   540,
     541,   991,   542,   605,   302,   321,   543,   544,   322,   323,
     548,   549,   274,   801,   606,   152,   153,   562,   563,   303,
     154,   564,   565,   566,   567,   568,   572,   155,   573,   969,
     574,   156,   157,   158,   575,   576,   159,   577,   578,   160,
     161,   304,   579,   305,   580,   306,   307,   275,   581,   582,
     162,   324,   608,   325,   609,   545,   163,   164,   610,   165,
     166,   167,   168,   611,   614,   308,   615,   616,   326,   617,
     618,  1232,   620,   621,   169,   622,   623,   624,   625,  1240,
    1241,   626,   702,   170,   709,   171,   172,   697,   173,   698,
     703,   174,   175,   837,   263,   176,   704,   838,   705,   711,
     712,   714,   715,   716,   717,   718,   177,   719,   720,   721,
     722,   723,   724,   327,   725,   726,   727,   464,   728,   839,
     840,   729,   731,   732,   733,   734,   178,   179,   736,   180,
     735,    76,   737,   181,   739,   740,   841,   182,   183,   184,
     185,   186,   328,   329,    77,   187,   188,   741,   842,   742,
     743,   744,   746,   843,   189,   745,   264,   265,   266,   267,
     268,   269,   270,   271,   747,   844,   750,    78,   752,   765,
      79,    80,   845,   753,   754,   755,    81,   846,    82,   847,
     773,   775,   756,   782,   761,   762,   190,   768,   191,   808,
     769,   770,   848,   815,   192,   771,   772,   193,   656,   816,
     657,   194,   776,   658,  1523,   272,   195,   778,   659,   779,
     817,   783,   818,   819,   820,   784,   821,   785,   822,   830,
     849,   786,   787,   660,   661,   789,   850,   790,   791,   662,
     831,   792,   793,   663,    83,    84,   834,   832,   794,   795,
     273,   796,   851,  1524,    85,    86,   835,   797,   852,   894,
     895,   896,   897,   664,   798,  1525,   799,   665,   666,   833,
     853,   902,   854,   855,   898,    87,    88,   856,   800,   803,
     805,   473,  1526,   810,   811,   812,   889,   890,   836,  1527,
     888,   899,    89,    90,  1528,   891,  1529,   901,   667,   904,
     668,   474,   903,    91,   905,   906,   907,   475,   476,  1530,
     627,   908,    92,   909,   669,   910,   911,   912,   913,   914,
    1114,   920,   925,   915,  1432,  1433,   917,  1132,   993,   926,
     921,   274,   994,   628,   629,   670,   477,   478,   927,   998,
     857,   479,   928,  1531,   630,   929,   858,   930,  1324,   931,
     932,   933,   941,   942,   999,   480,  1116,   859,   860,  1532,
    1434,   943,   481,   944,  1117,   945,   275,  1145,   671,   861,
    1120,   946,   956,  1119,   947,   948,   949,  1533,  1435,  1534,
    1535,   482,   672,   950,   951,  1436,   952,   953,   954,   955,
    1122,  1121,   673,   957,   958,   959,   960,   961,    93,    94,
     962,    95,    96,   963,  1437,   964,   965,   966,   967,   483,
     484,   968,  1355,  1230,   972,   971,     2,     3,   485,   973,
     974,     4,  1372,   975,  1123,   631,   632,   633,  1125,   976,
     634,   977,  1438,  1439,   978,   979,   486,   635,   980,     5,
     982,  1440,   983,     6,   984,   487,   488,  1536,   995,   985,
       7,   636,   637,   986,   987,   988,   989,   674,     8,   990,
     996,   997,  1000,  1001,  1537,  1002,  1003,  1004,   638,   639,
    1005,  1006,   675,  1007,     9,  1008,  1538,  1112,   489,   490,
    1356,  1441,  1009,  1010,  1011,  1012,  1013,    10,    11,  1357,
      12,  1014,  1015,   640,  1016,  1017,  1018,    13,  1019,  1373,
    1358,  1020,  1442,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,    14,  1032,  1033,  1034,  1035,  1036,
    1037,  1060,  1083,  1359,  1084,    15,  1085,    16,  1086,  1087,
    1088,  1089,  1090,  1374,  1091,  1092,   491,  1093,  1094,  1360,
    1095,  1096,  1097,    17,  1098,  1099,  1105,  1106,  1107,  1375,
    1126,  1108,  1109,  1110,  1111,  1118,  1127,  1128,  1361,  1362,
    1115,    18,  1124,  1129,  1363,  1364,  1365,  1366,  1376,  1377,
    1130,  1131,  1133,  1134,  1378,  1379,  1380,  1381,  1135,  1367,
    1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1144,  1382,
    1148,  1149,  1170,    19,  1150,  1151,  1152,  1153,  1154,  1155,
    1156,  1157,    20,    21,  1158,  1159,  1160,  1161,  1162,    22,
      23,  1038,  1039,  1040,  1041,  1042,  1163,  1043,  1044,  1164,
    1045,  1046,  1047,  1048,  1165,  1166,  1049,  1167,  1196,  1168,
    1169,  1197,  1198,  1199,  1171,  1172,  1050,  1051,  1052,  1053,
    1054,  1055,  1173,  1174,  1056,  1176,  1200,  1057,  1061,  1062,
    1063,  1064,  1065,  1177,  1066,  1067,  1178,  1068,  1069,  1070,
    1071,  1179,  1180,  1072,  1181,  1182,  1183,  1184,  1185,  1186,
    1187,  1188,  1201,  1073,  1074,  1075,  1076,  1077,  1078,  1189,
    1191,  1079,  1202,  1203,  1080,  1474,  1475,  1476,  1477,  1478,
    1192,  1479,  1480,  1204,  1481,  1482,  1483,  1484,  1218,  1205,
    1485,  1193,  1206,  1207,  1208,  1209,  1220,  1210,  1211,  1212,
    1486,  1487,  1488,  1489,  1490,  1491,  1213,  1214,  1492,  1215,
    1216,  1493,  1217,  1221,  1219,  1222,  1224,  1223,  1231,  1233,
    1234,  1235,  1236,  1237,  1238,  1239,  1244,  1243,  1247,  1248,
    1249,  1253,  1250,  1251,  1252,  1254,  1255,  1256,  1257,  1258,
    1259,  1262,  1264,  1265,  1266,  1260,  1267,  1268,  1261,  1263,
    1283,  1284,  1289,  1290,  1291,  1269,  1292,  1293,  1294,  1295,
    1296,  1300,  1301,  1302,  1303,  1304,  1305,  1306,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1316,  1321,  1322,  1326,  1327,
    1323,  1328,  1331,  1346,  1337,  1340,  1344,  1348,  1350,  1351,
    1352,  1353,  1354,  1408,  1329,  1330,  1332,  1333,  1334,  1335,
    1336,  1338,  1339,  1341,  1342,  1370,  1343,  1345,  1347,  1349,
    1371,  1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,
    1394,  1395,  1396,  1448,  1397,  1398,  1399,  1400,  1401,  1402,
    1403,  1456,  1404,  1405,   584,  1406,  1407,   350,  1548,  1547,
    1546,  1412,  1413,  1519,  1449,  1517,   802,   893,   970,  1195,
     814,  1516,  1542,   924,   992,  1543,  1545,  1544,   919,   385,
    1518,  1513,   708,   807,   457,  1423,  1424,   372,   700,   781,
    1515,  1514,     0,     0,     0,  1414,  1415,     0,  1416,  1417,
    1418,  1419,  1420,  1450,  1451,  1452,  1453,     0,  1454,     0,
    1455,     0,     0,     0,     0,     0,  1460,  1461,  1462,  1463,
    1464,  1465,  1466,  1467,  1468,  1469,  1470,  1471,  1472,  1473,
    1496,  1497,  1498,     0,     0,     0,     0,     0,     0,     0,
     546,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   551,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   570
};

static const yytype_int16 yycheck[] =
{
     357,   358,   449,   270,   271,     1,     1,   364,     1,     1,
       1,   272,     4,     8,     9,    10,     1,    84,    13,   272,
       1,     1,     1,    12,    12,    20,     1,     1,     1,     1,
      23,   205,   206,     1,    29,    30,    31,    28,    33,   396,
     272,   270,   399,    38,    39,   274,   205,   206,     1,     1,
      45,    23,   272,    28,    49,    50,    51,   272,    53,   416,
      52,     1,    43,    55,    59,     1,   272,   424,    15,    16,
      17,     1,   272,    54,    47,     5,     1,   434,   435,   272,
     437,   270,   270,    78,    79,   274,   274,    61,    83,    62,
     447,   448,     1,   450,   162,    90,     1,    27,    28,    94,
      95,    96,   225,   226,    99,   270,    97,   102,   103,   274,
     162,    84,    97,    86,    44,    88,    89,    91,   113,   111,
     272,   272,    97,    97,   119,   120,    56,   122,   123,   124,
     125,    61,   128,     1,   272,   108,   128,    11,    43,    13,
     133,   272,   137,    73,   272,    97,    14,   128,   128,    54,
      80,   146,   272,   148,   149,    85,   151,    87,    32,   154,
     155,   133,    36,   158,  1100,  1101,  1102,     1,   164,    37,
     100,   164,    40,    41,   169,   128,   243,   270,    46,   164,
      48,   274,   270,   272,   162,   164,   274,   161,   128,   272,
     126,   272,   164,   140,   189,   190,   164,   192,   128,   195,
     270,   196,   273,   128,   134,   200,   201,   202,   203,   204,
     273,   568,   164,   208,   209,   195,   195,   126,   207,   207,
     150,   157,   217,   128,   164,   270,   156,   195,   272,   274,
     270,   270,   106,   270,   274,   274,   104,   105,   168,     1,
     170,   171,   195,   273,   273,   175,   114,   115,   157,   934,
     935,   936,   937,   938,   249,   195,   251,   273,   273,   273,
     273,     1,   257,     3,   256,   260,     6,   135,   136,   264,
     195,    11,     1,     1,   269,   271,   271,   256,   271,   271,
     271,    43,   162,   273,   152,   153,    26,    27,   256,     1,
     271,   271,    32,    21,   128,   163,    36,   271,   271,    27,
      28,   270,   273,   271,   172,   274,   270,   270,   238,   270,
     274,   274,    24,    25,   244,     1,    56,   140,   273,   271,
      60,    61,   273,    35,   273,   255,   256,   273,    56,    57,
      92,   256,    61,    61,   273,   271,   270,   267,   273,   272,
     274,   271,   273,   270,   273,   273,   271,    75,   270,   273,
     273,    91,   273,    93,    82,   273,   179,   180,   181,   182,
     183,   195,    91,   273,   162,   273,   128,   107,    97,   131,
     132,   273,   273,   101,   273,   273,   250,    63,    64,    65,
      66,    67,    68,    69,    70,   273,   273,   273,   128,   273,
     258,   259,     1,   261,   262,     4,   273,   273,   273,   162,
     273,   129,   130,   271,   116,   117,   118,   273,     1,   121,
     138,   273,   174,   273,   176,   273,   128,   273,   775,   273,
     273,   161,   256,   273,   273,   273,   112,   273,   156,   191,
     142,   143,   161,   273,   273,   175,   273,   165,   166,   162,
     273,   273,   273,    52,   273,   185,    55,   159,   160,   273,
      43,   229,   230,   231,   232,   233,   234,   235,   273,   273,
     273,   147,   273,   273,   273,   273,   273,   273,     1,   273,
     198,   199,   184,   273,   236,     8,     9,    10,   273,   273,
      13,   273,   273,   273,   273,   273,   273,    20,     1,   273,
     273,   273,   273,   273,   273,   272,    29,    30,    31,    92,
      33,   273,   111,   265,   266,    38,    39,   273,   273,   271,
     250,   140,    45,   273,   273,   273,    49,    50,    51,   128,
      53,   968,   273,   273,   273,   265,    59,   273,   256,   273,
     273,   271,   273,   205,    47,   128,   273,   273,   131,   132,
     273,   273,   228,   271,   205,    78,    79,   273,   273,    62,
      83,   273,   273,   273,   273,   273,   273,    90,   273,   271,
     273,    94,    95,    96,   273,   273,    99,   273,   273,   102,
     103,    84,   273,    86,   273,    88,    89,   263,   273,   273,
     113,   174,   140,   176,   205,   271,   119,   120,   205,   122,
     123,   124,   125,   140,   140,   108,   140,   205,   191,   205,
     140,   958,   205,   205,   137,   205,   205,   205,   205,   966,
     967,   270,   162,   146,   205,   148,   149,   273,   151,   273,
     270,   154,   155,     1,     1,   158,   273,     5,   273,   205,
     205,   162,   162,   162,   140,   162,   169,   140,   205,   205,
     205,   140,   162,   236,   205,   140,   140,   256,   140,    27,
      28,   205,   205,   205,   140,   162,   189,   190,   140,   192,
     205,     1,   140,   196,   140,   162,    44,   200,   201,   202,
     203,   204,   265,   266,    14,   208,   209,   140,    56,   140,
     205,   205,   205,    61,   217,   273,    63,    64,    65,    66,
      67,    68,    69,    70,   273,    73,   205,    37,   162,   140,
      40,    41,    80,   162,   205,   205,    46,    85,    48,    87,
     270,   273,   205,   270,   205,   205,   249,   205,   251,   270,
     205,   205,   100,   162,   257,   205,   205,   260,     1,   162,
       3,   264,   273,     6,     5,   112,   269,   273,    11,   273,
     162,   273,   162,   162,   162,   273,   162,   273,   162,   162,
     128,   273,   273,    26,    27,   273,   134,   273,   273,    32,
     162,   273,   273,    36,   104,   105,   162,   205,   273,   273,
     147,   273,   150,    44,   114,   115,   162,   273,   156,   205,
     205,   205,   162,    56,   273,    56,   273,    60,    61,   270,
     168,   162,   170,   171,   205,   135,   136,   175,   273,   273,
     273,     1,    73,   273,   273,   273,   273,   273,   270,    80,
     270,   205,   152,   153,    85,   273,    87,   270,    91,   162,
      93,    21,   205,   163,   162,   162,   162,    27,    28,   100,
       1,   162,   172,   162,   107,   140,   162,   162,   270,   270,
     205,   270,   270,   273,    21,    22,   273,   140,   162,   270,
     273,   228,   162,    24,    25,   128,    56,    57,   270,   162,
     238,    61,   270,   134,    35,   270,   244,   270,   274,   270,
     270,   270,   270,   270,   162,    75,   162,   255,   256,   150,
      57,   270,    82,   270,   162,   270,   263,   140,   161,   267,
     162,   270,   273,   205,   270,   270,   270,   168,    75,   170,
     171,   101,   175,   270,   270,    82,   270,   270,   270,   270,
     205,   162,   185,   273,   273,   273,   273,   273,   258,   259,
     273,   261,   262,   273,   101,   273,   273,   273,   273,   129,
     130,   273,   100,   140,   273,   270,     0,     1,   138,   273,
     273,     5,   100,   273,   205,   116,   117,   118,   205,   273,
     121,   273,   129,   130,   273,   273,   156,   128,   273,    23,
     273,   138,   273,    27,   273,   165,   166,   238,   270,   273,
      34,   142,   143,   273,   273,   273,   273,   250,    42,   273,
     270,   270,   273,   270,   255,   270,   270,   270,   159,   160,
     270,   270,   265,   270,    58,   270,   267,   273,   198,   199,
     168,   178,   270,   270,   270,   270,   270,    71,    72,   177,
      74,   270,   270,   184,   270,   270,   270,    81,   270,   177,
     188,   270,   199,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,    98,   270,   270,   270,   270,   270,
     270,   270,   270,   211,   270,   109,   270,   111,   270,   270,
     270,   270,   270,   211,   270,   270,   256,   270,   270,   227,
     270,   270,   270,   127,   270,   270,   270,   270,   270,   227,
     205,   270,   270,   270,   270,   270,   205,   205,   246,   247,
     273,   145,   273,   205,   252,   253,   254,   255,   246,   247,
     205,   162,   162,   162,   252,   253,   254,   255,   205,   267,
     162,   270,   162,   273,   162,   270,   273,   162,   162,   267,
     270,   270,   273,   177,   270,   270,   270,   270,   270,   270,
     270,   270,   186,   187,   270,   270,   270,   270,   270,   193,
     194,   212,   213,   214,   215,   216,   270,   218,   219,   270,
     221,   222,   223,   224,   270,   270,   227,   270,   162,   270,
     270,   162,   162,   270,   273,   273,   237,   238,   239,   240,
     241,   242,   273,   273,   245,   273,   270,   248,   212,   213,
     214,   215,   216,   273,   218,   219,   273,   221,   222,   223,
     224,   273,   273,   227,   273,   273,   273,   273,   273,   273,
     273,   273,   270,   237,   238,   239,   240,   241,   242,   273,
     273,   245,   270,   270,   248,   212,   213,   214,   215,   216,
     273,   218,   219,   270,   221,   222,   223,   224,   162,   270,
     227,   273,   270,   270,   270,   270,   162,   270,   270,   270,
     237,   238,   239,   240,   241,   242,   270,   270,   245,   270,
     270,   248,   270,   270,   273,   162,   270,   273,   140,   140,
     140,   140,   140,   162,   140,   140,   162,   270,   205,   162,
     162,   162,   205,   205,   205,   273,   162,   162,   162,   162,
     140,   205,   270,   270,   270,   162,   270,   270,   162,   162,
     270,   270,   270,   270,   270,   167,   270,   270,   270,   270,
     139,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   167,   270,   270,   270,   205,   162,
     210,   162,   273,   273,   162,   162,   162,   162,   270,   270,
     270,   270,   270,   139,   205,   205,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   270,   205,   205,   205,   205,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   140,   270,   270,   270,   270,   270,   270,
     270,   139,   270,   270,   330,   270,   270,    71,  1541,  1522,
    1520,   270,   270,  1447,  1324,  1431,   492,   557,   641,   862,
     527,  1429,  1500,   597,   676,  1502,  1505,  1503,   589,   129,
    1445,  1422,   391,   517,   196,  1273,  1275,    97,   378,   465,
    1428,  1426,    -1,    -1,    -1,   270,   270,    -1,   270,   270,
     270,   270,   270,   270,   270,   270,   270,    -1,   270,    -1,
     270,    -1,    -1,    -1,    -1,    -1,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   276,     0,     1,     5,    23,    27,    34,    42,    58,
      71,    72,    74,    81,    98,   109,   111,   127,   145,   177,
     186,   187,   193,   194,   277,   282,   287,   301,   307,   322,
     361,   380,   394,   422,   429,   439,   448,   479,   489,   495,
     500,   510,   580,   596,   619,   270,   271,   272,   272,   362,
     449,   490,   272,   501,   272,   581,   395,   480,   381,   272,
     272,   323,   423,   272,   272,   430,   440,     1,    43,    54,
     128,   302,   303,   304,   305,   306,     1,    14,    37,    40,
      41,    46,    48,   104,   105,   114,   115,   135,   136,   152,
     153,   163,   172,   258,   259,   261,   262,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   162,
     363,   367,   162,   450,   454,   272,     1,    28,    97,   496,
     497,   498,   499,   272,     1,     8,     9,    10,    13,    20,
      29,    30,    31,    33,    38,    39,    45,    49,    50,    51,
      53,    59,    78,    79,    83,    90,    94,    95,    96,    99,
     102,   103,   113,   119,   120,   122,   123,   124,   125,   137,
     146,   148,   149,   151,   154,   155,   158,   169,   189,   190,
     192,   196,   200,   201,   202,   203,   204,   208,   209,   217,
     249,   251,   257,   260,   264,   269,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   571,   575,   576,   577,   578,   579,   272,
     272,   272,   272,     1,    63,    64,    65,    66,    67,    68,
      69,    70,   112,   147,   228,   263,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
       1,   126,   157,   283,   284,   285,   286,   162,   324,   328,
     272,     1,    47,    62,    84,    86,    88,    89,   108,   620,
     621,   622,   623,   624,   625,   626,   627,   628,     1,    43,
      92,   128,   131,   132,   174,   176,   191,   236,   265,   266,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   272,   272,   270,   273,   273,   273,   271,
     303,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   271,   598,   272,   272,     1,    97,   164,   491,   492,
     493,   494,   273,   273,   271,   497,     1,   128,   164,   195,
     502,   506,   507,   508,   509,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   572,   273,   568,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   271,   512,     1,     4,
      52,    55,   111,   128,   256,   582,   583,   584,   585,   586,
     590,   591,   592,     1,    21,    27,    28,    56,    57,    61,
      75,    82,   101,   129,   130,   138,   156,   165,   166,   198,
     199,   256,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,     1,   164,   195,   256,   481,   485,   486,   487,
     488,     1,    61,    91,    97,   161,   382,   386,   387,   388,
     392,   393,   270,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   271,   309,   270,   273,   273,
     271,   284,   272,     1,    23,   133,   164,   424,   425,   426,
     427,   428,   273,   273,   273,   273,   273,   273,   273,   271,
     621,   270,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   271,   289,     1,   128,   195,   256,   431,
     432,   433,   434,   435,     1,   128,   195,   441,   442,   443,
     444,   162,   162,   162,   270,   205,   205,   140,   140,   205,
     205,   140,   279,   279,   140,   140,   205,   205,   140,   279,
     205,   205,   205,   205,   205,   205,   270,     1,    24,    25,
      35,   116,   117,   118,   121,   128,   142,   143,   159,   160,
     184,   364,   365,   366,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,     1,     3,     6,    11,
      26,    27,    32,    36,    56,    60,    61,    91,    93,   107,
     128,   161,   175,   185,   250,   265,   451,   452,   453,   455,
     456,   457,   458,   459,   460,   461,   462,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   273,   273,   271,
     492,   162,   162,   270,   273,   273,   503,   271,   507,   205,
     279,   205,   205,   279,   162,   162,   162,   140,   162,   140,
     205,   205,   205,   140,   162,   205,   140,   140,   140,   205,
     279,   205,   205,   140,   162,   205,   140,   140,   279,   140,
     162,   140,   140,   205,   205,   273,   205,   273,   279,   279,
     205,   279,   162,   162,   205,   205,   205,   205,   206,   205,
     206,   205,   205,   279,   279,   140,   281,   279,   205,   205,
     205,   205,   205,   270,   593,   273,   273,   587,   273,   273,
     271,   583,   270,   273,   273,   273,   273,   273,   405,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   271,   397,   273,   482,   273,   271,   486,   270,   383,
     273,   273,   273,   271,   387,   162,   162,   162,   162,   162,
     162,   162,   162,   229,   230,   231,   232,   233,   234,   235,
     162,   162,   205,   270,   162,   162,   270,     1,     5,    27,
      28,    44,    56,    61,    73,    80,    85,    87,   100,   128,
     134,   150,   156,   168,   170,   171,   175,   238,   244,   255,
     256,   267,   325,   326,   327,   329,   330,   331,   332,   333,
     334,   335,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   270,   273,
     273,   273,   271,   425,   205,   205,   205,   162,   205,   205,
     279,   270,   162,   205,   162,   162,   162,   162,   162,   162,
     140,   162,   162,   270,   270,   273,   436,   273,   271,   432,
     270,   273,   445,   271,   442,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   179,   180,   181,   182,   183,   278,
     279,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   271,
     365,   270,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   463,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   271,   452,   162,   162,   270,   270,   270,   162,   162,
     273,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   212,   213,
     214,   215,   216,   218,   219,   221,   222,   223,   224,   227,
     237,   238,   239,   240,   241,   242,   245,   248,   573,   574,
     270,   212,   213,   214,   215,   216,   218,   219,   221,   222,
     223,   224,   227,   237,   238,   239,   240,   241,   242,   245,
     248,   569,   570,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
      15,    16,    17,   280,   281,   270,   270,   270,   270,   270,
     270,   270,   273,   279,   205,   273,   162,   162,   270,   205,
     162,   162,   205,   205,   273,   205,   205,   205,   205,   205,
     205,   162,   140,   162,   162,   205,   162,   270,   162,   273,
     162,   270,   273,   162,   162,   140,   390,   391,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     273,   273,   273,   273,   273,   355,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     336,   273,   273,   273,   271,   326,   162,   162,   162,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   162,   273,
     162,   270,   162,   273,   270,   278,   278,   278,   278,   278,
     140,   140,   279,   140,   140,   140,   140,   162,   140,   140,
     279,   279,   281,   270,   162,   225,   226,   205,   162,   162,
     205,   205,   205,   162,   273,   162,   162,   162,   162,   140,
     162,   162,   205,   162,   270,   270,   270,   270,   270,   167,
     504,   505,   270,   274,   270,   274,   280,   280,   280,    12,
     207,   594,   595,   270,   270,    12,   207,   588,   589,   270,
     270,   270,   270,   270,   270,   270,   139,   406,   407,   409,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   167,   483,   484,   270,    84,   243,   384,
     385,   270,   270,   210,   274,   389,   205,   162,   162,   205,
     205,   273,   205,   205,   205,   205,   205,   162,   205,   205,
     162,   205,   205,   205,   162,   205,   273,   205,   162,   205,
     270,   270,   270,   270,   270,   100,   168,   177,   188,   211,
     227,   246,   247,   252,   253,   254,   255,   267,   437,   438,
     270,   270,   100,   177,   211,   227,   246,   247,   252,   253,
     254,   255,   267,   446,   447,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   139,   464,
     465,   467,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   274,   574,   570,   270,   274,   270,   274,   408,
     270,   274,    21,    22,    57,    75,    82,   101,   129,   130,
     138,   178,   199,   410,   270,   274,   270,   274,   140,   391,
     270,   270,   270,   270,   270,   270,   139,   356,   357,   359,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   212,   213,   214,   215,   216,   218,
     219,   221,   222,   223,   224,   227,   237,   238,   239,   240,
     241,   242,   245,   248,   337,   338,   270,   270,   270,   270,
     274,   270,   274,   466,   270,   274,    11,    13,    32,    36,
     106,   250,   468,   505,   595,   589,   410,   407,   484,   385,
     358,   270,   274,     5,    44,    56,    73,    80,    85,    87,
     100,   134,   150,   168,   170,   171,   238,   255,   267,   360,
     270,   274,   438,   447,   468,   465,   360,   357,   338
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
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
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
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
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
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
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
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
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
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

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

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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

  if (yyss + yystacksize - 1 <= yyssp)
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
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
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
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 26:
#line 436 "ircd_parser.y"
    { (yyval.number) = 0; ;}
    break;

  case 28:
#line 438 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number);
		;}
    break;

  case 29:
#line 442 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);
		;}
    break;

  case 30:
#line 446 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 + (yyvsp[(3) - (3)].number);
		;}
    break;

  case 31:
#line 450 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 + (yyvsp[(3) - (3)].number);
		;}
    break;

  case 32:
#line 454 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 + (yyvsp[(3) - (3)].number);
		;}
    break;

  case 33:
#line 458 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 7 + (yyvsp[(3) - (3)].number);
		;}
    break;

  case 34:
#line 463 "ircd_parser.y"
    { (yyval.number) = 0; ;}
    break;

  case 36:
#line 464 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number); ;}
    break;

  case 37:
#line 465 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); ;}
    break;

  case 38:
#line 466 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 + (yyvsp[(3) - (3)].number); ;}
    break;

  case 39:
#line 467 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 * 1024 + (yyvsp[(3) - (3)].number); ;}
    break;

  case 46:
#line 481 "ircd_parser.y"
    {
#ifndef STATIC_MODULES /* NOOP in the static case */
  if (ypass == 2)
  {
    char *m_bn;

    m_bn = basename(yylval.string);

    /* I suppose we should just ignore it if it is already loaded(since
     * otherwise we would flood the opers on rehash) -A1kmm.
     */
    add_conf_module(yylval.string);
  }
#endif
;}
    break;

  case 47:
#line 498 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
;}
    break;

  case 63:
#line 522 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2 && ServerInfo.ctx) 
  {
    if (!ServerInfo.rsa_private_key_file)
    {
      yyerror("No rsa_private_key_file specified, SSL disabled");
      break;
    }

    if (SSL_CTX_use_certificate_file(ServerInfo.ctx,
      yylval.string, SSL_FILETYPE_PEM) <= 0)
    {
      yyerror(ERR_lib_error_string(ERR_get_error()));
      break;
    }

    if (SSL_CTX_use_PrivateKey_file(ServerInfo.ctx,
      ServerInfo.rsa_private_key_file, SSL_FILETYPE_PEM) <= 0)
    {
      yyerror(ERR_lib_error_string(ERR_get_error()));
      break;
    }

    if (!SSL_CTX_check_private_key(ServerInfo.ctx))
    {
      yyerror("RSA private key does not match the SSL certificate public key!");
      break;
    }
  }
#endif
;}
    break;

  case 64:
#line 556 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 1)
  {
    BIO *file;

    if (ServerInfo.rsa_private_key)
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;
    }

    if (ServerInfo.rsa_private_key_file)
    {
      MyFree(ServerInfo.rsa_private_key_file);
      ServerInfo.rsa_private_key_file = NULL;
    }

    DupString(ServerInfo.rsa_private_key_file, yylval.string);

    if ((file = BIO_new_file(yylval.string, "r")) == NULL)
    {
      yyerror("File open failed, ignoring");
      break;
    }

    ServerInfo.rsa_private_key = (RSA *)PEM_read_bio_RSAPrivateKey(file, NULL,
      0, NULL);

    (void)BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);

    if (ServerInfo.rsa_private_key == NULL)
    {
      yyerror("Couldn't extract key, ignoring");
      break;
    }

    if (!RSA_check_key(ServerInfo.rsa_private_key))
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;

      yyerror("Invalid key, ignoring");
      break;
    }

    /* require 2048 bit (256 byte) key */
    if (RSA_size(ServerInfo.rsa_private_key) != 256)
    {
      RSA_free(ServerInfo.rsa_private_key);
      ServerInfo.rsa_private_key = NULL;

      yyerror("Not a 2048 bit key, ignoring");
    }
  }
#endif
;}
    break;

  case 65:
#line 616 "ircd_parser.y"
    {
  /* this isn't rehashable */
  if (ypass == 2)
  {
    if (ServerInfo.name == NULL)
    {
      /* the ircd will exit() in main() if we dont set one */
      if (strlen(yylval.string) <= HOSTLEN)
        DupString(ServerInfo.name, yylval.string);
    }
  }
;}
    break;

  case 66:
#line 630 "ircd_parser.y"
    {
  /* this isn't rehashable */
  if (ypass == 2 && !ServerInfo.sid)
  {
    if (valid_sid(yylval.string))
      DupString(ServerInfo.sid, yylval.string);
    else
    {
      ilog(L_ERROR, "Ignoring config file entry SID -- invalid SID. Aborting.");
      exit(0);
    }
  }
;}
    break;

  case 67:
#line 645 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
;}
    break;

  case 68:
#line 654 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char *p;

    if ((p = strchr(yylval.string, ' ')) != NULL)
      p = '\0';

    MyFree(ServerInfo.network_name);
    DupString(ServerInfo.network_name, yylval.string);
  }
;}
    break;

  case 69:
#line 668 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
;}
    break;

  case 70:
#line 677 "ircd_parser.y"
    {
  if (ypass == 2 && *yylval.string != '*')
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (irc_getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(L_ERROR, "Invalid netmask for server vhost(%s)", yylval.string);
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
;}
    break;

  case 71:
#line 705 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2 && *yylval.string != '*')
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (irc_getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(L_ERROR, "Invalid netmask for server vhost6(%s)", yylval.string);
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
;}
    break;

  case 72:
#line 735 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    recalc_fdlimit(NULL);

    if ((yyvsp[(3) - (4)].number) < MAXCLIENTS_MIN)
    {
      char buf[IRCD_BUFSIZE];
      ircsprintf(buf, "MAXCLIENTS too low, setting to %d", MAXCLIENTS_MIN);
      yyerror(buf);
    }
    else if ((yyvsp[(3) - (4)].number) > MAXCLIENTS_MAX)
    {
      char buf[IRCD_BUFSIZE];
      ircsprintf(buf, "MAXCLIENTS too high, setting to %d", MAXCLIENTS_MAX);
      yyerror(buf);
    }
    else
      ServerInfo.max_clients = (yyvsp[(3) - (4)].number);
  }
;}
    break;

  case 73:
#line 758 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
    {
      /* Don't become a hub if we have a lazylink active. */
      if (!ServerInfo.hub && uplink && IsCapable(uplink, CAP_LL))
      {
        sendto_realops_flags(UMODE_ALL, L_ALL,
                             "Ignoring config file line hub=yes; "
                             "due to active LazyLink (%s)", uplink->name);
      }
      else
      {
        ServerInfo.hub = 1;
        uplink = NULL;
        delete_capability("HUB");
        add_capability("HUB", CAP_HUB, 1);
      }
    }
    else if (ServerInfo.hub)
    {
      dlink_node *ptr = NULL;

      ServerInfo.hub = 0;
      delete_capability("HUB");

      /* Don't become a leaf if we have a lazylink active. */
      DLINK_FOREACH(ptr, serv_list.head)
      {
        const struct Client *acptr = ptr->data;
        if (MyConnect(acptr) && IsCapable(acptr, CAP_LL))
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
;}
    break;

  case 81:
#line 814 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
;}
    break;

  case 82:
#line 823 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
;}
    break;

  case 83:
#line 832 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
;}
    break;

  case 100:
#line 859 "ircd_parser.y"
    {
                        ;}
    break;

  case 101:
#line 863 "ircd_parser.y"
    {
                        ;}
    break;

  case 102:
#line 867 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
;}
    break;

  case 103:
#line 874 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
;}
    break;

  case 104:
#line 881 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
;}
    break;

  case 105:
#line 888 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
            sizeof(ConfigLoggingEntry.operspylog));
;}
    break;

  case 106:
#line 895 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
            sizeof(ConfigLoggingEntry.glinelog));
;}
    break;

  case 107:
#line 902 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
            sizeof(ConfigLoggingEntry.klinelog));
;}
    break;

  case 108:
#line 909 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
            sizeof(ConfigLoggingEntry.ioerrlog));
;}
    break;

  case 109:
#line 916 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.killlog, yylval.string,
            sizeof(ConfigLoggingEntry.killlog));
;}
    break;

  case 110:
#line 923 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
;}
    break;

  case 111:
#line 927 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
;}
    break;

  case 112:
#line 931 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
;}
    break;

  case 113:
#line 935 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
;}
    break;

  case 114:
#line 939 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
;}
    break;

  case 115:
#line 943 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
;}
    break;

  case 116:
#line 947 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
;}
    break;

  case 117:
#line 953 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
;}
    break;

  case 118:
#line 962 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(OPER_TYPE);
    yy_aconf = map_to_conf(yy_conf);
    SetConfEncrypted(yy_aconf); /* Yes, the default is encrypted */
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
;}
    break;

  case 119:
#line 975 "ircd_parser.y"
    {
  if (ypass == 2)
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
      new_aconf = (struct AccessItem *)map_to_conf(new_conf);

      new_aconf->flags = yy_aconf->flags;

      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);
      if (yy_tmp->user != NULL)
	DupString(new_aconf->user, yy_tmp->user);
      else
	DupString(new_aconf->user, "*");
      if (yy_tmp->host != NULL)
	DupString(new_aconf->host, yy_tmp->host);
      else
	DupString(new_aconf->host, "*");
      conf_add_class_to_conf(new_conf, class_name);
      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);

      new_aconf->port = yy_aconf->port;
#ifdef HAVE_LIBCRYPTO
      if (yy_aconf->rsa_public_key_file != NULL)
      {
        BIO *file;

        DupString(new_aconf->rsa_public_key_file,
		  yy_aconf->rsa_public_key_file);

        file = BIO_new_file(yy_aconf->rsa_public_key_file, "r");
        new_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, 
							   NULL, 0, NULL);
        (void)BIO_set_close(file, BIO_CLOSE);
        BIO_free(file);
      }
      if (yy_aconf->certfp != NULL)
      {
        new_aconf->certfp = MyMalloc(SHA_DIGEST_LENGTH);
        memcpy(new_aconf->certfp, yy_aconf->certfp, SHA_DIGEST_LENGTH);
      }
#endif

#ifdef HAVE_LIBCRYPTO
      if (yy_tmp->name && (yy_tmp->passwd || yy_aconf->rsa_public_key)
	  && yy_tmp->host)
#else
      if (yy_tmp->name && yy_tmp->passwd && yy_tmp->host)
#endif
      {
        conf_add_class_to_conf(new_conf, class_name);
	if (yy_tmp->name != NULL)
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
;}
    break;

  case 149:
#line 1072 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > OPERNICKLEN)
      yylval.string[OPERNICKLEN] = '\0';

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
;}
    break;

  case 150:
#line 1084 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > OPERNICKLEN)
      yylval.string[OPERNICKLEN] = '\0';

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
;}
    break;

  case 151:
#line 1096 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = userbuf;
    nuh.hostptr  = hostbuf;
    
    nuh.nicksize = 0;
    nuh.usersize = sizeof(userbuf);
    nuh.hostsize = sizeof(hostbuf);

    split_nuh(&nuh);

    if (yy_aconf->user == NULL)
    {
      DupString(yy_aconf->user, userbuf);
      DupString(yy_aconf->host, hostbuf);
    }
    else
    {
      struct CollectItem *yy_tmp = MyMalloc(sizeof(struct CollectItem));

      DupString(yy_tmp->user, userbuf);
      DupString(yy_tmp->host, hostbuf);

      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
;}
    break;

  case 152:
#line 1130 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char tmp[SHA_DIGEST_LENGTH];
    
    if(yy_aconf->certfp != NULL)
      MyFree(yy_aconf->certfp);

    if(base16_decode(tmp, SHA_DIGEST_LENGTH, yylval.string, strlen(yylval.string)) != 0)
    {
      yyerror("Invalid client certificate fingerprint provided. Ignoring");
      break;
    }
    yy_aconf->certfp = MyMalloc(SHA_DIGEST_LENGTH);
    memcpy(yy_aconf->certfp, tmp, SHA_DIGEST_LENGTH);
  }
;}
    break;

  case 153:
#line 1149 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
;}
    break;

  case 154:
#line 1161 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      SetConfEncrypted(yy_aconf);
    else
      ClearConfEncrypted(yy_aconf);
  }
;}
    break;

  case 155:
#line 1172 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    BIO *file;

    if (yy_aconf->rsa_public_key != NULL)
    {
      RSA_free(yy_aconf->rsa_public_key);
      yy_aconf->rsa_public_key = NULL;
    }

    if (yy_aconf->rsa_public_key_file != NULL)
    {
      MyFree(yy_aconf->rsa_public_key_file);
      yy_aconf->rsa_public_key_file = NULL;
    }

    DupString(yy_aconf->rsa_public_key_file, yylval.string);
    file = BIO_new_file(yylval.string, "r");

    if (file == NULL)
    {
      yyerror("Ignoring rsa_public_key_file -- file doesn't exist");
      break;
    }

    yy_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);

    if (yy_aconf->rsa_public_key == NULL)
    {
      yyerror("Ignoring rsa_public_key_file -- Key invalid; check key syntax.");
      break;
    }

    (void)BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif /* HAVE_LIBCRYPTO */
;}
    break;

  case 156:
#line 1214 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
;}
    break;

  case 157:
#line 1223 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes = 0;
;}
    break;

  case 161:
#line 1230 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_BOTS;
;}
    break;

  case 162:
#line 1234 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CCONN;
;}
    break;

  case 163:
#line 1238 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CCONN_FULL;
;}
    break;

  case 164:
#line 1242 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_DEAF;
;}
    break;

  case 165:
#line 1246 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_DEBUG;
;}
    break;

  case 166:
#line 1250 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_FULL;
;}
    break;

  case 167:
#line 1254 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SKILL;
;}
    break;

  case 168:
#line 1258 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_NCHANGE;
;}
    break;

  case 169:
#line 1262 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_REJ;
;}
    break;

  case 170:
#line 1266 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_UNAUTH;
;}
    break;

  case 171:
#line 1270 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SPY;
;}
    break;

  case 172:
#line 1274 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_EXTERNAL;
;}
    break;

  case 173:
#line 1278 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_OPERWALL;
;}
    break;

  case 174:
#line 1282 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SERVNOTICE;
;}
    break;

  case 175:
#line 1286 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_INVISIBLE;
;}
    break;

  case 176:
#line 1290 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_WALLOP;
;}
    break;

  case 177:
#line 1294 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SOFTCALLERID;
;}
    break;

  case 178:
#line 1298 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CALLERID;
;}
    break;

  case 179:
#line 1302 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_LOCOPS;
;}
    break;

  case 180:
#line 1306 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_HIDECHANNELS;
;}
    break;

  case 181:
#line 1312 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
    else
      yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
  }
;}
    break;

  case 182:
#line 1323 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REMOTE;
    else
      yy_aconf->port &= ~OPER_FLAG_REMOTE; 
  }
;}
    break;

  case 183:
#line 1334 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REMOTEBAN;
    else
      yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
  }
;}
    break;

  case 184:
#line 1345 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_K;
    else
      yy_aconf->port &= ~OPER_FLAG_K;
  }
;}
    break;

  case 185:
#line 1356 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_X;
    else
      yy_aconf->port &= ~OPER_FLAG_X;
  }
;}
    break;

  case 186:
#line 1367 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_UNKLINE;
    else
      yy_aconf->port &= ~OPER_FLAG_UNKLINE; 
  }
;}
    break;

  case 187:
#line 1378 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_GLINE;
    else
      yy_aconf->port &= ~OPER_FLAG_GLINE;
  }
;}
    break;

  case 188:
#line 1389 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_N;
    else
      yy_aconf->port &= ~OPER_FLAG_N;
  }
;}
    break;

  case 189:
#line 1400 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_DIE;
    else
      yy_aconf->port &= ~OPER_FLAG_DIE;
  }
;}
    break;

  case 190:
#line 1411 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REHASH;
    else
      yy_aconf->port &= ~OPER_FLAG_REHASH;
  }
;}
    break;

  case 191:
#line 1422 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_ADMIN;
    else
      yy_aconf->port &= ~OPER_FLAG_ADMIN;
  }
;}
    break;

  case 192:
#line 1433 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
    else
      yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
  }
;}
    break;

  case 193:
#line 1444 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
    else
      yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
  }
;}
    break;

  case 194:
#line 1455 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_OPER_SPY;
    else
      yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
  }
;}
    break;

  case 195:
#line 1466 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_OPERWALL;
    else
      yy_aconf->port &= ~OPER_FLAG_OPERWALL;
  }
;}
    break;

  case 196:
#line 1477 "ircd_parser.y"
    {
;}
    break;

  case 200:
#line 1481 "ircd_parser.y"
    { not_atom = 1; ;}
    break;

  case 202:
#line 1482 "ircd_parser.y"
    { not_atom = 0; ;}
    break;

  case 204:
#line 1485 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
;}
    break;

  case 205:
#line 1492 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
;}
    break;

  case 206:
#line 1499 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
;}
    break;

  case 207:
#line 1506 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
;}
    break;

  case 208:
#line 1513 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
;}
    break;

  case 209:
#line 1520 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
;}
    break;

  case 210:
#line 1527 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
;}
    break;

  case 211:
#line 1534 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
;}
    break;

  case 212:
#line 1541 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
;}
    break;

  case 213:
#line 1548 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
;}
    break;

  case 214:
#line 1555 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
;}
    break;

  case 215:
#line 1562 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
;}
    break;

  case 216:
#line 1569 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
;}
    break;

  case 217:
#line 1576 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
;}
    break;

  case 218:
#line 1583 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
;}
    break;

  case 219:
#line 1590 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
;}
    break;

  case 220:
#line 1603 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = map_to_conf(yy_conf);
  }
;}
    break;

  case 221:
#line 1610 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    struct ConfItem *cconf = NULL;
    struct ClassItem *class = NULL;

    if (yy_class_name == NULL)
      delete_conf_item(yy_conf);
    else
    {
      cconf = find_exact_name_conf(CLASS_TYPE, yy_class_name, NULL, NULL, NULL);

      if (cconf != NULL)		/* The class existed already */
      {
        int user_count = 0;

        rebuild_cidr_class(cconf, yy_class);

        class = map_to_conf(cconf);

        user_count = class->curr_user_count;
        memcpy(class, yy_class, sizeof(*class));
        class->curr_user_count = user_count;
        class->active = 1;

        delete_conf_item(yy_conf);

        MyFree(cconf->name);            /* Allows case change of class name */
        cconf->name = yy_class_name;
      }
      else	/* Brand new class */
      {
        MyFree(yy_conf->name);          /* just in case it was allocated */
        yy_conf->name = yy_class_name;
	yy_class->active = 1;
      }
    }
    yy_class_name = NULL;
  }
;}
    break;

  case 240:
#line 1669 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
;}
    break;

  case 241:
#line 1678 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
;}
    break;

  case 242:
#line 1687 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 243:
#line 1693 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 244:
#line 1699 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 245:
#line 1705 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 246:
#line 1711 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 247:
#line 1717 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 248:
#line 1723 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 249:
#line 1729 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 250:
#line 1735 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 251:
#line 1741 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV4(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 252:
#line 1747 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV6(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 253:
#line 1753 "ircd_parser.y"
    {
  if (ypass == 1)
    NumberPerCidr(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 254:
#line 1762 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
;}
    break;

  case 255:
#line 1769 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
;}
    break;

  case 256:
#line 1778 "ircd_parser.y"
    {
  listener_flags = 0;
;}
    break;

  case 260:
#line 1784 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
;}
    break;

  case 261:
#line 1788 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
;}
    break;

  case 269:
#line 1796 "ircd_parser.y"
    { listener_flags = 0; ;}
    break;

  case 273:
#line 1801 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if ((listener_flags & LISTENER_SSL))
#ifdef HAVE_LIBCRYPTO
      if (!ServerInfo.ctx)
#endif
      {
        yyerror("SSL not available - port closed");
	break;
      }
    add_listener((yyvsp[(1) - (1)].number), listener_address, listener_flags);
  }
;}
    break;

  case 274:
#line 1815 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    int i;

    if ((listener_flags & LISTENER_SSL))
#ifdef HAVE_LIBCRYPTO
      if (!ServerInfo.ctx)
#endif
      {
        yyerror("SSL not available - port closed");
	break;
      }

    for (i = (yyvsp[(1) - (3)].number); i <= (yyvsp[(3) - (3)].number); ++i)
      add_listener(i, listener_address, listener_flags);
  }
;}
    break;

  case 275:
#line 1835 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
;}
    break;

  case 276:
#line 1844 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
;}
    break;

  case 277:
#line 1856 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLIENT_TYPE);
    yy_aconf = map_to_conf(yy_conf);
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
;}
    break;

  case 278:
#line 1868 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp = NULL;
    dlink_node *ptr = NULL, *next_ptr = NULL;

    if (yy_aconf->user && yy_aconf->host)
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

      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);
      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);
      if (yy_aconf->passwd != NULL)
        DupString(new_aconf->passwd, yy_aconf->passwd);

      new_aconf->flags = yy_aconf->flags;
      new_aconf->port  = yy_aconf->port;

      DupString(new_aconf->user, yy_tmp->user);
      collapse(new_aconf->user);

      DupString(new_aconf->host, yy_tmp->host);
      collapse(new_aconf->host);

      if (yy_aconf->certfp != NULL)
      {
        new_aconf->certfp = MyMalloc(SHA_DIGEST_LENGTH);
        memcpy(new_aconf->certfp, yy_aconf->certfp, SHA_DIGEST_LENGTH);
      }

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
;}
    break;

  case 300:
#line 1939 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp = NULL;
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = userbuf;
    nuh.hostptr  = hostbuf;

    nuh.nicksize = 0;
    nuh.usersize = sizeof(userbuf);
    nuh.hostsize = sizeof(hostbuf);

    split_nuh(&nuh);

    if (yy_aconf->user == NULL)
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
;}
    break;

  case 301:
#line 1976 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    /* be paranoid */
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
;}
    break;

  case 302:
#line 1989 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char tmp[SHA_DIGEST_LENGTH];

    if(yy_aconf->certfp != NULL)
      MyFree(yy_aconf->certfp);

    if(base16_decode(tmp, SHA_DIGEST_LENGTH, yylval.string, strlen(yylval.string)) != 0)
    {
      yyerror("Invalid client certificate fingerprint provided. Ignoring");
      break;
    }
    yy_aconf->certfp = MyMalloc(SHA_DIGEST_LENGTH);
    memcpy(yy_aconf->certfp, tmp, SHA_DIGEST_LENGTH);
  }
;}
    break;

  case 303:
#line 2008 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
  }
;}
    break;

  case 304:
#line 2019 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
;}
    break;

  case 305:
#line 2028 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      SetConfEncrypted(yy_aconf);
    else
      ClearConfEncrypted(yy_aconf);
  }
;}
    break;

  case 306:
#line 2039 "ircd_parser.y"
    {
;}
    break;

  case 310:
#line 2043 "ircd_parser.y"
    { not_atom = 1; ;}
    break;

  case 312:
#line 2044 "ircd_parser.y"
    { not_atom = 0; ;}
    break;

  case 314:
#line 2047 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

;}
    break;

  case 315:
#line 2055 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
;}
    break;

  case 316:
#line 2062 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
;}
    break;

  case 317:
#line 2069 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
;}
    break;

  case 318:
#line 2076 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
;}
    break;

  case 319:
#line 2083 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
;}
    break;

  case 320:
#line 2090 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
;}
    break;

  case 321:
#line 2097 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
;}
    break;

  case 322:
#line 2104 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
;}
    break;

  case 323:
#line 2111 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_WEBIRC;
    else yy_aconf->flags |= CONF_FLAGS_WEBIRC;
  }
;}
    break;

  case 324:
#line 2118 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
;}
    break;

  case 325:
#line 2127 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
  }
;}
    break;

  case 326:
#line 2138 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
  }
;}
    break;

  case 327:
#line 2149 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
  }
;}
    break;

  case 328:
#line 2160 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
  }
;}
    break;

  case 329:
#line 2171 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
  }
;}
    break;

  case 330:
#line 2182 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
  }
;}
    break;

  case 331:
#line 2194 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);

    if (strlen(yylval.string) < HOSTLEN)
    {    
      DupString(yy_conf->name, yylval.string);
      yy_aconf->flags |= CONF_FLAGS_SPOOF_IP;
    }
    else
    {
      ilog(L_ERROR, "Spoofs must be less than %d..ignoring it", HOSTLEN);
      yy_conf->name = NULL;
    }
  }
;}
    break;

  case 332:
#line 2213 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
;}
    break;

  case 333:
#line 2223 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[(3) - (4)].number);
  }
;}
    break;

  case 334:
#line 2232 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_WEBIRC;
    else
      yy_aconf->flags &= ~CONF_FLAGS_WEBIRC;
  }
;}
    break;

  case 335:
#line 2243 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
  }
;}
    break;

  case 336:
#line 2258 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
;}
    break;

  case 337:
#line 2265 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
;}
    break;

  case 344:
#line 2277 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
;}
    break;

  case 345:
#line 2286 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (IsChanPrefix(*yylval.string))
    {
      char def_reason[] = "No reason";

      create_channel_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
    }
  }
  /* ignore it for now.. but we really should make a warning if
   * its an erroneous name --fl_ */
;}
    break;

  case 346:
#line 2301 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
;}
    break;

  case 347:
#line 2314 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
;}
    break;

  case 348:
#line 2322 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
;}
    break;

  case 355:
#line 2333 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
;}
    break;

  case 356:
#line 2342 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = userbuf;
    nuh.hostptr  = hostbuf;

    nuh.nicksize = 0;
    nuh.usersize = sizeof(userbuf);
    nuh.hostsize = sizeof(hostbuf);

    split_nuh(&nuh);

    DupString(yy_match_item->user, userbuf);
    DupString(yy_match_item->host, hostbuf);
  }
;}
    break;

  case 357:
#line 2364 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
;}
    break;

  case 361:
#line 2371 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
;}
    break;

  case 362:
#line 2375 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
;}
    break;

  case 363:
#line 2379 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
;}
    break;

  case 364:
#line 2383 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
;}
    break;

  case 365:
#line 2387 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
;}
    break;

  case 366:
#line 2391 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
;}
    break;

  case 367:
#line 2395 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
;}
    break;

  case 368:
#line 2399 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
;}
    break;

  case 369:
#line 2403 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
;}
    break;

  case 370:
#line 2407 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
;}
    break;

  case 371:
#line 2411 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_SERVICES;
;}
    break;

  case 372:
#line 2415 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_REHASH;
;}
    break;

  case 373:
#line 2419 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
;}
    break;

  case 374:
#line 2428 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
;}
    break;

  case 375:
#line 2435 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
;}
    break;

  case 381:
#line 2448 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
;}
    break;

  case 382:
#line 2454 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
;}
    break;

  case 386:
#line 2461 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
;}
    break;

  case 387:
#line 2465 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
;}
    break;

  case 388:
#line 2469 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
;}
    break;

  case 389:
#line 2473 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
;}
    break;

  case 390:
#line 2477 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
;}
    break;

  case 391:
#line 2481 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
;}
    break;

  case 392:
#line 2485 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
;}
    break;

  case 393:
#line 2489 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
;}
    break;

  case 394:
#line 2493 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
;}
    break;

  case 395:
#line 2497 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
;}
    break;

  case 396:
#line 2501 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
;}
    break;

  case 397:
#line 2510 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(SERVER_TYPE);
    yy_aconf = (struct AccessItem *)map_to_conf(yy_conf);
    yy_aconf->passwd = NULL;
    /* defaults */
    yy_aconf->port = PORTNUM;

    if (ConfigFileEntry.burst_away)
      yy_aconf->flags = CONF_FLAGS_BURST_AWAY;
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
;}
    break;

  case 398:
#line 2528 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_hconf=NULL;
    struct CollectItem *yy_lconf=NULL;
    dlink_node *ptr;
    dlink_node *next_ptr;
#ifdef HAVE_LIBCRYPTO
    if (yy_aconf->host &&
	((yy_aconf->passwd && yy_aconf->spasswd) ||
	 (yy_aconf->rsa_public_key && IsConfCryptLink(yy_aconf))))
#else /* !HAVE_LIBCRYPTO */
      if (yy_aconf->host && !IsConfCryptLink(yy_aconf) && 
	  yy_aconf->passwd && yy_aconf->spasswd)
#endif /* !HAVE_LIBCRYPTO */
	{
	  if (conf_add_server(yy_conf, class_name) == -1)
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

	  if (yy_conf->name != NULL)
	  {
#ifndef HAVE_LIBCRYPTO
	    if (IsConfCryptLink(yy_aconf))
	      yyerror("Ignoring connect block -- no OpenSSL support");
#else
	    if (IsConfCryptLink(yy_aconf) && !yy_aconf->rsa_public_key)
	      yyerror("Ignoring connect block -- missing key");
#endif
	    if (yy_aconf->host == NULL)
	      yyerror("Ignoring connect block -- missing host");
	    else if (!IsConfCryptLink(yy_aconf) && 
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
	if ((yy_conf != NULL) && (yy_conf->name != NULL))
	{
	  new_hub_conf = make_conf_item(HUB_TYPE);
	  match_item = (struct MatchItem *)map_to_conf(new_hub_conf);
	  DupString(new_hub_conf->name, yy_conf->name);
	  if (yy_hconf->user != NULL)
	    DupString(match_item->user, yy_hconf->user);
	  else
	    DupString(match_item->user, "*");
	  if (yy_hconf->host != NULL)
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

	if ((yy_conf != NULL) && (yy_conf->name != NULL))
	{
	  new_leaf_conf = make_conf_item(LEAF_TYPE);
	  match_item = (struct MatchItem *)map_to_conf(new_leaf_conf);
	  DupString(new_leaf_conf->name, yy_conf->name);
	  if (yy_lconf->user != NULL)
	    DupString(match_item->user, yy_lconf->user);
	  else
	    DupString(match_item->user, "*");
	  if (yy_lconf->host != NULL)
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
;}
    break;

  case 423:
#line 2667 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name != NULL)
      yyerror("Multiple connect name entry");

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
;}
    break;

  case 424:
#line 2679 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name != NULL)
      yyerror("Multiple connect name entry");

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
;}
    break;

  case 425:
#line 2691 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
;}
    break;

  case 426:
#line 2700 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (irc_getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(L_ERROR, "Invalid netmask for server vhost(%s)", yylval.string);
    else
    {
      assert(res != NULL);

      memcpy(&yy_aconf->my_ipnum, res->ai_addr, res->ai_addrlen);
      yy_aconf->my_ipnum.ss.ss_family = res->ai_family;
      yy_aconf->my_ipnum.ss_len = res->ai_addrlen;
      irc_freeaddrinfo(res);
    }
  }
;}
    break;

  case 427:
#line 2726 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if ((yyvsp[(3) - (4)].string)[0] == ':')
      yyerror("Server passwords cannot begin with a colon");
    else if (strchr((yyvsp[(3) - (4)].string), ' ') != NULL)
      yyerror("Server passwords cannot contain spaces");
    else {
      if (yy_aconf->spasswd != NULL)
        memset(yy_aconf->spasswd, 0, strlen(yy_aconf->spasswd));

      MyFree(yy_aconf->spasswd);
      DupString(yy_aconf->spasswd, yylval.string);
    }
  }
;}
    break;

  case 428:
#line 2744 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if ((yyvsp[(3) - (4)].string)[0] == ':')
      yyerror("Server passwords cannot begin with a colon");
    else if (strchr((yyvsp[(3) - (4)].string), ' ') != NULL)
      yyerror("Server passwords cannot contain spaces");
    else {
      if (yy_aconf->passwd != NULL)
        memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

      MyFree(yy_aconf->passwd);
      DupString(yy_aconf->passwd, yylval.string);
    }
  }
;}
    break;

  case 429:
#line 2762 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[(3) - (4)].number);
;}
    break;

  case 430:
#line 2768 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
;}
    break;

  case 431:
#line 2772 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
;}
    break;

  case 432:
#line 2780 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
;}
    break;

  case 433:
#line 2789 "ircd_parser.y"
    {
;}
    break;

  case 437:
#line 2793 "ircd_parser.y"
    { not_atom = 1; ;}
    break;

  case 439:
#line 2794 "ircd_parser.y"
    { not_atom = 0; ;}
    break;

  case 441:
#line 2797 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
;}
    break;

  case 442:
#line 2804 "ircd_parser.y"
    {
  if (ypass == 2)
#ifndef HAVE_LIBZ
    yyerror("Ignoring flags = compressed; -- no zlib support");
#else
 {
   if (not_atom)ClearConfCompressed(yy_aconf);
   else SetConfCompressed(yy_aconf);
 }
#endif
;}
    break;

  case 443:
#line 2815 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
;}
    break;

  case 444:
#line 2822 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
;}
    break;

  case 445:
#line 2829 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
;}
    break;

  case 446:
#line 2836 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
;}
    break;

  case 447:
#line 2846 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    BIO *file;

    if (yy_aconf->rsa_public_key != NULL)
    {
      RSA_free(yy_aconf->rsa_public_key);
      yy_aconf->rsa_public_key = NULL;
    }

    if (yy_aconf->rsa_public_key_file != NULL)
    {
      MyFree(yy_aconf->rsa_public_key_file);
      yy_aconf->rsa_public_key_file = NULL;
    }

    DupString(yy_aconf->rsa_public_key_file, yylval.string);

    if ((file = BIO_new_file(yylval.string, "r")) == NULL)
    {
      yyerror("Ignoring rsa_public_key_file -- file doesn't exist");
      break;
    }

    yy_aconf->rsa_public_key = (RSA *)PEM_read_bio_RSA_PUBKEY(file, NULL, 0, NULL);

    if (yy_aconf->rsa_public_key == NULL)
    {
      yyerror("Ignoring rsa_public_key_file -- Key invalid; check key syntax.");
      break;
    }

    (void)BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif /* HAVE_LIBCRYPTO */
;}
    break;

  case 448:
#line 2887 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ENCRYPTED;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ENCRYPTED;
  }
;}
    break;

  case 449:
#line 2898 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
    else
      yy_aconf->flags &= ~CONF_FLAGS_CRYPTLINK;
  }
;}
    break;

  case 450:
#line 2909 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
#ifndef HAVE_LIBZ
      yyerror("Ignoring compressed=yes; -- no zlib support");
#else
      yy_aconf->flags |= CONF_FLAGS_COMPRESSED;
#endif
    else
      yy_aconf->flags &= ~CONF_FLAGS_COMPRESSED;
  }
;}
    break;

  case 451:
#line 2924 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ALLOW_AUTO_CONN;
  }
;}
    break;

  case 452:
#line 2935 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      SetConfTopicBurst(yy_aconf);
    else
      ClearConfTopicBurst(yy_aconf);
  }
;}
    break;

  case 453:
#line 2946 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
    DupString(yy_tmp->host, yylval.string);
    DupString(yy_tmp->user, "*");
    dlinkAdd(yy_tmp, &yy_tmp->node, &hub_conf_list);
  }
;}
    break;

  case 454:
#line 2959 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
    DupString(yy_tmp->host, yylval.string);
    DupString(yy_tmp->user, "*");
    dlinkAdd(yy_tmp, &yy_tmp->node, &leaf_conf_list);
  }
;}
    break;

  case 455:
#line 2972 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
;}
    break;

  case 456:
#line 2981 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    struct EncCapability *ecap;
    const char *cipher_name;
    int found = 0;

    yy_aconf->cipher_preference = NULL;
    cipher_name = yylval.string;

    for (ecap = CipherTable; ecap->name; ecap++)
    {
      if ((irccmp(ecap->name, cipher_name) == 0) &&
          (ecap->cap & CAP_ENC_MASK))
      {
        yy_aconf->cipher_preference = ecap;
        found = 1;
        break;
      }
    }

    if (!found)
      yyerror("Invalid cipher");
  }
#else
  if (ypass == 2)
    yyerror("Ignoring cipher_preference -- no OpenSSL support");
#endif
;}
    break;

  case 457:
#line 3016 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
;}
    break;

  case 458:
#line 3023 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (userbuf[0] && hostbuf[0])
    {
      if (regex_ban)
      {
        pcre *exp_user = NULL;
        pcre *exp_host = NULL;
        const char *errptr = NULL;

        if (!(exp_user = ircd_pcre_compile(userbuf, &errptr)) ||
            !(exp_host = ircd_pcre_compile(hostbuf, &errptr)))
        {
          ilog(L_ERROR, "Failed to add regular expression based K-Line: %s", errptr);
          break;
        }

        yy_conf = make_conf_item(RKLINE_TYPE);
	yy_aconf = map_to_conf(yy_conf);

        yy_aconf->regexuser = exp_user;
        yy_aconf->regexhost = exp_host;

        DupString(yy_aconf->user, userbuf);
        DupString(yy_aconf->host, hostbuf);

        if (reasonbuf[0])
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

        if (reasonbuf[0])
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
;}
    break;

  case 459:
#line 3079 "ircd_parser.y"
    {
;}
    break;

  case 463:
#line 3084 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
;}
    break;

  case 470:
#line 3093 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = userbuf;
    nuh.hostptr  = hostbuf;

    nuh.nicksize = 0;
    nuh.usersize = sizeof(userbuf);
    nuh.hostsize = sizeof(hostbuf);

    split_nuh(&nuh);
  }
;}
    break;

  case 471:
#line 3112 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
;}
    break;

  case 472:
#line 3121 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DLINE_TYPE);
    yy_aconf = map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_aconf->reason, "No reason");
  }
;}
    break;

  case 473:
#line 3130 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->host && parse_netmask(yy_aconf->host, NULL, NULL) != HM_HOST)
      add_conf_by_address(CONF_DLINE, yy_aconf);
    else
      delete_conf_item(yy_conf);
    yy_conf = NULL;
    yy_aconf = NULL;
  }
;}
    break;

  case 479:
#line 3146 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
;}
    break;

  case 480:
#line 3155 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
;}
    break;

  case 487:
#line 3172 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.string[0] && parse_netmask(yylval.string, NULL, NULL) != HM_HOST)
    {
      yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
      yy_aconf = map_to_conf(yy_conf);
      DupString(yy_aconf->host, yylval.string);

      add_conf_by_address(CONF_EXEMPTDLINE, yy_aconf);

      yy_conf = NULL;
      yy_aconf = NULL;
    }
  }
;}
    break;

  case 488:
#line 3190 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char tmp[SHA_DIGEST_LENGTH];

    yy_conf = make_conf_item(EXEMPTDLINE_TYPE);
    yy_aconf = map_to_conf(yy_conf);
  
    if(base16_decode(tmp, SHA_DIGEST_LENGTH, yylval.string, strlen(yylval.string)) != 0)
    {
      yyerror("Invalid client certificate fingerprint provided. Ignoring");
      break;
    }
 
    yy_aconf->certfp = MyMalloc(SHA_DIGEST_LENGTH);
    yy_aconf->host = MyMalloc(SHA_DIGEST_LENGTH);
    memcpy(yy_aconf->certfp, tmp, SHA_DIGEST_LENGTH);
    memcpy(yy_aconf->host, tmp, SHA_DIGEST_LENGTH);
 
    add_conf_by_address(CONF_EXEMPTDLINE, yy_aconf);

    yy_conf = NULL;
    yy_aconf = NULL;

 }
;}
    break;

  case 489:
#line 3222 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
;}
    break;

  case 490:
#line 3229 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (gecos_name[0])
    {
      if (regex_ban)
      {
        pcre *exp_p = NULL;
        const char *errptr = NULL;

        if (!(exp_p = ircd_pcre_compile(gecos_name, &errptr)))
        {
          ilog(L_ERROR, "Failed to add regular expression based X-Line: %s", errptr);
          break;
        }

        yy_conf = make_conf_item(RXLINE_TYPE);
        yy_conf->regexpname = exp_p;
      }
      else
        yy_conf = make_conf_item(XLINE_TYPE);

      yy_match_item = map_to_conf(yy_conf);
      DupString(yy_conf->name, gecos_name);

      if (reasonbuf[0])
        DupString(yy_match_item->reason, reasonbuf);
      else
        DupString(yy_match_item->reason, "No reason");
    }
  }
;}
    break;

  case 491:
#line 3263 "ircd_parser.y"
    {
;}
    break;

  case 495:
#line 3268 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
;}
    break;

  case 502:
#line 3277 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
;}
    break;

  case 503:
#line 3283 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
;}
    break;

  case 569:
#line 3331 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = (yyvsp[(3) - (4)].number);
;}
    break;

  case 570:
#line 3336 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = (yyvsp[(3) - (4)].number);
;}
    break;

  case 571:
#line 3341 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
;}
    break;

  case 572:
#line 3346 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
;}
    break;

  case 573:
#line 3351 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
;}
    break;

  case 574:
#line 3356 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
;}
    break;

  case 575:
#line 3361 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = (yyvsp[(3) - (4)].number);
;}
    break;

  case 576:
#line 3366 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
;}
    break;

  case 577:
#line 3371 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
;}
    break;

  case 578:
#line 3376 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
;}
    break;

  case 579:
#line 3381 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
;}
    break;

  case 580:
#line 3386 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
;}
    break;

  case 581:
#line 3391 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = (yyvsp[(3) - (4)].number); 
;}
    break;

  case 582:
#line 3396 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = (yyvsp[(3) - (4)].number);
;}
    break;

  case 583:
#line 3401 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = (yyvsp[(3) - (4)].number);
;}
    break;

  case 584:
#line 3406 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[(3) - (4)].number);
;}
    break;

  case 585:
#line 3411 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_connect_numeric = yylval.number;
;}
    break;

  case 586:
#line 3416 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = (yyvsp[(3) - (4)].number);
;}
    break;

  case 587:
#line 3421 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[(3) - (4)].number);
;}
    break;

  case 588:
#line 3427 "ircd_parser.y"
    {
  if (((yyvsp[(3) - (4)].number) > 0) && ypass == 1)
  {
    ilog(L_CRIT, "You haven't read your config file properly.");
    ilog(L_CRIT, "There is a line in the example conf that will kill your server if not removed.");
    ilog(L_CRIT, "Consider actually reading/editing the conf file, and removing this line.");
    exit(0);
  }
;}
    break;

  case 589:
#line 3438 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
;}
    break;

  case 590:
#line 3443 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
;}
    break;

  case 591:
#line 3452 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key1);
    DupString(ConfigFileEntry.cloak_key1, yylval.string);
  }
;}
    break;

  case 592:
#line 3461 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key2);
    DupString(ConfigFileEntry.cloak_key2, yylval.string);
  }
;}
    break;

  case 593:
#line 3470 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key3);
    DupString(ConfigFileEntry.cloak_key3, yylval.string);
  }
;}
    break;

  case 594:
#line 3479 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.services_name);
    DupString(ConfigFileEntry.services_name, yylval.string);
  }
;}
    break;

  case 595:
#line 3488 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
;}
    break;

  case 596:
#line 3493 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
;}
    break;

  case 597:
#line 3498 "ircd_parser.y"
    {
  ConfigFileEntry.stats_e_disabled = yylval.number;
;}
    break;

  case 598:
#line 3503 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
;}
    break;

  case 599:
#line 3508 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
;}
    break;

  case 600:
#line 3513 "ircd_parser.y"
    {
  ConfigFileEntry.hide_killer = yylval.number;
;}
    break;

  case 601:
#line 3518 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
;}
    break;

  case 602:
#line 3521 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
;}
    break;

  case 603:
#line 3526 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
;}
    break;

  case 604:
#line 3529 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
;}
    break;

  case 605:
#line 3534 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = (yyvsp[(3) - (4)].number);
;}
    break;

  case 606:
#line 3539 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = (yyvsp[(3) - (4)].number);
;}
    break;

  case 607:
#line 3544 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
;}
    break;

  case 608:
#line 3549 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = (yyvsp[(3) - (4)].number);
;}
    break;

  case 609:
#line 3554 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
;}
    break;

  case 610:
#line 3559 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
;}
    break;

  case 611:
#line 3564 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
;}
    break;

  case 612:
#line 3569 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
;}
    break;

  case 613:
#line 3574 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
;}
    break;

  case 614:
#line 3585 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = (yyvsp[(3) - (4)].number);
;}
    break;

  case 615:
#line 3590 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = (yyvsp[(3) - (4)].number);
;}
    break;

  case 616:
#line 3595 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = (yyvsp[(3) - (4)].number);
;}
    break;

  case 617:
#line 3600 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
;}
    break;

  case 618:
#line 3609 "ircd_parser.y"
    {
#ifdef HAVE_LIBCRYPTO
  if (ypass == 2)
  {
    struct EncCapability *ecap;
    const char *cipher_name;
    int found = 0;

    ConfigFileEntry.default_cipher_preference = NULL;
    cipher_name = yylval.string;

    for (ecap = CipherTable; ecap->name; ecap++)
    {
      if ((irccmp(ecap->name, cipher_name) == 0) &&
          (ecap->cap & CAP_ENC_MASK))
      {
        ConfigFileEntry.default_cipher_preference = ecap;
        found = 1;
        break;
      }
    }

    if (!found)
      yyerror("Invalid cipher");
  }
#else
  if (ypass == 2)
    yyerror("Ignoring default_cipher_preference -- no OpenSSL support");
#endif
;}
    break;

  case 619:
#line 3641 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    ConfigFileEntry.compression_level = (yyvsp[(3) - (4)].number);
#ifndef HAVE_LIBZ
    yyerror("Ignoring compression_level -- no zlib support");
#else
    if ((ConfigFileEntry.compression_level < 1) ||
        (ConfigFileEntry.compression_level > 9))
    {
      yyerror("Ignoring invalid compression_level, using default");
      ConfigFileEntry.compression_level = 0;
    }
#endif
  }
;}
    break;

  case 620:
#line 3659 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
;}
    break;

  case 621:
#line 3664 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
;}
    break;

  case 622:
#line 3673 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
;}
    break;

  case 623:
#line 3678 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
;}
    break;

  case 624:
#line 3683 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
;}
    break;

  case 625:
#line 3688 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
;}
    break;

  case 629:
#line 3694 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
;}
    break;

  case 630:
#line 3697 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
;}
    break;

  case 631:
#line 3700 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN_FULL;
;}
    break;

  case 632:
#line 3703 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
;}
    break;

  case 633:
#line 3706 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
;}
    break;

  case 634:
#line 3709 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
;}
    break;

  case 635:
#line 3712 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
;}
    break;

  case 636:
#line 3715 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
;}
    break;

  case 637:
#line 3718 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
;}
    break;

  case 638:
#line 3721 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
;}
    break;

  case 639:
#line 3724 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
;}
    break;

  case 640:
#line 3727 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
;}
    break;

  case 641:
#line 3730 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
;}
    break;

  case 642:
#line 3733 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
;}
    break;

  case 643:
#line 3736 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
;}
    break;

  case 644:
#line 3739 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
;}
    break;

  case 645:
#line 3742 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
;}
    break;

  case 646:
#line 3745 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
;}
    break;

  case 647:
#line 3748 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
;}
    break;

  case 648:
#line 3751 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_HIDECHANNELS;
;}
    break;

  case 649:
#line 3756 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
;}
    break;

  case 653:
#line 3762 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
;}
    break;

  case 654:
#line 3765 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
;}
    break;

  case 655:
#line 3768 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN_FULL;
;}
    break;

  case 656:
#line 3771 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
;}
    break;

  case 657:
#line 3774 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
;}
    break;

  case 658:
#line 3777 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
;}
    break;

  case 659:
#line 3780 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
;}
    break;

  case 660:
#line 3783 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
;}
    break;

  case 661:
#line 3786 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
;}
    break;

  case 662:
#line 3789 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
;}
    break;

  case 663:
#line 3792 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
;}
    break;

  case 664:
#line 3795 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
;}
    break;

  case 665:
#line 3798 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
;}
    break;

  case 666:
#line 3801 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
;}
    break;

  case 667:
#line 3804 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
;}
    break;

  case 668:
#line 3807 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
;}
    break;

  case 669:
#line 3810 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
;}
    break;

  case 670:
#line 3813 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
;}
    break;

  case 671:
#line 3816 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
;}
    break;

  case 672:
#line 3819 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_HIDECHANNELS;
;}
    break;

  case 673:
#line 3824 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = (yyvsp[(3) - (4)].number);
;}
    break;

  case 674:
#line 3829 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = (yyvsp[(3) - (4)].number);
;}
    break;

  case 675:
#line 3834 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = (yyvsp[(3) - (4)].number);
;}
    break;

  case 676:
#line 3839 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = (yyvsp[(3) - (4)].number);
;}
    break;

  case 677:
#line 3844 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
;}
    break;

  case 678:
#line 3852 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = map_to_conf(yy_conf);
  }
;}
    break;

  case 679:
#line 3859 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    /*
     * since we re-allocate yy_conf/yy_aconf after the end of action=, at the
     * end we will have one extra, so we should free it.
     */
    if (yy_conf->name == NULL || yy_aconf->user == NULL)
    {
      delete_conf_item(yy_conf);
      yy_conf = NULL;
      yy_aconf = NULL;
    }
  }
;}
    break;

  case 689:
#line 3885 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
;}
    break;

  case 690:
#line 3891 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[(3) - (4)].number);
;}
    break;

  case 691:
#line 3897 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
;}
    break;

  case 695:
#line 3903 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
;}
    break;

  case 696:
#line 3907 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
;}
    break;

  case 697:
#line 3913 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = userbuf;
    nuh.hostptr  = hostbuf;

    nuh.nicksize = 0;
    nuh.usersize = sizeof(userbuf);
    nuh.hostsize = sizeof(hostbuf);

    split_nuh(&nuh);

    if (yy_aconf->user == NULL)
    {
      DupString(yy_aconf->user, userbuf);
      DupString(yy_aconf->host, hostbuf);
    }
    else
    {
      struct CollectItem *yy_tmp = MyMalloc(sizeof(struct CollectItem));

      DupString(yy_tmp->user, userbuf);
      DupString(yy_tmp->host, hostbuf);

      dlinkAdd(yy_tmp, &yy_tmp->node, &col_conf_list);
    }
  }
;}
    break;

  case 698:
#line 3947 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
;}
    break;

  case 699:
#line 3956 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
;}
    break;

  case 700:
#line 3960 "ircd_parser.y"
    {
  if (ypass == 2)
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

      if (yy_conf->name != NULL)
        DupString(new_conf->name, yy_conf->name);
      else
        DupString(new_conf->name, "*");
      if (yy_aconf->user != NULL)
         DupString(new_aconf->user, yy_tmp->user);
      else   
        DupString(new_aconf->user, "*");
      if (yy_aconf->host != NULL)
        DupString(new_aconf->host, yy_tmp->host);
      else
        DupString(new_aconf->host, "*");

      dlinkDelete(&yy_tmp->node, &col_conf_list);
    }

    /*
     * In case someone has fed us with more than one action= after user/name
     * which would leak memory  -Michael
     */
    if (yy_conf->name == NULL || yy_aconf->user == NULL)
      delete_conf_item(yy_conf);

    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = map_to_conf(yy_conf);
  }
;}
    break;

  case 703:
#line 4007 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
;}
    break;

  case 704:
#line 4011 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
;}
    break;

  case 729:
#line 4036 "ircd_parser.y"
    {
  ConfigChannel.cycle_on_hostchange = yylval.number;
;}
    break;

  case 730:
#line 4041 "ircd_parser.y"
    {
  ConfigChannel.disable_fake_channels = yylval.number;
;}
    break;

  case 731:
#line 4046 "ircd_parser.y"
    {
  ConfigChannel.restrict_channels = yylval.number;
;}
    break;

  case 732:
#line 4051 "ircd_parser.y"
    {
  ConfigChannel.disable_local_channels = yylval.number;
;}
    break;

  case 733:
#line 4056 "ircd_parser.y"
    {
  ConfigChannel.use_except = yylval.number;
;}
    break;

  case 734:
#line 4061 "ircd_parser.y"
    {
  ConfigChannel.use_invex = yylval.number;
;}
    break;

  case 735:
#line 4066 "ircd_parser.y"
    {
  ConfigChannel.regex_bans = yylval.number;
;}
    break;

  case 736:
#line 4071 "ircd_parser.y"
    {
  ConfigChannel.use_knock = yylval.number;
;}
    break;

  case 737:
#line 4076 "ircd_parser.y"
    {
  ConfigChannel.knock_delay = (yyvsp[(3) - (4)].number);
;}
    break;

  case 738:
#line 4081 "ircd_parser.y"
    {
  ConfigChannel.knock_delay_channel = (yyvsp[(3) - (4)].number);
;}
    break;

  case 739:
#line 4086 "ircd_parser.y"
    {
  ConfigChannel.max_chans_per_user = (yyvsp[(3) - (4)].number);
;}
    break;

  case 740:
#line 4091 "ircd_parser.y"
    {
  ConfigChannel.quiet_on_ban = yylval.number;
;}
    break;

  case 741:
#line 4096 "ircd_parser.y"
    {
  ConfigChannel.max_bans = (yyvsp[(3) - (4)].number);
;}
    break;

  case 742:
#line 4101 "ircd_parser.y"
    {
  ConfigChannel.default_split_user_count = (yyvsp[(3) - (4)].number);
;}
    break;

  case 743:
#line 4106 "ircd_parser.y"
    {
  ConfigChannel.default_split_server_count = (yyvsp[(3) - (4)].number);
;}
    break;

  case 744:
#line 4111 "ircd_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
;}
    break;

  case 745:
#line 4116 "ircd_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
;}
    break;

  case 746:
#line 4121 "ircd_parser.y"
    {
  ConfigChannel.burst_topicwho = yylval.number;
;}
    break;

  case 747:
#line 4126 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
;}
    break;

  case 748:
#line 4131 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
;}
    break;

  case 760:
#line 4150 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
;}
    break;

  case 761:
#line 4156 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
;}
    break;

  case 762:
#line 4162 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
;}
    break;

  case 763:
#line 4171 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (((yyvsp[(3) - (4)].number) > 0) && ConfigServerHide.links_disabled == 1)
    {
      eventAddIsh("write_links_file", write_links_file, NULL, (yyvsp[(3) - (4)].number));
      ConfigServerHide.links_disabled = 0;
    }

    ConfigServerHide.links_delay = (yyvsp[(3) - (4)].number);
  }
;}
    break;

  case 764:
#line 4185 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
;}
    break;

  case 765:
#line 4191 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
;}
    break;

  case 766:
#line 4197 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
;}
    break;


/* Line 1267 of yacc.c.  */
#line 8117 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
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
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



