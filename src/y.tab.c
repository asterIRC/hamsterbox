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
     IS_WEBIRC = 384,
     NETWORK_DESC = 385,
     NETWORK_NAME = 386,
     NICK = 387,
     NICK_CHANGES = 388,
     NO_CREATE_ON_SPLIT = 389,
     NO_JOIN_ON_SPLIT = 390,
     NO_OPER_FLOOD = 391,
     NO_TILDE = 392,
     NOT = 393,
     NUMBER = 394,
     NUMBER_PER_IDENT = 395,
     NUMBER_PER_CIDR = 396,
     NUMBER_PER_IP = 397,
     NUMBER_PER_IP_GLOBAL = 398,
     OPERATOR = 399,
     OPERS_BYPASS_CALLERID = 400,
     OPER_LOG = 401,
     OPER_ONLY_UMODES = 402,
     OPER_PASS_RESV = 403,
     OPER_SPY_T = 404,
     OPER_UMODES = 405,
     JOIN_FLOOD_COUNT = 406,
     JOIN_FLOOD_TIME = 407,
     PACE_WAIT = 408,
     PACE_WAIT_SIMPLE = 409,
     PASSWORD = 410,
     PATH = 411,
     PING_COOKIE = 412,
     PING_TIME = 413,
     PING_WARNING = 414,
     PORT = 415,
     QSTRING = 416,
     QUIET_ON_BAN = 417,
     REASON = 418,
     REDIRPORT = 419,
     REDIRSERV = 420,
     REGEX_T = 421,
     REHASH = 422,
     TREJECT_HOLD_TIME = 423,
     REMOTE = 424,
     REMOTEBAN = 425,
     RESTRICT_CHANNELS = 426,
     RESTRICTED = 427,
     RSA_PRIVATE_KEY_FILE = 428,
     RSA_PUBLIC_KEY_FILE = 429,
     SSL_CERTIFICATE_FILE = 430,
     RESV = 431,
     RESV_EXEMPT = 432,
     SECONDS = 433,
     MINUTES = 434,
     HOURS = 435,
     DAYS = 436,
     WEEKS = 437,
     SENDQ = 438,
     SEND_PASSWORD = 439,
     SERVERHIDE = 440,
     SERVERINFO = 441,
     SERVICES = 442,
     SERVICES_NAME = 443,
     SERVLINK_PATH = 444,
     IRCD_SID = 445,
     TKLINE_EXPIRE_NOTICES = 446,
     T_SHARED = 447,
     T_CLUSTER = 448,
     TYPE = 449,
     SHORT_MOTD = 450,
     SILENT = 451,
     SPOOF = 452,
     SPOOF_NOTICE = 453,
     STATS_E_DISABLED = 454,
     STATS_I_OPER_ONLY = 455,
     STATS_K_OPER_ONLY = 456,
     STATS_O_OPER_ONLY = 457,
     STATS_P_OPER_ONLY = 458,
     TBOOL = 459,
     TMASKED = 460,
     T_REJECT = 461,
     TS_MAX_DELTA = 462,
     TS_WARN_DELTA = 463,
     TWODOTS = 464,
     T_ALL = 465,
     T_BOTS = 466,
     T_SOFTCALLERID = 467,
     T_CALLERID = 468,
     T_CCONN = 469,
     T_CCONN_FULL = 470,
     T_CLIENT_FLOOD = 471,
     T_DEAF = 472,
     T_DEBUG = 473,
     T_DRONE = 474,
     T_EXTERNAL = 475,
     T_FULL = 476,
     T_HIDECHANNELS = 477,
     T_INVISIBLE = 478,
     T_IPV4 = 479,
     T_IPV6 = 480,
     T_LOCOPS = 481,
     T_LOGPATH = 482,
     T_L_CRIT = 483,
     T_L_DEBUG = 484,
     T_L_ERROR = 485,
     T_L_INFO = 486,
     T_L_NOTICE = 487,
     T_L_TRACE = 488,
     T_L_WARN = 489,
     T_MAX_CLIENTS = 490,
     T_NCHANGE = 491,
     T_OPERWALL = 492,
     T_REJ = 493,
     T_SERVNOTICE = 494,
     T_SKILL = 495,
     T_SPY = 496,
     T_SSL = 497,
     T_UMODES = 498,
     T_UNAUTH = 499,
     T_UNRESV = 500,
     T_UNXLINE = 501,
     T_WALLOP = 502,
     THROTTLE_TIME = 503,
     TOPICBURST = 504,
     TRUE_NO_OPER_FLOOD = 505,
     TKLINE = 506,
     TXLINE = 507,
     TRESV = 508,
     UNKLINE = 509,
     USER = 510,
     USE_EGD = 511,
     USE_EXCEPT = 512,
     USE_INVEX = 513,
     HIDE_KILLER = 514,
     USE_REGEX_BANS = 515,
     USE_KNOCK = 516,
     USE_LOGGING = 517,
     USE_WHOIS_ACTUALLY = 518,
     VHOST = 519,
     VHOST6 = 520,
     XLINE = 521,
     WARN = 522,
     WARN_NO_NLINE = 523
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
#define IS_WEBIRC 384
#define NETWORK_DESC 385
#define NETWORK_NAME 386
#define NICK 387
#define NICK_CHANGES 388
#define NO_CREATE_ON_SPLIT 389
#define NO_JOIN_ON_SPLIT 390
#define NO_OPER_FLOOD 391
#define NO_TILDE 392
#define NOT 393
#define NUMBER 394
#define NUMBER_PER_IDENT 395
#define NUMBER_PER_CIDR 396
#define NUMBER_PER_IP 397
#define NUMBER_PER_IP_GLOBAL 398
#define OPERATOR 399
#define OPERS_BYPASS_CALLERID 400
#define OPER_LOG 401
#define OPER_ONLY_UMODES 402
#define OPER_PASS_RESV 403
#define OPER_SPY_T 404
#define OPER_UMODES 405
#define JOIN_FLOOD_COUNT 406
#define JOIN_FLOOD_TIME 407
#define PACE_WAIT 408
#define PACE_WAIT_SIMPLE 409
#define PASSWORD 410
#define PATH 411
#define PING_COOKIE 412
#define PING_TIME 413
#define PING_WARNING 414
#define PORT 415
#define QSTRING 416
#define QUIET_ON_BAN 417
#define REASON 418
#define REDIRPORT 419
#define REDIRSERV 420
#define REGEX_T 421
#define REHASH 422
#define TREJECT_HOLD_TIME 423
#define REMOTE 424
#define REMOTEBAN 425
#define RESTRICT_CHANNELS 426
#define RESTRICTED 427
#define RSA_PRIVATE_KEY_FILE 428
#define RSA_PUBLIC_KEY_FILE 429
#define SSL_CERTIFICATE_FILE 430
#define RESV 431
#define RESV_EXEMPT 432
#define SECONDS 433
#define MINUTES 434
#define HOURS 435
#define DAYS 436
#define WEEKS 437
#define SENDQ 438
#define SEND_PASSWORD 439
#define SERVERHIDE 440
#define SERVERINFO 441
#define SERVICES 442
#define SERVICES_NAME 443
#define SERVLINK_PATH 444
#define IRCD_SID 445
#define TKLINE_EXPIRE_NOTICES 446
#define T_SHARED 447
#define T_CLUSTER 448
#define TYPE 449
#define SHORT_MOTD 450
#define SILENT 451
#define SPOOF 452
#define SPOOF_NOTICE 453
#define STATS_E_DISABLED 454
#define STATS_I_OPER_ONLY 455
#define STATS_K_OPER_ONLY 456
#define STATS_O_OPER_ONLY 457
#define STATS_P_OPER_ONLY 458
#define TBOOL 459
#define TMASKED 460
#define T_REJECT 461
#define TS_MAX_DELTA 462
#define TS_WARN_DELTA 463
#define TWODOTS 464
#define T_ALL 465
#define T_BOTS 466
#define T_SOFTCALLERID 467
#define T_CALLERID 468
#define T_CCONN 469
#define T_CCONN_FULL 470
#define T_CLIENT_FLOOD 471
#define T_DEAF 472
#define T_DEBUG 473
#define T_DRONE 474
#define T_EXTERNAL 475
#define T_FULL 476
#define T_HIDECHANNELS 477
#define T_INVISIBLE 478
#define T_IPV4 479
#define T_IPV6 480
#define T_LOCOPS 481
#define T_LOGPATH 482
#define T_L_CRIT 483
#define T_L_DEBUG 484
#define T_L_ERROR 485
#define T_L_INFO 486
#define T_L_NOTICE 487
#define T_L_TRACE 488
#define T_L_WARN 489
#define T_MAX_CLIENTS 490
#define T_NCHANGE 491
#define T_OPERWALL 492
#define T_REJ 493
#define T_SERVNOTICE 494
#define T_SKILL 495
#define T_SPY 496
#define T_SSL 497
#define T_UMODES 498
#define T_UNAUTH 499
#define T_UNRESV 500
#define T_UNXLINE 501
#define T_WALLOP 502
#define THROTTLE_TIME 503
#define TOPICBURST 504
#define TRUE_NO_OPER_FLOOD 505
#define TKLINE 506
#define TXLINE 507
#define TRESV 508
#define UNKLINE 509
#define USER 510
#define USE_EGD 511
#define USE_EXCEPT 512
#define USE_INVEX 513
#define HIDE_KILLER 514
#define USE_REGEX_BANS 515
#define USE_KNOCK 516
#define USE_LOGGING 517
#define USE_WHOIS_ACTUALLY 518
#define VHOST 519
#define VHOST6 520
#define XLINE 521
#define WARN 522
#define WARN_NO_NLINE 523




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
#line 133 "ircd_parser.y"
{
  int number;
  char *string;
}
/* Line 187 of yacc.c.  */
#line 745 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 758 "y.tab.c"

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
#define YYLAST   1467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  274
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  351
/* YYNRULES -- Number of rules.  */
#define YYNRULES  760
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1534

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   523

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   273,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   269,
       2,   272,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   271,     2,   270,     2,     2,     2,     2,
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
     265,   266,   267,   268
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
     428,   430,   432,   434,   436,   438,   440,   442,   445,   450,
     452,   457,   462,   467,   472,   477,   478,   484,   488,   490,
     492,   494,   496,   498,   500,   502,   504,   506,   508,   510,
     512,   514,   516,   518,   520,   522,   524,   526,   528,   530,
     535,   540,   545,   550,   555,   560,   565,   570,   575,   580,
     585,   590,   595,   600,   605,   606,   612,   616,   618,   619,
     623,   624,   627,   629,   631,   633,   635,   637,   639,   641,
     643,   645,   647,   649,   651,   653,   655,   657,   659,   660,
     668,   669,   671,   674,   676,   678,   680,   682,   684,   686,
     688,   690,   692,   694,   696,   698,   700,   702,   705,   710,
     712,   717,   722,   727,   732,   737,   742,   747,   752,   757,
     762,   767,   772,   773,   780,   781,   787,   791,   793,   795,
     797,   800,   802,   804,   806,   808,   810,   813,   814,   820,
     824,   826,   828,   832,   837,   842,   843,   850,   853,   855,
     857,   859,   861,   863,   865,   867,   869,   871,   873,   875,
     877,   879,   881,   883,   885,   887,   889,   892,   897,   902,
     907,   912,   917,   918,   924,   928,   930,   931,   935,   936,
     939,   941,   943,   945,   947,   949,   951,   953,   955,   957,
     959,   961,   966,   971,   976,   981,   986,   991,   996,  1001,
    1006,  1011,  1016,  1017,  1024,  1027,  1029,  1031,  1033,  1035,
    1038,  1043,  1048,  1053,  1054,  1061,  1064,  1066,  1068,  1070,
    1072,  1075,  1080,  1085,  1086,  1092,  1096,  1098,  1100,  1102,
    1104,  1106,  1108,  1110,  1112,  1114,  1116,  1118,  1120,  1122,
    1124,  1125,  1132,  1135,  1137,  1139,  1141,  1144,  1149,  1150,
    1156,  1160,  1162,  1164,  1166,  1168,  1170,  1172,  1174,  1176,
    1178,  1180,  1182,  1184,  1185,  1193,  1194,  1196,  1199,  1201,
    1203,  1205,  1207,  1209,  1211,  1213,  1215,  1217,  1219,  1221,
    1223,  1225,  1227,  1229,  1231,  1233,  1235,  1237,  1239,  1242,
    1247,  1249,  1254,  1259,  1264,  1269,  1274,  1279,  1284,  1289,
    1290,  1296,  1300,  1302,  1303,  1307,  1308,  1311,  1313,  1315,
    1317,  1319,  1321,  1323,  1328,  1333,  1338,  1343,  1348,  1353,
    1358,  1363,  1368,  1373,  1374,  1381,  1382,  1388,  1392,  1394,
    1396,  1399,  1401,  1403,  1405,  1407,  1409,  1414,  1419,  1420,
    1427,  1430,  1432,  1434,  1436,  1438,  1443,  1448,  1454,  1457,
    1459,  1461,  1463,  1468,  1469,  1476,  1477,  1483,  1487,  1489,
    1491,  1494,  1496,  1498,  1500,  1502,  1504,  1509,  1514,  1520,
    1523,  1525,  1527,  1529,  1531,  1533,  1535,  1537,  1539,  1541,
    1543,  1545,  1547,  1549,  1551,  1553,  1555,  1557,  1559,  1561,
    1563,  1565,  1567,  1569,  1571,  1573,  1575,  1577,  1579,  1581,
    1583,  1585,  1587,  1589,  1591,  1593,  1595,  1597,  1599,  1601,
    1603,  1605,  1607,  1609,  1611,  1613,  1615,  1617,  1619,  1621,
    1623,  1625,  1627,  1629,  1631,  1633,  1635,  1637,  1639,  1641,
    1643,  1645,  1647,  1649,  1654,  1659,  1664,  1669,  1674,  1679,
    1684,  1689,  1694,  1699,  1704,  1709,  1714,  1719,  1724,  1729,
    1734,  1739,  1744,  1749,  1754,  1759,  1764,  1769,  1774,  1779,
    1784,  1789,  1794,  1799,  1804,  1809,  1814,  1819,  1824,  1829,
    1834,  1839,  1844,  1849,  1854,  1859,  1864,  1869,  1874,  1879,
    1884,  1889,  1894,  1899,  1904,  1909,  1914,  1919,  1924,  1929,
    1930,  1936,  1940,  1942,  1944,  1946,  1948,  1950,  1952,  1954,
    1956,  1958,  1960,  1962,  1964,  1966,  1968,  1970,  1972,  1974,
    1976,  1978,  1980,  1982,  1983,  1989,  1993,  1995,  1997,  1999,
    2001,  2003,  2005,  2007,  2009,  2011,  2013,  2015,  2017,  2019,
    2021,  2023,  2025,  2027,  2029,  2031,  2033,  2035,  2040,  2045,
    2050,  2055,  2060,  2061,  2068,  2071,  2073,  2075,  2077,  2079,
    2081,  2083,  2085,  2087,  2092,  2097,  2098,  2104,  2108,  2110,
    2112,  2114,  2119,  2124,  2125,  2131,  2135,  2137,  2139,  2141,
    2147,  2150,  2152,  2154,  2156,  2158,  2160,  2162,  2164,  2166,
    2168,  2170,  2172,  2174,  2176,  2178,  2180,  2182,  2184,  2186,
    2188,  2190,  2192,  2194,  2199,  2204,  2209,  2214,  2219,  2224,
    2229,  2234,  2239,  2244,  2249,  2254,  2259,  2264,  2269,  2274,
    2279,  2284,  2289,  2294,  2300,  2303,  2305,  2307,  2309,  2311,
    2313,  2315,  2317,  2319,  2321,  2326,  2331,  2336,  2341,  2346,
    2351
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     275,     0,    -1,    -1,   275,   276,    -1,   300,    -1,   306,
      -1,   321,    -1,   592,    -1,   359,    -1,   378,    -1,   392,
      -1,   286,    -1,   615,    -1,   419,    -1,   426,    -1,   436,
      -1,   445,    -1,   476,    -1,   486,    -1,   492,    -1,   506,
      -1,   576,    -1,   496,    -1,   281,    -1,     1,   269,    -1,
       1,   270,    -1,    -1,   278,    -1,   139,   277,    -1,   139,
     178,   277,    -1,   139,   179,   277,    -1,   139,   180,   277,
      -1,   139,   181,   277,    -1,   139,   182,   277,    -1,    -1,
     280,    -1,   139,   279,    -1,   139,    15,   279,    -1,   139,
      16,   279,    -1,   139,    17,   279,    -1,   126,   271,   282,
     270,   269,    -1,   282,   283,    -1,   283,    -1,   284,    -1,
     285,    -1,     1,   269,    -1,   125,   272,   161,   269,    -1,
     156,   272,   161,   269,    -1,   186,   271,   287,   270,   269,
      -1,   287,   288,    -1,   288,    -1,   291,    -1,   296,    -1,
     299,    -1,   293,    -1,   294,    -1,   295,    -1,   298,    -1,
     290,    -1,   297,    -1,   292,    -1,   289,    -1,     1,   269,
      -1,   175,   272,   161,   269,    -1,   173,   272,   161,   269,
      -1,   127,   272,   161,   269,    -1,   190,   272,   161,   269,
      -1,    42,   272,   161,   269,    -1,   131,   272,   161,   269,
      -1,   130,   272,   161,   269,    -1,   264,   272,   161,   269,
      -1,   265,   272,   161,   269,    -1,   235,   272,   139,   269,
      -1,    91,   272,   204,   269,    -1,     5,   271,   301,   270,
     269,    -1,   301,   302,    -1,   302,    -1,   303,    -1,   305,
      -1,   304,    -1,     1,   269,    -1,   127,   272,   161,   269,
      -1,    53,   272,   161,   269,    -1,    42,   272,   161,   269,
      -1,   110,   271,   307,   270,   269,    -1,   307,   308,    -1,
     308,    -1,   309,    -1,   310,    -1,   319,    -1,   320,    -1,
     311,    -1,   313,    -1,   315,    -1,   316,    -1,   318,    -1,
     314,    -1,   317,    -1,   312,    -1,     1,   269,    -1,   227,
     272,   161,   269,    -1,   146,   272,   161,   269,    -1,    69,
     272,   161,   269,    -1,    62,   272,   161,   269,    -1,    67,
     272,   161,   269,    -1,    68,   272,   161,   269,    -1,    65,
     272,   161,   269,    -1,    64,   272,   161,   269,    -1,    66,
     272,   161,   269,    -1,    63,   272,   161,   269,    -1,   111,
     272,   228,   269,    -1,   111,   272,   230,   269,    -1,   111,
     272,   234,   269,    -1,   111,   272,   232,   269,    -1,   111,
     272,   233,   269,    -1,   111,   272,   231,   269,    -1,   111,
     272,   229,   269,    -1,   262,   272,   204,   269,    -1,    -1,
     144,   322,   323,   271,   324,   270,   269,    -1,    -1,   327,
      -1,   324,   325,    -1,   325,    -1,   326,    -1,   328,    -1,
     329,    -1,   348,    -1,   349,    -1,   333,    -1,   332,    -1,
     337,    -1,   338,    -1,   340,    -1,   341,    -1,   342,    -1,
     343,    -1,   344,    -1,   339,    -1,   345,    -1,   346,    -1,
     347,    -1,   351,    -1,   330,    -1,   331,    -1,   350,    -1,
     352,    -1,     1,   269,    -1,   127,   272,   161,   269,    -1,
     161,    -1,   255,   272,   161,   269,    -1,   155,   272,   161,
     269,    -1,    55,   272,   204,   269,    -1,   174,   272,   161,
     269,    -1,    27,   272,   161,   269,    -1,    -1,   243,   334,
     272,   335,   269,    -1,   335,   273,   336,    -1,   336,    -1,
     211,    -1,   214,    -1,   215,    -1,   217,    -1,   218,    -1,
     221,    -1,   240,    -1,   236,    -1,   238,    -1,   244,    -1,
     241,    -1,   220,    -1,   237,    -1,   239,    -1,   223,    -1,
     247,    -1,   212,    -1,   213,    -1,   226,    -1,   222,    -1,
      79,   272,   204,   269,    -1,   169,   272,   204,   269,    -1,
     170,   272,   204,   269,    -1,    99,   272,   204,   269,    -1,
     266,   272,   204,   269,    -1,   254,   272,   204,   269,    -1,
      72,   272,   204,   269,    -1,   133,   272,   204,   269,    -1,
      43,   272,   204,   269,    -1,   167,   272,   204,   269,    -1,
       5,   272,   204,   269,    -1,    84,   272,   204,   269,    -1,
      86,   272,   204,   269,    -1,   149,   272,   204,   269,    -1,
     237,   272,   204,   269,    -1,    -1,    60,   353,   272,   354,
     269,    -1,   354,   273,   355,    -1,   355,    -1,    -1,   138,
     356,   358,    -1,    -1,   357,   358,    -1,    79,    -1,   169,
      -1,    99,    -1,   254,    -1,   266,    -1,    72,    -1,    43,
      -1,   167,    -1,     5,    -1,    84,    -1,   133,    -1,   237,
      -1,   149,    -1,    86,    -1,   170,    -1,    55,    -1,    -1,
      27,   360,   361,   271,   362,   270,   269,    -1,    -1,   365,
      -1,   362,   363,    -1,   363,    -1,   364,    -1,   375,    -1,
     376,    -1,   366,    -1,   367,    -1,   377,    -1,   368,    -1,
     369,    -1,   370,    -1,   371,    -1,   372,    -1,   373,    -1,
     374,    -1,     1,   269,    -1,   127,   272,   161,   269,    -1,
     161,    -1,   158,   272,   278,   269,    -1,   159,   272,   278,
     269,    -1,   142,   272,   139,   269,    -1,    34,   272,   278,
     269,    -1,   120,   272,   139,   269,    -1,   115,   272,   139,
     269,    -1,   117,   272,   139,   269,    -1,   116,   272,   139,
     269,    -1,   183,   272,   280,   269,    -1,    24,   272,   139,
     269,    -1,    25,   272,   139,   269,    -1,   141,   272,   139,
     269,    -1,    -1,   108,   379,   271,   384,   270,   269,    -1,
      -1,    60,   381,   272,   382,   269,    -1,   382,   273,   383,
      -1,   383,    -1,   242,    -1,    83,    -1,   384,   385,    -1,
     385,    -1,   386,    -1,   380,    -1,   390,    -1,   391,    -1,
       1,   269,    -1,    -1,   160,   272,   388,   387,   269,    -1,
     388,   273,   389,    -1,   389,    -1,   139,    -1,   139,   209,
     139,    -1,    96,   272,   161,   269,    -1,    90,   272,   161,
     269,    -1,    -1,    80,   393,   271,   394,   270,   269,    -1,
     394,   395,    -1,   395,    -1,   396,    -1,   397,    -1,   399,
      -1,   401,    -1,   408,    -1,   409,    -1,   410,    -1,   412,
      -1,   413,    -1,   414,    -1,   398,    -1,   417,    -1,   415,
      -1,   416,    -1,   411,    -1,   418,    -1,   400,    -1,     1,
     269,    -1,   255,   272,   161,   269,    -1,   155,   272,   161,
     269,    -1,   198,   272,   204,   269,    -1,    27,   272,   161,
     269,    -1,    55,   272,   204,   269,    -1,    -1,    60,   402,
     272,   403,   269,    -1,   403,   273,   404,    -1,   404,    -1,
      -1,   138,   405,   407,    -1,    -1,   406,   407,    -1,   198,
      -1,    56,    -1,   100,    -1,    81,    -1,    21,    -1,    22,
      -1,   137,    -1,    74,    -1,   177,    -1,   129,    -1,   128,
      -1,   100,   272,   204,   269,    -1,    81,   272,   204,   269,
      -1,    56,   272,   204,   269,    -1,    21,   272,   204,   269,
      -1,   137,   272,   204,   269,    -1,    74,   272,   204,   269,
      -1,   197,   272,   161,   269,    -1,   165,   272,   161,   269,
      -1,   164,   272,   139,   269,    -1,   129,   272,   204,   269,
      -1,   128,   272,   204,   269,    -1,    -1,   176,   420,   271,
     421,   270,   269,    -1,   421,   422,    -1,   422,    -1,   423,
      -1,   424,    -1,   425,    -1,     1,   269,    -1,   163,   272,
     161,   269,    -1,    23,   272,   161,   269,    -1,   132,   272,
     161,   269,    -1,    -1,   192,   427,   271,   428,   270,   269,
      -1,   428,   429,    -1,   429,    -1,   430,    -1,   431,    -1,
     432,    -1,     1,   269,    -1,   127,   272,   161,   269,    -1,
     255,   272,   161,   269,    -1,    -1,   194,   433,   272,   434,
     269,    -1,   434,   273,   435,    -1,   435,    -1,    99,    -1,
     251,    -1,   254,    -1,   266,    -1,   252,    -1,   246,    -1,
     176,    -1,   253,    -1,   245,    -1,   226,    -1,   187,    -1,
     167,    -1,   210,    -1,    -1,   193,   437,   271,   438,   270,
     269,    -1,   438,   439,    -1,   439,    -1,   440,    -1,   441,
      -1,     1,   269,    -1,   127,   272,   161,   269,    -1,    -1,
     194,   442,   272,   443,   269,    -1,   443,   273,   444,    -1,
     444,    -1,    99,    -1,   251,    -1,   254,    -1,   266,    -1,
     252,    -1,   246,    -1,   176,    -1,   253,    -1,   245,    -1,
     226,    -1,   210,    -1,    -1,    33,   446,   447,   271,   448,
     270,   269,    -1,    -1,   451,    -1,   448,   449,    -1,   449,
      -1,   450,    -1,   452,    -1,   453,    -1,   454,    -1,   455,
      -1,   457,    -1,   456,    -1,   458,    -1,   459,    -1,   472,
      -1,   473,    -1,   474,    -1,   470,    -1,   467,    -1,   469,
      -1,   468,    -1,   466,    -1,   475,    -1,   471,    -1,     1,
     269,    -1,   127,   272,   161,   269,    -1,   161,    -1,    90,
     272,   161,   269,    -1,   264,   272,   161,   269,    -1,   184,
     272,   161,   269,    -1,     3,   272,   161,   269,    -1,   160,
     272,   139,   269,    -1,     6,   272,   224,   269,    -1,     6,
     272,   225,   269,    -1,    59,   272,   161,   269,    -1,    -1,
      60,   460,   272,   461,   269,    -1,   461,   273,   462,    -1,
     462,    -1,    -1,   138,   463,   465,    -1,    -1,   464,   465,
      -1,   105,    -1,    31,    -1,    35,    -1,    11,    -1,    13,
      -1,   249,    -1,   174,   272,   161,   269,    -1,    55,   272,
     204,   269,    -1,    35,   272,   204,   269,    -1,    31,   272,
     204,   269,    -1,    11,   272,   204,   269,    -1,   249,   272,
     204,   269,    -1,    92,   272,   161,   269,    -1,   106,   272,
     161,   269,    -1,    27,   272,   161,   269,    -1,    26,   272,
     161,   269,    -1,    -1,    97,   477,   271,   482,   270,   269,
      -1,    -1,   194,   479,   272,   480,   269,    -1,   480,   273,
     481,    -1,   481,    -1,   166,    -1,   482,   483,    -1,   483,
      -1,   484,    -1,   485,    -1,   478,    -1,     1,    -1,   255,
     272,   161,   269,    -1,   163,   272,   161,   269,    -1,    -1,
      41,   487,   271,   488,   270,   269,    -1,   488,   489,    -1,
     489,    -1,   490,    -1,   491,    -1,     1,    -1,    96,   272,
     161,   269,    -1,   163,   272,   161,   269,    -1,    57,   271,
     493,   270,   269,    -1,   493,   494,    -1,   494,    -1,   495,
      -1,     1,    -1,    96,   272,   161,   269,    -1,    -1,    70,
     497,   271,   502,   270,   269,    -1,    -1,   194,   499,   272,
     500,   269,    -1,   500,   273,   501,    -1,   501,    -1,   166,
      -1,   502,   503,    -1,   503,    -1,   504,    -1,   505,    -1,
     498,    -1,     1,    -1,   127,   272,   161,   269,    -1,   163,
     272,   161,   269,    -1,    71,   271,   507,   270,   269,    -1,
     507,   508,    -1,   508,    -1,   516,    -1,   517,    -1,   519,
      -1,   520,    -1,   521,    -1,   522,    -1,   523,    -1,   524,
      -1,   525,    -1,   526,    -1,   527,    -1,   515,    -1,   529,
      -1,   530,    -1,   535,    -1,   536,    -1,   553,    -1,   538,
      -1,   541,    -1,   543,    -1,   542,    -1,   546,    -1,   539,
      -1,   547,    -1,   548,    -1,   549,    -1,   550,    -1,   552,
      -1,   551,    -1,   567,    -1,   554,    -1,   558,    -1,   559,
      -1,   563,    -1,   544,    -1,   545,    -1,   573,    -1,   571,
      -1,   572,    -1,   555,    -1,   518,    -1,   556,    -1,   537,
      -1,   557,    -1,   574,    -1,   562,    -1,   528,    -1,   575,
      -1,   560,    -1,   561,    -1,   511,    -1,   514,    -1,   509,
      -1,   510,    -1,   512,    -1,   513,    -1,   540,    -1,   531,
      -1,   532,    -1,   533,    -1,   534,    -1,     1,    -1,    77,
     272,   139,   269,    -1,    78,   272,   139,   269,    -1,    13,
     272,   204,   269,    -1,   263,   272,   204,   269,    -1,   168,
     272,   278,   269,    -1,   191,   272,   204,   269,    -1,    98,
     272,   139,   269,    -1,    89,   272,   204,   269,    -1,    94,
     272,   204,   269,    -1,    48,   272,   204,   269,    -1,    58,
     272,   204,   269,    -1,     8,   272,   204,   269,    -1,   119,
     272,   278,   269,    -1,   118,   272,   139,   269,    -1,   112,
     272,   139,   269,    -1,     9,   272,   278,   269,    -1,    10,
     272,   204,   269,    -1,   208,   272,   278,   269,    -1,   207,
     272,   278,   269,    -1,    82,   272,   139,   269,    -1,   102,
     272,   204,   269,    -1,   101,   272,   161,   269,    -1,    28,
     272,   161,   269,    -1,    29,   272,   161,   269,    -1,    30,
     272,   161,   269,    -1,   188,   272,   161,   269,    -1,    95,
     272,   204,   269,    -1,   268,   272,   204,   269,    -1,   199,
     272,   204,   269,    -1,   202,   272,   204,   269,    -1,   203,
     272,   204,   269,    -1,   259,   272,   204,   269,    -1,   201,
     272,   204,   269,    -1,   201,   272,   205,   269,    -1,   200,
     272,   204,   269,    -1,   200,   272,   205,   269,    -1,   153,
     272,   278,   269,    -1,    20,   272,   278,   269,    -1,   145,
     272,   204,   269,    -1,   154,   272,   278,   269,    -1,   195,
     272,   204,   269,    -1,   136,   272,   204,   269,    -1,   250,
     272,   204,   269,    -1,   148,   272,   204,   269,    -1,   122,
     272,   161,   269,    -1,    93,   272,   278,   269,    -1,    50,
     272,   139,   269,    -1,   121,   272,   139,   269,    -1,   189,
     272,   161,   269,    -1,    37,   272,   161,   269,    -1,    32,
     272,   139,   269,    -1,   256,   272,   204,   269,    -1,    52,
     272,   161,   269,    -1,   157,   272,   204,   269,    -1,    44,
     272,   204,   269,    -1,   248,   272,   278,   269,    -1,    -1,
     150,   564,   272,   565,   269,    -1,   565,   273,   566,    -1,
     566,    -1,   211,    -1,   214,    -1,   215,    -1,   217,    -1,
     218,    -1,   221,    -1,   240,    -1,   236,    -1,   238,    -1,
     244,    -1,   241,    -1,   220,    -1,   237,    -1,   239,    -1,
     223,    -1,   247,    -1,   212,    -1,   213,    -1,   226,    -1,
     222,    -1,    -1,   147,   568,   272,   569,   269,    -1,   569,
     273,   570,    -1,   570,    -1,   211,    -1,   214,    -1,   215,
      -1,   217,    -1,   218,    -1,   221,    -1,   240,    -1,   236,
      -1,   238,    -1,   244,    -1,   241,    -1,   220,    -1,   237,
      -1,   239,    -1,   223,    -1,   247,    -1,   212,    -1,   213,
      -1,   226,    -1,   222,    -1,   123,   272,   139,   269,    -1,
     124,   272,   139,   269,    -1,    38,   272,   139,   269,    -1,
     216,   272,   280,   269,    -1,    49,   272,   204,   269,    -1,
      -1,    73,   577,   271,   578,   270,   269,    -1,   578,   579,
      -1,   579,    -1,   580,    -1,   581,    -1,   582,    -1,   586,
      -1,   587,    -1,   588,    -1,     1,    -1,    54,   272,   204,
     269,    -1,    51,   272,   278,   269,    -1,    -1,   110,   583,
     272,   584,   269,    -1,   584,   273,   585,    -1,   585,    -1,
     206,    -1,    12,    -1,   255,   272,   161,   269,    -1,   127,
     272,   161,   269,    -1,    -1,     4,   589,   272,   590,   269,
      -1,   590,   273,   591,    -1,   591,    -1,   206,    -1,    12,
      -1,    23,   271,   593,   270,   269,    -1,   593,   594,    -1,
     594,    -1,   598,    -1,   599,    -1,   600,    -1,   602,    -1,
     601,    -1,   607,    -1,   603,    -1,   604,    -1,   605,    -1,
     606,    -1,   608,    -1,   609,    -1,   610,    -1,   597,    -1,
     611,    -1,   612,    -1,   613,    -1,   614,    -1,   596,    -1,
     595,    -1,     1,    -1,    36,   272,   204,   269,    -1,    45,
     272,   204,   269,    -1,   171,   272,   204,   269,    -1,    47,
     272,   204,   269,    -1,   257,   272,   204,   269,    -1,   258,
     272,   204,   269,    -1,   260,   272,   204,   269,    -1,   261,
     272,   204,   269,    -1,   103,   272,   278,   269,    -1,   104,
     272,   278,   269,    -1,   114,   272,   139,   269,    -1,   162,
     272,   204,   269,    -1,   113,   272,   139,   269,    -1,    40,
     272,   139,   269,    -1,    39,   272,   139,   269,    -1,   134,
     272,   204,   269,    -1,   135,   272,   204,   269,    -1,    14,
     272,   204,   269,    -1,   151,   272,   139,   269,    -1,   152,
     272,   278,   269,    -1,   185,   271,   616,   270,   269,    -1,
     616,   617,    -1,   617,    -1,   618,    -1,   619,    -1,   621,
      -1,   623,    -1,   622,    -1,   620,    -1,   624,    -1,     1,
      -1,    61,   272,   204,   269,    -1,    88,   272,   204,   269,
      -1,    85,   272,   161,   269,    -1,   107,   272,   278,   269,
      -1,    83,   272,   204,   269,    -1,    46,   272,   204,   269,
      -1,    87,   272,   204,   269,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   405,   405,   406,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   434,   434,   435,   439,
     443,   447,   451,   455,   461,   461,   462,   463,   464,   465,
     472,   475,   475,   476,   476,   476,   478,   495,   506,   509,
     510,   511,   511,   512,   512,   513,   513,   514,   515,   515,
     516,   516,   517,   519,   553,   613,   627,   642,   651,   665,
     674,   702,   732,   755,   805,   807,   807,   808,   808,   809,
     809,   811,   820,   829,   842,   844,   845,   847,   847,   848,
     849,   849,   850,   850,   851,   851,   852,   852,   853,   854,
     856,   860,   864,   871,   878,   885,   892,   899,   906,   913,
     920,   924,   928,   932,   936,   940,   944,   950,   960,   959,
    1053,  1053,  1054,  1054,  1055,  1055,  1055,  1055,  1056,  1056,
    1057,  1057,  1057,  1058,  1058,  1058,  1059,  1059,  1059,  1060,
    1060,  1060,  1060,  1061,  1061,  1061,  1062,  1062,  1064,  1076,
    1088,  1122,  1134,  1145,  1187,  1197,  1196,  1202,  1202,  1203,
    1207,  1211,  1215,  1219,  1223,  1227,  1231,  1235,  1239,  1243,
    1247,  1251,  1255,  1259,  1263,  1267,  1271,  1275,  1279,  1285,
    1296,  1307,  1318,  1329,  1340,  1351,  1362,  1373,  1384,  1395,
    1406,  1417,  1428,  1439,  1451,  1450,  1454,  1454,  1455,  1455,
    1456,  1456,  1458,  1465,  1472,  1479,  1486,  1493,  1500,  1507,
    1514,  1521,  1528,  1535,  1542,  1549,  1556,  1563,  1577,  1576,
    1625,  1625,  1627,  1627,  1628,  1629,  1629,  1630,  1631,  1632,
    1633,  1634,  1635,  1636,  1637,  1638,  1639,  1640,  1642,  1651,
    1660,  1666,  1672,  1678,  1684,  1690,  1696,  1702,  1708,  1714,
    1720,  1726,  1736,  1735,  1752,  1751,  1756,  1756,  1757,  1761,
    1767,  1767,  1768,  1768,  1768,  1768,  1768,  1770,  1770,  1772,
    1772,  1774,  1788,  1808,  1817,  1830,  1829,  1898,  1898,  1899,
    1899,  1899,  1899,  1900,  1900,  1901,  1901,  1901,  1902,  1902,
    1902,  1903,  1903,  1903,  1904,  1904,  1904,  1906,  1943,  1956,
    1967,  1976,  1988,  1987,  1991,  1991,  1992,  1992,  1993,  1993,
    1995,  2003,  2010,  2017,  2024,  2031,  2038,  2045,  2052,  2059,
    2066,  2075,  2086,  2097,  2108,  2119,  2130,  2142,  2161,  2171,
    2180,  2191,  2207,  2206,  2222,  2222,  2223,  2223,  2223,  2223,
    2225,  2234,  2249,  2263,  2262,  2278,  2278,  2279,  2279,  2279,
    2279,  2281,  2290,  2313,  2312,  2318,  2318,  2319,  2323,  2327,
    2331,  2335,  2339,  2343,  2347,  2351,  2355,  2359,  2363,  2367,
    2377,  2376,  2393,  2393,  2394,  2394,  2394,  2396,  2403,  2402,
    2408,  2408,  2409,  2413,  2417,  2421,  2425,  2429,  2433,  2437,
    2441,  2445,  2449,  2459,  2458,  2604,  2604,  2605,  2605,  2606,
    2606,  2606,  2607,  2607,  2608,  2608,  2609,  2609,  2609,  2610,
    2610,  2610,  2611,  2611,  2611,  2612,  2612,  2613,  2613,  2615,
    2627,  2639,  2648,  2674,  2692,  2710,  2716,  2720,  2728,  2738,
    2737,  2741,  2741,  2742,  2742,  2743,  2743,  2745,  2752,  2763,
    2770,  2777,  2784,  2794,  2835,  2846,  2857,  2872,  2883,  2894,
    2907,  2920,  2929,  2965,  2964,  3028,  3027,  3031,  3031,  3032,
    3038,  3038,  3039,  3039,  3039,  3039,  3041,  3060,  3070,  3069,
    3091,  3091,  3092,  3092,  3092,  3094,  3103,  3115,  3117,  3117,
    3118,  3118,  3120,  3142,  3141,  3183,  3182,  3186,  3186,  3187,
    3193,  3193,  3194,  3194,  3194,  3194,  3196,  3202,  3211,  3214,
    3214,  3215,  3215,  3216,  3216,  3217,  3217,  3218,  3218,  3219,
    3220,  3220,  3221,  3221,  3222,  3222,  3223,  3223,  3224,  3224,
    3225,  3225,  3226,  3226,  3227,  3227,  3228,  3228,  3229,  3229,
    3230,  3230,  3231,  3231,  3232,  3232,  3233,  3233,  3234,  3234,
    3235,  3235,  3236,  3236,  3237,  3237,  3238,  3238,  3239,  3239,
    3240,  3240,  3241,  3241,  3242,  3242,  3243,  3243,  3244,  3244,
    3244,  3245,  3246,  3250,  3255,  3260,  3265,  3270,  3275,  3280,
    3285,  3290,  3295,  3300,  3305,  3310,  3315,  3320,  3325,  3330,
    3335,  3340,  3346,  3357,  3362,  3371,  3380,  3389,  3398,  3407,
    3412,  3417,  3422,  3427,  3432,  3437,  3440,  3445,  3448,  3453,
    3458,  3463,  3468,  3473,  3478,  3483,  3488,  3493,  3504,  3509,
    3514,  3519,  3528,  3560,  3578,  3583,  3592,  3597,  3602,  3608,
    3607,  3612,  3612,  3613,  3616,  3619,  3622,  3625,  3628,  3631,
    3634,  3637,  3640,  3643,  3646,  3649,  3652,  3655,  3658,  3661,
    3664,  3667,  3670,  3676,  3675,  3680,  3680,  3681,  3684,  3687,
    3690,  3693,  3696,  3699,  3702,  3705,  3708,  3711,  3714,  3717,
    3720,  3723,  3726,  3729,  3732,  3735,  3738,  3743,  3748,  3753,
    3758,  3763,  3772,  3771,  3795,  3795,  3796,  3797,  3798,  3799,
    3800,  3801,  3802,  3804,  3810,  3817,  3816,  3821,  3821,  3822,
    3826,  3832,  3866,  3876,  3875,  3925,  3925,  3926,  3930,  3939,
    3942,  3942,  3943,  3943,  3944,  3944,  3944,  3945,  3945,  3946,
    3946,  3947,  3947,  3948,  3949,  3949,  3950,  3950,  3951,  3951,
    3952,  3953,  3953,  3955,  3960,  3965,  3970,  3975,  3980,  3985,
    3990,  3995,  4000,  4005,  4010,  4015,  4020,  4025,  4030,  4035,
    4040,  4045,  4050,  4058,  4061,  4061,  4062,  4062,  4063,  4064,
    4065,  4065,  4066,  4067,  4069,  4075,  4081,  4090,  4104,  4110,
    4116
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
  "oper_user", "oper_password", "oper_encrypted",
  "oper_rsa_public_key_file", "oper_class", "oper_umodes", "@2",
  "oper_umodes_items", "oper_umodes_item", "oper_global_kill",
  "oper_remote", "oper_remoteban", "oper_kline", "oper_xline",
  "oper_unkline", "oper_gline", "oper_nick_changes", "oper_die",
  "oper_rehash", "oper_admin", "oper_hidden_admin", "oper_hidden_oper",
  "oper_spy", "oper_operwall", "oper_flags", "@3", "oper_flags_items",
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
  "auth_redir_serv", "auth_redir_port", "auth_webirc",
  "auth_need_password", "resv_entry", "@14", "resv_items", "resv_item",
  "resv_creason", "resv_channel", "resv_nick", "shared_entry", "@15",
  "shared_items", "shared_item", "shared_name", "shared_user",
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
  "gecos_entry", "@26", "gecos_flags", "@27", "gecos_flags_items",
  "gecos_flags_item", "gecos_items", "gecos_item", "gecos_name",
  "gecos_reason", "general_entry", "general_items", "general_item",
  "general_gline_min_cidr", "general_gline_min_cidr6",
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
     515,   516,   517,   518,   519,   520,   521,   522,   523,    59,
     125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   274,   275,   275,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   277,   277,   278,   278,
     278,   278,   278,   278,   279,   279,   280,   280,   280,   280,
     281,   282,   282,   283,   283,   283,   284,   285,   286,   287,
     287,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   301,   302,   302,   302,
     302,   303,   304,   305,   306,   307,   307,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   319,   319,   319,   319,   319,   319,   320,   322,   321,
     323,   323,   324,   324,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   326,   327,
     328,   329,   330,   331,   332,   334,   333,   335,   335,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   353,   352,   354,   354,   356,   355,
     357,   355,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   360,   359,
     361,   361,   362,   362,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   379,   378,   381,   380,   382,   382,   383,   383,
     384,   384,   385,   385,   385,   385,   385,   387,   386,   388,
     388,   389,   389,   390,   391,   393,   392,   394,   394,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   396,   397,   398,
     399,   400,   402,   401,   403,   403,   405,   404,   406,   404,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   407,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   420,   419,   421,   421,   422,   422,   422,   422,
     423,   424,   425,   427,   426,   428,   428,   429,   429,   429,
     429,   430,   431,   433,   432,   434,   434,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     437,   436,   438,   438,   439,   439,   439,   440,   442,   441,
     443,   443,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   446,   445,   447,   447,   448,   448,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   457,   458,   460,
     459,   461,   461,   463,   462,   464,   462,   465,   465,   465,
     465,   465,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   477,   476,   479,   478,   480,   480,   481,
     482,   482,   483,   483,   483,   483,   484,   485,   487,   486,
     488,   488,   489,   489,   489,   490,   491,   492,   493,   493,
     494,   494,   495,   497,   496,   499,   498,   500,   500,   501,
     502,   502,   503,   503,   503,   503,   504,   505,   506,   507,
     507,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   541,   542,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   555,   556,   557,   558,   559,   560,   561,   562,   564,
     563,   565,   565,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   568,   567,   569,   569,   570,   570,   570,
     570,   570,   570,   570,   570,   570,   570,   570,   570,   570,
     570,   570,   570,   570,   570,   570,   570,   571,   572,   573,
     574,   575,   577,   576,   578,   578,   579,   579,   579,   579,
     579,   579,   579,   580,   581,   583,   582,   584,   584,   585,
     585,   586,   587,   589,   588,   590,   590,   591,   591,   592,
     593,   593,   594,   594,   594,   594,   594,   594,   594,   594,
     594,   594,   594,   594,   594,   594,   594,   594,   594,   594,
     594,   594,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   616,   617,   617,   617,   617,
     617,   617,   617,   617,   618,   619,   620,   621,   622,   623,
     624
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
       1,     1,     1,     1,     1,     1,     1,     2,     4,     1,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     5,     3,     1,     0,     3,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     7,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     6,     0,     5,     3,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     2,     0,     5,     3,
       1,     1,     3,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     4,
       4,     4,     0,     5,     3,     1,     0,     3,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     2,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       2,     4,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     6,     2,     1,     1,     1,     2,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     7,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     0,     3,     0,     2,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     6,     0,     5,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     4,     4,     5,     2,     1,
       1,     1,     4,     0,     6,     0,     5,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     0,     5,     3,     1,     1,
       1,     4,     4,     0,     5,     3,     1,     1,     1,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   218,   393,   468,     0,
     483,     0,   672,   275,   453,   252,     0,     0,   118,   332,
       0,     0,   343,   370,     3,    23,    11,     4,     5,     6,
       8,     9,    10,    13,    14,    15,    16,    17,    18,    19,
      22,    20,    21,     7,    12,    24,    25,     0,     0,   220,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,    77,    79,    78,   722,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   701,   721,
     720,   715,   702,   703,   704,   706,   705,   708,   709,   710,
     711,   707,   712,   713,   714,   716,   717,   718,   719,   239,
       0,   221,   420,     0,   396,     0,   481,     0,     0,   479,
     480,     0,   562,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   643,
       0,   619,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   500,   553,   554,   551,   555,
     556,   552,   512,   501,   502,   541,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   547,   513,   514,   558,   559,
     560,   561,   515,   516,   543,   518,   523,   557,   519,   521,
     520,   535,   536,   522,   524,   525,   526,   527,   529,   528,
     517,   531,   540,   542,   544,   532,   533,   549,   550,   546,
     534,   530,   538,   539,   537,   545,   548,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    91,    98,
      92,    96,    93,    94,    97,    95,    89,    90,     0,     0,
       0,     0,    42,    43,    44,   149,     0,   121,     0,   753,
       0,     0,     0,     0,     0,     0,     0,     0,   745,   746,
     747,   751,   748,   750,   749,   752,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      61,    58,    51,    60,    54,    55,    56,    52,    59,    57,
      53,     0,     0,    80,     0,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     700,     0,     0,   474,     0,     0,     0,   471,   472,   473,
       0,     0,   478,   495,     0,     0,   485,   494,     0,   491,
     492,   493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   499,   682,   693,     0,     0,   685,
       0,     0,     0,   675,   676,   677,   678,   679,   680,   681,
       0,     0,     0,     0,     0,   302,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   278,
     279,   280,   289,   281,   295,   282,   283,   284,   285,   293,
     286,   287,   288,   291,   292,   290,   294,   465,     0,   455,
       0,   464,     0,   461,   462,   463,     0,   254,     0,     0,
       0,   263,     0,   261,   262,   264,   265,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,    45,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,   335,   336,   337,   338,     0,     0,     0,
       0,     0,     0,     0,     0,   744,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,   353,     0,     0,   346,   347,   348,   349,     0,
       0,   378,     0,   373,   374,   375,     0,     0,     0,    74,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   699,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,   224,   227,
     228,   230,   231,   232,   233,   234,   235,   236,   225,   226,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   429,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   398,   399,   400,   401,   402,   403,   405,   404,
     406,   407,   415,   412,   414,   413,   411,   417,   408,   409,
     410,   416,     0,     0,     0,   470,     0,   477,     0,     0,
       0,     0,   490,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,   498,     0,     0,
       0,     0,     0,     0,     0,   674,   296,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   277,     0,     0,     0,     0,
     460,   266,     0,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     0,    40,
       0,     0,     0,     0,     0,   194,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,     0,     0,     0,     0,   123,   124,   125,   126,   143,
     144,   130,   129,   131,   132,   138,   133,   134,   135,   136,
     137,   139,   140,   141,   127,   128,   145,   142,   146,   339,
       0,     0,     0,     0,   334,     0,     0,     0,     0,     0,
       0,     0,   743,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,   350,     0,     0,     0,     0,
     345,   376,     0,     0,     0,   372,    83,    82,    81,   740,
     723,   737,   736,   724,   726,    26,    26,    26,    26,    26,
      28,    27,   731,   732,   735,   733,   738,   739,   741,   742,
     734,   725,   727,   728,   729,   730,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   222,   418,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   397,     0,     0,   469,   482,     0,     0,
       0,   484,   574,   578,   579,   565,   600,   585,   586,   587,
     613,   612,   669,   617,   572,   671,   609,   615,   573,   563,
     564,   582,   570,   608,   571,   589,   569,   584,   583,   577,
     576,   575,   610,   607,   667,   668,   604,   601,   647,   663,
     664,   648,   649,   650,   651,   658,   652,   666,   661,   665,
     654,   659,   655,   660,   653,   657,   656,   662,     0,   646,
     606,   623,   639,   640,   624,   625,   626,   627,   634,   628,
     642,   637,   641,   630,   635,   631,   636,   629,   633,   632,
     638,     0,   622,   599,   602,   616,   567,   588,   611,   568,
     603,   591,   597,   598,   595,   596,   592,   593,   581,   580,
      34,    34,    34,    36,    35,   670,   618,   605,   614,   594,
     566,   590,     0,     0,     0,     0,     0,     0,   673,     0,
       0,     0,     0,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   276,     0,     0,     0,
     454,     0,     0,     0,   271,   267,   270,   253,   103,   109,
     107,   106,   108,   104,   105,   102,   110,   116,   111,   115,
     113,   114,   112,   101,   100,   117,    46,    47,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,     0,   333,   759,   754,
     758,   756,   760,   755,   757,    67,    73,    65,    69,    68,
      64,    63,    66,    72,    70,    71,     0,     0,     0,   344,
       0,     0,   371,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   394,   475,   476,   496,   497,   489,     0,   488,
     644,     0,   620,     0,    37,    38,    39,   698,   697,     0,
     696,   684,   683,   690,   689,     0,   688,   692,   691,   324,
     300,   301,   323,   306,     0,   305,     0,   326,   322,   321,
     331,   330,   325,   298,   329,   328,   327,   299,   297,   467,
     459,     0,   458,   466,   259,   258,     0,   257,   274,   273,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   341,   342,   340,
     351,   357,   368,   363,   367,   369,   366,   365,   362,   358,
     361,   364,   359,   360,     0,   356,   352,   377,   382,   388,
     392,   391,   390,   387,   383,   386,   389,   384,   385,     0,
     381,   249,   250,   243,   245,   247,   246,   244,   238,   251,
     242,   240,   241,   248,   424,   426,   427,   447,   452,   451,
     446,   445,   444,   428,   433,     0,   432,     0,   421,   449,
     450,   419,   425,   443,   423,   448,   422,   486,     0,   645,
     621,   694,     0,   686,     0,     0,   303,   308,   314,   315,
     311,   317,   313,   312,   320,   319,   316,   318,   310,   309,
     456,     0,   255,     0,   272,   269,   268,   189,   154,   187,
     152,   198,     0,   197,     0,   185,   179,   190,   191,   182,
     148,   186,   192,   151,   188,   180,   181,   153,   193,   159,
     175,   176,   160,   161,   162,   163,   170,   164,   178,   173,
     177,   166,   171,   167,   172,   165,   169,   168,   174,     0,
     158,   184,   150,   183,   354,     0,   379,     0,     0,   430,
     435,   440,   441,   438,   439,   437,   442,   436,   487,   695,
     687,   307,   304,   457,   256,     0,   195,   200,   210,   208,
     217,   207,   202,   211,   215,   204,   212,   214,   209,   203,
     216,   213,   205,   206,   201,   156,     0,   355,   380,   434,
     431,   199,   196,   157
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    24,   930,   931,  1093,  1094,    25,   291,   292,
     293,   294,    26,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,    27,    71,    72,    73,
      74,    75,    28,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,    29,    61,   296,
     854,   855,   856,   297,   857,   858,   859,   860,   861,   862,
    1178,  1479,  1480,   863,   864,   865,   866,   867,   868,   869,
     870,   871,   872,   873,   874,   875,   876,   877,   878,  1163,
    1442,  1443,  1505,  1444,  1524,    30,    49,   120,   636,   637,
     638,   121,   639,   640,   641,   642,   643,   644,   645,   646,
     647,   648,   649,   650,    31,    58,   521,   802,  1306,  1307,
     522,   523,   524,  1312,  1135,  1136,   525,   526,    32,    56,
     488,   489,   490,   491,   492,   493,   494,   495,   781,  1284,
    1285,  1415,  1286,  1429,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,    33,    62,   552,   553,   554,
     555,   556,    34,    65,   584,   585,   586,   587,   588,   907,
    1354,  1355,    35,    66,   592,   593,   594,   595,   913,  1369,
    1370,    36,    50,   123,   671,   672,   673,   124,   674,   675,
     676,   677,   678,   679,   680,   681,   972,  1395,  1396,  1488,
    1397,  1497,   682,   683,   684,   685,   686,   687,   688,   689,
     690,   691,    37,    57,   511,   797,  1301,  1302,   512,   513,
     514,   515,    38,    51,   376,   377,   378,   379,    39,   128,
     129,   130,    40,    53,   387,   700,  1258,  1259,   388,   389,
     390,   391,    41,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     430,  1071,  1072,   251,   428,  1048,  1049,   252,   253,   254,
     255,   256,    42,    55,   462,   463,   464,   465,   466,   771,
    1275,  1276,   467,   468,   469,   768,  1269,  1270,    43,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,    44,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -942
static const yytype_int16 yypact[] =
{
    -942,   781,  -942,  -184,  -265,  -249,  -942,  -942,  -942,  -242,
    -942,  -234,  -942,  -942,  -942,  -942,  -232,  -224,  -942,  -942,
    -215,  -206,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,   326,   685,  -144,
     -83,  -191,    10,  -174,   515,  -169,  -163,  -157,  -152,   440,
      61,   -50,  -149,   388,   409,  -131,  -107,   -88,   -82,   -79,
     -78,     4,  -942,  -942,  -942,  -942,  -942,   -59,   -45,   -39,
     -37,   -32,   -31,   -25,   -21,   -18,   -11,   -10,    -8,    -6,
      -4,    -3,    36,    40,    44,    45,    49,   220,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
     -87,  -942,  -942,     5,  -942,     3,  -942,    53,    27,  -942,
    -942,    12,  -942,    57,    58,    59,    60,    63,    68,    69,
      70,    74,    75,    78,    87,    88,    89,    91,    92,    94,
      97,    98,   101,   103,   105,   106,   108,   109,   113,   114,
     126,   128,   129,   130,   131,   136,   137,   140,   141,  -942,
     143,  -942,   144,   146,   151,   155,   157,   159,   161,   163,
     164,   167,   168,   170,   176,   178,   180,   183,   184,   187,
     188,   197,   198,   200,    23,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,   403,   784,    15,
     262,    29,   202,   207,   210,   217,   219,   221,   222,   224,
     225,   227,   229,   238,   135,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,    37,   239,
     240,     7,  -942,  -942,  -942,  -942,   148,  -942,   182,  -942,
     242,   245,   246,   247,   248,   254,   259,     8,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,   260,   265,   266,   269,
     270,   274,   278,   283,   286,   288,   289,   290,   257,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,    34,    25,  -942,   371,   373,   395,   297,  -942,   241,
     353,   166,   429,   365,   366,   432,   432,   433,   444,   383,
     384,   450,   432,   386,   387,   391,   392,   394,   396,   332,
    -942,   863,   735,  -942,   333,   334,    24,  -942,  -942,  -942,
     451,   345,  -942,  -942,   343,   347,  -942,  -942,     2,  -942,
    -942,  -942,   414,   432,   416,   417,   432,   461,   463,   464,
     487,   467,   490,   426,   427,   428,   502,   481,   439,   506,
     507,   508,   446,   432,   449,   452,   509,   493,   453,   516,
     531,   432,   532,   514,   537,   538,   476,   477,   410,   480,
     415,   432,   432,   484,   432,   528,   530,   489,   491,   492,
     -77,   -47,   494,   496,   432,   432,   555,   432,   497,   504,
     505,   522,   523,   442,  -942,  -942,  -942,   425,   447,  -942,
     448,   456,   191,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
     443,   462,   465,   468,   470,  -942,   471,   472,   473,   479,
     485,   486,   488,   495,   500,   512,   519,   520,   228,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,   521,  -942,
     524,  -942,    81,  -942,  -942,  -942,   483,  -942,   525,   529,
     534,  -942,   147,  -942,  -942,  -942,  -942,  -942,   572,   587,
     592,   595,   598,   603,   607,   608,   346,   616,   618,   576,
     518,  -942,  -942,   639,   641,   541,  -942,   580,   543,   535,
     546,   549,    22,  -942,  -942,  -942,  -942,   599,   609,   620,
     665,   624,   625,   432,   561,  -942,  -942,   670,   628,   672,
     681,   684,   687,   688,   692,   716,   696,   698,   594,  -942,
     597,   601,  -942,   602,   173,  -942,  -942,  -942,  -942,   600,
     604,  -942,    26,  -942,  -942,  -942,   610,   611,   612,  -942,
     614,   621,   623,   627,   629,   630,   285,   631,   632,   633,
     634,   635,   636,   637,   642,   645,   646,   647,   648,   649,
     655,  -942,   657,   605,   613,   638,   656,   658,   660,   661,
     662,   663,   666,   668,   669,   675,   279,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,   682,   680,   686,   693,   697,   700,   703,   705,   713,
     714,  -942,   715,   717,   719,   722,   723,   724,   725,   726,
     728,   284,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,   706,   709,   691,  -942,   699,  -942,   732,   747,
     729,   733,  -942,   734,   737,   738,   739,   741,   742,   743,
     744,   745,   746,   748,   749,   750,   751,   754,   755,   756,
     757,   758,   761,   762,   763,   764,   769,   771,   785,   786,
     788,   789,   790,   791,   792,   793,   795,   796,   803,   830,
     804,   867,   806,   807,   814,   817,   822,   823,   825,   826,
     827,   828,   829,   831,   832,   833,   840,   841,   843,    33,
     844,   851,   854,   859,   860,   862,   864,  -942,   865,   432,
     667,   866,   766,   768,   870,  -942,  -942,   740,   776,   812,
     895,   874,   928,   930,   931,   932,   943,   945,   902,   815,
     989,   991,   949,   993,   886,  -942,   995,   885,   997,   890,
    -942,  -942,   888,  1000,  1001,   849,   894,  -942,   896,   897,
     898,   899,   900,   901,   903,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,  -942,   916,   917,  -942,
     918,   892,   919,   920,   921,  -942,   922,   923,   924,   925,
     926,   927,   929,   933,   934,   935,   936,   937,   938,   939,
    -942,   940,   941,   942,    83,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    1010,  1012,  1027,   946,  -942,   947,   948,   950,   951,   952,
     953,   954,  -942,   955,   956,   957,   958,   959,   960,   961,
     962,   963,   964,   965,  -942,  -942,  1028,   966,  1029,   967,
    -942,  -942,  1039,   968,   970,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,   432,   432,   432,   432,   432,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  1063,  1064,   432,
    1065,  1079,  1096,  1098,  1080,  1103,  1104,   432,   432,   555,
     975,  -942,  -942,  1084,   -36,  1042,  1086,  1087,  1045,  1046,
    1047,  1091,   981,  1093,  1094,  1095,  1097,  1118,  1099,  1100,
    1055,  1101,   994,  -942,   996,   998,  -942,  -942,   999,  1002,
     787,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -255,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -254,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
     555,   555,   555,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,     9,  1003,  1004,    30,  1005,  1006,  -942,  1007,
    1008,  1009,  1011,  1126,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  -942,  1025,  1113,  1026,
    -942,   -63,  1030,  1031,  1057,  1032,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  1066,
    1108,  1077,  1092,  1034,  1105,  1106,  1107,  1109,  1110,  1136,
    1111,  1112,  1137,  1114,  1115,  1116,  1140,  1117,  1035,  1119,
    1141,  1120,  1043,  -942,  1048,  1053,  1056,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  1058,   783,  1059,  -942,
    1060,   710,  -942,  -942,  -942,  -942,  -942,  -942,  1061,  1062,
    1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,
    1078,  -942,  1081,  1082,  1083,  1085,  1088,  1089,  1090,  1102,
    1121,  1122,  1165,  1123,  1124,  1125,  1127,  1128,  1129,  1130,
    1131,  1132,  -942,  -942,  -942,  -942,  -942,  -942,  -229,  -942,
    -942,   830,  -942,   867,  -942,  -942,  -942,  -942,  -942,  -210,
    -942,  -942,  -942,  -942,  -942,  -205,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -199,  -942,   794,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -186,  -942,  -942,  -942,  -942,  -175,  -942,  -942,  -942,
    1169,   849,  1133,  1134,  1135,  1138,  1139,  1166,  1142,  1143,
    1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,
    1154,  1155,   904,  1156,  1157,  1158,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -166,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -160,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -139,  -942,    -1,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,   787,  -942,
    -942,  -942,     9,  -942,    30,   794,  -942,  1126,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  1113,  -942,   -63,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -136,  -942,   606,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -113,
    -942,  -942,  -942,  -942,  -942,   783,  -942,   710,    -1,  -942,
    1165,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,   606,  -942,  1166,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,   904,  -942,  -942,  -942,
    -942,  -942,  -942,  -942
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -942,  -942,  -942,  -441,  -355,  -941,  -444,  -942,  -942,  1041,
    -942,  -942,  -942,  -942,  1033,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  1255,  -942,
    -942,  -942,  -942,  -942,  1159,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,   499,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -193,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -173,  -942,  -942,  -170,  -942,  -942,  -942,  -942,   712,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,   -84,
    -942,   824,  -942,  -942,  -942,    51,  -942,  -942,  -942,  -942,
    -942,   868,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
     -62,  -942,  -942,   -55,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,   811,  -942,
    -942,  -942,  -942,  -942,  -942,   780,  -942,  -942,  -942,  -942,
    -942,  -120,  -942,  -942,  -942,   774,  -942,  -942,  -942,  -942,
    -119,  -942,  -942,  -942,  -942,   701,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -123,  -942,
    -942,  -118,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,   -58,  -942,   857,
    -942,  -942,  -942,  -942,  -942,  1052,  -942,  -942,  -942,  -942,
    1246,  -942,  -942,  -942,  -942,  -942,  -942,   -33,  -942,   988,
    -942,  -942,  -942,  -942,  1183,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,   115,  -942,  -942,  -942,   118,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,   944,  -942,  -942,  -942,  -942,
    -942,   -34,  -942,  -942,  -942,  -942,  -942,   -30,  -942,  -942,
    1284,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,  -942,
    -942,  -942,  -942,  1160,  -942,  -942,  -942,  -942,  -942,  -942,
    -942
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     607,   608,   760,   383,   373,    67,    47,   614,   288,   299,
    1491,   126,  1492,   383,  1260,  1262,   507,   119,  1261,  1263,
    1304,  1267,    48,   548,   132,   373,   589,   589,   126,    52,
    1493,   133,   134,   135,  1494,   580,   136,    54,   704,    59,
    1407,   707,  1273,   137,  1408,   549,    68,    60,  1090,  1091,
    1092,   138,   139,   140,   300,   141,    63,    69,   724,  1411,
     142,   143,   288,  1412,  1413,    64,   732,   144,  1414,   301,
    1416,   145,   146,   147,  1417,   148,   742,   743,   122,   745,
     125,   149,   507,  1430,   830,    45,    46,  1431,   831,   757,
     758,   302,   761,   303,  1432,   304,   305,   131,  1433,   374,
     150,   151,   257,  1484,  1495,   152,   127,  1485,   258,  1486,
     832,   295,   153,  1487,   259,   306,   154,   155,   156,   260,
     374,   157,   298,   127,   158,   159,   833,   751,   752,   384,
    1489,    70,   289,  1506,  1490,   160,   261,  1507,   834,   384,
     341,   161,   162,   835,   163,   164,   165,   166,   516,  1264,
    1265,  1266,   590,   590,   550,   836,  1525,   753,   754,   167,
    1526,   581,   837,   290,   342,   385,   375,   838,   168,   839,
     169,   170,   759,   171,   580,   385,   172,   173,   508,  1305,
     174,   343,   840,   548,   371,   551,   289,   375,  1233,  1234,
     344,   175,   455,   345,   346,   456,   386,   262,   263,   264,
     265,   266,   267,   268,   269,   549,   386,   517,   891,   509,
     841,   176,   177,   349,   178,  1268,   842,   290,   179,   591,
     591,    76,   180,   181,   182,   183,   184,   350,   582,   470,
     185,   186,   843,   351,    77,   352,  1274,   518,   844,   187,
     353,   354,   457,   519,   508,   458,   270,   355,  1496,   471,
     845,   356,   846,   847,   357,   472,    78,   848,   316,    79,
      80,   358,   359,   516,   360,    81,   361,    82,   362,   363,
     510,   188,   701,   189,   347,   509,   372,   545,   564,   190,
     622,   271,   191,   473,   474,   651,   192,   652,   475,   583,
     653,   193,   883,   453,   694,   654,   914,   381,   527,   317,
     581,   459,   476,   623,   624,   602,   542,   520,   364,   477,
     655,   656,   365,   625,   550,   657,   366,   367,   460,   658,
     849,   368,   517,    83,    84,   380,   850,    67,   478,   392,
     393,   394,   395,    85,    86,   396,   510,   851,   852,   659,
     397,   398,   399,   660,   661,   551,   400,   401,   318,   853,
     402,   799,   518,  1182,    87,    88,   479,   480,   519,   403,
     404,   405,   272,   406,   407,   481,   408,   582,    68,   409,
     410,    89,    90,   411,   662,   412,   663,   413,   414,    69,
     415,   416,    91,   482,   319,   417,   418,   320,   321,   299,
     664,    92,   483,   484,   626,   627,   628,   273,   419,   629,
     420,   421,   422,   423,   455,   540,   630,   456,   424,   425,
     316,   665,   426,   427,  1103,   429,   431,   806,   432,   547,
     631,   632,   520,   433,   606,   485,   486,   434,   583,   435,
     322,   436,   323,   437,   300,   438,   439,   633,   634,   440,
     441,   261,   442,   909,   666,   600,   461,   324,   443,   301,
     444,   317,   445,    70,   457,   446,   447,   458,   667,   448,
     449,   774,   635,   925,   926,   927,   928,   929,   668,   450,
     451,   302,   452,   303,   528,   304,   305,    93,    94,   529,
      95,    96,   530,   487,  1213,  1214,  1215,  1216,  1217,   531,
     369,   532,   325,   533,   534,   306,   535,   536,   794,   537,
     318,   538,   262,   263,   264,   265,   266,   267,   268,   269,
     539,   543,   544,   459,   557,  1230,   132,   558,   559,   560,
     561,   326,   327,   133,   134,   135,   562,   578,   136,   566,
     460,   563,   596,   669,   597,   137,   319,   567,   568,   320,
     321,   569,   570,   138,   139,   140,   571,   141,   670,   960,
     572,   270,   142,   143,   982,   573,   598,   601,   574,   144,
     575,   576,   577,   145,   146,   147,   599,   148,   603,   604,
     605,   606,   609,   149,   816,   817,   818,   819,   820,   821,
     822,   830,   322,   610,   323,   831,   271,   611,   612,   613,
     615,   616,   150,   151,  1220,   617,   618,   152,   619,   324,
     620,   621,  1228,  1229,   153,   692,   693,   832,   154,   155,
     156,  1508,   696,   157,   697,   698,   158,   159,   703,   699,
     705,   706,   708,   833,   709,   710,   711,   160,   712,   713,
     714,   715,   716,   161,   162,   834,   163,   164,   165,   166,
     835,   717,   718,   719,   325,   720,   721,   722,   727,  1509,
     723,   167,   836,   725,   728,   730,   726,   729,   461,   837,
     168,  1510,   169,   170,   838,   171,   839,   272,   172,   173,
     731,   733,   174,   326,   327,   734,   735,   736,  1511,   840,
     737,   738,   739,   175,   740,  1512,    76,   741,   744,   746,
    1513,   747,  1514,   748,   759,   749,   750,   769,   755,    77,
     756,   762,   273,   176,   177,  1515,   178,   841,   763,   764,
     179,   767,   776,   842,   180,   181,   182,   183,   184,   770,
     772,    78,   185,   186,    79,    80,   765,   766,   773,   843,
      81,   187,    82,   808,   777,   844,   651,   778,   652,  1516,
     779,   653,   780,   782,   783,   784,   654,   845,   809,   846,
     847,   785,   801,   810,   848,  1517,   811,   786,   787,   812,
     788,   655,   656,   188,   813,   189,   657,   789,   814,   815,
     658,   190,   790,  1518,   191,  1519,  1520,   823,   192,   824,
     825,     2,     3,   193,   791,   470,     4,   826,    83,    84,
     659,   792,   793,   796,   660,   661,   798,   803,    85,    86,
     827,   804,   828,   885,     5,   471,   805,   880,     6,  1358,
     829,   472,   879,   886,     7,  1418,  1419,   849,   881,    87,
      88,   882,     8,   850,   887,   662,   888,   663,   889,   890,
     892,   893,   894,   895,   851,   852,    89,    90,     9,   473,
     474,   664,   896,  1521,   475,   897,   853,    91,   898,   899,
    1420,    10,    11,   900,    12,   901,    92,   902,   476,   903,
    1522,    13,   665,   904,   622,   477,   905,   984,  1421,   911,
     985,  1104,  1523,   906,   908,  1422,   912,   947,    14,   916,
     917,   918,  1341,   919,   478,   948,  1359,   623,   624,    15,
     920,    16,   921,   988,  1423,   666,   922,   625,   923,   924,
     932,   933,   934,   935,   936,   937,   938,    17,   989,   667,
     949,   939,   479,   480,   940,   941,   942,   943,   944,   668,
    1360,   481,  1424,  1425,   945,    18,   946,  1106,   950,  1107,
     951,  1426,   952,   953,   954,   955,  1361,  1110,   956,   482,
     957,   958,    93,    94,  1109,    95,    96,   959,   483,   484,
    1342,   962,   963,  1257,  1121,  1362,  1363,    19,   964,  1343,
     986,  1364,  1365,  1366,  1367,   965,    20,    21,   987,   966,
    1344,  1427,   967,    22,    23,   968,  1368,   969,   626,   627,
     628,   485,   486,   629,   669,   970,   971,   973,  1134,   974,
     630,   975,  1428,  1345,   976,   977,   978,   979,   980,   670,
     981,   990,   991,   992,   631,   632,   993,   994,   995,  1346,
     996,   997,   998,   999,  1000,  1001,  1111,  1002,  1003,  1004,
    1005,   633,   634,  1006,  1007,  1008,  1009,  1010,  1347,  1348,
    1011,  1012,  1013,  1014,  1349,  1350,  1351,  1352,  1015,   487,
    1016,  1028,  1029,  1030,  1031,  1032,   635,  1033,  1034,  1353,
    1035,  1036,  1037,  1038,  1017,  1018,  1039,  1019,  1020,  1021,
    1022,  1023,  1024,  1120,  1025,  1026,  1040,  1041,  1042,  1043,
    1044,  1045,  1027,  1050,  1046,  1073,  1074,  1047,  1051,  1052,
    1053,  1054,  1055,  1075,  1056,  1057,  1076,  1058,  1059,  1060,
    1061,  1077,  1078,  1062,  1079,  1080,  1081,  1082,  1083,  1112,
    1084,  1085,  1086,  1063,  1064,  1065,  1066,  1067,  1068,  1087,
    1088,  1069,  1089,  1095,  1070,  1459,  1460,  1461,  1462,  1463,
    1096,  1464,  1465,  1097,  1466,  1467,  1468,  1469,  1098,  1099,
    1470,  1100,  1114,  1101,  1115,  1116,  1117,  1102,  1105,  1108,
    1471,  1472,  1473,  1474,  1475,  1476,  1113,  1118,  1477,  1119,
    1122,  1478,  1123,  1124,  1125,  1126,  1127,  1128,  1129,  1130,
    1131,  1132,  1133,  1137,  1159,  1138,  1139,  1140,  1141,  1142,
    1143,  1184,  1144,  1185,  1145,  1146,  1147,  1148,  1149,  1150,
    1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,  1186,  1206,
    1208,  1160,  1161,  1162,  1164,  1165,  1166,  1167,  1168,  1169,
    1210,  1170,  1218,  1219,  1221,  1171,  1172,  1173,  1174,  1175,
    1176,  1177,  1179,  1180,  1181,  1187,  1188,  1189,  1222,  1190,
    1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,  1199,  1200,
    1201,  1202,  1203,  1204,  1205,  1223,  1209,  1224,  1207,  1212,
    1211,  1225,  1226,  1227,  1231,  1232,  1235,  1236,  1237,  1238,
    1239,  1240,  1241,  1242,  1243,  1244,  1245,  1247,  1246,  1250,
    1248,  1249,  1251,  1252,  1283,  1253,  1310,  1254,  1255,  1314,
    1313,  1256,  1271,  1272,  1277,  1278,  1279,  1280,  1281,  1300,
    1282,  1315,  1287,  1288,  1289,  1290,  1291,  1292,  1293,  1294,
    1295,  1296,  1297,  1298,  1299,  1303,  1316,  1323,  1326,  1308,
    1309,  1330,  1334,  1394,  1441,  1311,  1317,  1332,  1434,  1318,
    1319,  1320,  1336,  1321,  1322,  1324,  1325,  1337,  1327,  1328,
    1329,  1331,  1338,  1333,  1335,  1339,   348,  1340,  1356,  1357,
    1371,  1372,   546,  1533,  1532,  1531,  1373,  1374,  1375,  1376,
    1377,  1378,  1379,  1380,  1381,  1382,   807,  1383,   961,  1504,
    1384,  1385,  1386,  1183,  1387,  1502,   795,  1388,  1389,  1390,
    1501,   579,  1435,   884,   910,  1527,   915,  1530,  1528,   800,
    1529,  1391,   983,  1503,   382,  1498,   702,   454,  1410,  1409,
    1500,   370,  1499,     0,     0,     0,     0,     0,     0,     0,
    1392,  1393,  1398,  1399,  1400,     0,  1401,  1402,  1403,  1404,
    1405,  1406,  1436,  1437,  1438,     0,   775,  1439,  1440,     0,
       0,  1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,  1453,
    1454,  1455,  1456,  1457,  1458,  1481,  1482,  1483,   695,     0,
       0,     0,     0,   541,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   565
};

static const yytype_int16 yycheck[] =
{
     355,   356,   446,     1,     1,     1,   271,   362,     1,     1,
      11,     1,    13,     1,   269,   269,     1,   161,   273,   273,
      83,    12,   271,     1,     1,     1,     1,     1,     1,   271,
      31,     8,     9,    10,    35,     1,    13,   271,   393,   271,
     269,   396,    12,    20,   273,    23,    42,   271,    15,    16,
      17,    28,    29,    30,    46,    32,   271,    53,   413,   269,
      37,    38,     1,   273,   269,   271,   421,    44,   273,    61,
     269,    48,    49,    50,   273,    52,   431,   432,   161,   434,
     271,    58,     1,   269,     1,   269,   270,   273,     5,   444,
     445,    83,   447,    85,   269,    87,    88,   271,   273,    96,
      77,    78,   271,   269,   105,    82,    96,   273,   271,   269,
      27,   161,    89,   273,   271,   107,    93,    94,    95,   271,
      96,    98,   271,    96,   101,   102,    43,   204,   205,   127,
     269,   127,   125,   269,   273,   112,     1,   273,    55,   127,
     271,   118,   119,    60,   121,   122,   123,   124,     1,  1090,
    1091,  1092,   127,   127,   132,    72,   269,   204,   205,   136,
     273,   127,    79,   156,   271,   163,   163,    84,   145,    86,
     147,   148,   139,   150,     1,   163,   153,   154,   163,   242,
     157,   269,    99,     1,   271,   163,   125,   163,   224,   225,
     272,   168,     1,   272,   272,     4,   194,    62,    63,    64,
      65,    66,    67,    68,    69,    23,   194,    60,   563,   194,
     127,   188,   189,   272,   191,   206,   133,   156,   195,   194,
     194,     1,   199,   200,   201,   202,   203,   272,   194,     1,
     207,   208,   149,   272,    14,   272,   206,    90,   155,   216,
     272,   272,    51,    96,   163,    54,   111,   272,   249,    21,
     167,   272,   169,   170,   272,    27,    36,   174,     1,    39,
      40,   272,   272,     1,   272,    45,   272,    47,   272,   272,
     255,   248,   270,   250,   270,   194,   271,   270,   270,   256,
       1,   146,   259,    55,    56,     1,   263,     3,    60,   255,
       6,   268,   270,   270,   270,    11,   270,   270,   269,    42,
     127,   110,    74,    24,    25,   139,   269,   160,   272,    81,
      26,    27,   272,    34,   132,    31,   272,   272,   127,    35,
     237,   272,    60,   103,   104,   272,   243,     1,   100,   272,
     272,   272,   272,   113,   114,   272,   255,   254,   255,    55,
     272,   272,   272,    59,    60,   163,   272,   272,    91,   266,
     272,   270,    90,   270,   134,   135,   128,   129,    96,   272,
     272,   272,   227,   272,   272,   137,   272,   194,    42,   272,
     272,   151,   152,   272,    90,   272,    92,   272,   272,    53,
     272,   272,   162,   155,   127,   272,   272,   130,   131,     1,
     106,   171,   164,   165,   115,   116,   117,   262,   272,   120,
     272,   272,   272,   272,     1,   270,   127,     4,   272,   272,
       1,   127,   272,   272,   769,   272,   272,   270,   272,   271,
     141,   142,   160,   272,   139,   197,   198,   272,   255,   272,
     173,   272,   175,   272,    46,   272,   272,   158,   159,   272,
     272,     1,   272,   270,   160,   204,   255,   190,   272,    61,
     272,    42,   272,   127,    51,   272,   272,    54,   174,   272,
     272,   270,   183,   178,   179,   180,   181,   182,   184,   272,
     272,    83,   272,    85,   272,    87,    88,   257,   258,   272,
     260,   261,   272,   255,   925,   926,   927,   928,   929,   272,
     270,   272,   235,   272,   272,   107,   272,   272,   270,   272,
      91,   272,    62,    63,    64,    65,    66,    67,    68,    69,
     272,   272,   272,   110,   272,   959,     1,   272,   272,   272,
     272,   264,   265,     8,     9,    10,   272,   270,    13,   269,
     127,   272,   161,   249,   161,    20,   127,   272,   272,   130,
     131,   272,   272,    28,    29,    30,   272,    32,   264,   270,
     272,   111,    37,    38,   270,   272,   161,   204,   272,    44,
     272,   272,   272,    48,    49,    50,   269,    52,   139,   204,
     204,   139,   139,    58,   228,   229,   230,   231,   232,   233,
     234,     1,   173,   139,   175,     5,   146,   204,   204,   139,
     204,   204,    77,    78,   949,   204,   204,    82,   204,   190,
     204,   269,   957,   958,    89,   272,   272,    27,    93,    94,
      95,     5,   161,    98,   269,   272,   101,   102,   204,   272,
     204,   204,   161,    43,   161,   161,   139,   112,   161,   139,
     204,   204,   204,   118,   119,    55,   121,   122,   123,   124,
      60,   139,   161,   204,   235,   139,   139,   139,   139,    43,
     204,   136,    72,   204,   161,   139,   204,   204,   255,    79,
     145,    55,   147,   148,    84,   150,    86,   227,   153,   154,
     139,   139,   157,   264,   265,   161,   139,   139,    72,    99,
     204,   204,   272,   168,   204,    79,     1,   272,   204,   161,
      84,   161,    86,   204,   139,   204,   204,   272,   204,    14,
     204,   204,   262,   188,   189,    99,   191,   127,   204,   204,
     195,   269,   269,   133,   199,   200,   201,   202,   203,   272,
     272,    36,   207,   208,    39,    40,   204,   204,   272,   149,
      45,   216,    47,   161,   272,   155,     1,   272,     3,   133,
     272,     6,   272,   272,   272,   272,    11,   167,   161,   169,
     170,   272,   269,   161,   174,   149,   161,   272,   272,   161,
     272,    26,    27,   248,   161,   250,    31,   272,   161,   161,
      35,   256,   272,   167,   259,   169,   170,   161,   263,   161,
     204,     0,     1,   268,   272,     1,     5,   269,   103,   104,
      55,   272,   272,   272,    59,    60,   272,   272,   113,   114,
     161,   272,   161,   204,    23,    21,   272,   272,    27,    99,
     269,    27,   269,   204,    33,    21,    22,   237,   272,   134,
     135,   272,    41,   243,   204,    90,   161,    92,   204,   204,
     269,   161,   204,   161,   254,   255,   151,   152,    57,    55,
      56,   106,   161,   237,    60,   161,   266,   162,   161,   161,
      56,    70,    71,   161,    73,   139,   171,   161,    74,   161,
     254,    80,   127,   269,     1,    81,   269,   161,    74,   269,
     161,   204,   266,   272,   272,    81,   272,   272,    97,   269,
     269,   269,    99,   269,   100,   272,   176,    24,    25,   108,
     269,   110,   269,   161,   100,   160,   269,    34,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   126,   161,   174,
     272,   269,   128,   129,   269,   269,   269,   269,   269,   184,
     210,   137,   128,   129,   269,   144,   269,   161,   272,   161,
     272,   137,   272,   272,   272,   272,   226,   161,   272,   155,
     272,   272,   257,   258,   204,   260,   261,   272,   164,   165,
     167,   269,   272,   166,   139,   245,   246,   176,   272,   176,
     269,   251,   252,   253,   254,   272,   185,   186,   269,   272,
     187,   177,   272,   192,   193,   272,   266,   272,   115,   116,
     117,   197,   198,   120,   249,   272,   272,   272,   139,   272,
     127,   272,   198,   210,   272,   272,   272,   272,   272,   264,
     272,   272,   269,   269,   141,   142,   269,   269,   269,   226,
     269,   269,   269,   269,   269,   269,   204,   269,   269,   269,
     269,   158,   159,   269,   269,   269,   269,   269,   245,   246,
     269,   269,   269,   269,   251,   252,   253,   254,   269,   255,
     269,   211,   212,   213,   214,   215,   183,   217,   218,   266,
     220,   221,   222,   223,   269,   269,   226,   269,   269,   269,
     269,   269,   269,   161,   269,   269,   236,   237,   238,   239,
     240,   241,   269,   269,   244,   269,   269,   247,   211,   212,
     213,   214,   215,   269,   217,   218,   269,   220,   221,   222,
     223,   269,   269,   226,   269,   269,   269,   269,   269,   204,
     269,   269,   269,   236,   237,   238,   239,   240,   241,   269,
     269,   244,   269,   269,   247,   211,   212,   213,   214,   215,
     269,   217,   218,   269,   220,   221,   222,   223,   269,   269,
     226,   269,   204,   269,   204,   204,   204,   272,   272,   269,
     236,   237,   238,   239,   240,   241,   272,   204,   244,   204,
     161,   247,   161,   204,   161,   269,   161,   272,   161,   269,
     272,   161,   161,   269,   272,   269,   269,   269,   269,   269,
     269,   161,   269,   161,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   161,   161,
     161,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     161,   272,   139,   139,   139,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   269,   269,   269,   139,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   139,   269,   139,   272,   269,
     272,   161,   139,   139,   269,   161,   204,   161,   161,   204,
     204,   204,   161,   272,   161,   161,   161,   139,   161,   204,
     161,   161,   161,   269,   138,   269,   209,   269,   269,   161,
     204,   269,   269,   269,   269,   269,   269,   269,   269,   166,
     269,   204,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   204,   161,   161,   269,
     269,   161,   161,   138,   138,   273,   272,   272,   139,   204,
     204,   204,   269,   204,   204,   204,   204,   269,   204,   204,
     204,   204,   269,   204,   204,   269,    71,   269,   269,   269,
     269,   269,   291,  1526,  1507,  1505,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   522,   269,   636,  1433,
     269,   269,   269,   854,   269,  1417,   488,   269,   269,   269,
    1415,   328,  1311,   552,   584,  1485,   592,  1490,  1487,   512,
    1488,   269,   671,  1431,   128,  1408,   388,   194,  1263,  1261,
    1414,    97,  1412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,   269,   269,   269,   269,    -1,   269,   269,   269,   269,
     269,   269,   269,   269,   269,    -1,   462,   269,   269,    -1,
      -1,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   376,    -1,
      -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   307
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   275,     0,     1,     5,    23,    27,    33,    41,    57,
      70,    71,    73,    80,    97,   108,   110,   126,   144,   176,
     185,   186,   192,   193,   276,   281,   286,   300,   306,   321,
     359,   378,   392,   419,   426,   436,   445,   476,   486,   492,
     496,   506,   576,   592,   615,   269,   270,   271,   271,   360,
     446,   487,   271,   497,   271,   577,   393,   477,   379,   271,
     271,   322,   420,   271,   271,   427,   437,     1,    42,    53,
     127,   301,   302,   303,   304,   305,     1,    14,    36,    39,
      40,    45,    47,   103,   104,   113,   114,   134,   135,   151,
     152,   162,   171,   257,   258,   260,   261,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   611,   612,   613,   614,   161,
     361,   365,   161,   447,   451,   271,     1,    96,   493,   494,
     495,   271,     1,     8,     9,    10,    13,    20,    28,    29,
      30,    32,    37,    38,    44,    48,    49,    50,    52,    58,
      77,    78,    82,    89,    93,    94,    95,    98,   101,   102,
     112,   118,   119,   121,   122,   123,   124,   136,   145,   147,
     148,   150,   153,   154,   157,   168,   188,   189,   191,   195,
     199,   200,   201,   202,   203,   207,   208,   216,   248,   250,
     256,   259,   263,   268,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   567,   571,   572,   573,   574,   575,   271,   271,   271,
     271,     1,    62,    63,    64,    65,    66,    67,    68,    69,
     111,   146,   227,   262,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,     1,   125,
     156,   282,   283,   284,   285,   161,   323,   327,   271,     1,
      46,    61,    83,    85,    87,    88,   107,   616,   617,   618,
     619,   620,   621,   622,   623,   624,     1,    42,    91,   127,
     130,   131,   173,   175,   190,   235,   264,   265,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   271,   271,   269,   272,   272,   272,   270,   302,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   270,
     594,   271,   271,     1,    96,   163,   488,   489,   490,   491,
     272,   270,   494,     1,   127,   163,   194,   498,   502,   503,
     504,   505,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   568,   272,
     564,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   270,   508,     1,     4,    51,    54,   110,
     127,   255,   578,   579,   580,   581,   582,   586,   587,   588,
       1,    21,    27,    55,    56,    60,    74,    81,   100,   128,
     129,   137,   155,   164,   165,   197,   198,   255,   394,   395,
     396,   397,   398,   399,   400,   401,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,     1,   163,   194,
     255,   478,   482,   483,   484,   485,     1,    60,    90,    96,
     160,   380,   384,   385,   386,   390,   391,   269,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     270,   308,   269,   272,   272,   270,   283,   271,     1,    23,
     132,   163,   421,   422,   423,   424,   425,   272,   272,   272,
     272,   272,   272,   272,   270,   617,   269,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   270,   288,
       1,   127,   194,   255,   428,   429,   430,   431,   432,     1,
     127,   194,   438,   439,   440,   441,   161,   161,   161,   269,
     204,   204,   139,   139,   204,   204,   139,   278,   278,   139,
     139,   204,   204,   139,   278,   204,   204,   204,   204,   204,
     204,   269,     1,    24,    25,    34,   115,   116,   117,   120,
     127,   141,   142,   158,   159,   183,   362,   363,   364,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,     1,     3,     6,    11,    26,    27,    31,    35,    55,
      59,    60,    90,    92,   106,   127,   160,   174,   184,   249,
     264,   448,   449,   450,   452,   453,   454,   455,   456,   457,
     458,   459,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   272,   272,   270,   489,   161,   269,   272,   272,
     499,   270,   503,   204,   278,   204,   204,   278,   161,   161,
     161,   139,   161,   139,   204,   204,   204,   139,   161,   204,
     139,   139,   139,   204,   278,   204,   204,   139,   161,   204,
     139,   139,   278,   139,   161,   139,   139,   204,   204,   272,
     204,   272,   278,   278,   204,   278,   161,   161,   204,   204,
     204,   204,   205,   204,   205,   204,   204,   278,   278,   139,
     280,   278,   204,   204,   204,   204,   204,   269,   589,   272,
     272,   583,   272,   272,   270,   579,   269,   272,   272,   272,
     272,   402,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   270,   395,   272,   479,   272,   270,
     483,   269,   381,   272,   272,   272,   270,   385,   161,   161,
     161,   161,   161,   161,   161,   161,   228,   229,   230,   231,
     232,   233,   234,   161,   161,   204,   269,   161,   161,   269,
       1,     5,    27,    43,    55,    60,    72,    79,    84,    86,
      99,   127,   133,   149,   155,   167,   169,   170,   174,   237,
     243,   254,   255,   266,   324,   325,   326,   328,   329,   330,
     331,   332,   333,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   269,
     272,   272,   272,   270,   422,   204,   204,   204,   161,   204,
     204,   278,   269,   161,   204,   161,   161,   161,   161,   161,
     161,   139,   161,   161,   269,   269,   272,   433,   272,   270,
     429,   269,   272,   442,   270,   439,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   178,   179,   180,   181,   182,
     277,   278,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     270,   363,   269,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   460,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   270,   449,   161,   161,   269,   269,   161,   161,
     272,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   211,   212,
     213,   214,   215,   217,   218,   220,   221,   222,   223,   226,
     236,   237,   238,   239,   240,   241,   244,   247,   569,   570,
     269,   211,   212,   213,   214,   215,   217,   218,   220,   221,
     222,   223,   226,   236,   237,   238,   239,   240,   241,   244,
     247,   565,   566,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
      15,    16,    17,   279,   280,   269,   269,   269,   269,   269,
     269,   269,   272,   278,   204,   272,   161,   161,   269,   204,
     161,   204,   204,   272,   204,   204,   204,   204,   204,   204,
     161,   139,   161,   161,   204,   161,   269,   161,   272,   161,
     269,   272,   161,   161,   139,   388,   389,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   272,
     272,   272,   272,   353,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   334,   272,
     272,   272,   270,   325,   161,   161,   161,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   161,   272,   161,   269,
     161,   272,   269,   277,   277,   277,   277,   277,   139,   139,
     278,   139,   139,   139,   139,   161,   139,   139,   278,   278,
     280,   269,   161,   224,   225,   204,   161,   161,   204,   204,
     204,   161,   272,   161,   161,   161,   161,   139,   161,   161,
     204,   161,   269,   269,   269,   269,   269,   166,   500,   501,
     269,   273,   269,   273,   279,   279,   279,    12,   206,   590,
     591,   269,   269,    12,   206,   584,   585,   269,   269,   269,
     269,   269,   269,   138,   403,   404,   406,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     166,   480,   481,   269,    83,   242,   382,   383,   269,   269,
     209,   273,   387,   204,   161,   204,   204,   272,   204,   204,
     204,   204,   204,   161,   204,   204,   161,   204,   204,   204,
     161,   204,   272,   204,   161,   204,   269,   269,   269,   269,
     269,    99,   167,   176,   187,   210,   226,   245,   246,   251,
     252,   253,   254,   266,   434,   435,   269,   269,    99,   176,
     210,   226,   245,   246,   251,   252,   253,   254,   266,   443,
     444,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   138,   461,   462,   464,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   273,   570,
     566,   269,   273,   269,   273,   405,   269,   273,    21,    22,
      56,    74,    81,   100,   128,   129,   137,   177,   198,   407,
     269,   273,   269,   273,   139,   389,   269,   269,   269,   269,
     269,   138,   354,   355,   357,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   211,
     212,   213,   214,   215,   217,   218,   220,   221,   222,   223,
     226,   236,   237,   238,   239,   240,   241,   244,   247,   335,
     336,   269,   269,   269,   269,   273,   269,   273,   463,   269,
     273,    11,    13,    31,    35,   105,   249,   465,   501,   591,
     585,   407,   404,   481,   383,   356,   269,   273,     5,    43,
      55,    72,    79,    84,    86,    99,   133,   149,   167,   169,
     170,   237,   254,   266,   358,   269,   273,   435,   444,   465,
     462,   358,   355,   336
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
#line 434 "ircd_parser.y"
    { (yyval.number) = 0; ;}
    break;

  case 28:
#line 436 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number);
		;}
    break;

  case 29:
#line 440 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);
		;}
    break;

  case 30:
#line 444 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 + (yyvsp[(3) - (3)].number);
		;}
    break;

  case 31:
#line 448 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 + (yyvsp[(3) - (3)].number);
		;}
    break;

  case 32:
#line 452 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 + (yyvsp[(3) - (3)].number);
		;}
    break;

  case 33:
#line 456 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 7 + (yyvsp[(3) - (3)].number);
		;}
    break;

  case 34:
#line 461 "ircd_parser.y"
    { (yyval.number) = 0; ;}
    break;

  case 36:
#line 462 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number); ;}
    break;

  case 37:
#line 463 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); ;}
    break;

  case 38:
#line 464 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 + (yyvsp[(3) - (3)].number); ;}
    break;

  case 39:
#line 465 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 * 1024 + (yyvsp[(3) - (3)].number); ;}
    break;

  case 46:
#line 479 "ircd_parser.y"
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
#line 496 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
;}
    break;

  case 63:
#line 520 "ircd_parser.y"
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
#line 554 "ircd_parser.y"
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

    BIO_set_close(file, BIO_CLOSE);
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
#line 614 "ircd_parser.y"
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
#line 628 "ircd_parser.y"
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
#line 643 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
;}
    break;

  case 68:
#line 652 "ircd_parser.y"
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
#line 666 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
;}
    break;

  case 70:
#line 675 "ircd_parser.y"
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
#line 703 "ircd_parser.y"
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
#line 733 "ircd_parser.y"
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
#line 756 "ircd_parser.y"
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
#line 812 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
;}
    break;

  case 82:
#line 821 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
;}
    break;

  case 83:
#line 830 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
;}
    break;

  case 100:
#line 857 "ircd_parser.y"
    {
                        ;}
    break;

  case 101:
#line 861 "ircd_parser.y"
    {
                        ;}
    break;

  case 102:
#line 865 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
;}
    break;

  case 103:
#line 872 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
;}
    break;

  case 104:
#line 879 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
;}
    break;

  case 105:
#line 886 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
            sizeof(ConfigLoggingEntry.operspylog));
;}
    break;

  case 106:
#line 893 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
            sizeof(ConfigLoggingEntry.glinelog));
;}
    break;

  case 107:
#line 900 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
            sizeof(ConfigLoggingEntry.klinelog));
;}
    break;

  case 108:
#line 907 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
            sizeof(ConfigLoggingEntry.ioerrlog));
;}
    break;

  case 109:
#line 914 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.killlog, yylval.string,
            sizeof(ConfigLoggingEntry.killlog));
;}
    break;

  case 110:
#line 921 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
;}
    break;

  case 111:
#line 925 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
;}
    break;

  case 112:
#line 929 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
;}
    break;

  case 113:
#line 933 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
;}
    break;

  case 114:
#line 937 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
;}
    break;

  case 115:
#line 941 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
;}
    break;

  case 116:
#line 945 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
;}
    break;

  case 117:
#line 951 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
;}
    break;

  case 118:
#line 960 "ircd_parser.y"
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
#line 973 "ircd_parser.y"
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
        BIO_set_close(file, BIO_CLOSE);
        BIO_free(file);
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

  case 148:
#line 1065 "ircd_parser.y"
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

  case 149:
#line 1077 "ircd_parser.y"
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
#line 1089 "ircd_parser.y"
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

  case 151:
#line 1123 "ircd_parser.y"
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

  case 152:
#line 1135 "ircd_parser.y"
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

  case 153:
#line 1146 "ircd_parser.y"
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

    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif /* HAVE_LIBCRYPTO */
;}
    break;

  case 154:
#line 1188 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
;}
    break;

  case 155:
#line 1197 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes = 0;
;}
    break;

  case 159:
#line 1204 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_BOTS;
;}
    break;

  case 160:
#line 1208 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CCONN;
;}
    break;

  case 161:
#line 1212 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CCONN_FULL;
;}
    break;

  case 162:
#line 1216 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_DEAF;
;}
    break;

  case 163:
#line 1220 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_DEBUG;
;}
    break;

  case 164:
#line 1224 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_FULL;
;}
    break;

  case 165:
#line 1228 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SKILL;
;}
    break;

  case 166:
#line 1232 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_NCHANGE;
;}
    break;

  case 167:
#line 1236 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_REJ;
;}
    break;

  case 168:
#line 1240 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_UNAUTH;
;}
    break;

  case 169:
#line 1244 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SPY;
;}
    break;

  case 170:
#line 1248 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_EXTERNAL;
;}
    break;

  case 171:
#line 1252 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_OPERWALL;
;}
    break;

  case 172:
#line 1256 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SERVNOTICE;
;}
    break;

  case 173:
#line 1260 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_INVISIBLE;
;}
    break;

  case 174:
#line 1264 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_WALLOP;
;}
    break;

  case 175:
#line 1268 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SOFTCALLERID;
;}
    break;

  case 176:
#line 1272 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CALLERID;
;}
    break;

  case 177:
#line 1276 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_LOCOPS;
;}
    break;

  case 178:
#line 1280 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_HIDECHANNELS;
;}
    break;

  case 179:
#line 1286 "ircd_parser.y"
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

  case 180:
#line 1297 "ircd_parser.y"
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

  case 181:
#line 1308 "ircd_parser.y"
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

  case 182:
#line 1319 "ircd_parser.y"
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

  case 183:
#line 1330 "ircd_parser.y"
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

  case 184:
#line 1341 "ircd_parser.y"
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

  case 185:
#line 1352 "ircd_parser.y"
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

  case 186:
#line 1363 "ircd_parser.y"
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

  case 187:
#line 1374 "ircd_parser.y"
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

  case 188:
#line 1385 "ircd_parser.y"
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

  case 189:
#line 1396 "ircd_parser.y"
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

  case 190:
#line 1407 "ircd_parser.y"
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

  case 191:
#line 1418 "ircd_parser.y"
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

  case 192:
#line 1429 "ircd_parser.y"
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

  case 193:
#line 1440 "ircd_parser.y"
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

  case 194:
#line 1451 "ircd_parser.y"
    {
;}
    break;

  case 198:
#line 1455 "ircd_parser.y"
    { not_atom = 1; ;}
    break;

  case 200:
#line 1456 "ircd_parser.y"
    { not_atom = 0; ;}
    break;

  case 202:
#line 1459 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
;}
    break;

  case 203:
#line 1466 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
;}
    break;

  case 204:
#line 1473 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
;}
    break;

  case 205:
#line 1480 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
;}
    break;

  case 206:
#line 1487 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
;}
    break;

  case 207:
#line 1494 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
;}
    break;

  case 208:
#line 1501 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
;}
    break;

  case 209:
#line 1508 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
;}
    break;

  case 210:
#line 1515 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
;}
    break;

  case 211:
#line 1522 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
;}
    break;

  case 212:
#line 1529 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
;}
    break;

  case 213:
#line 1536 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
;}
    break;

  case 214:
#line 1543 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
;}
    break;

  case 215:
#line 1550 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
;}
    break;

  case 216:
#line 1557 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
;}
    break;

  case 217:
#line 1564 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
;}
    break;

  case 218:
#line 1577 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = map_to_conf(yy_conf);
  }
;}
    break;

  case 219:
#line 1584 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    struct ConfItem *cconf = NULL;
    struct ClassItem *class = NULL;

    if (yy_class_name == NULL)
      delete_conf_item(yy_conf);
    else
    {
      cconf = find_exact_name_conf(CLASS_TYPE, yy_class_name, NULL, NULL);

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

  case 238:
#line 1643 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
;}
    break;

  case 239:
#line 1652 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
;}
    break;

  case 240:
#line 1661 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 241:
#line 1667 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 242:
#line 1673 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 243:
#line 1679 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 244:
#line 1685 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 245:
#line 1691 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 246:
#line 1697 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 247:
#line 1703 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 248:
#line 1709 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 249:
#line 1715 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV4(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 250:
#line 1721 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV6(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 251:
#line 1727 "ircd_parser.y"
    {
  if (ypass == 1)
    NumberPerCidr(yy_class) = (yyvsp[(3) - (4)].number);
;}
    break;

  case 252:
#line 1736 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
;}
    break;

  case 253:
#line 1743 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
;}
    break;

  case 254:
#line 1752 "ircd_parser.y"
    {
  listener_flags = 0;
;}
    break;

  case 258:
#line 1758 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
;}
    break;

  case 259:
#line 1762 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
;}
    break;

  case 267:
#line 1770 "ircd_parser.y"
    { listener_flags = 0; ;}
    break;

  case 271:
#line 1775 "ircd_parser.y"
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

  case 272:
#line 1789 "ircd_parser.y"
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

  case 273:
#line 1809 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
;}
    break;

  case 274:
#line 1818 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
;}
    break;

  case 275:
#line 1830 "ircd_parser.y"
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

  case 276:
#line 1842 "ircd_parser.y"
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

  case 297:
#line 1907 "ircd_parser.y"
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

  case 298:
#line 1944 "ircd_parser.y"
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

  case 299:
#line 1957 "ircd_parser.y"
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

  case 300:
#line 1968 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
;}
    break;

  case 301:
#line 1977 "ircd_parser.y"
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

  case 302:
#line 1988 "ircd_parser.y"
    {
;}
    break;

  case 306:
#line 1992 "ircd_parser.y"
    { not_atom = 1; ;}
    break;

  case 308:
#line 1993 "ircd_parser.y"
    { not_atom = 0; ;}
    break;

  case 310:
#line 1996 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

;}
    break;

  case 311:
#line 2004 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
;}
    break;

  case 312:
#line 2011 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
;}
    break;

  case 313:
#line 2018 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
;}
    break;

  case 314:
#line 2025 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
;}
    break;

  case 315:
#line 2032 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
;}
    break;

  case 316:
#line 2039 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
;}
    break;

  case 317:
#line 2046 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
;}
    break;

  case 318:
#line 2053 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
;}
    break;

  case 319:
#line 2060 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_WEBIRC;
    else yy_aconf->flags |= CONF_FLAGS_WEBIRC;
  }
;}
    break;

  case 320:
#line 2067 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
;}
    break;

  case 321:
#line 2076 "ircd_parser.y"
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

  case 322:
#line 2087 "ircd_parser.y"
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

  case 323:
#line 2098 "ircd_parser.y"
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

  case 324:
#line 2109 "ircd_parser.y"
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

  case 325:
#line 2120 "ircd_parser.y"
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

  case 326:
#line 2131 "ircd_parser.y"
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

  case 327:
#line 2143 "ircd_parser.y"
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

  case 328:
#line 2162 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
;}
    break;

  case 329:
#line 2172 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[(3) - (4)].number);
  }
;}
    break;

  case 330:
#line 2181 "ircd_parser.y"
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

  case 331:
#line 2192 "ircd_parser.y"
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

  case 332:
#line 2207 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
;}
    break;

  case 333:
#line 2214 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
;}
    break;

  case 340:
#line 2226 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
;}
    break;

  case 341:
#line 2235 "ircd_parser.y"
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

  case 342:
#line 2250 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
;}
    break;

  case 343:
#line 2263 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
;}
    break;

  case 344:
#line 2271 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
;}
    break;

  case 351:
#line 2282 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
;}
    break;

  case 352:
#line 2291 "ircd_parser.y"
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

  case 353:
#line 2313 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
;}
    break;

  case 357:
#line 2320 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
;}
    break;

  case 358:
#line 2324 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
;}
    break;

  case 359:
#line 2328 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
;}
    break;

  case 360:
#line 2332 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
;}
    break;

  case 361:
#line 2336 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
;}
    break;

  case 362:
#line 2340 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
;}
    break;

  case 363:
#line 2344 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
;}
    break;

  case 364:
#line 2348 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
;}
    break;

  case 365:
#line 2352 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
;}
    break;

  case 366:
#line 2356 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
;}
    break;

  case 367:
#line 2360 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_SERVICES;
;}
    break;

  case 368:
#line 2364 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_REHASH;
;}
    break;

  case 369:
#line 2368 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
;}
    break;

  case 370:
#line 2377 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
;}
    break;

  case 371:
#line 2384 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
;}
    break;

  case 377:
#line 2397 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
;}
    break;

  case 378:
#line 2403 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
;}
    break;

  case 382:
#line 2410 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
;}
    break;

  case 383:
#line 2414 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
;}
    break;

  case 384:
#line 2418 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
;}
    break;

  case 385:
#line 2422 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
;}
    break;

  case 386:
#line 2426 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
;}
    break;

  case 387:
#line 2430 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
;}
    break;

  case 388:
#line 2434 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
;}
    break;

  case 389:
#line 2438 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
;}
    break;

  case 390:
#line 2442 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
;}
    break;

  case 391:
#line 2446 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
;}
    break;

  case 392:
#line 2450 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
;}
    break;

  case 393:
#line 2459 "ircd_parser.y"
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

  case 394:
#line 2477 "ircd_parser.y"
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

  case 419:
#line 2616 "ircd_parser.y"
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

  case 420:
#line 2628 "ircd_parser.y"
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

  case 421:
#line 2640 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
;}
    break;

  case 422:
#line 2649 "ircd_parser.y"
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

  case 423:
#line 2675 "ircd_parser.y"
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

  case 424:
#line 2693 "ircd_parser.y"
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

  case 425:
#line 2711 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[(3) - (4)].number);
;}
    break;

  case 426:
#line 2717 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
;}
    break;

  case 427:
#line 2721 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
;}
    break;

  case 428:
#line 2729 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
;}
    break;

  case 429:
#line 2738 "ircd_parser.y"
    {
;}
    break;

  case 433:
#line 2742 "ircd_parser.y"
    { not_atom = 1; ;}
    break;

  case 435:
#line 2743 "ircd_parser.y"
    { not_atom = 0; ;}
    break;

  case 437:
#line 2746 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
;}
    break;

  case 438:
#line 2753 "ircd_parser.y"
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

  case 439:
#line 2764 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
;}
    break;

  case 440:
#line 2771 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
;}
    break;

  case 441:
#line 2778 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
;}
    break;

  case 442:
#line 2785 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
;}
    break;

  case 443:
#line 2795 "ircd_parser.y"
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
      
    BIO_set_close(file, BIO_CLOSE);
    BIO_free(file);
  }
#endif /* HAVE_LIBCRYPTO */
;}
    break;

  case 444:
#line 2836 "ircd_parser.y"
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

  case 445:
#line 2847 "ircd_parser.y"
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

  case 446:
#line 2858 "ircd_parser.y"
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

  case 447:
#line 2873 "ircd_parser.y"
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

  case 448:
#line 2884 "ircd_parser.y"
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

  case 449:
#line 2895 "ircd_parser.y"
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

  case 450:
#line 2908 "ircd_parser.y"
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

  case 451:
#line 2921 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
;}
    break;

  case 452:
#line 2930 "ircd_parser.y"
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

  case 453:
#line 2965 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
;}
    break;

  case 454:
#line 2972 "ircd_parser.y"
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

  case 455:
#line 3028 "ircd_parser.y"
    {
;}
    break;

  case 459:
#line 3033 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
;}
    break;

  case 466:
#line 3042 "ircd_parser.y"
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

  case 467:
#line 3061 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
;}
    break;

  case 468:
#line 3070 "ircd_parser.y"
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

  case 469:
#line 3079 "ircd_parser.y"
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

  case 475:
#line 3095 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
;}
    break;

  case 476:
#line 3104 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
;}
    break;

  case 482:
#line 3121 "ircd_parser.y"
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

  case 483:
#line 3142 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
;}
    break;

  case 484:
#line 3149 "ircd_parser.y"
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

  case 485:
#line 3183 "ircd_parser.y"
    {
;}
    break;

  case 489:
#line 3188 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
;}
    break;

  case 496:
#line 3197 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
;}
    break;

  case 497:
#line 3203 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
;}
    break;

  case 563:
#line 3251 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = (yyvsp[(3) - (4)].number);
;}
    break;

  case 564:
#line 3256 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = (yyvsp[(3) - (4)].number);
;}
    break;

  case 565:
#line 3261 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
;}
    break;

  case 566:
#line 3266 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
;}
    break;

  case 567:
#line 3271 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
;}
    break;

  case 568:
#line 3276 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
;}
    break;

  case 569:
#line 3281 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = (yyvsp[(3) - (4)].number);
;}
    break;

  case 570:
#line 3286 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
;}
    break;

  case 571:
#line 3291 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
;}
    break;

  case 572:
#line 3296 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
;}
    break;

  case 573:
#line 3301 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
;}
    break;

  case 574:
#line 3306 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
;}
    break;

  case 575:
#line 3311 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = (yyvsp[(3) - (4)].number); 
;}
    break;

  case 576:
#line 3316 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = (yyvsp[(3) - (4)].number);
;}
    break;

  case 577:
#line 3321 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = (yyvsp[(3) - (4)].number);
;}
    break;

  case 578:
#line 3326 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[(3) - (4)].number);
;}
    break;

  case 579:
#line 3331 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_connect_numeric = yylval.number;
;}
    break;

  case 580:
#line 3336 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = (yyvsp[(3) - (4)].number);
;}
    break;

  case 581:
#line 3341 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[(3) - (4)].number);
;}
    break;

  case 582:
#line 3347 "ircd_parser.y"
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

  case 583:
#line 3358 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
;}
    break;

  case 584:
#line 3363 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
;}
    break;

  case 585:
#line 3372 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key1);
    DupString(ConfigFileEntry.cloak_key1, yylval.string);
  }
;}
    break;

  case 586:
#line 3381 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key2);
    DupString(ConfigFileEntry.cloak_key2, yylval.string);
  }
;}
    break;

  case 587:
#line 3390 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key3);
    DupString(ConfigFileEntry.cloak_key3, yylval.string);
  }
;}
    break;

  case 588:
#line 3399 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.services_name);
    DupString(ConfigFileEntry.services_name, yylval.string);
  }
;}
    break;

  case 589:
#line 3408 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
;}
    break;

  case 590:
#line 3413 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
;}
    break;

  case 591:
#line 3418 "ircd_parser.y"
    {
  ConfigFileEntry.stats_e_disabled = yylval.number;
;}
    break;

  case 592:
#line 3423 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
;}
    break;

  case 593:
#line 3428 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
;}
    break;

  case 594:
#line 3433 "ircd_parser.y"
    {
  ConfigFileEntry.hide_killer = yylval.number;
;}
    break;

  case 595:
#line 3438 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
;}
    break;

  case 596:
#line 3441 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
;}
    break;

  case 597:
#line 3446 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
;}
    break;

  case 598:
#line 3449 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
;}
    break;

  case 599:
#line 3454 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = (yyvsp[(3) - (4)].number);
;}
    break;

  case 600:
#line 3459 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = (yyvsp[(3) - (4)].number);
;}
    break;

  case 601:
#line 3464 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
;}
    break;

  case 602:
#line 3469 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = (yyvsp[(3) - (4)].number);
;}
    break;

  case 603:
#line 3474 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
;}
    break;

  case 604:
#line 3479 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
;}
    break;

  case 605:
#line 3484 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
;}
    break;

  case 606:
#line 3489 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
;}
    break;

  case 607:
#line 3494 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
;}
    break;

  case 608:
#line 3505 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = (yyvsp[(3) - (4)].number);
;}
    break;

  case 609:
#line 3510 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = (yyvsp[(3) - (4)].number);
;}
    break;

  case 610:
#line 3515 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = (yyvsp[(3) - (4)].number);
;}
    break;

  case 611:
#line 3520 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
;}
    break;

  case 612:
#line 3529 "ircd_parser.y"
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

  case 613:
#line 3561 "ircd_parser.y"
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

  case 614:
#line 3579 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
;}
    break;

  case 615:
#line 3584 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
;}
    break;

  case 616:
#line 3593 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
;}
    break;

  case 617:
#line 3598 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
;}
    break;

  case 618:
#line 3603 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
;}
    break;

  case 619:
#line 3608 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
;}
    break;

  case 623:
#line 3614 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
;}
    break;

  case 624:
#line 3617 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
;}
    break;

  case 625:
#line 3620 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN_FULL;
;}
    break;

  case 626:
#line 3623 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
;}
    break;

  case 627:
#line 3626 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
;}
    break;

  case 628:
#line 3629 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
;}
    break;

  case 629:
#line 3632 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
;}
    break;

  case 630:
#line 3635 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
;}
    break;

  case 631:
#line 3638 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
;}
    break;

  case 632:
#line 3641 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
;}
    break;

  case 633:
#line 3644 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
;}
    break;

  case 634:
#line 3647 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
;}
    break;

  case 635:
#line 3650 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
;}
    break;

  case 636:
#line 3653 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
;}
    break;

  case 637:
#line 3656 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
;}
    break;

  case 638:
#line 3659 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
;}
    break;

  case 639:
#line 3662 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
;}
    break;

  case 640:
#line 3665 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
;}
    break;

  case 641:
#line 3668 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
;}
    break;

  case 642:
#line 3671 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_HIDECHANNELS;
;}
    break;

  case 643:
#line 3676 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
;}
    break;

  case 647:
#line 3682 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
;}
    break;

  case 648:
#line 3685 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
;}
    break;

  case 649:
#line 3688 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN_FULL;
;}
    break;

  case 650:
#line 3691 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
;}
    break;

  case 651:
#line 3694 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
;}
    break;

  case 652:
#line 3697 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
;}
    break;

  case 653:
#line 3700 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
;}
    break;

  case 654:
#line 3703 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
;}
    break;

  case 655:
#line 3706 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
;}
    break;

  case 656:
#line 3709 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
;}
    break;

  case 657:
#line 3712 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
;}
    break;

  case 658:
#line 3715 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
;}
    break;

  case 659:
#line 3718 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
;}
    break;

  case 660:
#line 3721 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
;}
    break;

  case 661:
#line 3724 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
;}
    break;

  case 662:
#line 3727 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
;}
    break;

  case 663:
#line 3730 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
;}
    break;

  case 664:
#line 3733 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
;}
    break;

  case 665:
#line 3736 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
;}
    break;

  case 666:
#line 3739 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_HIDECHANNELS;
;}
    break;

  case 667:
#line 3744 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = (yyvsp[(3) - (4)].number);
;}
    break;

  case 668:
#line 3749 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = (yyvsp[(3) - (4)].number);
;}
    break;

  case 669:
#line 3754 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = (yyvsp[(3) - (4)].number);
;}
    break;

  case 670:
#line 3759 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = (yyvsp[(3) - (4)].number);
;}
    break;

  case 671:
#line 3764 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
;}
    break;

  case 672:
#line 3772 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = map_to_conf(yy_conf);
  }
;}
    break;

  case 673:
#line 3779 "ircd_parser.y"
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

  case 683:
#line 3805 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
;}
    break;

  case 684:
#line 3811 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[(3) - (4)].number);
;}
    break;

  case 685:
#line 3817 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
;}
    break;

  case 689:
#line 3823 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
;}
    break;

  case 690:
#line 3827 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
;}
    break;

  case 691:
#line 3833 "ircd_parser.y"
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

  case 692:
#line 3867 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
;}
    break;

  case 693:
#line 3876 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
;}
    break;

  case 694:
#line 3880 "ircd_parser.y"
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

  case 697:
#line 3927 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
;}
    break;

  case 698:
#line 3931 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
;}
    break;

  case 723:
#line 3956 "ircd_parser.y"
    {
  ConfigChannel.cycle_on_hostchange = yylval.number;
;}
    break;

  case 724:
#line 3961 "ircd_parser.y"
    {
  ConfigChannel.disable_fake_channels = yylval.number;
;}
    break;

  case 725:
#line 3966 "ircd_parser.y"
    {
  ConfigChannel.restrict_channels = yylval.number;
;}
    break;

  case 726:
#line 3971 "ircd_parser.y"
    {
  ConfigChannel.disable_local_channels = yylval.number;
;}
    break;

  case 727:
#line 3976 "ircd_parser.y"
    {
  ConfigChannel.use_except = yylval.number;
;}
    break;

  case 728:
#line 3981 "ircd_parser.y"
    {
  ConfigChannel.use_invex = yylval.number;
;}
    break;

  case 729:
#line 3986 "ircd_parser.y"
    {
  ConfigChannel.regex_bans = yylval.number;
;}
    break;

  case 730:
#line 3991 "ircd_parser.y"
    {
  ConfigChannel.use_knock = yylval.number;
;}
    break;

  case 731:
#line 3996 "ircd_parser.y"
    {
  ConfigChannel.knock_delay = (yyvsp[(3) - (4)].number);
;}
    break;

  case 732:
#line 4001 "ircd_parser.y"
    {
  ConfigChannel.knock_delay_channel = (yyvsp[(3) - (4)].number);
;}
    break;

  case 733:
#line 4006 "ircd_parser.y"
    {
  ConfigChannel.max_chans_per_user = (yyvsp[(3) - (4)].number);
;}
    break;

  case 734:
#line 4011 "ircd_parser.y"
    {
  ConfigChannel.quiet_on_ban = yylval.number;
;}
    break;

  case 735:
#line 4016 "ircd_parser.y"
    {
  ConfigChannel.max_bans = (yyvsp[(3) - (4)].number);
;}
    break;

  case 736:
#line 4021 "ircd_parser.y"
    {
  ConfigChannel.default_split_user_count = (yyvsp[(3) - (4)].number);
;}
    break;

  case 737:
#line 4026 "ircd_parser.y"
    {
  ConfigChannel.default_split_server_count = (yyvsp[(3) - (4)].number);
;}
    break;

  case 738:
#line 4031 "ircd_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
;}
    break;

  case 739:
#line 4036 "ircd_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
;}
    break;

  case 740:
#line 4041 "ircd_parser.y"
    {
  ConfigChannel.burst_topicwho = yylval.number;
;}
    break;

  case 741:
#line 4046 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
;}
    break;

  case 742:
#line 4051 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
;}
    break;

  case 754:
#line 4070 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
;}
    break;

  case 755:
#line 4076 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
;}
    break;

  case 756:
#line 4082 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
;}
    break;

  case 757:
#line 4091 "ircd_parser.y"
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

  case 758:
#line 4105 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
;}
    break;

  case 759:
#line 4111 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
;}
    break;

  case 760:
#line 4117 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
;}
    break;


/* Line 1267 of yacc.c.  */
#line 8020 "y.tab.c"
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



