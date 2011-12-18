/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
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
static struct DnsblItem *yy_dconf = NULL;
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



/* Line 189 of yacc.c  */
#line 183 "y.tab.c"

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
     DNSBL = 305,
     DNSBL_EXEMPT = 306,
     DOT_IN_IP6_ADDR = 307,
     DOTS_IN_IDENT = 308,
     DURATION = 309,
     EGDPOOL_PATH = 310,
     EMAIL = 311,
     ENABLE = 312,
     ENCRYPTED = 313,
     EXCEED_LIMIT = 314,
     EXEMPT = 315,
     FAILED_OPER_NOTICE = 316,
     FAKENAME = 317,
     IRCD_FLAGS = 318,
     FLATTEN_LINKS = 319,
     FFAILED_OPERLOG = 320,
     FKILLLOG = 321,
     FKLINELOG = 322,
     FGLINELOG = 323,
     FIOERRLOG = 324,
     FOPERLOG = 325,
     FOPERSPYLOG = 326,
     FUSERLOG = 327,
     GECOS = 328,
     GENERAL = 329,
     GLINE = 330,
     GLINES = 331,
     GLINE_EXEMPT = 332,
     GLINE_LOG = 333,
     GLINE_TIME = 334,
     GLINE_MIN_CIDR = 335,
     GLINE_MIN_CIDR6 = 336,
     GLOBAL_KILL = 337,
     IRCD_AUTH = 338,
     NEED_IDENT = 339,
     HAVENT_READ_CONF = 340,
     HIDDEN = 341,
     HIDDEN_ADMIN = 342,
     HIDDEN_NAME = 343,
     HIDDEN_OPER = 344,
     HIDE_SERVER_IPS = 345,
     HIDE_SERVERS = 346,
     HIDE_SPOOF_IPS = 347,
     HOST = 348,
     HUB = 349,
     HUB_MASK = 350,
     IDLETIME = 351,
     IGNORE_BOGUS_TS = 352,
     INVISIBLE_ON_CONNECT = 353,
     IP = 354,
     KILL = 355,
     KILL_CHASE_TIME_LIMIT = 356,
     KLINE = 357,
     KLINE_EXEMPT = 358,
     KLINE_REASON = 359,
     KLINE_WITH_REASON = 360,
     KNOCK_DELAY = 361,
     KNOCK_DELAY_CHANNEL = 362,
     LAZYLINK = 363,
     LEAF_MASK = 364,
     LINKS_DELAY = 365,
     LISTEN = 366,
     T_LOG = 367,
     LOGGING = 368,
     LOG_LEVEL = 369,
     MAX_ACCEPT = 370,
     MAX_BANS = 371,
     MAX_CHANS_PER_USER = 372,
     MAX_GLOBAL = 373,
     MAX_IDENT = 374,
     MAX_LOCAL = 375,
     MAX_NICK_CHANGES = 376,
     MAX_NICK_TIME = 377,
     MAX_NUMBER = 378,
     MAX_TARGETS = 379,
     MESSAGE_LOCALE = 380,
     MIN_NONWILDCARD = 381,
     MIN_NONWILDCARD_SIMPLE = 382,
     MODULE = 383,
     MODULES = 384,
     NAME = 385,
     NEED_PASSWORD = 386,
     IS_WEBIRC = 387,
     NETWORK_DESC = 388,
     NETWORK_NAME = 389,
     NICK = 390,
     NICK_CHANGES = 391,
     NO_CREATE_ON_SPLIT = 392,
     NO_JOIN_ON_SPLIT = 393,
     NO_OPER_FLOOD = 394,
     NO_TILDE = 395,
     NOT = 396,
     NUMBER = 397,
     NUMBER_PER_IDENT = 398,
     NUMBER_PER_CIDR = 399,
     NUMBER_PER_IP = 400,
     NUMBER_PER_IP_GLOBAL = 401,
     OPERATOR = 402,
     OPERS_BYPASS_CALLERID = 403,
     OPER_LOG = 404,
     OPER_ONLY_UMODES = 405,
     OPER_PASS_RESV = 406,
     OPER_SPY_T = 407,
     OPER_UMODES = 408,
     JOIN_FLOOD_COUNT = 409,
     JOIN_FLOOD_TIME = 410,
     PACE_WAIT = 411,
     PACE_WAIT_SIMPLE = 412,
     PASSWORD = 413,
     PATH = 414,
     PING_COOKIE = 415,
     PING_TIME = 416,
     PING_WARNING = 417,
     PORT = 418,
     QSTRING = 419,
     QUIET_ON_BAN = 420,
     REASON = 421,
     REDIRPORT = 422,
     REDIRSERV = 423,
     REGEX_T = 424,
     REHASH = 425,
     TREJECT_HOLD_TIME = 426,
     REMOTE = 427,
     REMOTEBAN = 428,
     RESTRICT_CHANNELS = 429,
     RESTRICTED = 430,
     RSA_PRIVATE_KEY_FILE = 431,
     RSA_PUBLIC_KEY_FILE = 432,
     SSL_CERTIFICATE_FILE = 433,
     RESV = 434,
     RESV_EXEMPT = 435,
     SECONDS = 436,
     MINUTES = 437,
     HOURS = 438,
     DAYS = 439,
     WEEKS = 440,
     SENDQ = 441,
     SEND_PASSWORD = 442,
     SERVERHIDE = 443,
     SERVERINFO = 444,
     SERVICES = 445,
     SERVICES_NAME = 446,
     SERVLINK_PATH = 447,
     IRCD_SID = 448,
     TKLINE_EXPIRE_NOTICES = 449,
     T_SHARED = 450,
     T_CLUSTER = 451,
     TYPE = 452,
     SHORT_MOTD = 453,
     SILENT = 454,
     SPOOF = 455,
     SPOOF_NOTICE = 456,
     STATS_E_DISABLED = 457,
     STATS_I_OPER_ONLY = 458,
     STATS_K_OPER_ONLY = 459,
     STATS_O_OPER_ONLY = 460,
     STATS_P_OPER_ONLY = 461,
     TBOOL = 462,
     TMASKED = 463,
     T_REJECT = 464,
     TS_MAX_DELTA = 465,
     TS_WARN_DELTA = 466,
     TWODOTS = 467,
     T_ALL = 468,
     T_BOTS = 469,
     T_SOFTCALLERID = 470,
     T_CALLERID = 471,
     T_CCONN = 472,
     T_NOCTCP = 473,
     T_CLIENT_FLOOD = 474,
     T_DEAF = 475,
     T_DEBUG = 476,
     T_DRONE = 477,
     T_EXTERNAL = 478,
     T_FULL = 479,
     T_HIDECHANNELS = 480,
     T_INVISIBLE = 481,
     T_IPV4 = 482,
     T_IPV6 = 483,
     T_LOCOPS = 484,
     T_LOGPATH = 485,
     T_L_CRIT = 486,
     T_L_DEBUG = 487,
     T_L_ERROR = 488,
     T_L_INFO = 489,
     T_L_NOTICE = 490,
     T_L_TRACE = 491,
     T_L_WARN = 492,
     T_MAX_CLIENTS = 493,
     T_NCHANGE = 494,
     T_OPERWALL = 495,
     T_REJ = 496,
     T_SERVNOTICE = 497,
     T_SKILL = 498,
     T_SPY = 499,
     T_SSL = 500,
     T_UMODES = 501,
     T_UNAUTH = 502,
     T_UNRESV = 503,
     T_UNXLINE = 504,
     T_WALLOP = 505,
     THROTTLE_TIME = 506,
     TOPICBURST = 507,
     TRUE_NO_OPER_FLOOD = 508,
     TKLINE = 509,
     TXLINE = 510,
     TRESV = 511,
     UNKLINE = 512,
     USER = 513,
     USE_EGD = 514,
     USE_EXCEPT = 515,
     USE_INVEX = 516,
     HIDE_KILLER = 517,
     USE_REGEX_BANS = 518,
     USE_KNOCK = 519,
     USE_NOCTCP = 520,
     USE_LOGGING = 521,
     USE_WHOIS_ACTUALLY = 522,
     VHOST = 523,
     VHOST6 = 524,
     XLINE = 525,
     WARN = 526,
     WARN_NO_NLINE = 527
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
#define DNSBL 305
#define DNSBL_EXEMPT 306
#define DOT_IN_IP6_ADDR 307
#define DOTS_IN_IDENT 308
#define DURATION 309
#define EGDPOOL_PATH 310
#define EMAIL 311
#define ENABLE 312
#define ENCRYPTED 313
#define EXCEED_LIMIT 314
#define EXEMPT 315
#define FAILED_OPER_NOTICE 316
#define FAKENAME 317
#define IRCD_FLAGS 318
#define FLATTEN_LINKS 319
#define FFAILED_OPERLOG 320
#define FKILLLOG 321
#define FKLINELOG 322
#define FGLINELOG 323
#define FIOERRLOG 324
#define FOPERLOG 325
#define FOPERSPYLOG 326
#define FUSERLOG 327
#define GECOS 328
#define GENERAL 329
#define GLINE 330
#define GLINES 331
#define GLINE_EXEMPT 332
#define GLINE_LOG 333
#define GLINE_TIME 334
#define GLINE_MIN_CIDR 335
#define GLINE_MIN_CIDR6 336
#define GLOBAL_KILL 337
#define IRCD_AUTH 338
#define NEED_IDENT 339
#define HAVENT_READ_CONF 340
#define HIDDEN 341
#define HIDDEN_ADMIN 342
#define HIDDEN_NAME 343
#define HIDDEN_OPER 344
#define HIDE_SERVER_IPS 345
#define HIDE_SERVERS 346
#define HIDE_SPOOF_IPS 347
#define HOST 348
#define HUB 349
#define HUB_MASK 350
#define IDLETIME 351
#define IGNORE_BOGUS_TS 352
#define INVISIBLE_ON_CONNECT 353
#define IP 354
#define KILL 355
#define KILL_CHASE_TIME_LIMIT 356
#define KLINE 357
#define KLINE_EXEMPT 358
#define KLINE_REASON 359
#define KLINE_WITH_REASON 360
#define KNOCK_DELAY 361
#define KNOCK_DELAY_CHANNEL 362
#define LAZYLINK 363
#define LEAF_MASK 364
#define LINKS_DELAY 365
#define LISTEN 366
#define T_LOG 367
#define LOGGING 368
#define LOG_LEVEL 369
#define MAX_ACCEPT 370
#define MAX_BANS 371
#define MAX_CHANS_PER_USER 372
#define MAX_GLOBAL 373
#define MAX_IDENT 374
#define MAX_LOCAL 375
#define MAX_NICK_CHANGES 376
#define MAX_NICK_TIME 377
#define MAX_NUMBER 378
#define MAX_TARGETS 379
#define MESSAGE_LOCALE 380
#define MIN_NONWILDCARD 381
#define MIN_NONWILDCARD_SIMPLE 382
#define MODULE 383
#define MODULES 384
#define NAME 385
#define NEED_PASSWORD 386
#define IS_WEBIRC 387
#define NETWORK_DESC 388
#define NETWORK_NAME 389
#define NICK 390
#define NICK_CHANGES 391
#define NO_CREATE_ON_SPLIT 392
#define NO_JOIN_ON_SPLIT 393
#define NO_OPER_FLOOD 394
#define NO_TILDE 395
#define NOT 396
#define NUMBER 397
#define NUMBER_PER_IDENT 398
#define NUMBER_PER_CIDR 399
#define NUMBER_PER_IP 400
#define NUMBER_PER_IP_GLOBAL 401
#define OPERATOR 402
#define OPERS_BYPASS_CALLERID 403
#define OPER_LOG 404
#define OPER_ONLY_UMODES 405
#define OPER_PASS_RESV 406
#define OPER_SPY_T 407
#define OPER_UMODES 408
#define JOIN_FLOOD_COUNT 409
#define JOIN_FLOOD_TIME 410
#define PACE_WAIT 411
#define PACE_WAIT_SIMPLE 412
#define PASSWORD 413
#define PATH 414
#define PING_COOKIE 415
#define PING_TIME 416
#define PING_WARNING 417
#define PORT 418
#define QSTRING 419
#define QUIET_ON_BAN 420
#define REASON 421
#define REDIRPORT 422
#define REDIRSERV 423
#define REGEX_T 424
#define REHASH 425
#define TREJECT_HOLD_TIME 426
#define REMOTE 427
#define REMOTEBAN 428
#define RESTRICT_CHANNELS 429
#define RESTRICTED 430
#define RSA_PRIVATE_KEY_FILE 431
#define RSA_PUBLIC_KEY_FILE 432
#define SSL_CERTIFICATE_FILE 433
#define RESV 434
#define RESV_EXEMPT 435
#define SECONDS 436
#define MINUTES 437
#define HOURS 438
#define DAYS 439
#define WEEKS 440
#define SENDQ 441
#define SEND_PASSWORD 442
#define SERVERHIDE 443
#define SERVERINFO 444
#define SERVICES 445
#define SERVICES_NAME 446
#define SERVLINK_PATH 447
#define IRCD_SID 448
#define TKLINE_EXPIRE_NOTICES 449
#define T_SHARED 450
#define T_CLUSTER 451
#define TYPE 452
#define SHORT_MOTD 453
#define SILENT 454
#define SPOOF 455
#define SPOOF_NOTICE 456
#define STATS_E_DISABLED 457
#define STATS_I_OPER_ONLY 458
#define STATS_K_OPER_ONLY 459
#define STATS_O_OPER_ONLY 460
#define STATS_P_OPER_ONLY 461
#define TBOOL 462
#define TMASKED 463
#define T_REJECT 464
#define TS_MAX_DELTA 465
#define TS_WARN_DELTA 466
#define TWODOTS 467
#define T_ALL 468
#define T_BOTS 469
#define T_SOFTCALLERID 470
#define T_CALLERID 471
#define T_CCONN 472
#define T_NOCTCP 473
#define T_CLIENT_FLOOD 474
#define T_DEAF 475
#define T_DEBUG 476
#define T_DRONE 477
#define T_EXTERNAL 478
#define T_FULL 479
#define T_HIDECHANNELS 480
#define T_INVISIBLE 481
#define T_IPV4 482
#define T_IPV6 483
#define T_LOCOPS 484
#define T_LOGPATH 485
#define T_L_CRIT 486
#define T_L_DEBUG 487
#define T_L_ERROR 488
#define T_L_INFO 489
#define T_L_NOTICE 490
#define T_L_TRACE 491
#define T_L_WARN 492
#define T_MAX_CLIENTS 493
#define T_NCHANGE 494
#define T_OPERWALL 495
#define T_REJ 496
#define T_SERVNOTICE 497
#define T_SKILL 498
#define T_SPY 499
#define T_SSL 500
#define T_UMODES 501
#define T_UNAUTH 502
#define T_UNRESV 503
#define T_UNXLINE 504
#define T_WALLOP 505
#define THROTTLE_TIME 506
#define TOPICBURST 507
#define TRUE_NO_OPER_FLOOD 508
#define TKLINE 509
#define TXLINE 510
#define TRESV 511
#define UNKLINE 512
#define USER 513
#define USE_EGD 514
#define USE_EXCEPT 515
#define USE_INVEX 516
#define HIDE_KILLER 517
#define USE_REGEX_BANS 518
#define USE_KNOCK 519
#define USE_NOCTCP 520
#define USE_LOGGING 521
#define USE_WHOIS_ACTUALLY 522
#define VHOST 523
#define VHOST6 524
#define XLINE 525
#define WARN 526
#define WARN_NO_NLINE 527




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 135 "ircd_parser.y"

  int number;
  char *string;



/* Line 214 of yacc.c  */
#line 770 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 782 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1508

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  278
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  362
/* YYNRULES -- Number of rules.  */
#define YYNRULES  781
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1581

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   527

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   277,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   273,
       2,   276,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   275,     2,   274,     2,     2,     2,     2,
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
     265,   266,   267,   268,   269,   270,   271,   272
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    52,    55,    56,    58,
      61,    65,    69,    73,    77,    81,    82,    84,    87,    91,
      95,    99,   105,   108,   110,   112,   114,   117,   122,   127,
     128,   135,   138,   140,   142,   144,   146,   149,   154,   159,
     164,   170,   173,   175,   177,   179,   181,   183,   185,   187,
     189,   191,   193,   195,   197,   200,   205,   210,   215,   220,
     225,   230,   235,   240,   245,   250,   255,   261,   264,   266,
     268,   270,   272,   275,   280,   285,   290,   296,   299,   301,
     303,   305,   307,   309,   311,   313,   315,   317,   319,   321,
     323,   325,   328,   333,   338,   343,   348,   353,   358,   363,
     368,   373,   378,   383,   388,   393,   398,   403,   408,   413,
     418,   419,   427,   428,   430,   433,   435,   437,   439,   441,
     443,   445,   447,   449,   451,   453,   455,   457,   459,   461,
     463,   465,   467,   469,   471,   473,   475,   477,   479,   481,
     483,   486,   491,   493,   498,   503,   508,   513,   518,   523,
     524,   530,   534,   536,   538,   540,   542,   544,   546,   548,
     550,   552,   554,   556,   558,   560,   562,   564,   566,   568,
     570,   572,   574,   576,   581,   586,   591,   596,   601,   606,
     611,   616,   621,   626,   631,   636,   641,   646,   651,   652,
     658,   662,   664,   665,   669,   670,   673,   675,   677,   679,
     681,   683,   685,   687,   689,   691,   693,   695,   697,   699,
     701,   703,   705,   706,   714,   715,   717,   720,   722,   724,
     726,   728,   730,   732,   734,   736,   738,   740,   742,   744,
     746,   748,   751,   756,   758,   763,   768,   773,   778,   783,
     788,   793,   798,   803,   808,   813,   818,   819,   826,   827,
     833,   837,   839,   841,   843,   846,   848,   850,   852,   854,
     856,   859,   860,   866,   870,   872,   874,   878,   883,   888,
     889,   896,   899,   901,   903,   905,   907,   909,   911,   913,
     915,   917,   919,   921,   923,   925,   927,   929,   931,   933,
     935,   937,   940,   945,   950,   955,   960,   965,   970,   971,
     977,   981,   983,   984,   988,   989,   992,   994,   996,   998,
    1000,  1002,  1004,  1006,  1008,  1010,  1012,  1014,  1016,  1021,
    1026,  1031,  1036,  1041,  1046,  1051,  1056,  1061,  1066,  1071,
    1072,  1079,  1082,  1084,  1086,  1088,  1090,  1093,  1098,  1103,
    1108,  1109,  1116,  1119,  1121,  1123,  1125,  1127,  1130,  1135,
    1140,  1141,  1147,  1151,  1153,  1155,  1157,  1159,  1161,  1163,
    1165,  1167,  1169,  1171,  1173,  1175,  1177,  1179,  1180,  1187,
    1190,  1192,  1194,  1196,  1199,  1204,  1205,  1211,  1215,  1217,
    1219,  1221,  1223,  1225,  1227,  1229,  1231,  1233,  1235,  1237,
    1239,  1240,  1248,  1249,  1251,  1254,  1256,  1258,  1260,  1262,
    1264,  1266,  1268,  1270,  1272,  1274,  1276,  1278,  1280,  1282,
    1284,  1286,  1288,  1290,  1292,  1294,  1297,  1302,  1304,  1309,
    1314,  1319,  1324,  1329,  1334,  1339,  1344,  1345,  1351,  1355,
    1357,  1358,  1362,  1363,  1366,  1368,  1370,  1372,  1374,  1376,
    1378,  1383,  1388,  1393,  1398,  1403,  1408,  1413,  1418,  1423,
    1428,  1429,  1436,  1437,  1443,  1447,  1449,  1451,  1454,  1456,
    1458,  1460,  1462,  1464,  1469,  1474,  1475,  1482,  1485,  1487,
    1489,  1491,  1493,  1498,  1503,  1509,  1512,  1514,  1516,  1518,
    1520,  1525,  1530,  1531,  1538,  1539,  1545,  1549,  1551,  1553,
    1556,  1558,  1560,  1562,  1564,  1566,  1571,  1576,  1582,  1585,
    1587,  1589,  1591,  1593,  1595,  1597,  1599,  1601,  1603,  1605,
    1607,  1609,  1611,  1613,  1615,  1617,  1619,  1621,  1623,  1625,
    1627,  1629,  1631,  1633,  1635,  1637,  1639,  1641,  1643,  1645,
    1647,  1649,  1651,  1653,  1655,  1657,  1659,  1661,  1663,  1665,
    1667,  1669,  1671,  1673,  1675,  1677,  1679,  1681,  1683,  1685,
    1687,  1689,  1691,  1693,  1695,  1697,  1699,  1701,  1703,  1705,
    1707,  1709,  1711,  1716,  1721,  1726,  1731,  1736,  1741,  1746,
    1751,  1756,  1761,  1766,  1771,  1776,  1781,  1786,  1791,  1796,
    1801,  1806,  1811,  1816,  1821,  1826,  1831,  1836,  1841,  1846,
    1851,  1856,  1861,  1866,  1871,  1876,  1881,  1886,  1891,  1896,
    1901,  1906,  1911,  1916,  1921,  1926,  1931,  1936,  1941,  1946,
    1951,  1956,  1961,  1966,  1971,  1976,  1981,  1986,  1991,  1992,
    1998,  2002,  2004,  2006,  2008,  2010,  2012,  2014,  2016,  2018,
    2020,  2022,  2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,
    2040,  2042,  2044,  2045,  2051,  2055,  2057,  2059,  2061,  2063,
    2065,  2067,  2069,  2071,  2073,  2075,  2077,  2079,  2081,  2083,
    2085,  2087,  2089,  2091,  2093,  2095,  2097,  2102,  2107,  2112,
    2117,  2122,  2123,  2130,  2133,  2135,  2137,  2139,  2141,  2143,
    2145,  2147,  2149,  2154,  2159,  2160,  2166,  2170,  2172,  2174,
    2176,  2181,  2186,  2187,  2193,  2197,  2199,  2201,  2203,  2209,
    2212,  2214,  2216,  2218,  2220,  2222,  2224,  2226,  2228,  2230,
    2232,  2234,  2236,  2238,  2240,  2242,  2244,  2246,  2248,  2250,
    2252,  2254,  2256,  2258,  2263,  2268,  2273,  2278,  2283,  2288,
    2293,  2298,  2303,  2308,  2313,  2318,  2323,  2328,  2333,  2338,
    2343,  2348,  2353,  2358,  2363,  2369,  2372,  2374,  2376,  2378,
    2380,  2382,  2384,  2386,  2388,  2390,  2395,  2400,  2405,  2410,
    2415,  2420
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     279,     0,    -1,    -1,   279,   280,    -1,   311,    -1,   317,
      -1,   332,    -1,   606,    -1,   371,    -1,   390,    -1,   404,
      -1,   297,    -1,   630,    -1,   432,    -1,   439,    -1,   449,
      -1,   458,    -1,   489,    -1,   499,    -1,   505,    -1,   520,
      -1,   590,    -1,   510,    -1,   285,    -1,   290,    -1,     1,
     273,    -1,     1,   274,    -1,    -1,   282,    -1,   142,   281,
      -1,   142,   181,   281,    -1,   142,   182,   281,    -1,   142,
     183,   281,    -1,   142,   184,   281,    -1,   142,   185,   281,
      -1,    -1,   284,    -1,   142,   283,    -1,   142,    15,   283,
      -1,   142,    16,   283,    -1,   142,    17,   283,    -1,   129,
     275,   286,   274,   273,    -1,   286,   287,    -1,   287,    -1,
     288,    -1,   289,    -1,     1,   273,    -1,   128,   276,   164,
     273,    -1,   159,   276,   164,   273,    -1,    -1,    50,   291,
     275,   292,   274,   273,    -1,   292,   293,    -1,   293,    -1,
     294,    -1,   295,    -1,   296,    -1,     1,   273,    -1,   130,
     276,   164,   273,    -1,    54,   276,   282,   273,    -1,   166,
     276,   164,   273,    -1,   189,   275,   298,   274,   273,    -1,
     298,   299,    -1,   299,    -1,   302,    -1,   307,    -1,   310,
      -1,   304,    -1,   305,    -1,   306,    -1,   309,    -1,   301,
      -1,   308,    -1,   303,    -1,   300,    -1,     1,   273,    -1,
     178,   276,   164,   273,    -1,   176,   276,   164,   273,    -1,
     130,   276,   164,   273,    -1,   193,   276,   164,   273,    -1,
      43,   276,   164,   273,    -1,   134,   276,   164,   273,    -1,
     133,   276,   164,   273,    -1,   268,   276,   164,   273,    -1,
     269,   276,   164,   273,    -1,   238,   276,   142,   273,    -1,
      94,   276,   207,   273,    -1,     5,   275,   312,   274,   273,
      -1,   312,   313,    -1,   313,    -1,   314,    -1,   316,    -1,
     315,    -1,     1,   273,    -1,   130,   276,   164,   273,    -1,
      56,   276,   164,   273,    -1,    43,   276,   164,   273,    -1,
     113,   275,   318,   274,   273,    -1,   318,   319,    -1,   319,
      -1,   320,    -1,   321,    -1,   330,    -1,   331,    -1,   322,
      -1,   324,    -1,   326,    -1,   327,    -1,   329,    -1,   325,
      -1,   328,    -1,   323,    -1,     1,   273,    -1,   230,   276,
     164,   273,    -1,   149,   276,   164,   273,    -1,    72,   276,
     164,   273,    -1,    65,   276,   164,   273,    -1,    70,   276,
     164,   273,    -1,    71,   276,   164,   273,    -1,    68,   276,
     164,   273,    -1,    67,   276,   164,   273,    -1,    69,   276,
     164,   273,    -1,    66,   276,   164,   273,    -1,   114,   276,
     231,   273,    -1,   114,   276,   233,   273,    -1,   114,   276,
     237,   273,    -1,   114,   276,   235,   273,    -1,   114,   276,
     236,   273,    -1,   114,   276,   234,   273,    -1,   114,   276,
     232,   273,    -1,   266,   276,   207,   273,    -1,    -1,   147,
     333,   334,   275,   335,   274,   273,    -1,    -1,   338,    -1,
     335,   336,    -1,   336,    -1,   337,    -1,   339,    -1,   341,
      -1,   360,    -1,   361,    -1,   345,    -1,   344,    -1,   349,
      -1,   350,    -1,   352,    -1,   353,    -1,   354,    -1,   355,
      -1,   356,    -1,   351,    -1,   357,    -1,   358,    -1,   359,
      -1,   363,    -1,   342,    -1,   343,    -1,   340,    -1,   362,
      -1,   364,    -1,     1,   273,    -1,   130,   276,   164,   273,
      -1,   164,    -1,   258,   276,   164,   273,    -1,    28,   276,
     164,   273,    -1,   158,   276,   164,   273,    -1,    58,   276,
     207,   273,    -1,   177,   276,   164,   273,    -1,    27,   276,
     164,   273,    -1,    -1,   246,   346,   276,   347,   273,    -1,
     347,   277,   348,    -1,   348,    -1,   214,    -1,   217,    -1,
     218,    -1,   220,    -1,   221,    -1,   224,    -1,   243,    -1,
     239,    -1,   241,    -1,   247,    -1,   244,    -1,   223,    -1,
     240,    -1,   242,    -1,   226,    -1,   250,    -1,   215,    -1,
     216,    -1,   229,    -1,   225,    -1,    82,   276,   207,   273,
      -1,   172,   276,   207,   273,    -1,   173,   276,   207,   273,
      -1,   102,   276,   207,   273,    -1,   270,   276,   207,   273,
      -1,   257,   276,   207,   273,    -1,    75,   276,   207,   273,
      -1,   136,   276,   207,   273,    -1,    44,   276,   207,   273,
      -1,   170,   276,   207,   273,    -1,     5,   276,   207,   273,
      -1,    87,   276,   207,   273,    -1,    89,   276,   207,   273,
      -1,   152,   276,   207,   273,    -1,   240,   276,   207,   273,
      -1,    -1,    63,   365,   276,   366,   273,    -1,   366,   277,
     367,    -1,   367,    -1,    -1,   141,   368,   370,    -1,    -1,
     369,   370,    -1,    82,    -1,   172,    -1,   102,    -1,   257,
      -1,   270,    -1,    75,    -1,    44,    -1,   170,    -1,     5,
      -1,    87,    -1,   136,    -1,   240,    -1,   152,    -1,    89,
      -1,   173,    -1,    58,    -1,    -1,    27,   372,   373,   275,
     374,   274,   273,    -1,    -1,   377,    -1,   374,   375,    -1,
     375,    -1,   376,    -1,   387,    -1,   388,    -1,   378,    -1,
     379,    -1,   389,    -1,   380,    -1,   381,    -1,   382,    -1,
     383,    -1,   384,    -1,   385,    -1,   386,    -1,     1,   273,
      -1,   130,   276,   164,   273,    -1,   164,    -1,   161,   276,
     282,   273,    -1,   162,   276,   282,   273,    -1,   145,   276,
     142,   273,    -1,    35,   276,   282,   273,    -1,   123,   276,
     142,   273,    -1,   118,   276,   142,   273,    -1,   120,   276,
     142,   273,    -1,   119,   276,   142,   273,    -1,   186,   276,
     284,   273,    -1,    24,   276,   142,   273,    -1,    25,   276,
     142,   273,    -1,   144,   276,   142,   273,    -1,    -1,   111,
     391,   275,   396,   274,   273,    -1,    -1,    63,   393,   276,
     394,   273,    -1,   394,   277,   395,    -1,   395,    -1,   245,
      -1,    86,    -1,   396,   397,    -1,   397,    -1,   398,    -1,
     392,    -1,   402,    -1,   403,    -1,     1,   273,    -1,    -1,
     163,   276,   400,   399,   273,    -1,   400,   277,   401,    -1,
     401,    -1,   142,    -1,   142,   212,   142,    -1,    99,   276,
     164,   273,    -1,    93,   276,   164,   273,    -1,    -1,    83,
     405,   275,   406,   274,   273,    -1,   406,   407,    -1,   407,
      -1,   408,    -1,   409,    -1,   412,    -1,   414,    -1,   421,
      -1,   422,    -1,   423,    -1,   425,    -1,   426,    -1,   427,
      -1,   411,    -1,   430,    -1,   428,    -1,   429,    -1,   424,
      -1,   431,    -1,   413,    -1,   410,    -1,     1,   273,    -1,
     258,   276,   164,   273,    -1,   158,   276,   164,   273,    -1,
      28,   276,   164,   273,    -1,   201,   276,   207,   273,    -1,
      27,   276,   164,   273,    -1,    58,   276,   207,   273,    -1,
      -1,    63,   415,   276,   416,   273,    -1,   416,   277,   417,
      -1,   417,    -1,    -1,   141,   418,   420,    -1,    -1,   419,
     420,    -1,   201,    -1,    59,    -1,   103,    -1,    84,    -1,
      21,    -1,    22,    -1,   140,    -1,    77,    -1,   180,    -1,
      51,    -1,   132,    -1,   131,    -1,   103,   276,   207,   273,
      -1,    84,   276,   207,   273,    -1,    59,   276,   207,   273,
      -1,    21,   276,   207,   273,    -1,   140,   276,   207,   273,
      -1,    77,   276,   207,   273,    -1,   200,   276,   164,   273,
      -1,   168,   276,   164,   273,    -1,   167,   276,   142,   273,
      -1,   132,   276,   207,   273,    -1,   131,   276,   207,   273,
      -1,    -1,   179,   433,   275,   434,   274,   273,    -1,   434,
     435,    -1,   435,    -1,   436,    -1,   437,    -1,   438,    -1,
       1,   273,    -1,   166,   276,   164,   273,    -1,    23,   276,
     164,   273,    -1,   135,   276,   164,   273,    -1,    -1,   195,
     440,   275,   441,   274,   273,    -1,   441,   442,    -1,   442,
      -1,   443,    -1,   444,    -1,   445,    -1,     1,   273,    -1,
     130,   276,   164,   273,    -1,   258,   276,   164,   273,    -1,
      -1,   197,   446,   276,   447,   273,    -1,   447,   277,   448,
      -1,   448,    -1,   102,    -1,   254,    -1,   257,    -1,   270,
      -1,   255,    -1,   249,    -1,   179,    -1,   256,    -1,   248,
      -1,   229,    -1,   190,    -1,   170,    -1,   213,    -1,    -1,
     196,   450,   275,   451,   274,   273,    -1,   451,   452,    -1,
     452,    -1,   453,    -1,   454,    -1,     1,   273,    -1,   130,
     276,   164,   273,    -1,    -1,   197,   455,   276,   456,   273,
      -1,   456,   277,   457,    -1,   457,    -1,   102,    -1,   254,
      -1,   257,    -1,   270,    -1,   255,    -1,   249,    -1,   179,
      -1,   256,    -1,   248,    -1,   229,    -1,   213,    -1,    -1,
      34,   459,   460,   275,   461,   274,   273,    -1,    -1,   464,
      -1,   461,   462,    -1,   462,    -1,   463,    -1,   465,    -1,
     466,    -1,   467,    -1,   468,    -1,   470,    -1,   469,    -1,
     471,    -1,   472,    -1,   485,    -1,   486,    -1,   487,    -1,
     483,    -1,   480,    -1,   482,    -1,   481,    -1,   479,    -1,
     488,    -1,   484,    -1,     1,   273,    -1,   130,   276,   164,
     273,    -1,   164,    -1,    93,   276,   164,   273,    -1,   268,
     276,   164,   273,    -1,   187,   276,   164,   273,    -1,     3,
     276,   164,   273,    -1,   163,   276,   142,   273,    -1,     6,
     276,   227,   273,    -1,     6,   276,   228,   273,    -1,    62,
     276,   164,   273,    -1,    -1,    63,   473,   276,   474,   273,
      -1,   474,   277,   475,    -1,   475,    -1,    -1,   141,   476,
     478,    -1,    -1,   477,   478,    -1,   108,    -1,    32,    -1,
      36,    -1,    11,    -1,    13,    -1,   252,    -1,   177,   276,
     164,   273,    -1,    58,   276,   207,   273,    -1,    36,   276,
     207,   273,    -1,    32,   276,   207,   273,    -1,    11,   276,
     207,   273,    -1,   252,   276,   207,   273,    -1,    95,   276,
     164,   273,    -1,   109,   276,   164,   273,    -1,    27,   276,
     164,   273,    -1,    26,   276,   164,   273,    -1,    -1,   100,
     490,   275,   495,   274,   273,    -1,    -1,   197,   492,   276,
     493,   273,    -1,   493,   277,   494,    -1,   494,    -1,   169,
      -1,   495,   496,    -1,   496,    -1,   497,    -1,   498,    -1,
     491,    -1,     1,    -1,   258,   276,   164,   273,    -1,   166,
     276,   164,   273,    -1,    -1,    42,   500,   275,   501,   274,
     273,    -1,   501,   502,    -1,   502,    -1,   503,    -1,   504,
      -1,     1,    -1,    99,   276,   164,   273,    -1,   166,   276,
     164,   273,    -1,    60,   275,   506,   274,   273,    -1,   506,
     507,    -1,   507,    -1,   508,    -1,   509,    -1,     1,    -1,
      99,   276,   164,   273,    -1,    28,   276,   164,   273,    -1,
      -1,    73,   511,   275,   516,   274,   273,    -1,    -1,   197,
     513,   276,   514,   273,    -1,   514,   277,   515,    -1,   515,
      -1,   169,    -1,   516,   517,    -1,   517,    -1,   518,    -1,
     519,    -1,   512,    -1,     1,    -1,   130,   276,   164,   273,
      -1,   166,   276,   164,   273,    -1,    74,   275,   521,   274,
     273,    -1,   521,   522,    -1,   522,    -1,   530,    -1,   531,
      -1,   533,    -1,   534,    -1,   535,    -1,   536,    -1,   537,
      -1,   538,    -1,   539,    -1,   540,    -1,   541,    -1,   529,
      -1,   543,    -1,   544,    -1,   549,    -1,   550,    -1,   567,
      -1,   552,    -1,   555,    -1,   557,    -1,   556,    -1,   560,
      -1,   553,    -1,   561,    -1,   562,    -1,   563,    -1,   564,
      -1,   566,    -1,   565,    -1,   581,    -1,   568,    -1,   572,
      -1,   573,    -1,   577,    -1,   558,    -1,   559,    -1,   587,
      -1,   585,    -1,   586,    -1,   569,    -1,   532,    -1,   570,
      -1,   551,    -1,   571,    -1,   588,    -1,   576,    -1,   542,
      -1,   589,    -1,   574,    -1,   575,    -1,   525,    -1,   528,
      -1,   523,    -1,   524,    -1,   526,    -1,   527,    -1,   554,
      -1,   545,    -1,   546,    -1,   547,    -1,   548,    -1,     1,
      -1,    80,   276,   142,   273,    -1,    81,   276,   142,   273,
      -1,    13,   276,   207,   273,    -1,   267,   276,   207,   273,
      -1,   171,   276,   282,   273,    -1,   194,   276,   207,   273,
      -1,   101,   276,   142,   273,    -1,    92,   276,   207,   273,
      -1,    97,   276,   207,   273,    -1,    49,   276,   207,   273,
      -1,    61,   276,   207,   273,    -1,     8,   276,   207,   273,
      -1,   122,   276,   282,   273,    -1,   121,   276,   142,   273,
      -1,   115,   276,   142,   273,    -1,     9,   276,   282,   273,
      -1,    10,   276,   207,   273,    -1,   211,   276,   282,   273,
      -1,   210,   276,   282,   273,    -1,    85,   276,   142,   273,
      -1,   105,   276,   207,   273,    -1,   104,   276,   164,   273,
      -1,    29,   276,   164,   273,    -1,    30,   276,   164,   273,
      -1,    31,   276,   164,   273,    -1,   191,   276,   164,   273,
      -1,    98,   276,   207,   273,    -1,   272,   276,   207,   273,
      -1,   202,   276,   207,   273,    -1,   205,   276,   207,   273,
      -1,   206,   276,   207,   273,    -1,   262,   276,   207,   273,
      -1,   204,   276,   207,   273,    -1,   204,   276,   208,   273,
      -1,   203,   276,   207,   273,    -1,   203,   276,   208,   273,
      -1,   156,   276,   282,   273,    -1,    20,   276,   282,   273,
      -1,   148,   276,   207,   273,    -1,   157,   276,   282,   273,
      -1,   198,   276,   207,   273,    -1,   139,   276,   207,   273,
      -1,   253,   276,   207,   273,    -1,   151,   276,   207,   273,
      -1,   125,   276,   164,   273,    -1,    96,   276,   282,   273,
      -1,    53,   276,   142,   273,    -1,   124,   276,   142,   273,
      -1,   192,   276,   164,   273,    -1,    38,   276,   164,   273,
      -1,    33,   276,   142,   273,    -1,   259,   276,   207,   273,
      -1,    55,   276,   164,   273,    -1,   160,   276,   207,   273,
      -1,    45,   276,   207,   273,    -1,   251,   276,   282,   273,
      -1,    -1,   153,   578,   276,   579,   273,    -1,   579,   277,
     580,    -1,   580,    -1,   214,    -1,   217,    -1,   218,    -1,
     220,    -1,   221,    -1,   224,    -1,   243,    -1,   239,    -1,
     241,    -1,   247,    -1,   244,    -1,   223,    -1,   240,    -1,
     242,    -1,   226,    -1,   250,    -1,   215,    -1,   216,    -1,
     229,    -1,   225,    -1,    -1,   150,   582,   276,   583,   273,
      -1,   583,   277,   584,    -1,   584,    -1,   214,    -1,   217,
      -1,   218,    -1,   220,    -1,   221,    -1,   224,    -1,   243,
      -1,   239,    -1,   241,    -1,   247,    -1,   244,    -1,   223,
      -1,   240,    -1,   242,    -1,   226,    -1,   250,    -1,   215,
      -1,   216,    -1,   229,    -1,   225,    -1,   126,   276,   142,
     273,    -1,   127,   276,   142,   273,    -1,    39,   276,   142,
     273,    -1,   219,   276,   284,   273,    -1,    52,   276,   207,
     273,    -1,    -1,    76,   591,   275,   592,   274,   273,    -1,
     592,   593,    -1,   593,    -1,   594,    -1,   595,    -1,   596,
      -1,   600,    -1,   601,    -1,   602,    -1,     1,    -1,    57,
     276,   207,   273,    -1,    54,   276,   282,   273,    -1,    -1,
     113,   597,   276,   598,   273,    -1,   598,   277,   599,    -1,
     599,    -1,   209,    -1,    12,    -1,   258,   276,   164,   273,
      -1,   130,   276,   164,   273,    -1,    -1,     4,   603,   276,
     604,   273,    -1,   604,   277,   605,    -1,   605,    -1,   209,
      -1,    12,    -1,    23,   275,   607,   274,   273,    -1,   607,
     608,    -1,   608,    -1,   612,    -1,   613,    -1,   614,    -1,
     616,    -1,   617,    -1,   615,    -1,   622,    -1,   618,    -1,
     619,    -1,   620,    -1,   621,    -1,   623,    -1,   624,    -1,
     625,    -1,   611,    -1,   626,    -1,   627,    -1,   628,    -1,
     629,    -1,   610,    -1,   609,    -1,     1,    -1,    37,   276,
     207,   273,    -1,    46,   276,   207,   273,    -1,   174,   276,
     207,   273,    -1,    48,   276,   207,   273,    -1,   260,   276,
     207,   273,    -1,   261,   276,   207,   273,    -1,   263,   276,
     207,   273,    -1,   264,   276,   207,   273,    -1,   265,   276,
     207,   273,    -1,   106,   276,   282,   273,    -1,   107,   276,
     282,   273,    -1,   117,   276,   142,   273,    -1,   165,   276,
     207,   273,    -1,   116,   276,   142,   273,    -1,    41,   276,
     142,   273,    -1,    40,   276,   142,   273,    -1,   137,   276,
     207,   273,    -1,   138,   276,   207,   273,    -1,    14,   276,
     207,   273,    -1,   154,   276,   142,   273,    -1,   155,   276,
     282,   273,    -1,   188,   275,   631,   274,   273,    -1,   631,
     632,    -1,   632,    -1,   633,    -1,   634,    -1,   636,    -1,
     638,    -1,   637,    -1,   635,    -1,   639,    -1,     1,    -1,
      64,   276,   207,   273,    -1,    91,   276,   207,   273,    -1,
      88,   276,   164,   273,    -1,   110,   276,   282,   273,    -1,
      86,   276,   207,   273,    -1,    47,   276,   207,   273,    -1,
      90,   276,   207,   273,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   411,   411,   412,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   441,   441,   442,
     446,   450,   454,   458,   462,   468,   468,   469,   470,   471,
     472,   479,   482,   482,   483,   483,   483,   485,   502,   515,
     514,   535,   535,   537,   537,   537,   537,   539,   548,   554,
     566,   569,   570,   571,   571,   572,   572,   573,   573,   574,
     575,   575,   576,   576,   577,   579,   613,   673,   687,   702,
     711,   725,   734,   762,   792,   815,   865,   867,   867,   868,
     868,   869,   869,   871,   880,   889,   902,   904,   905,   907,
     907,   908,   909,   909,   910,   910,   911,   911,   912,   912,
     913,   914,   916,   920,   924,   931,   938,   945,   952,   959,
     966,   973,   980,   984,   988,   992,   996,  1000,  1004,  1010,
    1020,  1019,  1121,  1121,  1122,  1122,  1123,  1123,  1123,  1123,
    1124,  1124,  1125,  1125,  1125,  1126,  1126,  1126,  1127,  1127,
    1127,  1128,  1128,  1128,  1128,  1129,  1129,  1129,  1129,  1130,
    1130,  1132,  1144,  1156,  1190,  1211,  1223,  1234,  1276,  1286,
    1285,  1291,  1291,  1292,  1296,  1300,  1304,  1308,  1312,  1316,
    1320,  1324,  1328,  1332,  1336,  1340,  1344,  1348,  1352,  1356,
    1360,  1364,  1368,  1374,  1385,  1396,  1407,  1418,  1429,  1440,
    1451,  1462,  1473,  1484,  1495,  1506,  1517,  1528,  1540,  1539,
    1543,  1543,  1544,  1544,  1545,  1545,  1547,  1554,  1561,  1568,
    1575,  1582,  1589,  1596,  1603,  1610,  1617,  1624,  1631,  1638,
    1645,  1652,  1666,  1665,  1714,  1714,  1716,  1716,  1717,  1718,
    1718,  1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,  1727,
    1728,  1729,  1731,  1740,  1749,  1755,  1761,  1767,  1773,  1779,
    1785,  1791,  1797,  1803,  1809,  1815,  1825,  1824,  1841,  1840,
    1845,  1845,  1846,  1850,  1856,  1856,  1857,  1857,  1857,  1857,
    1857,  1859,  1859,  1861,  1861,  1863,  1877,  1897,  1906,  1919,
    1918,  1995,  1995,  1996,  1996,  1996,  1996,  1997,  1997,  1998,
    1998,  1998,  1999,  1999,  1999,  2000,  2000,  2000,  2001,  2001,
    2001,  2001,  2003,  2040,  2053,  2074,  2085,  2094,  2106,  2105,
    2109,  2109,  2110,  2110,  2111,  2111,  2113,  2121,  2128,  2135,
    2142,  2149,  2156,  2163,  2170,  2177,  2184,  2191,  2200,  2211,
    2222,  2233,  2244,  2255,  2267,  2286,  2296,  2305,  2316,  2332,
    2331,  2347,  2347,  2348,  2348,  2348,  2348,  2350,  2359,  2374,
    2388,  2387,  2403,  2403,  2404,  2404,  2404,  2404,  2406,  2415,
    2438,  2437,  2443,  2443,  2444,  2448,  2452,  2456,  2460,  2464,
    2468,  2472,  2476,  2480,  2484,  2488,  2492,  2502,  2501,  2518,
    2518,  2519,  2519,  2519,  2521,  2528,  2527,  2533,  2533,  2534,
    2538,  2542,  2546,  2550,  2554,  2558,  2562,  2566,  2570,  2574,
    2584,  2583,  2729,  2729,  2730,  2730,  2731,  2731,  2731,  2732,
    2732,  2733,  2733,  2734,  2734,  2734,  2735,  2735,  2735,  2736,
    2736,  2736,  2737,  2737,  2738,  2738,  2740,  2752,  2764,  2773,
    2799,  2817,  2835,  2841,  2845,  2853,  2863,  2862,  2866,  2866,
    2867,  2867,  2868,  2868,  2870,  2877,  2888,  2895,  2902,  2909,
    2919,  2960,  2971,  2982,  2997,  3008,  3019,  3032,  3045,  3054,
    3090,  3089,  3153,  3152,  3156,  3156,  3157,  3163,  3163,  3164,
    3164,  3164,  3164,  3166,  3185,  3195,  3194,  3216,  3216,  3217,
    3217,  3217,  3219,  3228,  3240,  3242,  3242,  3243,  3243,  3243,
    3245,  3263,  3297,  3296,  3338,  3337,  3341,  3341,  3342,  3348,
    3348,  3349,  3349,  3349,  3349,  3351,  3357,  3366,  3369,  3369,
    3370,  3370,  3371,  3371,  3372,  3372,  3373,  3373,  3374,  3375,
    3375,  3376,  3376,  3377,  3377,  3378,  3378,  3379,  3379,  3380,
    3380,  3381,  3381,  3382,  3382,  3383,  3383,  3384,  3384,  3385,
    3385,  3386,  3386,  3387,  3387,  3388,  3388,  3389,  3389,  3390,
    3390,  3391,  3391,  3392,  3392,  3393,  3393,  3394,  3394,  3395,
    3395,  3396,  3396,  3397,  3397,  3398,  3398,  3399,  3399,  3399,
    3400,  3401,  3405,  3410,  3415,  3420,  3425,  3430,  3435,  3440,
    3445,  3450,  3455,  3460,  3465,  3470,  3475,  3480,  3485,  3490,
    3495,  3501,  3512,  3517,  3526,  3535,  3544,  3553,  3562,  3567,
    3572,  3577,  3582,  3587,  3592,  3595,  3600,  3603,  3608,  3613,
    3618,  3623,  3628,  3633,  3638,  3643,  3648,  3659,  3664,  3669,
    3674,  3683,  3715,  3733,  3738,  3747,  3752,  3757,  3763,  3762,
    3767,  3767,  3768,  3771,  3774,  3777,  3780,  3783,  3786,  3789,
    3792,  3795,  3798,  3801,  3804,  3807,  3810,  3813,  3816,  3819,
    3822,  3825,  3831,  3830,  3835,  3835,  3836,  3839,  3842,  3845,
    3848,  3851,  3854,  3857,  3860,  3863,  3866,  3869,  3872,  3875,
    3878,  3881,  3884,  3887,  3890,  3893,  3898,  3903,  3908,  3913,
    3918,  3927,  3926,  3950,  3950,  3951,  3952,  3953,  3954,  3955,
    3956,  3957,  3959,  3965,  3972,  3971,  3976,  3976,  3977,  3981,
    3987,  4021,  4031,  4030,  4080,  4080,  4081,  4085,  4094,  4097,
    4097,  4098,  4098,  4099,  4099,  4099,  4099,  4100,  4100,  4101,
    4101,  4102,  4102,  4103,  4104,  4104,  4105,  4105,  4106,  4106,
    4107,  4108,  4108,  4110,  4115,  4120,  4125,  4130,  4135,  4140,
    4145,  4150,  4155,  4160,  4165,  4170,  4175,  4180,  4185,  4190,
    4195,  4200,  4205,  4210,  4218,  4221,  4221,  4222,  4222,  4223,
    4224,  4225,  4225,  4226,  4227,  4229,  4235,  4241,  4250,  4264,
    4270,  4276
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
  "DNSBL", "DNSBL_EXEMPT", "DOT_IN_IP6_ADDR", "DOTS_IN_IDENT", "DURATION",
  "EGDPOOL_PATH", "EMAIL", "ENABLE", "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT",
  "FAILED_OPER_NOTICE", "FAKENAME", "IRCD_FLAGS", "FLATTEN_LINKS",
  "FFAILED_OPERLOG", "FKILLLOG", "FKLINELOG", "FGLINELOG", "FIOERRLOG",
  "FOPERLOG", "FOPERSPYLOG", "FUSERLOG", "GECOS", "GENERAL", "GLINE",
  "GLINES", "GLINE_EXEMPT", "GLINE_LOG", "GLINE_TIME", "GLINE_MIN_CIDR",
  "GLINE_MIN_CIDR6", "GLOBAL_KILL", "IRCD_AUTH", "NEED_IDENT",
  "HAVENT_READ_CONF", "HIDDEN", "HIDDEN_ADMIN", "HIDDEN_NAME",
  "HIDDEN_OPER", "HIDE_SERVER_IPS", "HIDE_SERVERS", "HIDE_SPOOF_IPS",
  "HOST", "HUB", "HUB_MASK", "IDLETIME", "IGNORE_BOGUS_TS",
  "INVISIBLE_ON_CONNECT", "IP", "KILL", "KILL_CHASE_TIME_LIMIT", "KLINE",
  "KLINE_EXEMPT", "KLINE_REASON", "KLINE_WITH_REASON", "KNOCK_DELAY",
  "KNOCK_DELAY_CHANNEL", "LAZYLINK", "LEAF_MASK", "LINKS_DELAY", "LISTEN",
  "T_LOG", "LOGGING", "LOG_LEVEL", "MAX_ACCEPT", "MAX_BANS",
  "MAX_CHANS_PER_USER", "MAX_GLOBAL", "MAX_IDENT", "MAX_LOCAL",
  "MAX_NICK_CHANGES", "MAX_NICK_TIME", "MAX_NUMBER", "MAX_TARGETS",
  "MESSAGE_LOCALE", "MIN_NONWILDCARD", "MIN_NONWILDCARD_SIMPLE", "MODULE",
  "MODULES", "NAME", "NEED_PASSWORD", "IS_WEBIRC", "NETWORK_DESC",
  "NETWORK_NAME", "NICK", "NICK_CHANGES", "NO_CREATE_ON_SPLIT",
  "NO_JOIN_ON_SPLIT", "NO_OPER_FLOOD", "NO_TILDE", "NOT", "NUMBER",
  "NUMBER_PER_IDENT", "NUMBER_PER_CIDR", "NUMBER_PER_IP",
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
  "T_CALLERID", "T_CCONN", "T_NOCTCP", "T_CLIENT_FLOOD", "T_DEAF",
  "T_DEBUG", "T_DRONE", "T_EXTERNAL", "T_FULL", "T_HIDECHANNELS",
  "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOGPATH", "T_L_CRIT",
  "T_L_DEBUG", "T_L_ERROR", "T_L_INFO", "T_L_NOTICE", "T_L_TRACE",
  "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE", "T_OPERWALL", "T_REJ",
  "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL", "T_UMODES", "T_UNAUTH",
  "T_UNRESV", "T_UNXLINE", "T_WALLOP", "THROTTLE_TIME", "TOPICBURST",
  "TRUE_NO_OPER_FLOOD", "TKLINE", "TXLINE", "TRESV", "UNKLINE", "USER",
  "USE_EGD", "USE_EXCEPT", "USE_INVEX", "HIDE_KILLER", "USE_REGEX_BANS",
  "USE_KNOCK", "USE_NOCTCP", "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST",
  "VHOST6", "XLINE", "WARN", "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='",
  "','", "$accept", "conf", "conf_item", "timespec_", "timespec",
  "sizespec_", "sizespec", "modules_entry", "modules_items",
  "modules_item", "modules_module", "modules_path", "dnsbl_entry", "$@1",
  "dnsbl_items", "dnsbl_item", "dnsbl_name", "dnsbl_duration",
  "dnsbl_reason", "serverinfo_entry", "serverinfo_items",
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
  "logging_log_level", "logging_use_logging", "oper_entry", "$@2",
  "oper_name_b", "oper_items", "oper_item", "oper_name", "oper_name_t",
  "oper_user", "oper_client_certificate_hash", "oper_password",
  "oper_encrypted", "oper_rsa_public_key_file", "oper_class",
  "oper_umodes", "$@3", "oper_umodes_items", "oper_umodes_item",
  "oper_global_kill", "oper_remote", "oper_remoteban", "oper_kline",
  "oper_xline", "oper_unkline", "oper_gline", "oper_nick_changes",
  "oper_die", "oper_rehash", "oper_admin", "oper_hidden_admin",
  "oper_hidden_oper", "oper_spy", "oper_operwall", "oper_flags", "$@4",
  "oper_flags_items", "oper_flags_item", "$@5", "$@6",
  "oper_flags_item_atom", "class_entry", "$@7", "class_name_b",
  "class_items", "class_item", "class_name", "class_name_t",
  "class_ping_time", "class_ping_warning", "class_number_per_ip",
  "class_connectfreq", "class_max_number", "class_max_global",
  "class_max_local", "class_max_ident", "class_sendq",
  "class_cidr_bitlen_ipv4", "class_cidr_bitlen_ipv6",
  "class_number_per_cidr", "listen_entry", "$@8", "listen_flags", "$@9",
  "listen_flags_items", "listen_flags_item", "listen_items", "listen_item",
  "listen_port", "$@10", "port_items", "port_item", "listen_address",
  "listen_host", "auth_entry", "$@11", "auth_items", "auth_item",
  "auth_user", "auth_passwd", "auth_client_certificate_hash",
  "auth_spoof_notice", "auth_class", "auth_encrypted", "auth_flags",
  "$@12", "auth_flags_items", "auth_flags_item", "$@13", "$@14",
  "auth_flags_item_atom", "auth_kline_exempt", "auth_need_ident",
  "auth_exceed_limit", "auth_can_flood", "auth_no_tilde",
  "auth_gline_exempt", "auth_spoof", "auth_redir_serv", "auth_redir_port",
  "auth_webirc", "auth_need_password", "resv_entry", "$@15", "resv_items",
  "resv_item", "resv_creason", "resv_channel", "resv_nick", "shared_entry",
  "$@16", "shared_items", "shared_item", "shared_name", "shared_user",
  "shared_type", "$@17", "shared_types", "shared_type_item",
  "cluster_entry", "$@18", "cluster_items", "cluster_item", "cluster_name",
  "cluster_type", "$@19", "cluster_types", "cluster_type_item",
  "connect_entry", "$@20", "connect_name_b", "connect_items",
  "connect_item", "connect_name", "connect_name_t", "connect_host",
  "connect_vhost", "connect_send_password", "connect_accept_password",
  "connect_port", "connect_aftype", "connect_fakename", "connect_flags",
  "$@21", "connect_flags_items", "connect_flags_item", "$@22", "$@23",
  "connect_flags_item_atom", "connect_rsa_public_key_file",
  "connect_encrypted", "connect_cryptlink", "connect_compressed",
  "connect_auto", "connect_topicburst", "connect_hub_mask",
  "connect_leaf_mask", "connect_class", "connect_cipher_preference",
  "kill_entry", "$@24", "kill_type", "$@25", "kill_type_items",
  "kill_type_item", "kill_items", "kill_item", "kill_user", "kill_reason",
  "deny_entry", "$@26", "deny_items", "deny_item", "deny_ip",
  "deny_reason", "exempt_entry", "exempt_items", "exempt_item",
  "exempt_ip", "exempt_client_certificate_hash", "gecos_entry", "$@27",
  "gecos_flags", "$@28", "gecos_flags_items", "gecos_flags_item",
  "gecos_items", "gecos_item", "gecos_name", "gecos_reason",
  "general_entry", "general_items", "general_item",
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
  "$@29", "umode_oitems", "umode_oitem", "general_oper_only_umodes",
  "$@30", "umode_items", "umode_item", "general_min_nonwildcard",
  "general_min_nonwildcard_simple", "general_default_floodcount",
  "general_client_flood", "general_dot_in_ip6_addr", "gline_entry", "$@31",
  "gline_items", "gline_item", "gline_enable", "gline_duration",
  "gline_logging", "$@32", "gline_logging_types",
  "gline_logging_type_item", "gline_user", "gline_server", "gline_action",
  "$@33", "gdeny_types", "gdeny_type_item", "channel_entry",
  "channel_items", "channel_item", "channel_cycle_on_hostchange",
  "channel_disable_fake_channels", "channel_restrict_channels",
  "channel_disable_local_channels", "channel_use_except",
  "channel_use_invex", "channel_use_regex_bans", "channel_use_knock",
  "channel_use_noctcp", "channel_knock_delay",
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
     525,   526,   527,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   278,   279,   279,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   281,   281,   282,
     282,   282,   282,   282,   282,   283,   283,   284,   284,   284,
     284,   285,   286,   286,   287,   287,   287,   288,   289,   291,
     290,   292,   292,   293,   293,   293,   293,   294,   295,   296,
     297,   298,   298,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   312,   313,
     313,   313,   313,   314,   315,   316,   317,   318,   318,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   330,   330,   330,   330,   330,   330,   331,
     333,   332,   334,   334,   335,   335,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   346,
     345,   347,   347,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   365,   364,
     366,   366,   368,   367,   369,   367,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   372,   371,   373,   373,   374,   374,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   391,   390,   393,   392,
     394,   394,   395,   395,   396,   396,   397,   397,   397,   397,
     397,   399,   398,   400,   400,   401,   401,   402,   403,   405,
     404,   406,   406,   407,   407,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   407,
     407,   407,   408,   409,   410,   411,   412,   413,   415,   414,
     416,   416,   418,   417,   419,   417,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   433,
     432,   434,   434,   435,   435,   435,   435,   436,   437,   438,
     440,   439,   441,   441,   442,   442,   442,   442,   443,   444,
     446,   445,   447,   447,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   450,   449,   451,
     451,   452,   452,   452,   453,   455,   454,   456,   456,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     459,   458,   460,   460,   461,   461,   462,   462,   462,   462,
     462,   462,   462,   462,   462,   462,   462,   462,   462,   462,
     462,   462,   462,   462,   462,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   470,   471,   473,   472,   474,   474,
     476,   475,   477,   475,   478,   478,   478,   478,   478,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     490,   489,   492,   491,   493,   493,   494,   495,   495,   496,
     496,   496,   496,   497,   498,   500,   499,   501,   501,   502,
     502,   502,   503,   504,   505,   506,   506,   507,   507,   507,
     508,   509,   511,   510,   513,   512,   514,   514,   515,   516,
     516,   517,   517,   517,   517,   518,   519,   520,   521,   521,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   555,   556,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   578,   577,
     579,   579,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,   580,   580,   580,   580,   580,   580,   580,   580,
     580,   580,   582,   581,   583,   583,   584,   584,   584,   584,
     584,   584,   584,   584,   584,   584,   584,   584,   584,   584,
     584,   584,   584,   584,   584,   584,   585,   586,   587,   588,
     589,   591,   590,   592,   592,   593,   593,   593,   593,   593,
     593,   593,   594,   595,   597,   596,   598,   598,   599,   599,
     600,   601,   603,   602,   604,   604,   605,   605,   606,   607,
     607,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   608,   608,   608,   608,   608,   608,   608,
     608,   608,   608,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   631,   632,   632,   632,
     632,   632,   632,   632,   632,   633,   634,   635,   636,   637,
     638,   639
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     1,     2,
       3,     3,     3,     3,     3,     0,     1,     2,     3,     3,
       3,     5,     2,     1,     1,     1,     2,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     2,     4,     4,     4,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     5,     2,     1,     1,
       1,     1,     2,     4,     4,     4,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     1,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     5,
       3,     1,     0,     3,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     7,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     6,     0,     5,
       3,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     0,     5,     3,     1,     1,     3,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     4,     4,     4,     4,     4,     0,     5,
       3,     1,     0,     3,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     2,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     2,     4,     4,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     6,     2,
       1,     1,     1,     2,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     0,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     5,     3,     1,
       0,     3,     0,     2,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     6,     0,     5,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     5,     2,     1,     1,     1,     1,
       4,     4,     0,     6,     0,     5,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     4,     4,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     0,     5,     3,     1,     1,     1,
       4,     4,     0,     5,     3,     1,     1,     1,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   232,   410,   485,    49,
       0,   502,     0,   691,   289,   470,   266,     0,     0,   130,
     349,     0,     0,   360,   387,     3,    23,    24,    11,     4,
       5,     6,     8,     9,    10,    13,    14,    15,    16,    17,
      18,    19,    22,    20,    21,     7,    12,    25,    26,     0,
       0,   234,   412,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    91,    90,   742,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   720,   741,   740,   735,   721,   722,   723,   726,
     724,   725,   728,   729,   730,   731,   727,   732,   733,   734,
     736,   737,   738,   739,   253,     0,   235,   437,     0,   413,
       0,     0,   499,     0,     0,     0,   496,   497,   498,     0,
     581,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   662,     0,   638,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   519,   572,   573,   570,   574,   575,   571,
     531,   520,   521,   560,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   566,   532,   533,   577,   578,   579,   580,
     534,   535,   562,   537,   542,   576,   538,   540,   539,   554,
     555,   541,   543,   544,   545,   546,   548,   547,   536,   550,
     559,   561,   563,   551,   552,   568,   569,   565,   553,   549,
     557,   558,   556,   564,   567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   103,   110,   104,   108,
     105,   106,   109,   107,   101,   102,     0,     0,     0,     0,
      43,    44,    45,   162,     0,   133,     0,   774,     0,     0,
       0,     0,     0,     0,     0,     0,   766,   767,   768,   772,
     769,   771,   770,   773,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    73,    70,
      63,    72,    66,    67,    68,    64,    71,    69,    65,     0,
       0,    92,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   719,
       0,     0,   491,     0,     0,     0,   488,   489,   490,     0,
       0,     0,     0,     0,    52,    53,    54,    55,     0,     0,
       0,   495,   514,     0,     0,   504,   513,     0,   510,   511,
     512,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   518,   701,   712,     0,     0,   704,     0,
       0,     0,   694,   695,   696,   697,   698,   699,   700,     0,
       0,     0,     0,     0,     0,   318,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   292,
     293,   294,   310,   303,   295,   309,   296,   297,   298,   299,
     307,   300,   301,   302,   305,   306,   304,   308,   482,     0,
     472,     0,   481,     0,   478,   479,   480,     0,   268,     0,
       0,     0,   277,     0,   275,   276,   278,   279,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    46,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,   352,   353,   354,   355,     0,     0,
       0,     0,     0,     0,     0,     0,   765,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,     0,   370,     0,     0,   363,   364,   365,   366,
       0,     0,   395,     0,   390,   391,   392,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   718,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     238,   241,   242,   244,   245,   246,   247,   248,   249,   250,
     239,   240,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   415,   416,   417,   418,   419,   420,
     422,   421,   423,   424,   432,   429,   431,   430,   428,   434,
     425,   426,   427,   433,     0,     0,     0,   487,    56,     0,
       0,     0,     0,    51,     0,     0,   494,     0,     0,     0,
       0,   509,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,   517,     0,     0,     0,
       0,     0,     0,     0,   693,   311,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   291,     0,     0,     0,     0,
     477,   280,     0,     0,     0,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,    41,
       0,     0,     0,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,     0,     0,     0,     0,   135,   136,   137,   157,
     138,   155,   156,   142,   141,   143,   144,   150,   145,   146,
     147,   148,   149,   151,   152,   153,   139,   140,   158,   154,
     159,   356,     0,     0,     0,     0,   351,     0,     0,     0,
       0,     0,     0,     0,   764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,   367,     0,     0,
       0,     0,   362,   393,     0,     0,     0,   389,    95,    94,
      93,   761,   743,   758,   757,   744,   746,    27,    27,    27,
      27,    27,    29,    28,   752,   753,   756,   754,   759,   760,
     762,   763,   755,   745,   747,   748,   749,   750,   751,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,   435,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   414,     0,     0,   486,
       0,     0,     0,    50,   501,   500,     0,     0,     0,   503,
     593,   597,   598,   584,   619,   604,   605,   606,   632,   631,
     688,   636,   591,   690,   628,   634,   592,   582,   583,   601,
     589,   627,   590,   608,   588,   603,   602,   596,   595,   594,
     629,   626,   686,   687,   623,   620,   666,   682,   683,   667,
     668,   669,   670,   677,   671,   685,   680,   684,   673,   678,
     674,   679,   672,   676,   675,   681,     0,   665,   625,   642,
     658,   659,   643,   644,   645,   646,   653,   647,   661,   656,
     660,   649,   654,   650,   655,   648,   652,   651,   657,     0,
     641,   618,   621,   635,   586,   607,   630,   587,   622,   610,
     616,   617,   614,   615,   611,   612,   600,   599,    35,    35,
      35,    37,    36,   689,   637,   624,   633,   613,   585,   609,
       0,     0,     0,     0,     0,     0,   692,     0,     0,     0,
       0,     0,   324,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   290,     0,     0,     0,   471,
       0,     0,     0,   285,   281,   284,   267,   115,   121,   119,
     118,   120,   116,   117,   114,   122,   128,   123,   127,   125,
     126,   124,   113,   112,   129,    47,    48,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,     0,     0,     0,   350,   780,   775,
     779,   777,   781,   776,   778,    79,    85,    77,    81,    80,
      76,    75,    78,    84,    82,    83,     0,     0,     0,   361,
       0,     0,   388,    30,    31,    32,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   452,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   411,   492,   493,    58,    57,    59,   515,   516,
     508,     0,   507,   663,     0,   639,     0,    38,    39,    40,
     717,   716,     0,   715,   703,   702,   709,   708,     0,   707,
     711,   710,   341,   316,   314,   317,   340,   322,     0,   321,
       0,   343,   339,   338,   348,   347,   342,   313,   346,   345,
     344,   315,   312,   484,   476,     0,   475,   483,   273,   272,
       0,   271,   288,   287,     0,     0,     0,     0,     0,     0,
       0,     0,   214,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,   358,   359,   357,   368,   374,   385,   380,   384,
     386,   383,   382,   379,   375,   378,   381,   376,   377,     0,
     373,   369,   394,   399,   405,   409,   408,   407,   404,   400,
     403,   406,   401,   402,     0,   398,   263,   264,   257,   259,
     261,   260,   258,   252,   265,   256,   254,   255,   262,   441,
     443,   444,   464,   469,   468,   463,   462,   461,   445,   450,
       0,   449,     0,   438,   466,   467,   436,   442,   460,   440,
     465,   439,   505,     0,   664,   640,   713,     0,   705,     0,
       0,   319,   324,   330,   331,   335,   327,   333,   329,   328,
     337,   336,   332,   334,   326,   325,   473,     0,   269,     0,
     286,   283,   282,   203,   168,   164,   201,   166,   212,     0,
     211,     0,   199,   193,   204,   205,   196,   161,   200,   206,
     165,   202,   194,   195,   167,   207,   173,   189,   190,   174,
     175,   176,   177,   184,   178,   192,   187,   191,   180,   185,
     181,   186,   179,   183,   182,   188,     0,   172,   198,   163,
     197,   371,     0,   396,     0,     0,   447,   452,   457,   458,
     455,   456,   454,   459,   453,   506,   714,   706,   323,   320,
     474,   270,     0,   209,   214,   224,   222,   231,   221,   216,
     225,   229,   218,   226,   228,   223,   217,   230,   227,   219,
     220,   215,   170,     0,   372,   397,   451,   448,   213,   210,
     171
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    25,   962,   963,  1131,  1132,    26,   299,   300,
     301,   302,    27,    54,   393,   394,   395,   396,   397,    28,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,    29,    74,    75,    76,    77,    78,    30,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,    31,    64,   304,   885,   886,   887,
     305,   888,   889,   890,   891,   892,   893,   894,  1218,  1526,
    1527,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   907,   908,   909,   910,  1203,  1489,  1490,
    1552,  1491,  1571,    32,    51,   125,   658,   659,   660,   126,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,    33,    61,   542,   832,  1350,  1351,   543,   544,
     545,  1356,  1174,  1175,   546,   547,    34,    59,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   811,  1328,  1329,
    1460,  1330,  1475,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,    35,    65,   573,   574,   575,   576,
     577,    36,    68,   605,   606,   607,   608,   609,   939,  1399,
    1400,    37,    69,   613,   614,   615,   616,   945,  1414,  1415,
      38,    52,   128,   693,   694,   695,   129,   696,   697,   698,
     699,   700,   701,   702,   703,  1005,  1440,  1441,  1535,  1442,
    1544,   704,   705,   706,   707,   708,   709,   710,   711,   712,
     713,    39,    60,   532,   827,  1345,  1346,   533,   534,   535,
     536,    40,    53,   385,   386,   387,   388,    41,   135,   136,
     137,   138,    42,    56,   406,   729,  1301,  1302,   407,   408,
     409,   410,    43,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     449,  1109,  1110,   259,   447,  1086,  1087,   260,   261,   262,
     263,   264,    44,    58,   481,   482,   483,   484,   485,   800,
    1318,  1319,   486,   487,   488,   797,  1312,  1313,    45,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    46,   315,   316,   317,   318,   319,   320,   321,
     322,   323
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -931
static const yytype_int16 yypact[] =
{
    -931,   994,  -931,  -263,  -257,  -238,  -931,  -931,  -931,  -931,
    -235,  -931,  -215,  -931,  -931,  -931,  -931,  -200,  -195,  -931,
    -931,  -194,  -192,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,   194,
     885,   -75,   -66,  -176,  -170,    26,  -164,   552,  -156,  -154,
    -146,  -144,   775,   113,   -36,  -135,   341,   446,  -134,  -120,
    -103,  -105,   -89,   -65,    15,  -931,  -931,  -931,  -931,  -931,
     -46,   -32,   -30,   -29,   -23,   -10,    -6,    -1,     9,    24,
      36,    38,    39,    47,    50,    53,    55,    58,    60,    65,
      67,   211,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,   -82,  -931,  -931,    17,  -931,
       8,    18,  -931,    68,    71,     3,  -931,  -931,  -931,    23,
    -931,    78,    82,    83,    84,    85,    87,    88,    91,    96,
      97,    98,   102,   103,   104,   107,   108,   110,   111,   117,
     118,   122,   123,   124,   125,   127,   137,   142,   143,   154,
     160,   163,   164,   165,   166,   169,   170,  -931,   172,  -931,
     177,   181,   183,   184,   193,   197,   201,   202,   205,   207,
     208,   210,   212,   214,   228,   229,   231,   232,   233,   235,
     238,   239,    12,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,   148,   880,    22,    93,    10,
     240,   241,   242,   243,   244,   245,   247,   248,   249,   250,
     251,   252,   396,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,    46,   255,   256,     7,
    -931,  -931,  -931,  -931,    30,  -931,    62,  -931,   257,   258,
     259,   260,   262,   265,   267,    32,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,    48,   268,   271,   273,   274,   275,
     276,   280,   281,   282,   283,   287,   361,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,    43,
      45,  -931,   134,   138,   144,    64,  -931,   335,   357,   149,
     227,   359,   360,   314,   314,   345,   426,   362,   366,   433,
     314,   370,   371,   381,   382,   385,   387,   388,   323,  -931,
     972,   774,  -931,   322,   324,    25,  -931,  -931,  -931,   333,
     332,   334,   336,    14,  -931,  -931,  -931,  -931,   445,   450,
     342,  -931,  -931,   340,   344,  -931,  -931,    16,  -931,  -931,
    -931,   410,   314,   411,   414,   314,   459,   461,   467,   492,
     472,   496,   434,   435,   436,   498,   481,   439,   505,   510,
     512,   448,   314,   451,   452,   518,   499,   457,   523,   524,
     314,   526,   507,   527,   533,   473,   474,   406,   476,   409,
     314,   314,   479,   314,   525,   528,   480,   483,   486,  -179,
    -173,   487,   489,   314,   314,   546,   314,   490,   491,   494,
     497,   500,   437,  -931,  -931,  -931,   423,   430,  -931,   440,
     441,     2,  -931,  -931,  -931,  -931,  -931,  -931,  -931,   447,
     442,   443,   453,   456,   458,  -931,   464,   465,   466,   469,
     477,   484,   485,   493,   503,   506,   508,   511,   312,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,   513,
    -931,   515,  -931,    35,  -931,  -931,  -931,   449,  -931,   516,
     517,   520,  -931,    13,  -931,  -931,  -931,  -931,  -931,   549,
     560,   562,   563,   564,   569,   571,   585,   266,   595,   601,
     559,   495,  -931,  -931,   603,   606,   501,  -931,   720,   521,
     522,   532,   536,    61,  -931,  -931,  -931,  -931,   565,   566,
     574,   622,   581,   590,   314,   540,  -931,  -931,   635,   608,
     652,   653,   654,   656,   659,   661,   684,   663,   665,   557,
    -931,   558,   573,  -931,   575,    37,  -931,  -931,  -931,  -931,
     561,   576,  -931,    29,  -931,  -931,  -931,   580,   582,   584,
    -931,   586,   587,   588,   589,   591,   592,   226,   593,   597,
     598,   600,   602,   604,   607,   611,   612,   614,   615,   618,
     621,   623,   627,  -931,   629,   578,   619,   630,   633,   634,
     636,   637,   638,   639,   641,   644,   645,   647,   272,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,   632,   651,   658,   660,   664,   666,   668,
     669,   670,   671,  -931,   672,   673,   674,   676,   677,   678,
     679,   680,   682,   319,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,   675,   694,   655,  -931,  -931,   314,
     699,   704,   657,  -931,   662,   686,  -931,   710,   712,   687,
     689,  -931,   692,   695,   696,   697,   698,   701,   702,   703,
     706,   707,   708,   709,   711,   714,   715,   716,   725,   727,
     731,   733,   736,   737,   740,   741,   742,   745,   751,   752,
     754,   756,   757,   758,   759,   760,   761,   762,   977,   764,
    1014,   770,   772,   773,   776,   778,   779,   780,   782,   783,
     784,   785,   787,   788,   789,   790,   791,   792,   162,   793,
     796,   798,   799,   800,   801,   802,  -931,   691,   314,   631,
     717,   739,   747,   805,  -931,  -931,   722,   768,   777,   765,
     812,   803,   875,   876,   877,   879,   881,   882,   821,   945,
     929,   933,   891,   935,   827,  -931,   937,   828,   939,   833,
    -931,  -931,   832,   946,   947,   967,   839,  -931,   840,   841,
     842,   845,   847,   848,   849,   851,   852,   853,   854,   855,
     856,   857,   858,   859,   863,   864,  -931,   866,   867,  -931,
     869,   868,   871,   883,   888,   889,  -931,   890,   892,   893,
     894,   895,   896,   898,   899,   901,   902,   903,   904,   905,
     908,  -931,   909,   910,   911,   180,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,   979,   987,   988,   884,  -931,   915,   923,   926,
     931,   932,   934,   936,  -931,   938,   940,   941,   942,   949,
     950,   952,   953,   960,   963,   968,  -931,  -931,   989,   966,
     992,   971,  -931,  -931,  1003,   969,   973,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,   314,   314,   314,
     314,   314,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    1066,  1068,   314,  1070,  1105,  1106,  1107,  1086,  1109,  1110,
     314,   314,   546,   986,  -931,  -931,  1096,  -180,  1055,  1099,
    1114,  1063,  1072,  1074,  1118,   997,  1119,  1120,  1121,  1122,
    1145,  1124,  1125,  1089,  1133,  1026,  -931,  1027,  1029,  -931,
    1030,  1031,  1032,  -931,  -931,  -931,  1033,  1034,  1139,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -207,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -191,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,   546,   546,
     546,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
       0,  1036,  1037,    27,  1038,  1039,  -931,  1040,  1041,  1042,
    1043,  1044,   738,  1045,  1046,  1047,  1048,  1049,  1050,  1052,
    1053,  1054,  1056,  1057,  1058,  -931,  1059,  1155,  1060,  -931,
     -81,  1061,  1062,  1116,  1064,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  1129,  1173,
    1174,  1132,  1135,  1067,  1137,  1138,  1140,  1141,  1142,  1176,
    1143,  1144,  1182,  1146,  1147,  1148,  1188,  1149,  1081,  1151,
    1195,  1153,  1088,  -931,  1090,  1091,  1092,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  1093,   906,  1094,  -931,
    1095,   482,  -931,  -931,  -931,  -931,  -931,  -931,  1097,  1098,
    1100,  1101,  1102,  1103,  1104,  1108,  1111,  1112,  1113,  1115,
    1117,  -931,  1123,  1126,  1127,  1128,  1130,  1131,  1134,  1136,
    1150,  1152,  1221,  1154,  1156,  1157,  1158,  1159,  1160,  1161,
    1162,  1163,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -182,  -931,  -931,   977,  -931,  1014,  -931,  -931,  -931,
    -931,  -931,  -147,  -931,  -931,  -931,  -931,  -931,  -130,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -119,  -931,
     471,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -116,  -931,  -931,  -931,  -931,
     -83,  -931,  -931,  -931,  1227,   967,  1164,  1165,  1166,  1167,
    1168,  1169,  1231,  1170,  1171,  1172,  1175,  1177,  1178,  1179,
    1180,  1181,  1183,  1184,  1185,  1186,  1187,  1051,  1189,  1190,
    1191,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,   -44,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,   -38,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
     -28,  -931,    42,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  1139,  -931,  -931,  -931,     0,  -931,    27,
     471,  -931,   738,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  1155,  -931,   -81,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,   -19,
    -931,   746,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,    -9,  -931,  -931,  -931,
    -931,  -931,   906,  -931,   482,    42,  -931,  1221,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,   746,  -931,  1231,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  1051,  -931,  -931,  -931,  -931,  -931,  -931,
    -931
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -931,  -931,  -931,  -536,  -363,  -930,  -463,  -931,  -931,  1079,
    -931,  -931,  -931,  -931,  -931,   990,  -931,  -931,  -931,  -931,
    -931,  1069,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  1305,  -931,  -931,  -931,  -931,
    -931,  1192,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,   502,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -193,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -172,
    -931,  -931,  -163,  -931,  -931,  -931,  -931,   734,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,   -88,  -931,   850,
    -931,  -931,  -931,    40,  -931,  -931,  -931,  -931,  -931,   886,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,   -64,
    -931,  -931,   -63,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,   829,  -931,  -931,
    -931,  -931,  -931,  -931,   806,  -931,  -931,  -931,  -931,  -931,
    -126,  -931,  -931,  -931,   795,  -931,  -931,  -931,  -931,  -124,
    -931,  -931,  -931,  -931,   719,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -123,  -931,  -931,
    -122,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,   -62,  -931,   887,  -931,
    -931,  -931,  -931,  -931,  1076,  -931,  -931,  -931,  -931,  1281,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,   -35,  -931,  1010,
    -931,  -931,  -931,  -931,  1217,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,   115,  -931,  -931,  -931,   120,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,   965,  -931,  -931,  -931,  -931,
    -931,   -37,  -931,  -931,  -931,  -931,  -931,   -31,  -931,  -931,
    1327,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,  -931,
    -931,  -931,  -931,  -931,  1193,  -931,  -931,  -931,  -931,  -931,
    -931,  -931
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     628,   629,   789,   474,   132,  1348,   475,   635,   296,   382,
      47,    48,  1310,   140,   537,   389,    70,   402,    49,   389,
     141,   142,   143,   528,   402,   144,   382,   132,   780,   781,
     610,   133,   145,   307,   782,   783,   528,    50,   601,  1316,
      55,   146,   147,   148,   601,   149,   610,  1273,  1274,   733,
     150,   151,   736,  1538,   133,  1539,   476,   152,    71,   477,
      57,   153,   569,   569,   154,   155,  1303,   156,   390,   753,
    1304,    72,   390,   157,  1540,    62,   538,   761,  1541,   308,
      63,    66,  1305,    67,   570,   570,  1306,   771,   772,   124,
     774,  1452,   158,   159,   537,  1453,   309,   160,   127,   130,
     786,   787,   134,   790,   161,   131,   539,   383,   162,   163,
     164,   139,   540,   165,   296,   478,   166,   167,   310,   265,
     311,   266,   312,   313,   383,   134,  1456,   168,   303,   267,
    1457,   268,   479,   169,   170,   297,   171,   172,   173,   174,
     306,   349,   314,  1458,   391,    73,   403,  1459,   391,   474,
    1542,   175,   475,   403,  1461,   350,   538,  1476,  1462,   611,
     176,  1477,   177,   178,  1349,   179,   298,   602,   180,   181,
     351,   352,   182,   602,   384,   611,   541,  1128,  1129,  1130,
     392,   860,   404,   183,   392,   861,   539,   353,   529,   404,
    1478,   384,   540,   380,  1479,    70,   571,   571,  1307,  1308,
    1309,   529,   476,   184,   185,   477,   186,   862,   863,  1311,
     187,   354,    79,   405,   188,   189,   190,   191,   192,   530,
     405,   923,   193,   194,   864,    80,   612,   572,   572,  1531,
     357,   195,   530,  1532,   603,  1533,  1317,    71,   865,  1534,
     603,   297,   612,   866,   358,  1536,   359,   360,    81,  1537,
      72,    82,    83,   361,  1553,   867,   541,    84,  1554,    85,
     480,   478,   868,   196,  1572,   197,   362,   869,  1573,   870,
     363,   198,   298,   644,   199,   364,   803,   400,   479,   200,
     531,   566,   871,   548,   201,   365,   472,   836,   722,   355,
     730,   623,   381,   531,  1543,   604,   645,   646,   617,   716,
     366,   604,   618,   946,   788,   568,   585,   647,   619,   829,
     872,   941,   367,   489,   368,   369,   873,    86,    87,   563,
     673,   587,   674,   370,    73,   675,   371,    88,    89,   372,
     676,   373,   874,   490,   374,   915,   375,   620,   875,   491,
     492,   376,   307,   377,   398,   677,   678,   399,    90,    91,
     876,   679,   877,   878,   411,   680,  1020,   879,   412,   413,
     414,   415,   324,   416,   417,    92,    93,   418,   627,   624,
     493,   494,   419,   420,   421,   495,    94,   681,   422,   423,
     424,   682,   683,   425,   426,    95,   427,   428,   308,   496,
     648,   649,   650,   429,   430,   651,   497,   269,   431,   432,
     433,   434,   652,   435,   325,   309,   480,   957,   958,   959,
     960,   961,   684,   436,   685,   498,   653,   654,   437,   438,
     880,  1253,  1254,  1255,  1256,  1257,   881,   310,   686,   311,
     439,   312,   313,   655,   656,  1141,   440,   882,   883,   441,
     442,   443,   444,   499,   500,   445,   446,   324,   448,   687,
     884,   314,   501,   450,  1222,   326,   627,   451,   657,   452,
     453,   270,   271,   272,   273,   274,   275,   276,   277,   454,
     502,    96,    97,   455,    98,    99,   100,   456,   457,   503,
     504,   458,   688,   459,   460,   378,   461,   630,   462,   325,
     463,   327,  1463,  1464,   328,   329,   689,   846,   847,   848,
     849,   850,   851,   852,   464,   465,   690,   466,   467,   468,
     278,   469,   505,   506,   470,   471,   549,   550,   551,   552,
     553,   554,  1465,   555,   556,   557,   558,   559,   560,  1270,
    1466,   564,   565,   578,   579,   580,   581,   330,   582,   331,
     326,   583,   621,   584,   588,   279,   993,   589,  1467,   590,
     591,   592,   593,   140,   332,  1468,   594,   595,   596,   597,
     141,   142,   143,   598,   622,   144,   625,   626,   631,   632,
     507,   691,   145,   633,  1469,   634,   327,   636,   637,   328,
     329,   146,   147,   148,  1403,   149,   824,   692,   638,   639,
     150,   151,   640,  1015,   641,   642,   643,   152,   714,   333,
     715,   153,  1470,  1471,   154,   155,   718,   156,   719,   724,
     720,  1472,   721,   157,   725,   726,   727,   732,   734,  1260,
     728,   735,   330,   737,   331,   738,   280,  1268,  1269,   334,
     335,   739,   158,   159,   740,   599,   741,   160,   742,   332,
     746,   743,   744,   745,   161,   747,   748,   749,   162,   163,
     164,  1473,   750,   165,   751,   752,   166,   167,   754,   755,
     756,  1404,   281,   757,   758,   759,   760,   168,   762,   764,
     561,   763,  1474,   169,   170,   765,   171,   172,   173,   174,
     766,   767,   768,   769,   333,   770,   773,   777,   788,   775,
     778,   175,   776,   779,   784,  1405,   785,   791,   792,   798,
     176,   793,   177,   178,   794,   179,   799,   795,   180,   181,
     796,  1406,   182,   838,   334,   335,   801,   802,   806,   807,
     805,   860,   831,   183,   839,   861,   840,   841,   842,   808,
    1407,  1408,   809,   843,   810,   844,  1409,  1410,  1411,  1412,
     812,   813,   814,   184,   185,   815,   186,   862,   863,   845,
     187,  1555,  1413,   816,   188,   189,   190,   191,   192,   853,
     817,   818,   193,   194,   864,   854,   855,   857,   856,   819,
     858,   195,   917,   918,   859,   673,   269,   674,   865,   820,
     675,   919,   821,   866,   822,   676,   920,   823,   921,   826,
    1556,   828,   833,   834,   911,   867,   835,   922,   912,   925,
     677,   678,   868,   196,  1557,   197,   679,   869,   913,   870,
     680,   198,   914,   924,   199,   926,   927,   928,   929,   200,
     930,  1558,   871,   931,   201,   932,   933,   934,  1559,   935,
     936,   937,   681,  1560,   943,  1561,   682,   683,  1142,  1017,
     270,   271,   272,   273,   274,   275,   276,   277,  1562,   938,
     872,   940,   944,   948,   980,   949,   873,   950,  1018,   951,
     952,   953,   954,  1021,   955,   956,   964,   684,  1022,   685,
     965,   966,   874,   967,  1026,   968,  1027,   969,   875,  1327,
     970,   489,  1563,   686,   971,   972,    79,   973,   974,   278,
     876,   975,   877,   878,   976,   981,   977,   879,  1564,    80,
     978,   490,   979,  1144,   687,   995,   982,   491,   492,   983,
     984,  1145,   985,   986,   987,   988,  1565,   989,  1566,  1567,
     990,   991,    81,   992,   279,    82,    83,   996,  1019,  1147,
    1023,    84,  1148,    85,   997,  1024,   998,   688,   493,   494,
     999,  1149,  1000,   495,  1001,  1002,  1003,  1004,  1006,  1007,
    1008,   689,  1009,  1010,  1011,  1012,  1013,   496,  1014,  1025,
     880,   690,  1029,  1028,   497,  1030,   881,  1140,  1031,  1032,
    1033,  1034,  1150,   644,  1035,  1036,  1037,   882,   883,  1038,
    1039,  1040,  1041,   498,  1042,  1159,  1568,  1043,  1044,  1045,
     884,    86,    87,  1143,     2,     3,   645,   646,  1046,     4,
    1047,    88,    89,  1569,  1048,   280,  1049,   647,  1386,  1050,
    1051,   499,   500,  1052,  1053,  1054,  1570,     5,  1055,  1151,
     501,     6,    90,    91,  1056,  1057,   691,  1058,     7,  1059,
    1060,  1061,  1062,  1063,  1064,  1065,     8,  1088,   502,    92,
      93,   281,   692,  1111,     9,  1112,  1113,   503,   504,  1114,
      94,  1115,  1116,  1117,    10,  1118,  1119,  1120,  1121,    95,
    1122,  1123,  1124,  1125,  1126,  1127,  1133,    11,    12,  1134,
      13,  1135,  1136,  1137,  1138,  1139,  1387,    14,  1146,  1152,
     505,   506,  1153,  1154,  1155,  1388,  1156,  1160,  1157,  1158,
     648,   649,   650,  1161,    15,   651,  1389,  1162,  1163,  1164,
    1165,  1166,   652,  1168,  1167,    16,  1169,    17,  1170,  1173,
    1171,  1172,  1176,  1177,  1178,  1179,   653,   654,  1180,  1390,
    1181,  1182,  1183,    18,  1184,  1185,  1186,  1187,  1188,  1189,
    1190,  1191,  1192,   655,   656,  1391,  1193,  1194,   507,  1195,
    1196,    19,  1197,  1224,  1198,    96,    97,  1199,    98,    99,
     100,  1225,  1226,  1246,  1392,  1393,  1248,  1227,   657,  1200,
    1394,  1395,  1396,  1397,  1201,  1202,  1204,  1250,  1205,  1206,
    1207,  1208,  1209,    20,  1210,  1211,  1398,  1212,  1213,  1214,
    1215,  1216,    21,    22,  1217,  1219,  1220,  1221,  1228,    23,
      24,  1066,  1067,  1068,  1069,  1070,  1229,  1071,  1072,  1230,
    1073,  1074,  1075,  1076,  1231,  1232,  1077,  1233,  1258,  1234,
    1259,  1235,  1261,  1236,  1237,  1238,  1078,  1079,  1080,  1081,
    1082,  1083,  1239,  1240,  1084,  1241,  1242,  1085,  1089,  1090,
    1091,  1092,  1093,  1243,  1094,  1095,  1244,  1096,  1097,  1098,
    1099,  1245,  1247,  1100,  1249,  1251,  1252,  1262,  1263,  1264,
    1265,  1266,  1267,  1101,  1102,  1103,  1104,  1105,  1106,  1271,
    1272,  1107,  1275,  1276,  1108,  1506,  1507,  1508,  1509,  1510,
    1278,  1511,  1512,  1282,  1513,  1514,  1515,  1516,  1277,  1279,
    1517,  1280,  1281,  1283,  1284,  1285,  1286,  1287,  1288,  1289,
    1518,  1519,  1520,  1521,  1522,  1523,  1290,  1291,  1524,  1292,
    1293,  1525,  1294,  1295,  1296,  1297,  1298,  1299,  1300,  1314,
    1315,  1320,  1321,  1322,  1323,  1324,  1325,  1326,  1331,  1332,
    1333,  1334,  1335,  1336,  1344,  1337,  1338,  1339,  1354,  1340,
    1341,  1342,  1343,  1347,  1352,  1353,  1357,  1358,  1359,  1360,
    1368,  1355,  1361,  1362,  1363,  1364,  1371,  1365,  1366,  1367,
    1369,  1370,  1375,  1372,  1373,  1374,  1376,  1377,  1378,  1379,
    1380,  1381,  1439,  1382,  1383,  1384,  1385,  1401,  1402,  1480,
    1416,  1417,  1488,  1418,  1419,  1420,  1421,  1422,   567,   356,
    1580,  1423,  1579,   723,  1424,  1425,  1426,  1223,  1427,  1578,
    1428,  1551,   994,   837,   825,  1481,  1429,  1548,  1549,  1430,
    1431,  1432,   916,  1433,  1434,   600,  1574,  1435,   947,  1436,
    1575,   942,  1016,  1576,  1577,  1550,   401,   731,  1545,   473,
     830,  1455,  1547,  1437,  1454,  1438,  1546,  1443,   379,  1444,
    1445,  1446,  1447,  1448,  1449,  1450,  1451,  1482,  1483,  1484,
    1485,  1486,  1487,  1492,  1493,  1494,   804,     0,  1495,     0,
    1496,  1497,  1498,  1499,  1500,     0,  1501,  1502,  1503,  1504,
    1505,   717,  1528,  1529,  1530,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   562,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   586
};

static const yytype_int16 yycheck[] =
{
     363,   364,   465,     1,     1,    86,     4,   370,     1,     1,
     273,   274,    12,     1,     1,     1,     1,     1,   275,     1,
       8,     9,    10,     1,     1,    13,     1,     1,   207,   208,
       1,    28,    20,     1,   207,   208,     1,   275,     1,    12,
     275,    29,    30,    31,     1,    33,     1,   227,   228,   412,
      38,    39,   415,    11,    28,    13,    54,    45,    43,    57,
     275,    49,     1,     1,    52,    53,   273,    55,    54,   432,
     277,    56,    54,    61,    32,   275,    63,   440,    36,    47,
     275,   275,   273,   275,    23,    23,   277,   450,   451,   164,
     453,   273,    80,    81,     1,   277,    64,    85,   164,   275,
     463,   464,    99,   466,    92,   275,    93,    99,    96,    97,
      98,   275,    99,   101,     1,   113,   104,   105,    86,   275,
      88,   275,    90,    91,    99,    99,   273,   115,   164,   275,
     277,   275,   130,   121,   122,   128,   124,   125,   126,   127,
     275,   275,   110,   273,   130,   130,   130,   277,   130,     1,
     108,   139,     4,   130,   273,   275,    63,   273,   277,   130,
     148,   277,   150,   151,   245,   153,   159,   130,   156,   157,
     273,   276,   160,   130,   166,   130,   163,    15,    16,    17,
     166,     1,   166,   171,   166,     5,    93,   276,   166,   166,
     273,   166,    99,   275,   277,     1,   135,   135,  1128,  1129,
    1130,   166,    54,   191,   192,    57,   194,    27,    28,   209,
     198,   276,     1,   197,   202,   203,   204,   205,   206,   197,
     197,   584,   210,   211,    44,    14,   197,   166,   166,   273,
     276,   219,   197,   277,   197,   273,   209,    43,    58,   277,
     197,   128,   197,    63,   276,   273,   276,   276,    37,   277,
      56,    40,    41,   276,   273,    75,   163,    46,   277,    48,
     258,   113,    82,   251,   273,   253,   276,    87,   277,    89,
     276,   259,   159,     1,   262,   276,   274,   274,   130,   267,
     258,   274,   102,   273,   272,   276,   274,   274,   274,   274,
     274,   142,   275,   258,   252,   258,    24,    25,   164,   274,
     276,   258,   164,   274,   142,   275,   274,    35,   164,   274,
     130,   274,   276,     1,   276,   276,   136,   106,   107,   273,
       1,   273,     3,   276,   130,     6,   276,   116,   117,   276,
      11,   276,   152,    21,   276,   274,   276,   273,   158,    27,
      28,   276,     1,   276,   276,    26,    27,   276,   137,   138,
     170,    32,   172,   173,   276,    36,   719,   177,   276,   276,
     276,   276,     1,   276,   276,   154,   155,   276,   142,   142,
      58,    59,   276,   276,   276,    63,   165,    58,   276,   276,
     276,    62,    63,   276,   276,   174,   276,   276,    47,    77,
     118,   119,   120,   276,   276,   123,    84,     1,   276,   276,
     276,   276,   130,   276,    43,    64,   258,   181,   182,   183,
     184,   185,    93,   276,    95,   103,   144,   145,   276,   276,
     240,   957,   958,   959,   960,   961,   246,    86,   109,    88,
     276,    90,    91,   161,   162,   798,   276,   257,   258,   276,
     276,   276,   276,   131,   132,   276,   276,     1,   276,   130,
     270,   110,   140,   276,   274,    94,   142,   276,   186,   276,
     276,    65,    66,    67,    68,    69,    70,    71,    72,   276,
     158,   260,   261,   276,   263,   264,   265,   276,   276,   167,
     168,   276,   163,   276,   276,   274,   276,   142,   276,    43,
     276,   130,    21,    22,   133,   134,   177,   231,   232,   233,
     234,   235,   236,   237,   276,   276,   187,   276,   276,   276,
     114,   276,   200,   201,   276,   276,   276,   276,   276,   276,
     276,   276,    51,   276,   276,   276,   276,   276,   276,   992,
      59,   276,   276,   276,   276,   276,   276,   176,   276,   178,
      94,   276,   207,   276,   276,   149,   274,   276,    77,   276,
     276,   276,   276,     1,   193,    84,   276,   276,   276,   276,
       8,     9,    10,   276,   207,    13,   207,   207,   142,   207,
     258,   252,    20,   207,   103,   142,   130,   207,   207,   133,
     134,    29,    30,    31,   102,    33,   274,   268,   207,   207,
      38,    39,   207,   274,   207,   207,   273,    45,   276,   238,
     276,    49,   131,   132,    52,    53,   273,    55,   276,   164,
     276,   140,   276,    61,   164,   273,   276,   207,   207,   982,
     276,   207,   176,   164,   178,   164,   230,   990,   991,   268,
     269,   164,    80,    81,   142,   274,   164,    85,   142,   193,
     142,   207,   207,   207,    92,   164,   207,   142,    96,    97,
      98,   180,   142,   101,   142,   207,   104,   105,   207,   207,
     142,   179,   266,   164,   207,   142,   142,   115,   142,   142,
     274,   164,   201,   121,   122,   142,   124,   125,   126,   127,
     207,   207,   276,   207,   238,   276,   207,   207,   142,   164,
     207,   139,   164,   207,   207,   213,   207,   207,   207,   276,
     148,   207,   150,   151,   207,   153,   276,   207,   156,   157,
     273,   229,   160,   164,   268,   269,   276,   276,   276,   276,
     273,     1,   273,   171,   164,     5,   164,   164,   164,   276,
     248,   249,   276,   164,   276,   164,   254,   255,   256,   257,
     276,   276,   276,   191,   192,   276,   194,    27,    28,   164,
     198,     5,   270,   276,   202,   203,   204,   205,   206,   164,
     276,   276,   210,   211,    44,   164,   207,   164,   273,   276,
     164,   219,   207,   207,   273,     1,     1,     3,    58,   276,
       6,   207,   276,    63,   276,    11,   164,   276,   207,   276,
      44,   276,   276,   276,   273,    75,   276,   207,   276,   164,
      26,    27,    82,   251,    58,   253,    32,    87,   276,    89,
      36,   259,   276,   273,   262,   207,   164,   164,   164,   267,
     164,    75,   102,   164,   272,   164,   142,   164,    82,   164,
     273,   273,    58,    87,   273,    89,    62,    63,   207,   164,
      65,    66,    67,    68,    69,    70,    71,    72,   102,   276,
     130,   276,   276,   273,   276,   273,   136,   273,   164,   273,
     273,   273,   273,   164,   273,   273,   273,    93,   164,    95,
     273,   273,   152,   273,   164,   273,   164,   273,   158,   141,
     273,     1,   136,   109,   273,   273,     1,   273,   273,   114,
     170,   273,   172,   173,   273,   276,   273,   177,   152,    14,
     273,    21,   273,   164,   130,   273,   276,    27,    28,   276,
     276,   164,   276,   276,   276,   276,   170,   276,   172,   173,
     276,   276,    37,   276,   149,    40,    41,   276,   273,   207,
     273,    46,   164,    48,   276,   273,   276,   163,    58,    59,
     276,   164,   276,    63,   276,   276,   276,   276,   276,   276,
     276,   177,   276,   276,   276,   276,   276,    77,   276,   273,
     240,   187,   273,   276,    84,   273,   246,   276,   273,   273,
     273,   273,   207,     1,   273,   273,   273,   257,   258,   273,
     273,   273,   273,   103,   273,   164,   240,   273,   273,   273,
     270,   106,   107,   276,     0,     1,    24,    25,   273,     5,
     273,   116,   117,   257,   273,   230,   273,    35,   102,   273,
     273,   131,   132,   273,   273,   273,   270,    23,   273,   207,
     140,    27,   137,   138,   273,   273,   252,   273,    34,   273,
     273,   273,   273,   273,   273,   273,    42,   273,   158,   154,
     155,   266,   268,   273,    50,   273,   273,   167,   168,   273,
     165,   273,   273,   273,    60,   273,   273,   273,   273,   174,
     273,   273,   273,   273,   273,   273,   273,    73,    74,   273,
      76,   273,   273,   273,   273,   273,   170,    83,   273,   276,
     200,   201,   207,   207,   207,   179,   207,   142,   207,   207,
     118,   119,   120,   164,   100,   123,   190,   164,   207,   164,
     273,   164,   130,   164,   276,   111,   273,   113,   276,   142,
     164,   164,   273,   273,   273,   273,   144,   145,   273,   213,
     273,   273,   273,   129,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   161,   162,   229,   273,   273,   258,   273,
     273,   147,   273,   164,   276,   260,   261,   276,   263,   264,
     265,   164,   164,   164,   248,   249,   164,   273,   186,   276,
     254,   255,   256,   257,   276,   276,   276,   164,   276,   276,
     276,   276,   276,   179,   276,   276,   270,   276,   276,   276,
     276,   276,   188,   189,   276,   276,   276,   276,   273,   195,
     196,   214,   215,   216,   217,   218,   273,   220,   221,   273,
     223,   224,   225,   226,   273,   273,   229,   273,   142,   273,
     142,   273,   142,   273,   273,   273,   239,   240,   241,   242,
     243,   244,   273,   273,   247,   273,   273,   250,   214,   215,
     216,   217,   218,   273,   220,   221,   273,   223,   224,   225,
     226,   273,   276,   229,   273,   276,   273,   142,   142,   142,
     164,   142,   142,   239,   240,   241,   242,   243,   244,   273,
     164,   247,   207,   164,   250,   214,   215,   216,   217,   218,
     207,   220,   221,   276,   223,   224,   225,   226,   164,   207,
     229,   207,   164,   164,   164,   164,   164,   142,   164,   164,
     239,   240,   241,   242,   243,   244,   207,   164,   247,   273,
     273,   250,   273,   273,   273,   273,   273,   273,   169,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   169,   273,   273,   273,   212,   273,
     273,   273,   273,   273,   273,   273,   207,   164,   164,   207,
     164,   277,   207,   276,   207,   207,   164,   207,   207,   207,
     207,   207,   164,   207,   207,   207,   207,   276,   207,   164,
     207,   273,   141,   273,   273,   273,   273,   273,   273,   142,
     273,   273,   141,   273,   273,   273,   273,   273,   299,    74,
    1573,   273,  1554,   393,   273,   273,   273,   885,   273,  1552,
     273,  1479,   658,   543,   508,  1355,   273,  1460,  1462,   273,
     273,   273,   573,   273,   273,   336,  1532,   273,   613,   273,
    1534,   605,   693,  1535,  1537,  1477,   135,   407,  1453,   202,
     533,  1306,  1459,   273,  1304,   273,  1457,   273,   101,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   481,    -1,   273,    -1,
     273,   273,   273,   273,   273,    -1,   273,   273,   273,   273,
     273,   385,   273,   273,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   279,     0,     1,     5,    23,    27,    34,    42,    50,
      60,    73,    74,    76,    83,   100,   111,   113,   129,   147,
     179,   188,   189,   195,   196,   280,   285,   290,   297,   311,
     317,   332,   371,   390,   404,   432,   439,   449,   458,   489,
     499,   505,   510,   520,   590,   606,   630,   273,   274,   275,
     275,   372,   459,   500,   291,   275,   511,   275,   591,   405,
     490,   391,   275,   275,   333,   433,   275,   275,   440,   450,
       1,    43,    56,   130,   312,   313,   314,   315,   316,     1,
      14,    37,    40,    41,    46,    48,   106,   107,   116,   117,
     137,   138,   154,   155,   165,   174,   260,   261,   263,   264,
     265,   607,   608,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   164,   373,   377,   164,   460,   464,
     275,   275,     1,    28,    99,   506,   507,   508,   509,   275,
       1,     8,     9,    10,    13,    20,    29,    30,    31,    33,
      38,    39,    45,    49,    52,    53,    55,    61,    80,    81,
      85,    92,    96,    97,    98,   101,   104,   105,   115,   121,
     122,   124,   125,   126,   127,   139,   148,   150,   151,   153,
     156,   157,   160,   171,   191,   192,   194,   198,   202,   203,
     204,   205,   206,   210,   211,   219,   251,   253,   259,   262,
     267,   272,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   581,
     585,   586,   587,   588,   589,   275,   275,   275,   275,     1,
      65,    66,    67,    68,    69,    70,    71,    72,   114,   149,
     230,   266,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     1,   128,   159,   286,
     287,   288,   289,   164,   334,   338,   275,     1,    47,    64,
      86,    88,    90,    91,   110,   631,   632,   633,   634,   635,
     636,   637,   638,   639,     1,    43,    94,   130,   133,   134,
     176,   178,   193,   238,   268,   269,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   275,
     275,   273,   276,   276,   276,   274,   313,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   274,   608,
     275,   275,     1,    99,   166,   501,   502,   503,   504,     1,
      54,   130,   166,   292,   293,   294,   295,   296,   276,   276,
     274,   507,     1,   130,   166,   197,   512,   516,   517,   518,
     519,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   582,   276,   578,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   274,   522,     1,     4,    54,    57,   113,   130,
     258,   592,   593,   594,   595,   596,   600,   601,   602,     1,
      21,    27,    28,    58,    59,    63,    77,    84,   103,   131,
     132,   140,   158,   167,   168,   200,   201,   258,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,     1,   166,
     197,   258,   491,   495,   496,   497,   498,     1,    63,    93,
      99,   163,   392,   396,   397,   398,   402,   403,   273,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   274,   319,   273,   276,   276,   274,   287,   275,     1,
      23,   135,   166,   434,   435,   436,   437,   438,   276,   276,
     276,   276,   276,   276,   276,   274,   632,   273,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   274,
     299,     1,   130,   197,   258,   441,   442,   443,   444,   445,
       1,   130,   197,   451,   452,   453,   454,   164,   164,   164,
     273,   207,   207,   142,   142,   207,   207,   142,   282,   282,
     142,   142,   207,   207,   142,   282,   207,   207,   207,   207,
     207,   207,   207,   273,     1,    24,    25,    35,   118,   119,
     120,   123,   130,   144,   145,   161,   162,   186,   374,   375,
     376,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,     1,     3,     6,    11,    26,    27,    32,
      36,    58,    62,    63,    93,    95,   109,   130,   163,   177,
     187,   252,   268,   461,   462,   463,   465,   466,   467,   468,
     469,   470,   471,   472,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   276,   276,   274,   502,   273,   276,
     276,   276,   274,   293,   164,   164,   273,   276,   276,   513,
     274,   517,   207,   282,   207,   207,   282,   164,   164,   164,
     142,   164,   142,   207,   207,   207,   142,   164,   207,   142,
     142,   142,   207,   282,   207,   207,   142,   164,   207,   142,
     142,   282,   142,   164,   142,   142,   207,   207,   276,   207,
     276,   282,   282,   207,   282,   164,   164,   207,   207,   207,
     207,   208,   207,   208,   207,   207,   282,   282,   142,   284,
     282,   207,   207,   207,   207,   207,   273,   603,   276,   276,
     597,   276,   276,   274,   593,   273,   276,   276,   276,   276,
     276,   415,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   274,   407,   276,   492,   276,   274,
     496,   273,   393,   276,   276,   276,   274,   397,   164,   164,
     164,   164,   164,   164,   164,   164,   231,   232,   233,   234,
     235,   236,   237,   164,   164,   207,   273,   164,   164,   273,
       1,     5,    27,    28,    44,    58,    63,    75,    82,    87,
      89,   102,   130,   136,   152,   158,   170,   172,   173,   177,
     240,   246,   257,   258,   270,   335,   336,   337,   339,   340,
     341,   342,   343,   344,   345,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   273,   276,   276,   276,   274,   435,   207,   207,   207,
     164,   207,   207,   282,   273,   164,   207,   164,   164,   164,
     164,   164,   164,   142,   164,   164,   273,   273,   276,   446,
     276,   274,   442,   273,   276,   455,   274,   452,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   181,   182,   183,
     184,   185,   281,   282,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   274,   375,   273,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   473,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   274,   462,   164,   164,   273,
     282,   164,   164,   273,   273,   273,   164,   164,   276,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   214,   215,   216,   217,
     218,   220,   221,   223,   224,   225,   226,   229,   239,   240,
     241,   242,   243,   244,   247,   250,   583,   584,   273,   214,
     215,   216,   217,   218,   220,   221,   223,   224,   225,   226,
     229,   239,   240,   241,   242,   243,   244,   247,   250,   579,
     580,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,    15,    16,
      17,   283,   284,   273,   273,   273,   273,   273,   273,   273,
     276,   282,   207,   276,   164,   164,   273,   207,   164,   164,
     207,   207,   276,   207,   207,   207,   207,   207,   207,   164,
     142,   164,   164,   207,   164,   273,   164,   276,   164,   273,
     276,   164,   164,   142,   400,   401,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   276,   276,
     276,   276,   276,   365,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   346,   276,
     276,   276,   274,   336,   164,   164,   164,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   164,   276,   164,   273,
     164,   276,   273,   281,   281,   281,   281,   281,   142,   142,
     282,   142,   142,   142,   142,   164,   142,   142,   282,   282,
     284,   273,   164,   227,   228,   207,   164,   164,   207,   207,
     207,   164,   276,   164,   164,   164,   164,   142,   164,   164,
     207,   164,   273,   273,   273,   273,   273,   273,   273,   273,
     169,   514,   515,   273,   277,   273,   277,   283,   283,   283,
      12,   209,   604,   605,   273,   273,    12,   209,   598,   599,
     273,   273,   273,   273,   273,   273,   273,   141,   416,   417,
     419,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   169,   493,   494,   273,    86,   245,
     394,   395,   273,   273,   212,   277,   399,   207,   164,   164,
     207,   207,   276,   207,   207,   207,   207,   207,   164,   207,
     207,   164,   207,   207,   207,   164,   207,   276,   207,   164,
     207,   273,   273,   273,   273,   273,   102,   170,   179,   190,
     213,   229,   248,   249,   254,   255,   256,   257,   270,   447,
     448,   273,   273,   102,   179,   213,   229,   248,   249,   254,
     255,   256,   257,   270,   456,   457,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   141,
     474,   475,   477,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   277,   584,   580,   273,   277,   273,   277,
     418,   273,   277,    21,    22,    51,    59,    77,    84,   103,
     131,   132,   140,   180,   201,   420,   273,   277,   273,   277,
     142,   401,   273,   273,   273,   273,   273,   273,   141,   366,
     367,   369,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   214,   215,   216,   217,
     218,   220,   221,   223,   224,   225,   226,   229,   239,   240,
     241,   242,   243,   244,   247,   250,   347,   348,   273,   273,
     273,   273,   277,   273,   277,   476,   273,   277,    11,    13,
      32,    36,   108,   252,   478,   515,   605,   599,   420,   417,
     494,   395,   368,   273,   277,     5,    44,    58,    75,    82,
      87,    89,   102,   136,   152,   170,   172,   173,   240,   257,
     270,   370,   273,   277,   448,   457,   478,   475,   370,   367,
     348
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 27:

/* Line 1464 of yacc.c  */
#line 441 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 443 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number);
		}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 447 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);
		}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 451 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 455 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 459 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 463 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 7 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 468 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 469 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number); }
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 470 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); }
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 471 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 + (yyvsp[(3) - (3)].number); }
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 472 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 * 1024 + (yyvsp[(3) - (3)].number); }
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 486 "ircd_parser.y"
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
}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 503 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 515 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DNSBL_TYPE);
    yy_dconf = map_to_conf(yy_conf);
  }
  else
  {
    MyFree(class_name);
    class_name = NULL;
  }
}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 527 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_dconf->reason == NULL)
      delete_conf_item(yy_conf);
  }
}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 540 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 549 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_dconf->duration = (yyvsp[(3) - (4)].number);
}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 555 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_dconf->reason);
    DupString(yy_dconf->reason, yylval.string);
  }
}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 580 "ircd_parser.y"
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
}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 614 "ircd_parser.y"
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
}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 674 "ircd_parser.y"
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
}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 688 "ircd_parser.y"
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
}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 703 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.description);
    DupString(ServerInfo.description,yylval.string);
  }
}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 712 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char *p;

    if ((p = strchr(yylval.string, ' ')) != NULL)
      p = '\0';

    MyFree(ServerInfo.network_name);
    DupString(ServerInfo.network_name, yylval.string);
  }
}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 726 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ServerInfo.network_desc);
    DupString(ServerInfo.network_desc, yylval.string);
  }
}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 735 "ircd_parser.y"
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
}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 763 "ircd_parser.y"
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
}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 793 "ircd_parser.y"
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
}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 816 "ircd_parser.y"
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
}
    break;

  case 93:

/* Line 1464 of yacc.c  */
#line 872 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.name);
    DupString(AdminInfo.name, yylval.string);
  }
}
    break;

  case 94:

/* Line 1464 of yacc.c  */
#line 881 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.email);
    DupString(AdminInfo.email, yylval.string);
  }
}
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 890 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(AdminInfo.description);
    DupString(AdminInfo.description, yylval.string);
  }
}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 917 "ircd_parser.y"
    {
                        }
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 921 "ircd_parser.y"
    {
                        }
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 925 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 932 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 939 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 946 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
            sizeof(ConfigLoggingEntry.operspylog));
}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 953 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
            sizeof(ConfigLoggingEntry.glinelog));
}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 960 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
            sizeof(ConfigLoggingEntry.klinelog));
}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 967 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
            sizeof(ConfigLoggingEntry.ioerrlog));
}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 974 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.killlog, yylval.string,
            sizeof(ConfigLoggingEntry.killlog));
}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 981 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 985 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 989 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 993 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 997 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 1001 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 1005 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 1011 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 1020 "ircd_parser.y"
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
}
    break;

  case 131:

/* Line 1464 of yacc.c  */
#line 1033 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;
    dlink_node *ptr;
    dlink_node *next_ptr;

    if (yy_aconf->user && yy_aconf->host)
      conf_add_class_to_conf(yy_conf, class_name);
    else
      delete_conf_item(yy_conf);

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
}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 1133 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > OPERNICKLEN)
      yylval.string[OPERNICKLEN] = '\0';

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 1145 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > OPERNICKLEN)
      yylval.string[OPERNICKLEN] = '\0';

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 1157 "ircd_parser.y"
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
}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 1191 "ircd_parser.y"
    {
  if (ypass == 2)
  {
#ifdef HAVE_LIBCRYPTO
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
#endif
  }
}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 1212 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 1224 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      SetConfEncrypted(yy_aconf);
    else
      ClearConfEncrypted(yy_aconf);
  }
}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 1235 "ircd_parser.y"
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
}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 1277 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 1286 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes = 0;
}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 1293 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_BOTS;
}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 1297 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CCONN;
}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 1301 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_NOCTCP;
}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 1305 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_DEAF;
}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 1309 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_DEBUG;
}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 1313 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_FULL;
}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 1317 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SKILL;
}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 1321 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_NCHANGE;
}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 1325 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_REJ;
}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 1329 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_UNAUTH;
}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 1333 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SPY;
}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 1337 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_EXTERNAL;
}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 1341 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_OPERWALL;
}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 1345 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SERVNOTICE;
}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 1349 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_INVISIBLE;
}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 1353 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_WALLOP;
}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 1357 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SOFTCALLERID;
}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 1361 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CALLERID;
}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 1365 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_LOCOPS;
}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 1369 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_HIDECHANNELS;
}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 1375 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
    else
      yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 1386 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REMOTE;
    else
      yy_aconf->port &= ~OPER_FLAG_REMOTE; 
  }
}
    break;

  case 195:

/* Line 1464 of yacc.c  */
#line 1397 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REMOTEBAN;
    else
      yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 196:

/* Line 1464 of yacc.c  */
#line 1408 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_K;
    else
      yy_aconf->port &= ~OPER_FLAG_K;
  }
}
    break;

  case 197:

/* Line 1464 of yacc.c  */
#line 1419 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_X;
    else
      yy_aconf->port &= ~OPER_FLAG_X;
  }
}
    break;

  case 198:

/* Line 1464 of yacc.c  */
#line 1430 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_UNKLINE;
    else
      yy_aconf->port &= ~OPER_FLAG_UNKLINE; 
  }
}
    break;

  case 199:

/* Line 1464 of yacc.c  */
#line 1441 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_GLINE;
    else
      yy_aconf->port &= ~OPER_FLAG_GLINE;
  }
}
    break;

  case 200:

/* Line 1464 of yacc.c  */
#line 1452 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_N;
    else
      yy_aconf->port &= ~OPER_FLAG_N;
  }
}
    break;

  case 201:

/* Line 1464 of yacc.c  */
#line 1463 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_DIE;
    else
      yy_aconf->port &= ~OPER_FLAG_DIE;
  }
}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 1474 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_REHASH;
    else
      yy_aconf->port &= ~OPER_FLAG_REHASH;
  }
}
    break;

  case 203:

/* Line 1464 of yacc.c  */
#line 1485 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_ADMIN;
    else
      yy_aconf->port &= ~OPER_FLAG_ADMIN;
  }
}
    break;

  case 204:

/* Line 1464 of yacc.c  */
#line 1496 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
    else
      yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 1507 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
    else
      yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 206:

/* Line 1464 of yacc.c  */
#line 1518 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_OPER_SPY;
    else
      yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 207:

/* Line 1464 of yacc.c  */
#line 1529 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->port |= OPER_FLAG_OPERWALL;
    else
      yy_aconf->port &= ~OPER_FLAG_OPERWALL;
  }
}
    break;

  case 208:

/* Line 1464 of yacc.c  */
#line 1540 "ircd_parser.y"
    {
}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 1544 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 1545 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 1548 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 1555 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 1562 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 1569 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 1576 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 1583 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 1590 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 1597 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 1604 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 1611 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 1618 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 1625 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 1632 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 1639 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 1646 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 1653 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 1666 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = map_to_conf(yy_conf);
  }
}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 1673 "ircd_parser.y"
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
}
    break;

  case 252:

/* Line 1464 of yacc.c  */
#line 1732 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
}
    break;

  case 253:

/* Line 1464 of yacc.c  */
#line 1741 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
}
    break;

  case 254:

/* Line 1464 of yacc.c  */
#line 1750 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 1756 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 1762 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 1768 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 1774 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 1780 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 1786 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 1792 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 1798 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 1804 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV4(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 1810 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV6(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 1816 "ircd_parser.y"
    {
  if (ypass == 1)
    NumberPerCidr(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 1825 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 1832 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 1841 "ircd_parser.y"
    {
  listener_flags = 0;
}
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 1847 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 1851 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1859 "ircd_parser.y"
    { listener_flags = 0; }
    break;

  case 285:

/* Line 1464 of yacc.c  */
#line 1864 "ircd_parser.y"
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
}
    break;

  case 286:

/* Line 1464 of yacc.c  */
#line 1878 "ircd_parser.y"
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
}
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 1898 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 288:

/* Line 1464 of yacc.c  */
#line 1907 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 289:

/* Line 1464 of yacc.c  */
#line 1919 "ircd_parser.y"
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
}
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1931 "ircd_parser.y"
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

#ifdef HAVE_LIBCRYPTO
      if (yy_aconf->certfp != NULL)
      {
        new_aconf->certfp = MyMalloc(SHA_DIGEST_LENGTH);
        memcpy(new_aconf->certfp, yy_aconf->certfp, SHA_DIGEST_LENGTH);
      }
#endif

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

  case 312:

/* Line 1464 of yacc.c  */
#line 2004 "ircd_parser.y"
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
}
    break;

  case 313:

/* Line 1464 of yacc.c  */
#line 2041 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    /* be paranoid */
    if (yy_aconf->passwd != NULL)
      memset(yy_aconf->passwd, 0, strlen(yy_aconf->passwd));

    MyFree(yy_aconf->passwd);
    DupString(yy_aconf->passwd, yylval.string);
  }
}
    break;

  case 314:

/* Line 1464 of yacc.c  */
#line 2054 "ircd_parser.y"
    {
  if (ypass == 2)
  {
#ifdef HAVE_LIBCRYPTO
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
#endif
  }
}
    break;

  case 315:

/* Line 1464 of yacc.c  */
#line 2075 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
  }
}
    break;

  case 316:

/* Line 1464 of yacc.c  */
#line 2086 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 317:

/* Line 1464 of yacc.c  */
#line 2095 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      SetConfEncrypted(yy_aconf);
    else
      ClearConfEncrypted(yy_aconf);
  }
}
    break;

  case 318:

/* Line 1464 of yacc.c  */
#line 2106 "ircd_parser.y"
    {
}
    break;

  case 322:

/* Line 1464 of yacc.c  */
#line 2110 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 324:

/* Line 1464 of yacc.c  */
#line 2111 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 326:

/* Line 1464 of yacc.c  */
#line 2114 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 327:

/* Line 1464 of yacc.c  */
#line 2122 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 328:

/* Line 1464 of yacc.c  */
#line 2129 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 329:

/* Line 1464 of yacc.c  */
#line 2136 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 330:

/* Line 1464 of yacc.c  */
#line 2143 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 331:

/* Line 1464 of yacc.c  */
#line 2150 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 332:

/* Line 1464 of yacc.c  */
#line 2157 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 333:

/* Line 1464 of yacc.c  */
#line 2164 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 334:

/* Line 1464 of yacc.c  */
#line 2171 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 335:

/* Line 1464 of yacc.c  */
#line 2178 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTDNSBL;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTDNSBL;
  }
}
    break;

  case 336:

/* Line 1464 of yacc.c  */
#line 2185 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_WEBIRC;
    else yy_aconf->flags |= CONF_FLAGS_WEBIRC;
  }
}
    break;

  case 337:

/* Line 1464 of yacc.c  */
#line 2192 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 338:

/* Line 1464 of yacc.c  */
#line 2201 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
  }
}
    break;

  case 339:

/* Line 1464 of yacc.c  */
#line 2212 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 340:

/* Line 1464 of yacc.c  */
#line 2223 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 341:

/* Line 1464 of yacc.c  */
#line 2234 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 342:

/* Line 1464 of yacc.c  */
#line 2245 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
  }
}
    break;

  case 343:

/* Line 1464 of yacc.c  */
#line 2256 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
    else
      yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
  }
}
    break;

  case 344:

/* Line 1464 of yacc.c  */
#line 2268 "ircd_parser.y"
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
}
    break;

  case 345:

/* Line 1464 of yacc.c  */
#line 2287 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 346:

/* Line 1464 of yacc.c  */
#line 2297 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[(3) - (4)].number);
  }
}
    break;

  case 347:

/* Line 1464 of yacc.c  */
#line 2306 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_WEBIRC;
    else
      yy_aconf->flags &= ~CONF_FLAGS_WEBIRC;
  }
}
    break;

  case 348:

/* Line 1464 of yacc.c  */
#line 2317 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
    else
      yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 349:

/* Line 1464 of yacc.c  */
#line 2332 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 350:

/* Line 1464 of yacc.c  */
#line 2339 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 357:

/* Line 1464 of yacc.c  */
#line 2351 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 358:

/* Line 1464 of yacc.c  */
#line 2360 "ircd_parser.y"
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
}
    break;

  case 359:

/* Line 1464 of yacc.c  */
#line 2375 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 360:

/* Line 1464 of yacc.c  */
#line 2388 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 361:

/* Line 1464 of yacc.c  */
#line 2396 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 368:

/* Line 1464 of yacc.c  */
#line 2407 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 369:

/* Line 1464 of yacc.c  */
#line 2416 "ircd_parser.y"
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
}
    break;

  case 370:

/* Line 1464 of yacc.c  */
#line 2438 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 374:

/* Line 1464 of yacc.c  */
#line 2445 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 375:

/* Line 1464 of yacc.c  */
#line 2449 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 376:

/* Line 1464 of yacc.c  */
#line 2453 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 377:

/* Line 1464 of yacc.c  */
#line 2457 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 378:

/* Line 1464 of yacc.c  */
#line 2461 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 379:

/* Line 1464 of yacc.c  */
#line 2465 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 380:

/* Line 1464 of yacc.c  */
#line 2469 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 381:

/* Line 1464 of yacc.c  */
#line 2473 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 382:

/* Line 1464 of yacc.c  */
#line 2477 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 383:

/* Line 1464 of yacc.c  */
#line 2481 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 384:

/* Line 1464 of yacc.c  */
#line 2485 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_SERVICES;
}
    break;

  case 385:

/* Line 1464 of yacc.c  */
#line 2489 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_REHASH;
}
    break;

  case 386:

/* Line 1464 of yacc.c  */
#line 2493 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 387:

/* Line 1464 of yacc.c  */
#line 2502 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 388:

/* Line 1464 of yacc.c  */
#line 2509 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 394:

/* Line 1464 of yacc.c  */
#line 2522 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 395:

/* Line 1464 of yacc.c  */
#line 2528 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 399:

/* Line 1464 of yacc.c  */
#line 2535 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 400:

/* Line 1464 of yacc.c  */
#line 2539 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 401:

/* Line 1464 of yacc.c  */
#line 2543 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 402:

/* Line 1464 of yacc.c  */
#line 2547 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 403:

/* Line 1464 of yacc.c  */
#line 2551 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 404:

/* Line 1464 of yacc.c  */
#line 2555 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 405:

/* Line 1464 of yacc.c  */
#line 2559 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 406:

/* Line 1464 of yacc.c  */
#line 2563 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 407:

/* Line 1464 of yacc.c  */
#line 2567 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 408:

/* Line 1464 of yacc.c  */
#line 2571 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 409:

/* Line 1464 of yacc.c  */
#line 2575 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 410:

/* Line 1464 of yacc.c  */
#line 2584 "ircd_parser.y"
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
}
    break;

  case 411:

/* Line 1464 of yacc.c  */
#line 2602 "ircd_parser.y"
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
}
    break;

  case 436:

/* Line 1464 of yacc.c  */
#line 2741 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name != NULL)
      yyerror("Multiple connect name entry");

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 437:

/* Line 1464 of yacc.c  */
#line 2753 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name != NULL)
      yyerror("Multiple connect name entry");

    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 438:

/* Line 1464 of yacc.c  */
#line 2765 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 439:

/* Line 1464 of yacc.c  */
#line 2774 "ircd_parser.y"
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
}
    break;

  case 440:

/* Line 1464 of yacc.c  */
#line 2800 "ircd_parser.y"
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
}
    break;

  case 441:

/* Line 1464 of yacc.c  */
#line 2818 "ircd_parser.y"
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
}
    break;

  case 442:

/* Line 1464 of yacc.c  */
#line 2836 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[(3) - (4)].number);
}
    break;

  case 443:

/* Line 1464 of yacc.c  */
#line 2842 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 444:

/* Line 1464 of yacc.c  */
#line 2846 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 445:

/* Line 1464 of yacc.c  */
#line 2854 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 446:

/* Line 1464 of yacc.c  */
#line 2863 "ircd_parser.y"
    {
}
    break;

  case 450:

/* Line 1464 of yacc.c  */
#line 2867 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 452:

/* Line 1464 of yacc.c  */
#line 2868 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 454:

/* Line 1464 of yacc.c  */
#line 2871 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 455:

/* Line 1464 of yacc.c  */
#line 2878 "ircd_parser.y"
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
}
    break;

  case 456:

/* Line 1464 of yacc.c  */
#line 2889 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 457:

/* Line 1464 of yacc.c  */
#line 2896 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 458:

/* Line 1464 of yacc.c  */
#line 2903 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 459:

/* Line 1464 of yacc.c  */
#line 2910 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 460:

/* Line 1464 of yacc.c  */
#line 2920 "ircd_parser.y"
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
}
    break;

  case 461:

/* Line 1464 of yacc.c  */
#line 2961 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ENCRYPTED;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ENCRYPTED;
  }
}
    break;

  case 462:

/* Line 1464 of yacc.c  */
#line 2972 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_CRYPTLINK;
    else
      yy_aconf->flags &= ~CONF_FLAGS_CRYPTLINK;
  }
}
    break;

  case 463:

/* Line 1464 of yacc.c  */
#line 2983 "ircd_parser.y"
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
}
    break;

  case 464:

/* Line 1464 of yacc.c  */
#line 2998 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      yy_aconf->flags |= CONF_FLAGS_ALLOW_AUTO_CONN;
    else
      yy_aconf->flags &= ~CONF_FLAGS_ALLOW_AUTO_CONN;
  }
}
    break;

  case 465:

/* Line 1464 of yacc.c  */
#line 3009 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yylval.number)
      SetConfTopicBurst(yy_aconf);
    else
      ClearConfTopicBurst(yy_aconf);
  }
}
    break;

  case 466:

/* Line 1464 of yacc.c  */
#line 3020 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
    DupString(yy_tmp->host, yylval.string);
    DupString(yy_tmp->user, "*");
    dlinkAdd(yy_tmp, &yy_tmp->node, &hub_conf_list);
  }
}
    break;

  case 467:

/* Line 1464 of yacc.c  */
#line 3033 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    struct CollectItem *yy_tmp;

    yy_tmp = (struct CollectItem *)MyMalloc(sizeof(struct CollectItem));
    DupString(yy_tmp->host, yylval.string);
    DupString(yy_tmp->user, "*");
    dlinkAdd(yy_tmp, &yy_tmp->node, &leaf_conf_list);
  }
}
    break;

  case 468:

/* Line 1464 of yacc.c  */
#line 3046 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 469:

/* Line 1464 of yacc.c  */
#line 3055 "ircd_parser.y"
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
}
    break;

  case 470:

/* Line 1464 of yacc.c  */
#line 3090 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 471:

/* Line 1464 of yacc.c  */
#line 3097 "ircd_parser.y"
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
}
    break;

  case 472:

/* Line 1464 of yacc.c  */
#line 3153 "ircd_parser.y"
    {
}
    break;

  case 476:

/* Line 1464 of yacc.c  */
#line 3158 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 483:

/* Line 1464 of yacc.c  */
#line 3167 "ircd_parser.y"
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
}
    break;

  case 484:

/* Line 1464 of yacc.c  */
#line 3186 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 485:

/* Line 1464 of yacc.c  */
#line 3195 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(DLINE_TYPE);
    yy_aconf = map_to_conf(yy_conf);
    /* default reason */
    DupString(yy_aconf->reason, "No reason");
  }
}
    break;

  case 486:

/* Line 1464 of yacc.c  */
#line 3204 "ircd_parser.y"
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
}
    break;

  case 492:

/* Line 1464 of yacc.c  */
#line 3220 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 493:

/* Line 1464 of yacc.c  */
#line 3229 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 500:

/* Line 1464 of yacc.c  */
#line 3246 "ircd_parser.y"
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
}
    break;

  case 501:

/* Line 1464 of yacc.c  */
#line 3264 "ircd_parser.y"
    {
  if (ypass == 2)
  {
#ifdef HAVE_LIBCRYPTO
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
#endif
 }
}
    break;

  case 502:

/* Line 1464 of yacc.c  */
#line 3297 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 503:

/* Line 1464 of yacc.c  */
#line 3304 "ircd_parser.y"
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
}
    break;

  case 504:

/* Line 1464 of yacc.c  */
#line 3338 "ircd_parser.y"
    {
}
    break;

  case 508:

/* Line 1464 of yacc.c  */
#line 3343 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 515:

/* Line 1464 of yacc.c  */
#line 3352 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 516:

/* Line 1464 of yacc.c  */
#line 3358 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 582:

/* Line 1464 of yacc.c  */
#line 3406 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = (yyvsp[(3) - (4)].number);
}
    break;

  case 583:

/* Line 1464 of yacc.c  */
#line 3411 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = (yyvsp[(3) - (4)].number);
}
    break;

  case 584:

/* Line 1464 of yacc.c  */
#line 3416 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 585:

/* Line 1464 of yacc.c  */
#line 3421 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 586:

/* Line 1464 of yacc.c  */
#line 3426 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
}
    break;

  case 587:

/* Line 1464 of yacc.c  */
#line 3431 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 588:

/* Line 1464 of yacc.c  */
#line 3436 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = (yyvsp[(3) - (4)].number);
}
    break;

  case 589:

/* Line 1464 of yacc.c  */
#line 3441 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 590:

/* Line 1464 of yacc.c  */
#line 3446 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 591:

/* Line 1464 of yacc.c  */
#line 3451 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 592:

/* Line 1464 of yacc.c  */
#line 3456 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 593:

/* Line 1464 of yacc.c  */
#line 3461 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 594:

/* Line 1464 of yacc.c  */
#line 3466 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = (yyvsp[(3) - (4)].number); 
}
    break;

  case 595:

/* Line 1464 of yacc.c  */
#line 3471 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = (yyvsp[(3) - (4)].number);
}
    break;

  case 596:

/* Line 1464 of yacc.c  */
#line 3476 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = (yyvsp[(3) - (4)].number);
}
    break;

  case 597:

/* Line 1464 of yacc.c  */
#line 3481 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 598:

/* Line 1464 of yacc.c  */
#line 3486 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_connect_numeric = yylval.number;
}
    break;

  case 599:

/* Line 1464 of yacc.c  */
#line 3491 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = (yyvsp[(3) - (4)].number);
}
    break;

  case 600:

/* Line 1464 of yacc.c  */
#line 3496 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[(3) - (4)].number);
}
    break;

  case 601:

/* Line 1464 of yacc.c  */
#line 3502 "ircd_parser.y"
    {
  if (((yyvsp[(3) - (4)].number) > 0) && ypass == 1)
  {
    ilog(L_CRIT, "You haven't read your config file properly.");
    ilog(L_CRIT, "There is a line in the example conf that will kill your server if not removed.");
    ilog(L_CRIT, "Consider actually reading/editing the conf file, and removing this line.");
    exit(0);
  }
}
    break;

  case 602:

/* Line 1464 of yacc.c  */
#line 3513 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 603:

/* Line 1464 of yacc.c  */
#line 3518 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 604:

/* Line 1464 of yacc.c  */
#line 3527 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key1);
    DupString(ConfigFileEntry.cloak_key1, yylval.string);
  }
}
    break;

  case 605:

/* Line 1464 of yacc.c  */
#line 3536 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key2);
    DupString(ConfigFileEntry.cloak_key2, yylval.string);
  }
}
    break;

  case 606:

/* Line 1464 of yacc.c  */
#line 3545 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key3);
    DupString(ConfigFileEntry.cloak_key3, yylval.string);
  }
}
    break;

  case 607:

/* Line 1464 of yacc.c  */
#line 3554 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.services_name);
    DupString(ConfigFileEntry.services_name, yylval.string);
  }
}
    break;

  case 608:

/* Line 1464 of yacc.c  */
#line 3563 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 609:

/* Line 1464 of yacc.c  */
#line 3568 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 610:

/* Line 1464 of yacc.c  */
#line 3573 "ircd_parser.y"
    {
  ConfigFileEntry.stats_e_disabled = yylval.number;
}
    break;

  case 611:

/* Line 1464 of yacc.c  */
#line 3578 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 612:

/* Line 1464 of yacc.c  */
#line 3583 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 613:

/* Line 1464 of yacc.c  */
#line 3588 "ircd_parser.y"
    {
  ConfigFileEntry.hide_killer = yylval.number;
}
    break;

  case 614:

/* Line 1464 of yacc.c  */
#line 3593 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 615:

/* Line 1464 of yacc.c  */
#line 3596 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 616:

/* Line 1464 of yacc.c  */
#line 3601 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 617:

/* Line 1464 of yacc.c  */
#line 3604 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 618:

/* Line 1464 of yacc.c  */
#line 3609 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = (yyvsp[(3) - (4)].number);
}
    break;

  case 619:

/* Line 1464 of yacc.c  */
#line 3614 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = (yyvsp[(3) - (4)].number);
}
    break;

  case 620:

/* Line 1464 of yacc.c  */
#line 3619 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 621:

/* Line 1464 of yacc.c  */
#line 3624 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = (yyvsp[(3) - (4)].number);
}
    break;

  case 622:

/* Line 1464 of yacc.c  */
#line 3629 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 623:

/* Line 1464 of yacc.c  */
#line 3634 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 624:

/* Line 1464 of yacc.c  */
#line 3639 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 625:

/* Line 1464 of yacc.c  */
#line 3644 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 626:

/* Line 1464 of yacc.c  */
#line 3649 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 627:

/* Line 1464 of yacc.c  */
#line 3660 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = (yyvsp[(3) - (4)].number);
}
    break;

  case 628:

/* Line 1464 of yacc.c  */
#line 3665 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = (yyvsp[(3) - (4)].number);
}
    break;

  case 629:

/* Line 1464 of yacc.c  */
#line 3670 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = (yyvsp[(3) - (4)].number);
}
    break;

  case 630:

/* Line 1464 of yacc.c  */
#line 3675 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 631:

/* Line 1464 of yacc.c  */
#line 3684 "ircd_parser.y"
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
}
    break;

  case 632:

/* Line 1464 of yacc.c  */
#line 3716 "ircd_parser.y"
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
}
    break;

  case 633:

/* Line 1464 of yacc.c  */
#line 3734 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 634:

/* Line 1464 of yacc.c  */
#line 3739 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 635:

/* Line 1464 of yacc.c  */
#line 3748 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 636:

/* Line 1464 of yacc.c  */
#line 3753 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 637:

/* Line 1464 of yacc.c  */
#line 3758 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 638:

/* Line 1464 of yacc.c  */
#line 3763 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 642:

/* Line 1464 of yacc.c  */
#line 3769 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 643:

/* Line 1464 of yacc.c  */
#line 3772 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 644:

/* Line 1464 of yacc.c  */
#line 3775 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NOCTCP;
}
    break;

  case 645:

/* Line 1464 of yacc.c  */
#line 3778 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 646:

/* Line 1464 of yacc.c  */
#line 3781 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 647:

/* Line 1464 of yacc.c  */
#line 3784 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 648:

/* Line 1464 of yacc.c  */
#line 3787 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 649:

/* Line 1464 of yacc.c  */
#line 3790 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 650:

/* Line 1464 of yacc.c  */
#line 3793 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 651:

/* Line 1464 of yacc.c  */
#line 3796 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 652:

/* Line 1464 of yacc.c  */
#line 3799 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 653:

/* Line 1464 of yacc.c  */
#line 3802 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 654:

/* Line 1464 of yacc.c  */
#line 3805 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 655:

/* Line 1464 of yacc.c  */
#line 3808 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 656:

/* Line 1464 of yacc.c  */
#line 3811 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 657:

/* Line 1464 of yacc.c  */
#line 3814 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 658:

/* Line 1464 of yacc.c  */
#line 3817 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 659:

/* Line 1464 of yacc.c  */
#line 3820 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 660:

/* Line 1464 of yacc.c  */
#line 3823 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 661:

/* Line 1464 of yacc.c  */
#line 3826 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_HIDECHANNELS;
}
    break;

  case 662:

/* Line 1464 of yacc.c  */
#line 3831 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 666:

/* Line 1464 of yacc.c  */
#line 3837 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 667:

/* Line 1464 of yacc.c  */
#line 3840 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 668:

/* Line 1464 of yacc.c  */
#line 3843 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NOCTCP;
}
    break;

  case 669:

/* Line 1464 of yacc.c  */
#line 3846 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 670:

/* Line 1464 of yacc.c  */
#line 3849 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 671:

/* Line 1464 of yacc.c  */
#line 3852 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 672:

/* Line 1464 of yacc.c  */
#line 3855 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 673:

/* Line 1464 of yacc.c  */
#line 3858 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 674:

/* Line 1464 of yacc.c  */
#line 3861 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 675:

/* Line 1464 of yacc.c  */
#line 3864 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 676:

/* Line 1464 of yacc.c  */
#line 3867 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 677:

/* Line 1464 of yacc.c  */
#line 3870 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 678:

/* Line 1464 of yacc.c  */
#line 3873 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 679:

/* Line 1464 of yacc.c  */
#line 3876 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 680:

/* Line 1464 of yacc.c  */
#line 3879 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 681:

/* Line 1464 of yacc.c  */
#line 3882 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 682:

/* Line 1464 of yacc.c  */
#line 3885 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 683:

/* Line 1464 of yacc.c  */
#line 3888 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 684:

/* Line 1464 of yacc.c  */
#line 3891 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 685:

/* Line 1464 of yacc.c  */
#line 3894 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_HIDECHANNELS;
}
    break;

  case 686:

/* Line 1464 of yacc.c  */
#line 3899 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = (yyvsp[(3) - (4)].number);
}
    break;

  case 687:

/* Line 1464 of yacc.c  */
#line 3904 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = (yyvsp[(3) - (4)].number);
}
    break;

  case 688:

/* Line 1464 of yacc.c  */
#line 3909 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = (yyvsp[(3) - (4)].number);
}
    break;

  case 689:

/* Line 1464 of yacc.c  */
#line 3914 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = (yyvsp[(3) - (4)].number);
}
    break;

  case 690:

/* Line 1464 of yacc.c  */
#line 3919 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 691:

/* Line 1464 of yacc.c  */
#line 3927 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = map_to_conf(yy_conf);
  }
}
    break;

  case 692:

/* Line 1464 of yacc.c  */
#line 3934 "ircd_parser.y"
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
}
    break;

  case 702:

/* Line 1464 of yacc.c  */
#line 3960 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 703:

/* Line 1464 of yacc.c  */
#line 3966 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 704:

/* Line 1464 of yacc.c  */
#line 3972 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 708:

/* Line 1464 of yacc.c  */
#line 3978 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 709:

/* Line 1464 of yacc.c  */
#line 3982 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 710:

/* Line 1464 of yacc.c  */
#line 3988 "ircd_parser.y"
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
}
    break;

  case 711:

/* Line 1464 of yacc.c  */
#line 4022 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 712:

/* Line 1464 of yacc.c  */
#line 4031 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 713:

/* Line 1464 of yacc.c  */
#line 4035 "ircd_parser.y"
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
}
    break;

  case 716:

/* Line 1464 of yacc.c  */
#line 4082 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 717:

/* Line 1464 of yacc.c  */
#line 4086 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 743:

/* Line 1464 of yacc.c  */
#line 4111 "ircd_parser.y"
    {
  ConfigChannel.cycle_on_hostchange = yylval.number;
}
    break;

  case 744:

/* Line 1464 of yacc.c  */
#line 4116 "ircd_parser.y"
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
    break;

  case 745:

/* Line 1464 of yacc.c  */
#line 4121 "ircd_parser.y"
    {
  ConfigChannel.restrict_channels = yylval.number;
}
    break;

  case 746:

/* Line 1464 of yacc.c  */
#line 4126 "ircd_parser.y"
    {
  ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 747:

/* Line 1464 of yacc.c  */
#line 4131 "ircd_parser.y"
    {
  ConfigChannel.use_except = yylval.number;
}
    break;

  case 748:

/* Line 1464 of yacc.c  */
#line 4136 "ircd_parser.y"
    {
  ConfigChannel.use_invex = yylval.number;
}
    break;

  case 749:

/* Line 1464 of yacc.c  */
#line 4141 "ircd_parser.y"
    {
  ConfigChannel.regex_bans = yylval.number;
}
    break;

  case 750:

/* Line 1464 of yacc.c  */
#line 4146 "ircd_parser.y"
    {
  ConfigChannel.use_knock = yylval.number;
}
    break;

  case 751:

/* Line 1464 of yacc.c  */
#line 4151 "ircd_parser.y"
    {
  ConfigChannel.use_noctcp = yylval.number;
}
    break;

  case 752:

/* Line 1464 of yacc.c  */
#line 4156 "ircd_parser.y"
    {
  ConfigChannel.knock_delay = (yyvsp[(3) - (4)].number);
}
    break;

  case 753:

/* Line 1464 of yacc.c  */
#line 4161 "ircd_parser.y"
    {
  ConfigChannel.knock_delay_channel = (yyvsp[(3) - (4)].number);
}
    break;

  case 754:

/* Line 1464 of yacc.c  */
#line 4166 "ircd_parser.y"
    {
  ConfigChannel.max_chans_per_user = (yyvsp[(3) - (4)].number);
}
    break;

  case 755:

/* Line 1464 of yacc.c  */
#line 4171 "ircd_parser.y"
    {
  ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 756:

/* Line 1464 of yacc.c  */
#line 4176 "ircd_parser.y"
    {
  ConfigChannel.max_bans = (yyvsp[(3) - (4)].number);
}
    break;

  case 757:

/* Line 1464 of yacc.c  */
#line 4181 "ircd_parser.y"
    {
  ConfigChannel.default_split_user_count = (yyvsp[(3) - (4)].number);
}
    break;

  case 758:

/* Line 1464 of yacc.c  */
#line 4186 "ircd_parser.y"
    {
  ConfigChannel.default_split_server_count = (yyvsp[(3) - (4)].number);
}
    break;

  case 759:

/* Line 1464 of yacc.c  */
#line 4191 "ircd_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 760:

/* Line 1464 of yacc.c  */
#line 4196 "ircd_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 761:

/* Line 1464 of yacc.c  */
#line 4201 "ircd_parser.y"
    {
  ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 762:

/* Line 1464 of yacc.c  */
#line 4206 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 763:

/* Line 1464 of yacc.c  */
#line 4211 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 775:

/* Line 1464 of yacc.c  */
#line 4230 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 776:

/* Line 1464 of yacc.c  */
#line 4236 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 777:

/* Line 1464 of yacc.c  */
#line 4242 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
}
    break;

  case 778:

/* Line 1464 of yacc.c  */
#line 4251 "ircd_parser.y"
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
}
    break;

  case 779:

/* Line 1464 of yacc.c  */
#line 4265 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 780:

/* Line 1464 of yacc.c  */
#line 4271 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 781:

/* Line 1464 of yacc.c  */
#line 4277 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;



/* Line 1464 of yacc.c  */
#line 9079 "y.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



