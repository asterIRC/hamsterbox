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
     DOT_IN_IP6_ADDR = 306,
     DOTS_IN_IDENT = 307,
     DURATION = 308,
     EGDPOOL_PATH = 309,
     EMAIL = 310,
     ENABLE = 311,
     ENCRYPTED = 312,
     EXCEED_LIMIT = 313,
     EXEMPT = 314,
     FAILED_OPER_NOTICE = 315,
     FAKENAME = 316,
     IRCD_FLAGS = 317,
     FLATTEN_LINKS = 318,
     FFAILED_OPERLOG = 319,
     FKILLLOG = 320,
     FKLINELOG = 321,
     FGLINELOG = 322,
     FIOERRLOG = 323,
     FOPERLOG = 324,
     FOPERSPYLOG = 325,
     FUSERLOG = 326,
     GECOS = 327,
     GENERAL = 328,
     GLINE = 329,
     GLINES = 330,
     GLINE_EXEMPT = 331,
     GLINE_LOG = 332,
     GLINE_TIME = 333,
     GLINE_MIN_CIDR = 334,
     GLINE_MIN_CIDR6 = 335,
     GLOBAL_KILL = 336,
     IRCD_AUTH = 337,
     NEED_IDENT = 338,
     HAVENT_READ_CONF = 339,
     HIDDEN = 340,
     HIDDEN_ADMIN = 341,
     HIDDEN_NAME = 342,
     HIDDEN_OPER = 343,
     HIDE_SERVER_IPS = 344,
     HIDE_SERVERS = 345,
     HIDE_SPOOF_IPS = 346,
     HOST = 347,
     HUB = 348,
     HUB_MASK = 349,
     IDLETIME = 350,
     IGNORE_BOGUS_TS = 351,
     INVISIBLE_ON_CONNECT = 352,
     IP = 353,
     KILL = 354,
     KILL_CHASE_TIME_LIMIT = 355,
     KLINE = 356,
     KLINE_EXEMPT = 357,
     KLINE_REASON = 358,
     KLINE_WITH_REASON = 359,
     KNOCK_DELAY = 360,
     KNOCK_DELAY_CHANNEL = 361,
     LAZYLINK = 362,
     LEAF_MASK = 363,
     LINKS_DELAY = 364,
     LISTEN = 365,
     T_LOG = 366,
     LOGGING = 367,
     LOG_LEVEL = 368,
     MAX_ACCEPT = 369,
     MAX_BANS = 370,
     MAX_CHANS_PER_USER = 371,
     MAX_GLOBAL = 372,
     MAX_IDENT = 373,
     MAX_LOCAL = 374,
     MAX_NICK_CHANGES = 375,
     MAX_NICK_TIME = 376,
     MAX_NUMBER = 377,
     MAX_TARGETS = 378,
     MESSAGE_LOCALE = 379,
     MIN_NONWILDCARD = 380,
     MIN_NONWILDCARD_SIMPLE = 381,
     MODULE = 382,
     MODULES = 383,
     NAME = 384,
     NEED_PASSWORD = 385,
     IS_WEBIRC = 386,
     NETWORK_DESC = 387,
     NETWORK_NAME = 388,
     NICK = 389,
     NICK_CHANGES = 390,
     NO_CREATE_ON_SPLIT = 391,
     NO_JOIN_ON_SPLIT = 392,
     NO_OPER_FLOOD = 393,
     NO_TILDE = 394,
     NOT = 395,
     NUMBER = 396,
     NUMBER_PER_IDENT = 397,
     NUMBER_PER_CIDR = 398,
     NUMBER_PER_IP = 399,
     NUMBER_PER_IP_GLOBAL = 400,
     OPERATOR = 401,
     OPERS_BYPASS_CALLERID = 402,
     OPER_LOG = 403,
     OPER_ONLY_UMODES = 404,
     OPER_PASS_RESV = 405,
     OPER_SPY_T = 406,
     OPER_FARCONNECT = 407,
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
     T_FARCONNECT = 481,
     T_INVISIBLE = 482,
     T_IPV4 = 483,
     T_IPV6 = 484,
     T_LOCOPS = 485,
     T_LOGPATH = 486,
     T_L_CRIT = 487,
     T_L_DEBUG = 488,
     T_L_ERROR = 489,
     T_L_INFO = 490,
     T_L_NOTICE = 491,
     T_L_TRACE = 492,
     T_L_WARN = 493,
     T_MAX_CLIENTS = 494,
     T_NCHANGE = 495,
     T_OPERWALL = 496,
     T_REJ = 497,
     T_SERVNOTICE = 498,
     T_SKILL = 499,
     T_SPY = 500,
     T_SSL = 501,
     T_UMODES = 502,
     T_UNAUTH = 503,
     T_UNRESV = 504,
     T_UNXLINE = 505,
     T_WALLOP = 506,
     THROTTLE_TIME = 507,
     TOPICBURST = 508,
     TRUE_NO_OPER_FLOOD = 509,
     TKLINE = 510,
     TXLINE = 511,
     TRESV = 512,
     UNKLINE = 513,
     USER = 514,
     USE_EGD = 515,
     USE_EXCEPT = 516,
     USE_INVEX = 517,
     HIDE_KILLER = 518,
     USE_REGEX_BANS = 519,
     USE_KNOCK = 520,
     USE_NOCTCP = 521,
     USE_LOGGING = 522,
     USE_WHOIS_ACTUALLY = 523,
     VHOST = 524,
     VHOST6 = 525,
     XLINE = 526,
     WARN = 527,
     WARN_NO_NLINE = 528
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
#define DOT_IN_IP6_ADDR 306
#define DOTS_IN_IDENT 307
#define DURATION 308
#define EGDPOOL_PATH 309
#define EMAIL 310
#define ENABLE 311
#define ENCRYPTED 312
#define EXCEED_LIMIT 313
#define EXEMPT 314
#define FAILED_OPER_NOTICE 315
#define FAKENAME 316
#define IRCD_FLAGS 317
#define FLATTEN_LINKS 318
#define FFAILED_OPERLOG 319
#define FKILLLOG 320
#define FKLINELOG 321
#define FGLINELOG 322
#define FIOERRLOG 323
#define FOPERLOG 324
#define FOPERSPYLOG 325
#define FUSERLOG 326
#define GECOS 327
#define GENERAL 328
#define GLINE 329
#define GLINES 330
#define GLINE_EXEMPT 331
#define GLINE_LOG 332
#define GLINE_TIME 333
#define GLINE_MIN_CIDR 334
#define GLINE_MIN_CIDR6 335
#define GLOBAL_KILL 336
#define IRCD_AUTH 337
#define NEED_IDENT 338
#define HAVENT_READ_CONF 339
#define HIDDEN 340
#define HIDDEN_ADMIN 341
#define HIDDEN_NAME 342
#define HIDDEN_OPER 343
#define HIDE_SERVER_IPS 344
#define HIDE_SERVERS 345
#define HIDE_SPOOF_IPS 346
#define HOST 347
#define HUB 348
#define HUB_MASK 349
#define IDLETIME 350
#define IGNORE_BOGUS_TS 351
#define INVISIBLE_ON_CONNECT 352
#define IP 353
#define KILL 354
#define KILL_CHASE_TIME_LIMIT 355
#define KLINE 356
#define KLINE_EXEMPT 357
#define KLINE_REASON 358
#define KLINE_WITH_REASON 359
#define KNOCK_DELAY 360
#define KNOCK_DELAY_CHANNEL 361
#define LAZYLINK 362
#define LEAF_MASK 363
#define LINKS_DELAY 364
#define LISTEN 365
#define T_LOG 366
#define LOGGING 367
#define LOG_LEVEL 368
#define MAX_ACCEPT 369
#define MAX_BANS 370
#define MAX_CHANS_PER_USER 371
#define MAX_GLOBAL 372
#define MAX_IDENT 373
#define MAX_LOCAL 374
#define MAX_NICK_CHANGES 375
#define MAX_NICK_TIME 376
#define MAX_NUMBER 377
#define MAX_TARGETS 378
#define MESSAGE_LOCALE 379
#define MIN_NONWILDCARD 380
#define MIN_NONWILDCARD_SIMPLE 381
#define MODULE 382
#define MODULES 383
#define NAME 384
#define NEED_PASSWORD 385
#define IS_WEBIRC 386
#define NETWORK_DESC 387
#define NETWORK_NAME 388
#define NICK 389
#define NICK_CHANGES 390
#define NO_CREATE_ON_SPLIT 391
#define NO_JOIN_ON_SPLIT 392
#define NO_OPER_FLOOD 393
#define NO_TILDE 394
#define NOT 395
#define NUMBER 396
#define NUMBER_PER_IDENT 397
#define NUMBER_PER_CIDR 398
#define NUMBER_PER_IP 399
#define NUMBER_PER_IP_GLOBAL 400
#define OPERATOR 401
#define OPERS_BYPASS_CALLERID 402
#define OPER_LOG 403
#define OPER_ONLY_UMODES 404
#define OPER_PASS_RESV 405
#define OPER_SPY_T 406
#define OPER_FARCONNECT 407
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
#define T_FARCONNECT 481
#define T_INVISIBLE 482
#define T_IPV4 483
#define T_IPV6 484
#define T_LOCOPS 485
#define T_LOGPATH 486
#define T_L_CRIT 487
#define T_L_DEBUG 488
#define T_L_ERROR 489
#define T_L_INFO 490
#define T_L_NOTICE 491
#define T_L_TRACE 492
#define T_L_WARN 493
#define T_MAX_CLIENTS 494
#define T_NCHANGE 495
#define T_OPERWALL 496
#define T_REJ 497
#define T_SERVNOTICE 498
#define T_SKILL 499
#define T_SPY 500
#define T_SSL 501
#define T_UMODES 502
#define T_UNAUTH 503
#define T_UNRESV 504
#define T_UNXLINE 505
#define T_WALLOP 506
#define THROTTLE_TIME 507
#define TOPICBURST 508
#define TRUE_NO_OPER_FLOOD 509
#define TKLINE 510
#define TXLINE 511
#define TRESV 512
#define UNKLINE 513
#define USER 514
#define USE_EGD 515
#define USE_EXCEPT 516
#define USE_INVEX 517
#define HIDE_KILLER 518
#define USE_REGEX_BANS 519
#define USE_KNOCK 520
#define USE_NOCTCP 521
#define USE_LOGGING 522
#define USE_WHOIS_ACTUALLY 523
#define VHOST 524
#define VHOST6 525
#define XLINE 526
#define WARN 527
#define WARN_NO_NLINE 528




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 135 "ircd_parser.y"

  int number;
  char *string;



/* Line 214 of yacc.c  */
#line 772 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 784 "y.tab.c"

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
#define YYLAST   1516

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  279
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  362
/* YYNRULES -- Number of rules.  */
#define YYNRULES  784
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1584

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   528

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   278,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   274,
       2,   277,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   276,     2,   275,     2,     2,     2,     2,
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
     265,   266,   267,   268,   269,   270,   271,   272,   273
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
     570,   572,   574,   576,   578,   583,   588,   593,   598,   603,
     608,   613,   618,   623,   628,   633,   638,   643,   648,   653,
     654,   660,   664,   666,   667,   671,   672,   675,   677,   679,
     681,   683,   685,   687,   689,   691,   693,   695,   697,   699,
     701,   703,   705,   707,   709,   710,   718,   719,   721,   724,
     726,   728,   730,   732,   734,   736,   738,   740,   742,   744,
     746,   748,   750,   752,   755,   760,   762,   767,   772,   777,
     782,   787,   792,   797,   802,   807,   812,   817,   822,   823,
     830,   831,   837,   841,   843,   845,   847,   850,   852,   854,
     856,   858,   860,   863,   864,   870,   874,   876,   878,   882,
     887,   892,   893,   900,   903,   905,   907,   909,   911,   913,
     915,   917,   919,   921,   923,   925,   927,   929,   931,   933,
     935,   937,   939,   941,   944,   949,   954,   959,   964,   969,
     974,   975,   981,   985,   987,   988,   992,   993,   996,   998,
    1000,  1002,  1004,  1006,  1008,  1010,  1012,  1014,  1016,  1018,
    1023,  1028,  1033,  1038,  1043,  1048,  1053,  1058,  1063,  1068,
    1073,  1074,  1081,  1084,  1086,  1088,  1090,  1092,  1095,  1100,
    1105,  1110,  1111,  1118,  1121,  1123,  1125,  1127,  1129,  1132,
    1137,  1142,  1143,  1149,  1153,  1155,  1157,  1159,  1161,  1163,
    1165,  1167,  1169,  1171,  1173,  1175,  1177,  1179,  1181,  1182,
    1189,  1192,  1194,  1196,  1198,  1201,  1206,  1207,  1213,  1217,
    1219,  1221,  1223,  1225,  1227,  1229,  1231,  1233,  1235,  1237,
    1239,  1241,  1242,  1250,  1251,  1253,  1256,  1258,  1260,  1262,
    1264,  1266,  1268,  1270,  1272,  1274,  1276,  1278,  1280,  1282,
    1284,  1286,  1288,  1290,  1292,  1294,  1296,  1299,  1304,  1306,
    1311,  1316,  1321,  1326,  1331,  1336,  1341,  1346,  1347,  1353,
    1357,  1359,  1360,  1364,  1365,  1368,  1370,  1372,  1374,  1376,
    1378,  1380,  1385,  1390,  1395,  1400,  1405,  1410,  1415,  1420,
    1425,  1430,  1431,  1438,  1439,  1445,  1449,  1451,  1453,  1456,
    1458,  1460,  1462,  1464,  1466,  1471,  1476,  1477,  1484,  1487,
    1489,  1491,  1493,  1495,  1500,  1505,  1511,  1514,  1516,  1518,
    1520,  1522,  1527,  1532,  1533,  1540,  1541,  1547,  1551,  1553,
    1555,  1558,  1560,  1562,  1564,  1566,  1568,  1573,  1578,  1584,
    1587,  1589,  1591,  1593,  1595,  1597,  1599,  1601,  1603,  1605,
    1607,  1609,  1611,  1613,  1615,  1617,  1619,  1621,  1623,  1625,
    1627,  1629,  1631,  1633,  1635,  1637,  1639,  1641,  1643,  1645,
    1647,  1649,  1651,  1653,  1655,  1657,  1659,  1661,  1663,  1665,
    1667,  1669,  1671,  1673,  1675,  1677,  1679,  1681,  1683,  1685,
    1687,  1689,  1691,  1693,  1695,  1697,  1699,  1701,  1703,  1705,
    1707,  1709,  1711,  1713,  1718,  1723,  1728,  1733,  1738,  1743,
    1748,  1753,  1758,  1763,  1768,  1773,  1778,  1783,  1788,  1793,
    1798,  1803,  1808,  1813,  1818,  1823,  1828,  1833,  1838,  1843,
    1848,  1853,  1858,  1863,  1868,  1873,  1878,  1883,  1888,  1893,
    1898,  1903,  1908,  1913,  1918,  1923,  1928,  1933,  1938,  1943,
    1948,  1953,  1958,  1963,  1968,  1973,  1978,  1983,  1988,  1993,
    1994,  2000,  2004,  2006,  2008,  2010,  2012,  2014,  2016,  2018,
    2020,  2022,  2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,
    2040,  2042,  2044,  2046,  2048,  2049,  2055,  2059,  2061,  2063,
    2065,  2067,  2069,  2071,  2073,  2075,  2077,  2079,  2081,  2083,
    2085,  2087,  2089,  2091,  2093,  2095,  2097,  2099,  2101,  2103,
    2108,  2113,  2118,  2123,  2128,  2129,  2136,  2139,  2141,  2143,
    2145,  2147,  2149,  2151,  2153,  2155,  2160,  2165,  2166,  2172,
    2176,  2178,  2180,  2182,  2187,  2192,  2193,  2199,  2203,  2205,
    2207,  2209,  2215,  2218,  2220,  2222,  2224,  2226,  2228,  2230,
    2232,  2234,  2236,  2238,  2240,  2242,  2244,  2246,  2248,  2250,
    2252,  2254,  2256,  2258,  2260,  2262,  2264,  2269,  2274,  2279,
    2284,  2289,  2294,  2299,  2304,  2309,  2314,  2319,  2324,  2329,
    2334,  2339,  2344,  2349,  2354,  2359,  2364,  2369,  2375,  2378,
    2380,  2382,  2384,  2386,  2388,  2390,  2392,  2394,  2396,  2401,
    2406,  2411,  2416,  2421,  2426
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     280,     0,    -1,    -1,   280,   281,    -1,   312,    -1,   318,
      -1,   333,    -1,   607,    -1,   372,    -1,   391,    -1,   405,
      -1,   298,    -1,   631,    -1,   433,    -1,   440,    -1,   450,
      -1,   459,    -1,   490,    -1,   500,    -1,   506,    -1,   521,
      -1,   591,    -1,   511,    -1,   286,    -1,   291,    -1,     1,
     274,    -1,     1,   275,    -1,    -1,   283,    -1,   141,   282,
      -1,   141,   181,   282,    -1,   141,   182,   282,    -1,   141,
     183,   282,    -1,   141,   184,   282,    -1,   141,   185,   282,
      -1,    -1,   285,    -1,   141,   284,    -1,   141,    15,   284,
      -1,   141,    16,   284,    -1,   141,    17,   284,    -1,   128,
     276,   287,   275,   274,    -1,   287,   288,    -1,   288,    -1,
     289,    -1,   290,    -1,     1,   274,    -1,   127,   277,   164,
     274,    -1,   159,   277,   164,   274,    -1,    -1,    50,   292,
     276,   293,   275,   274,    -1,   293,   294,    -1,   294,    -1,
     295,    -1,   296,    -1,   297,    -1,     1,   274,    -1,   129,
     277,   164,   274,    -1,    53,   277,   283,   274,    -1,   166,
     277,   164,   274,    -1,   189,   276,   299,   275,   274,    -1,
     299,   300,    -1,   300,    -1,   303,    -1,   308,    -1,   311,
      -1,   305,    -1,   306,    -1,   307,    -1,   310,    -1,   302,
      -1,   309,    -1,   304,    -1,   301,    -1,     1,   274,    -1,
     178,   277,   164,   274,    -1,   176,   277,   164,   274,    -1,
     129,   277,   164,   274,    -1,   193,   277,   164,   274,    -1,
      43,   277,   164,   274,    -1,   133,   277,   164,   274,    -1,
     132,   277,   164,   274,    -1,   269,   277,   164,   274,    -1,
     270,   277,   164,   274,    -1,   239,   277,   141,   274,    -1,
      93,   277,   207,   274,    -1,     5,   276,   313,   275,   274,
      -1,   313,   314,    -1,   314,    -1,   315,    -1,   317,    -1,
     316,    -1,     1,   274,    -1,   129,   277,   164,   274,    -1,
      55,   277,   164,   274,    -1,    43,   277,   164,   274,    -1,
     112,   276,   319,   275,   274,    -1,   319,   320,    -1,   320,
      -1,   321,    -1,   322,    -1,   331,    -1,   332,    -1,   323,
      -1,   325,    -1,   327,    -1,   328,    -1,   330,    -1,   326,
      -1,   329,    -1,   324,    -1,     1,   274,    -1,   231,   277,
     164,   274,    -1,   148,   277,   164,   274,    -1,    71,   277,
     164,   274,    -1,    64,   277,   164,   274,    -1,    69,   277,
     164,   274,    -1,    70,   277,   164,   274,    -1,    67,   277,
     164,   274,    -1,    66,   277,   164,   274,    -1,    68,   277,
     164,   274,    -1,    65,   277,   164,   274,    -1,   113,   277,
     232,   274,    -1,   113,   277,   234,   274,    -1,   113,   277,
     238,   274,    -1,   113,   277,   236,   274,    -1,   113,   277,
     237,   274,    -1,   113,   277,   235,   274,    -1,   113,   277,
     233,   274,    -1,   267,   277,   207,   274,    -1,    -1,   146,
     334,   335,   276,   336,   275,   274,    -1,    -1,   339,    -1,
     336,   337,    -1,   337,    -1,   338,    -1,   340,    -1,   342,
      -1,   361,    -1,   362,    -1,   346,    -1,   345,    -1,   350,
      -1,   351,    -1,   353,    -1,   354,    -1,   355,    -1,   356,
      -1,   357,    -1,   352,    -1,   358,    -1,   359,    -1,   360,
      -1,   364,    -1,   343,    -1,   344,    -1,   341,    -1,   363,
      -1,   365,    -1,     1,   274,    -1,   129,   277,   164,   274,
      -1,   164,    -1,   259,   277,   164,   274,    -1,    28,   277,
     164,   274,    -1,   158,   277,   164,   274,    -1,    57,   277,
     207,   274,    -1,   177,   277,   164,   274,    -1,    27,   277,
     164,   274,    -1,    -1,   247,   347,   277,   348,   274,    -1,
     348,   278,   349,    -1,   349,    -1,   214,    -1,   217,    -1,
     218,    -1,   220,    -1,   221,    -1,   224,    -1,   244,    -1,
     240,    -1,   242,    -1,   248,    -1,   245,    -1,   223,    -1,
     241,    -1,   243,    -1,   227,    -1,   251,    -1,   215,    -1,
     216,    -1,   230,    -1,   225,    -1,   226,    -1,    81,   277,
     207,   274,    -1,   172,   277,   207,   274,    -1,   173,   277,
     207,   274,    -1,   101,   277,   207,   274,    -1,   271,   277,
     207,   274,    -1,   258,   277,   207,   274,    -1,    74,   277,
     207,   274,    -1,   135,   277,   207,   274,    -1,    44,   277,
     207,   274,    -1,   170,   277,   207,   274,    -1,     5,   277,
     207,   274,    -1,    86,   277,   207,   274,    -1,    88,   277,
     207,   274,    -1,   151,   277,   207,   274,    -1,   241,   277,
     207,   274,    -1,    -1,    62,   366,   277,   367,   274,    -1,
     367,   278,   368,    -1,   368,    -1,    -1,   140,   369,   371,
      -1,    -1,   370,   371,    -1,    81,    -1,   172,    -1,   101,
      -1,   258,    -1,   271,    -1,    74,    -1,    44,    -1,   170,
      -1,     5,    -1,    86,    -1,   135,    -1,   241,    -1,   151,
      -1,    88,    -1,   173,    -1,    57,    -1,   152,    -1,    -1,
      27,   373,   374,   276,   375,   275,   274,    -1,    -1,   378,
      -1,   375,   376,    -1,   376,    -1,   377,    -1,   388,    -1,
     389,    -1,   379,    -1,   380,    -1,   390,    -1,   381,    -1,
     382,    -1,   383,    -1,   384,    -1,   385,    -1,   386,    -1,
     387,    -1,     1,   274,    -1,   129,   277,   164,   274,    -1,
     164,    -1,   161,   277,   283,   274,    -1,   162,   277,   283,
     274,    -1,   144,   277,   141,   274,    -1,    35,   277,   283,
     274,    -1,   122,   277,   141,   274,    -1,   117,   277,   141,
     274,    -1,   119,   277,   141,   274,    -1,   118,   277,   141,
     274,    -1,   186,   277,   285,   274,    -1,    24,   277,   141,
     274,    -1,    25,   277,   141,   274,    -1,   143,   277,   141,
     274,    -1,    -1,   110,   392,   276,   397,   275,   274,    -1,
      -1,    62,   394,   277,   395,   274,    -1,   395,   278,   396,
      -1,   396,    -1,   246,    -1,    85,    -1,   397,   398,    -1,
     398,    -1,   399,    -1,   393,    -1,   403,    -1,   404,    -1,
       1,   274,    -1,    -1,   163,   277,   401,   400,   274,    -1,
     401,   278,   402,    -1,   402,    -1,   141,    -1,   141,   212,
     141,    -1,    98,   277,   164,   274,    -1,    92,   277,   164,
     274,    -1,    -1,    82,   406,   276,   407,   275,   274,    -1,
     407,   408,    -1,   408,    -1,   409,    -1,   410,    -1,   413,
      -1,   415,    -1,   422,    -1,   423,    -1,   424,    -1,   426,
      -1,   427,    -1,   428,    -1,   412,    -1,   431,    -1,   429,
      -1,   430,    -1,   425,    -1,   432,    -1,   414,    -1,   411,
      -1,     1,   274,    -1,   259,   277,   164,   274,    -1,   158,
     277,   164,   274,    -1,    28,   277,   164,   274,    -1,   201,
     277,   207,   274,    -1,    27,   277,   164,   274,    -1,    57,
     277,   207,   274,    -1,    -1,    62,   416,   277,   417,   274,
      -1,   417,   278,   418,    -1,   418,    -1,    -1,   140,   419,
     421,    -1,    -1,   420,   421,    -1,   201,    -1,    58,    -1,
     102,    -1,    83,    -1,    21,    -1,    22,    -1,   139,    -1,
      76,    -1,   180,    -1,   131,    -1,   130,    -1,   102,   277,
     207,   274,    -1,    83,   277,   207,   274,    -1,    58,   277,
     207,   274,    -1,    21,   277,   207,   274,    -1,   139,   277,
     207,   274,    -1,    76,   277,   207,   274,    -1,   200,   277,
     164,   274,    -1,   168,   277,   164,   274,    -1,   167,   277,
     141,   274,    -1,   131,   277,   207,   274,    -1,   130,   277,
     207,   274,    -1,    -1,   179,   434,   276,   435,   275,   274,
      -1,   435,   436,    -1,   436,    -1,   437,    -1,   438,    -1,
     439,    -1,     1,   274,    -1,   166,   277,   164,   274,    -1,
      23,   277,   164,   274,    -1,   134,   277,   164,   274,    -1,
      -1,   195,   441,   276,   442,   275,   274,    -1,   442,   443,
      -1,   443,    -1,   444,    -1,   445,    -1,   446,    -1,     1,
     274,    -1,   129,   277,   164,   274,    -1,   259,   277,   164,
     274,    -1,    -1,   197,   447,   277,   448,   274,    -1,   448,
     278,   449,    -1,   449,    -1,   101,    -1,   255,    -1,   258,
      -1,   271,    -1,   256,    -1,   250,    -1,   179,    -1,   257,
      -1,   249,    -1,   230,    -1,   190,    -1,   170,    -1,   213,
      -1,    -1,   196,   451,   276,   452,   275,   274,    -1,   452,
     453,    -1,   453,    -1,   454,    -1,   455,    -1,     1,   274,
      -1,   129,   277,   164,   274,    -1,    -1,   197,   456,   277,
     457,   274,    -1,   457,   278,   458,    -1,   458,    -1,   101,
      -1,   255,    -1,   258,    -1,   271,    -1,   256,    -1,   250,
      -1,   179,    -1,   257,    -1,   249,    -1,   230,    -1,   213,
      -1,    -1,    34,   460,   461,   276,   462,   275,   274,    -1,
      -1,   465,    -1,   462,   463,    -1,   463,    -1,   464,    -1,
     466,    -1,   467,    -1,   468,    -1,   469,    -1,   471,    -1,
     470,    -1,   472,    -1,   473,    -1,   486,    -1,   487,    -1,
     488,    -1,   484,    -1,   481,    -1,   483,    -1,   482,    -1,
     480,    -1,   489,    -1,   485,    -1,     1,   274,    -1,   129,
     277,   164,   274,    -1,   164,    -1,    92,   277,   164,   274,
      -1,   269,   277,   164,   274,    -1,   187,   277,   164,   274,
      -1,     3,   277,   164,   274,    -1,   163,   277,   141,   274,
      -1,     6,   277,   228,   274,    -1,     6,   277,   229,   274,
      -1,    61,   277,   164,   274,    -1,    -1,    62,   474,   277,
     475,   274,    -1,   475,   278,   476,    -1,   476,    -1,    -1,
     140,   477,   479,    -1,    -1,   478,   479,    -1,   107,    -1,
      32,    -1,    36,    -1,    11,    -1,    13,    -1,   253,    -1,
     177,   277,   164,   274,    -1,    57,   277,   207,   274,    -1,
      36,   277,   207,   274,    -1,    32,   277,   207,   274,    -1,
      11,   277,   207,   274,    -1,   253,   277,   207,   274,    -1,
      94,   277,   164,   274,    -1,   108,   277,   164,   274,    -1,
      27,   277,   164,   274,    -1,    26,   277,   164,   274,    -1,
      -1,    99,   491,   276,   496,   275,   274,    -1,    -1,   197,
     493,   277,   494,   274,    -1,   494,   278,   495,    -1,   495,
      -1,   169,    -1,   496,   497,    -1,   497,    -1,   498,    -1,
     499,    -1,   492,    -1,     1,    -1,   259,   277,   164,   274,
      -1,   166,   277,   164,   274,    -1,    -1,    42,   501,   276,
     502,   275,   274,    -1,   502,   503,    -1,   503,    -1,   504,
      -1,   505,    -1,     1,    -1,    98,   277,   164,   274,    -1,
     166,   277,   164,   274,    -1,    59,   276,   507,   275,   274,
      -1,   507,   508,    -1,   508,    -1,   509,    -1,   510,    -1,
       1,    -1,    98,   277,   164,   274,    -1,    28,   277,   164,
     274,    -1,    -1,    72,   512,   276,   517,   275,   274,    -1,
      -1,   197,   514,   277,   515,   274,    -1,   515,   278,   516,
      -1,   516,    -1,   169,    -1,   517,   518,    -1,   518,    -1,
     519,    -1,   520,    -1,   513,    -1,     1,    -1,   129,   277,
     164,   274,    -1,   166,   277,   164,   274,    -1,    73,   276,
     522,   275,   274,    -1,   522,   523,    -1,   523,    -1,   531,
      -1,   532,    -1,   534,    -1,   535,    -1,   536,    -1,   537,
      -1,   538,    -1,   539,    -1,   540,    -1,   541,    -1,   542,
      -1,   530,    -1,   544,    -1,   545,    -1,   550,    -1,   551,
      -1,   568,    -1,   553,    -1,   556,    -1,   558,    -1,   557,
      -1,   561,    -1,   554,    -1,   562,    -1,   563,    -1,   564,
      -1,   565,    -1,   567,    -1,   566,    -1,   582,    -1,   569,
      -1,   573,    -1,   574,    -1,   578,    -1,   559,    -1,   560,
      -1,   588,    -1,   586,    -1,   587,    -1,   570,    -1,   533,
      -1,   571,    -1,   552,    -1,   572,    -1,   589,    -1,   577,
      -1,   543,    -1,   590,    -1,   575,    -1,   576,    -1,   526,
      -1,   529,    -1,   524,    -1,   525,    -1,   527,    -1,   528,
      -1,   555,    -1,   546,    -1,   547,    -1,   548,    -1,   549,
      -1,     1,    -1,    79,   277,   141,   274,    -1,    80,   277,
     141,   274,    -1,    13,   277,   207,   274,    -1,   268,   277,
     207,   274,    -1,   171,   277,   283,   274,    -1,   194,   277,
     207,   274,    -1,   100,   277,   141,   274,    -1,    91,   277,
     207,   274,    -1,    96,   277,   207,   274,    -1,    49,   277,
     207,   274,    -1,    60,   277,   207,   274,    -1,     8,   277,
     207,   274,    -1,   121,   277,   283,   274,    -1,   120,   277,
     141,   274,    -1,   114,   277,   141,   274,    -1,     9,   277,
     283,   274,    -1,    10,   277,   207,   274,    -1,   211,   277,
     283,   274,    -1,   210,   277,   283,   274,    -1,    84,   277,
     141,   274,    -1,   104,   277,   207,   274,    -1,   103,   277,
     164,   274,    -1,    29,   277,   164,   274,    -1,    30,   277,
     164,   274,    -1,    31,   277,   164,   274,    -1,   191,   277,
     164,   274,    -1,    97,   277,   207,   274,    -1,   273,   277,
     207,   274,    -1,   202,   277,   207,   274,    -1,   205,   277,
     207,   274,    -1,   206,   277,   207,   274,    -1,   263,   277,
     207,   274,    -1,   204,   277,   207,   274,    -1,   204,   277,
     208,   274,    -1,   203,   277,   207,   274,    -1,   203,   277,
     208,   274,    -1,   156,   277,   283,   274,    -1,    20,   277,
     283,   274,    -1,   147,   277,   207,   274,    -1,   157,   277,
     283,   274,    -1,   198,   277,   207,   274,    -1,   138,   277,
     207,   274,    -1,   254,   277,   207,   274,    -1,   150,   277,
     207,   274,    -1,   124,   277,   164,   274,    -1,    95,   277,
     283,   274,    -1,    52,   277,   141,   274,    -1,   123,   277,
     141,   274,    -1,   192,   277,   164,   274,    -1,    38,   277,
     164,   274,    -1,    33,   277,   141,   274,    -1,   260,   277,
     207,   274,    -1,    54,   277,   164,   274,    -1,   160,   277,
     207,   274,    -1,    45,   277,   207,   274,    -1,   252,   277,
     283,   274,    -1,    -1,   153,   579,   277,   580,   274,    -1,
     580,   278,   581,    -1,   581,    -1,   214,    -1,   217,    -1,
     218,    -1,   220,    -1,   221,    -1,   224,    -1,   244,    -1,
     240,    -1,   242,    -1,   248,    -1,   245,    -1,   223,    -1,
     241,    -1,   243,    -1,   227,    -1,   251,    -1,   215,    -1,
     216,    -1,   230,    -1,   225,    -1,   226,    -1,    -1,   149,
     583,   277,   584,   274,    -1,   584,   278,   585,    -1,   585,
      -1,   214,    -1,   217,    -1,   218,    -1,   220,    -1,   221,
      -1,   224,    -1,   244,    -1,   240,    -1,   242,    -1,   248,
      -1,   245,    -1,   223,    -1,   241,    -1,   243,    -1,   227,
      -1,   251,    -1,   215,    -1,   216,    -1,   230,    -1,   225,
      -1,   226,    -1,   125,   277,   141,   274,    -1,   126,   277,
     141,   274,    -1,    39,   277,   141,   274,    -1,   219,   277,
     285,   274,    -1,    51,   277,   207,   274,    -1,    -1,    75,
     592,   276,   593,   275,   274,    -1,   593,   594,    -1,   594,
      -1,   595,    -1,   596,    -1,   597,    -1,   601,    -1,   602,
      -1,   603,    -1,     1,    -1,    56,   277,   207,   274,    -1,
      53,   277,   283,   274,    -1,    -1,   112,   598,   277,   599,
     274,    -1,   599,   278,   600,    -1,   600,    -1,   209,    -1,
      12,    -1,   259,   277,   164,   274,    -1,   129,   277,   164,
     274,    -1,    -1,     4,   604,   277,   605,   274,    -1,   605,
     278,   606,    -1,   606,    -1,   209,    -1,    12,    -1,    23,
     276,   608,   275,   274,    -1,   608,   609,    -1,   609,    -1,
     613,    -1,   614,    -1,   615,    -1,   617,    -1,   618,    -1,
     616,    -1,   623,    -1,   619,    -1,   620,    -1,   621,    -1,
     622,    -1,   624,    -1,   625,    -1,   626,    -1,   612,    -1,
     627,    -1,   628,    -1,   629,    -1,   630,    -1,   611,    -1,
     610,    -1,     1,    -1,    37,   277,   207,   274,    -1,    46,
     277,   207,   274,    -1,   174,   277,   207,   274,    -1,    48,
     277,   207,   274,    -1,   261,   277,   207,   274,    -1,   262,
     277,   207,   274,    -1,   264,   277,   207,   274,    -1,   265,
     277,   207,   274,    -1,   266,   277,   207,   274,    -1,   105,
     277,   283,   274,    -1,   106,   277,   283,   274,    -1,   116,
     277,   141,   274,    -1,   165,   277,   207,   274,    -1,   115,
     277,   141,   274,    -1,    41,   277,   141,   274,    -1,    40,
     277,   141,   274,    -1,   136,   277,   207,   274,    -1,   137,
     277,   207,   274,    -1,    14,   277,   207,   274,    -1,   154,
     277,   141,   274,    -1,   155,   277,   283,   274,    -1,   188,
     276,   632,   275,   274,    -1,   632,   633,    -1,   633,    -1,
     634,    -1,   635,    -1,   637,    -1,   639,    -1,   638,    -1,
     636,    -1,   640,    -1,     1,    -1,    63,   277,   207,   274,
      -1,    90,   277,   207,   274,    -1,    87,   277,   164,   274,
      -1,   109,   277,   283,   274,    -1,    85,   277,   207,   274,
      -1,    47,   277,   207,   274,    -1,    89,   277,   207,   274,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   412,   412,   413,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   442,   442,   443,
     447,   451,   455,   459,   463,   469,   469,   470,   471,   472,
     473,   480,   483,   483,   484,   484,   484,   486,   503,   516,
     515,   536,   536,   538,   538,   538,   538,   540,   549,   555,
     567,   570,   571,   572,   572,   573,   573,   574,   574,   575,
     576,   576,   577,   577,   578,   580,   614,   674,   688,   703,
     712,   726,   735,   763,   793,   816,   866,   868,   868,   869,
     869,   870,   870,   872,   881,   890,   903,   905,   906,   908,
     908,   909,   910,   910,   911,   911,   912,   912,   913,   913,
     914,   915,   917,   921,   925,   932,   939,   946,   953,   960,
     967,   974,   981,   985,   989,   993,   997,  1001,  1005,  1011,
    1021,  1020,  1122,  1122,  1123,  1123,  1124,  1124,  1124,  1124,
    1125,  1125,  1126,  1126,  1126,  1127,  1127,  1127,  1128,  1128,
    1128,  1129,  1129,  1129,  1129,  1130,  1130,  1130,  1130,  1131,
    1131,  1133,  1145,  1157,  1191,  1212,  1224,  1235,  1277,  1287,
    1286,  1292,  1292,  1293,  1297,  1301,  1305,  1309,  1313,  1317,
    1321,  1325,  1329,  1333,  1337,  1341,  1345,  1349,  1353,  1357,
    1361,  1365,  1369,  1373,  1379,  1390,  1401,  1412,  1423,  1434,
    1445,  1456,  1467,  1478,  1489,  1500,  1511,  1522,  1533,  1545,
    1544,  1548,  1548,  1549,  1549,  1550,  1550,  1552,  1559,  1566,
    1573,  1580,  1587,  1594,  1601,  1608,  1615,  1622,  1629,  1636,
    1643,  1650,  1657,  1664,  1678,  1677,  1726,  1726,  1728,  1728,
    1729,  1730,  1730,  1731,  1732,  1733,  1734,  1735,  1736,  1737,
    1738,  1739,  1740,  1741,  1743,  1752,  1761,  1767,  1773,  1779,
    1785,  1791,  1797,  1803,  1809,  1815,  1821,  1827,  1837,  1836,
    1853,  1852,  1857,  1857,  1858,  1862,  1868,  1868,  1869,  1869,
    1869,  1869,  1869,  1871,  1871,  1873,  1873,  1875,  1889,  1909,
    1918,  1931,  1930,  2007,  2007,  2008,  2008,  2008,  2008,  2009,
    2009,  2010,  2010,  2010,  2011,  2011,  2011,  2012,  2012,  2012,
    2013,  2013,  2013,  2013,  2015,  2052,  2065,  2086,  2097,  2106,
    2118,  2117,  2121,  2121,  2122,  2122,  2123,  2123,  2125,  2133,
    2140,  2147,  2154,  2161,  2168,  2175,  2182,  2189,  2196,  2205,
    2216,  2227,  2238,  2249,  2260,  2272,  2291,  2301,  2310,  2321,
    2337,  2336,  2352,  2352,  2353,  2353,  2353,  2353,  2355,  2364,
    2379,  2393,  2392,  2408,  2408,  2409,  2409,  2409,  2409,  2411,
    2420,  2443,  2442,  2448,  2448,  2449,  2453,  2457,  2461,  2465,
    2469,  2473,  2477,  2481,  2485,  2489,  2493,  2497,  2507,  2506,
    2523,  2523,  2524,  2524,  2524,  2526,  2533,  2532,  2538,  2538,
    2539,  2543,  2547,  2551,  2555,  2559,  2563,  2567,  2571,  2575,
    2579,  2589,  2588,  2734,  2734,  2735,  2735,  2736,  2736,  2736,
    2737,  2737,  2738,  2738,  2739,  2739,  2739,  2740,  2740,  2740,
    2741,  2741,  2741,  2742,  2742,  2743,  2743,  2745,  2757,  2769,
    2778,  2804,  2822,  2840,  2846,  2850,  2858,  2868,  2867,  2871,
    2871,  2872,  2872,  2873,  2873,  2875,  2882,  2893,  2900,  2907,
    2914,  2924,  2965,  2976,  2987,  3002,  3013,  3024,  3037,  3050,
    3059,  3095,  3094,  3158,  3157,  3161,  3161,  3162,  3168,  3168,
    3169,  3169,  3169,  3169,  3171,  3190,  3200,  3199,  3221,  3221,
    3222,  3222,  3222,  3224,  3233,  3245,  3247,  3247,  3248,  3248,
    3248,  3250,  3268,  3302,  3301,  3343,  3342,  3346,  3346,  3347,
    3353,  3353,  3354,  3354,  3354,  3354,  3356,  3362,  3371,  3374,
    3374,  3375,  3375,  3376,  3376,  3377,  3377,  3378,  3378,  3379,
    3380,  3380,  3381,  3381,  3382,  3382,  3383,  3383,  3384,  3384,
    3385,  3385,  3386,  3386,  3387,  3387,  3388,  3388,  3389,  3389,
    3390,  3390,  3391,  3391,  3392,  3392,  3393,  3393,  3394,  3394,
    3395,  3395,  3396,  3396,  3397,  3397,  3398,  3398,  3399,  3399,
    3400,  3400,  3401,  3401,  3402,  3402,  3403,  3403,  3404,  3404,
    3404,  3405,  3406,  3410,  3415,  3420,  3425,  3430,  3435,  3440,
    3445,  3450,  3455,  3460,  3465,  3470,  3475,  3480,  3485,  3490,
    3495,  3500,  3506,  3517,  3522,  3531,  3540,  3549,  3558,  3567,
    3572,  3577,  3582,  3587,  3592,  3597,  3600,  3605,  3608,  3613,
    3618,  3623,  3628,  3633,  3638,  3643,  3648,  3653,  3664,  3669,
    3674,  3679,  3688,  3720,  3738,  3743,  3752,  3757,  3762,  3768,
    3767,  3772,  3772,  3773,  3776,  3779,  3782,  3785,  3788,  3791,
    3794,  3797,  3800,  3803,  3806,  3809,  3812,  3815,  3818,  3821,
    3824,  3827,  3830,  3833,  3839,  3838,  3843,  3843,  3844,  3847,
    3850,  3853,  3856,  3859,  3862,  3865,  3868,  3871,  3874,  3877,
    3880,  3883,  3886,  3889,  3892,  3895,  3898,  3901,  3904,  3909,
    3914,  3919,  3924,  3929,  3938,  3937,  3961,  3961,  3962,  3963,
    3964,  3965,  3966,  3967,  3968,  3970,  3976,  3983,  3982,  3987,
    3987,  3988,  3992,  3998,  4032,  4042,  4041,  4091,  4091,  4092,
    4096,  4105,  4108,  4108,  4109,  4109,  4110,  4110,  4110,  4110,
    4111,  4111,  4112,  4112,  4113,  4113,  4114,  4115,  4115,  4116,
    4116,  4117,  4117,  4118,  4119,  4119,  4121,  4126,  4131,  4136,
    4141,  4146,  4151,  4156,  4161,  4166,  4171,  4176,  4181,  4186,
    4191,  4196,  4201,  4206,  4211,  4216,  4221,  4229,  4232,  4232,
    4233,  4233,  4234,  4235,  4236,  4236,  4237,  4238,  4240,  4246,
    4252,  4261,  4275,  4281,  4287
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
  "DNSBL", "DOT_IN_IP6_ADDR", "DOTS_IN_IDENT", "DURATION", "EGDPOOL_PATH",
  "EMAIL", "ENABLE", "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT",
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
  "OPER_ONLY_UMODES", "OPER_PASS_RESV", "OPER_SPY_T", "OPER_FARCONNECT",
  "OPER_UMODES", "JOIN_FLOOD_COUNT", "JOIN_FLOOD_TIME", "PACE_WAIT",
  "PACE_WAIT_SIMPLE", "PASSWORD", "PATH", "PING_COOKIE", "PING_TIME",
  "PING_WARNING", "PORT", "QSTRING", "QUIET_ON_BAN", "REASON", "REDIRPORT",
  "REDIRSERV", "REGEX_T", "REHASH", "TREJECT_HOLD_TIME", "REMOTE",
  "REMOTEBAN", "RESTRICT_CHANNELS", "RESTRICTED", "RSA_PRIVATE_KEY_FILE",
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
  "T_FARCONNECT", "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS",
  "T_LOGPATH", "T_L_CRIT", "T_L_DEBUG", "T_L_ERROR", "T_L_INFO",
  "T_L_NOTICE", "T_L_TRACE", "T_L_WARN", "T_MAX_CLIENTS", "T_NCHANGE",
  "T_OPERWALL", "T_REJ", "T_SERVNOTICE", "T_SKILL", "T_SPY", "T_SSL",
  "T_UMODES", "T_UNAUTH", "T_UNRESV", "T_UNXLINE", "T_WALLOP",
  "THROTTLE_TIME", "TOPICBURST", "TRUE_NO_OPER_FLOOD", "TKLINE", "TXLINE",
  "TRESV", "UNKLINE", "USER", "USE_EGD", "USE_EXCEPT", "USE_INVEX",
  "HIDE_KILLER", "USE_REGEX_BANS", "USE_KNOCK", "USE_NOCTCP",
  "USE_LOGGING", "USE_WHOIS_ACTUALLY", "VHOST", "VHOST6", "XLINE", "WARN",
  "WARN_NO_NLINE", "';'", "'}'", "'{'", "'='", "','", "$accept", "conf",
  "conf_item", "timespec_", "timespec", "sizespec_", "sizespec",
  "modules_entry", "modules_items", "modules_item", "modules_module",
  "modules_path", "dnsbl_entry", "$@1", "dnsbl_items", "dnsbl_item",
  "dnsbl_name", "dnsbl_duration", "dnsbl_reason", "serverinfo_entry",
  "serverinfo_items", "serverinfo_item", "serverinfo_ssl_certificate_file",
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
     525,   526,   527,   528,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   279,   280,   280,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   282,   282,   283,
     283,   283,   283,   283,   283,   284,   284,   285,   285,   285,
     285,   286,   287,   287,   288,   288,   288,   289,   290,   292,
     291,   293,   293,   294,   294,   294,   294,   295,   296,   297,
     298,   299,   299,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   313,   314,
     314,   314,   314,   315,   316,   317,   318,   319,   319,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   331,   331,   331,   331,   331,   331,   332,
     334,   333,   335,   335,   336,   336,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   347,
     346,   348,   348,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   366,
     365,   367,   367,   369,   368,   370,   368,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   373,   372,   374,   374,   375,   375,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   392,   391,
     394,   393,   395,   395,   396,   396,   397,   397,   398,   398,
     398,   398,   398,   400,   399,   401,   401,   402,   402,   403,
     404,   406,   405,   407,   407,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   409,   410,   411,   412,   413,   414,
     416,   415,   417,   417,   419,   418,   420,   418,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     434,   433,   435,   435,   436,   436,   436,   436,   437,   438,
     439,   441,   440,   442,   442,   443,   443,   443,   443,   444,
     445,   447,   446,   448,   448,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   451,   450,
     452,   452,   453,   453,   453,   454,   456,   455,   457,   457,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   460,   459,   461,   461,   462,   462,   463,   463,   463,
     463,   463,   463,   463,   463,   463,   463,   463,   463,   463,
     463,   463,   463,   463,   463,   463,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   471,   472,   474,   473,   475,
     475,   477,   476,   478,   476,   479,   479,   479,   479,   479,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   491,   490,   493,   492,   494,   494,   495,   496,   496,
     497,   497,   497,   497,   498,   499,   501,   500,   502,   502,
     503,   503,   503,   504,   505,   506,   507,   507,   508,   508,
     508,   509,   510,   512,   511,   514,   513,   515,   515,   516,
     517,   517,   518,   518,   518,   518,   519,   520,   521,   522,
     522,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   556,   557,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   579,
     578,   580,   580,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   583,   582,   584,   584,   585,   585,
     585,   585,   585,   585,   585,   585,   585,   585,   585,   585,
     585,   585,   585,   585,   585,   585,   585,   585,   585,   586,
     587,   588,   589,   590,   592,   591,   593,   593,   594,   594,
     594,   594,   594,   594,   594,   595,   596,   598,   597,   599,
     599,   600,   600,   601,   602,   604,   603,   605,   605,   606,
     606,   607,   608,   608,   609,   609,   609,   609,   609,   609,
     609,   609,   609,   609,   609,   609,   609,   609,   609,   609,
     609,   609,   609,   609,   609,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   632,   632,
     633,   633,   633,   633,   633,   633,   633,   633,   634,   635,
     636,   637,   638,   639,   640
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
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     0,     3,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     6,
       0,     5,     3,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     2,     0,     5,     3,     1,     1,     3,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     4,     4,     4,     4,     4,     4,
       0,     5,     3,     1,     0,     3,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     2,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     2,     4,
       4,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       2,     1,     1,     1,     2,     4,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     7,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     0,     3,     0,     2,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     6,     0,     5,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     4,     4,     5,     2,     1,     1,     1,
       1,     4,     4,     0,     6,     0,     5,     3,     1,     1,
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
       1,     1,     1,     1,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     0,     5,     3,
       1,     1,     1,     4,     4,     0,     5,     3,     1,     1,
       1,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   234,   411,   486,    49,
       0,   503,     0,   694,   291,   471,   268,     0,     0,   130,
     350,     0,     0,   361,   388,     3,    23,    24,    11,     4,
       5,     6,     8,     9,    10,    13,    14,    15,    16,    17,
      18,    19,    22,    20,    21,     7,    12,    25,    26,     0,
       0,   236,   413,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    91,    90,   745,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   723,   744,   743,   738,   724,   725,   726,   729,
     727,   728,   731,   732,   733,   734,   730,   735,   736,   737,
     739,   740,   741,   742,   255,     0,   237,   438,     0,   414,
       0,     0,   500,     0,     0,     0,   497,   498,   499,     0,
     582,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   664,     0,   639,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   520,   573,   574,   571,   575,   576,   572,
     532,   521,   522,   561,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   567,   533,   534,   578,   579,   580,   581,
     535,   536,   563,   538,   543,   577,   539,   541,   540,   555,
     556,   542,   544,   545,   546,   547,   549,   548,   537,   551,
     560,   562,   564,   552,   553,   569,   570,   566,   554,   550,
     558,   559,   557,   565,   568,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   103,   110,   104,   108,
     105,   106,   109,   107,   101,   102,     0,     0,     0,     0,
      43,    44,    45,   162,     0,   133,     0,   777,     0,     0,
       0,     0,     0,     0,     0,     0,   769,   770,   771,   775,
     772,   774,   773,   776,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    73,    70,
      63,    72,    66,    67,    68,    64,    71,    69,    65,     0,
       0,    92,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   722,
       0,     0,   492,     0,     0,     0,   489,   490,   491,     0,
       0,     0,     0,     0,    52,    53,    54,    55,     0,     0,
       0,   496,   515,     0,     0,   505,   514,     0,   511,   512,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   519,   704,   715,     0,     0,   707,     0,
       0,     0,   697,   698,   699,   700,   701,   702,   703,     0,
       0,     0,     0,     0,     0,   320,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   294,
     295,   296,   312,   305,   297,   311,   298,   299,   300,   301,
     309,   302,   303,   304,   307,   308,   306,   310,   483,     0,
     473,     0,   482,     0,   479,   480,   481,     0,   270,     0,
       0,     0,   279,     0,   277,   278,   280,   281,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    46,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,   353,   354,   355,   356,     0,     0,
       0,     0,     0,     0,     0,     0,   768,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,     0,   371,     0,     0,   364,   365,   366,   367,
       0,     0,   396,     0,   391,   392,   393,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   721,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   239,
     240,   243,   244,   246,   247,   248,   249,   250,   251,   252,
     241,   242,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   447,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   416,   417,   418,   419,   420,   421,
     423,   422,   424,   425,   433,   430,   432,   431,   429,   435,
     426,   427,   428,   434,     0,     0,     0,   488,    56,     0,
       0,     0,     0,    51,     0,     0,   495,     0,     0,     0,
       0,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,   518,     0,     0,     0,
       0,     0,     0,     0,   696,   313,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   293,     0,     0,     0,     0,
     478,   282,     0,     0,     0,     0,     0,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,    41,
       0,     0,     0,     0,     0,     0,   209,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,     0,     0,     0,     0,   135,   136,   137,   157,
     138,   155,   156,   142,   141,   143,   144,   150,   145,   146,
     147,   148,   149,   151,   152,   153,   139,   140,   158,   154,
     159,   357,     0,     0,     0,     0,   352,     0,     0,     0,
       0,     0,     0,     0,   767,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,   368,     0,     0,
       0,     0,   363,   394,     0,     0,     0,   390,    95,    94,
      93,   764,   746,   761,   760,   747,   749,    27,    27,    27,
      27,    27,    29,    28,   755,   756,   759,   757,   762,   763,
     765,   766,   758,   748,   750,   751,   752,   753,   754,   253,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,   436,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   415,     0,     0,   487,
       0,     0,     0,    50,   502,   501,     0,     0,     0,   504,
     594,   598,   599,   585,   620,   605,   606,   607,   633,   632,
     691,   637,   592,   693,   629,   635,   593,   583,   584,   602,
     590,   628,   591,   609,   589,   604,   603,   597,   596,   595,
     630,   627,   689,   690,   624,   621,   668,   684,   685,   669,
     670,   671,   672,   679,   673,   687,   688,   682,   686,   675,
     680,   676,   681,   674,   678,   677,   683,     0,   667,   626,
     643,   659,   660,   644,   645,   646,   647,   654,   648,   662,
     663,   657,   661,   650,   655,   651,   656,   649,   653,   652,
     658,     0,   642,   619,   622,   636,   587,   608,   631,   588,
     623,   611,   617,   618,   615,   616,   612,   613,   601,   600,
      35,    35,    35,    37,    36,   692,   638,   625,   634,   614,
     586,   610,     0,     0,     0,     0,     0,     0,   695,     0,
       0,     0,     0,     0,   326,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   292,     0,     0,
       0,   472,     0,     0,     0,   287,   283,   286,   269,   115,
     121,   119,   118,   120,   116,   117,   114,   122,   128,   123,
     127,   125,   126,   124,   113,   112,   129,    47,    48,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   134,     0,     0,     0,   351,
     783,   778,   782,   780,   784,   779,   781,    79,    85,    77,
      81,    80,    76,    75,    78,    84,    82,    83,     0,     0,
       0,   362,     0,     0,   389,    30,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   453,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   412,   493,   494,    58,    57,    59,
     516,   517,   509,     0,   508,   665,     0,   640,     0,    38,
      39,    40,   720,   719,     0,   718,   706,   705,   712,   711,
       0,   710,   714,   713,   342,   318,   316,   319,   341,   324,
       0,   323,     0,   344,   340,   339,   349,   348,   343,   315,
     347,   346,   345,   317,   314,   485,   477,     0,   476,   484,
     275,   274,     0,   273,   290,   289,     0,     0,     0,     0,
       0,     0,     0,     0,   215,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,   359,   360,   358,   369,   375,   386,
     381,   385,   387,   384,   383,   380,   376,   379,   382,   377,
     378,     0,   374,   370,   395,   400,   406,   410,   409,   408,
     405,   401,   404,   407,   402,   403,     0,   399,   265,   266,
     259,   261,   263,   262,   260,   254,   267,   258,   256,   257,
     264,   442,   444,   445,   465,   470,   469,   464,   463,   462,
     446,   451,     0,   450,     0,   439,   467,   468,   437,   443,
     461,   441,   466,   440,   506,     0,   666,   641,   716,     0,
     708,     0,     0,   321,   326,   332,   333,   329,   335,   331,
     330,   338,   337,   334,   336,   328,   327,   474,     0,   271,
       0,   288,   285,   284,   204,   168,   164,   202,   166,   213,
       0,   212,     0,   200,   194,   205,   206,   197,   161,   201,
     207,   165,   203,   195,   196,   167,   208,   173,   189,   190,
     174,   175,   176,   177,   184,   178,   192,   193,   187,   191,
     180,   185,   181,   186,   179,   183,   182,   188,     0,   172,
     199,   163,   198,   372,     0,   397,     0,     0,   448,   453,
     458,   459,   456,   457,   455,   460,   454,   507,   717,   709,
     325,   322,   475,   272,     0,   210,   215,   225,   223,   232,
     222,   217,   226,   230,   219,   227,   229,   233,   224,   218,
     231,   228,   220,   221,   216,   170,     0,   373,   398,   452,
     449,   214,   211,   171
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    25,   962,   963,  1133,  1134,    26,   299,   300,
     301,   302,    27,    54,   393,   394,   395,   396,   397,    28,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,    29,    74,    75,    76,    77,    78,    30,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,    31,    64,   304,   885,   886,   887,
     305,   888,   889,   890,   891,   892,   893,   894,  1220,  1528,
    1529,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   907,   908,   909,   910,  1205,  1490,  1491,
    1554,  1492,  1574,    32,    51,   125,   658,   659,   660,   126,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,    33,    61,   542,   832,  1352,  1353,   543,   544,
     545,  1358,  1176,  1177,   546,   547,    34,    59,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   811,  1330,  1331,
    1462,  1332,  1476,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,    35,    65,   573,   574,   575,   576,
     577,    36,    68,   605,   606,   607,   608,   609,   939,  1401,
    1402,    37,    69,   613,   614,   615,   616,   945,  1416,  1417,
      38,    52,   128,   693,   694,   695,   129,   696,   697,   698,
     699,   700,   701,   702,   703,  1005,  1442,  1443,  1537,  1444,
    1546,   704,   705,   706,   707,   708,   709,   710,   711,   712,
     713,    39,    60,   532,   827,  1347,  1348,   533,   534,   535,
     536,    40,    53,   385,   386,   387,   388,    41,   135,   136,
     137,   138,    42,    56,   406,   729,  1303,  1304,   407,   408,
     409,   410,    43,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     449,  1111,  1112,   259,   447,  1087,  1088,   260,   261,   262,
     263,   264,    44,    58,   481,   482,   483,   484,   485,   800,
    1320,  1321,   486,   487,   488,   797,  1314,  1315,    45,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    46,   315,   316,   317,   318,   319,   320,   321,
     322,   323
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -919
static const yytype_int16 yypact[] =
{
    -919,   938,  -919,  -265,  -273,  -254,  -919,  -919,  -919,  -919,
    -243,  -919,  -241,  -919,  -919,  -919,  -919,  -231,  -212,  -919,
    -919,  -197,  -195,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,    13,
     790,  -145,  -137,  -182,  -149,    25,  -146,   534,  -141,  -122,
    -116,  -101,   531,   108,   -26,   -89,   364,   338,   -87,   -61,
     -56,   -57,   -48,   -46,     5,  -919,  -919,  -919,  -919,  -919,
     -43,   -40,   -39,   -36,   -35,   -31,   -29,   -28,   -24,   -17,
     -15,   -12,   -11,    -7,    -1,     6,    11,    19,    24,    26,
      32,   238,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,    44,  -919,  -919,    48,  -919,
      84,   289,  -919,    56,    61,    10,  -919,  -919,  -919,   125,
    -919,    69,    75,    80,    85,    86,    90,    91,    92,    96,
      99,   102,   109,   110,   111,   113,   117,   120,   121,   132,
     133,   139,   143,   144,   145,   146,   147,   148,   152,   155,
     157,   159,   160,   162,   164,   166,   167,  -919,   168,  -919,
     169,   170,   171,   173,   175,   179,   180,   183,   184,   195,
     207,   208,   209,   212,   215,   216,   218,   221,   224,   228,
     229,   230,    53,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,   346,   832,    15,   376,    -5,
     233,   235,   240,   241,   242,   243,   246,   249,   250,   251,
     253,   257,    50,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,    21,   259,   260,    12,
    -919,  -919,  -919,  -919,    51,  -919,   328,  -919,   261,   263,
     264,   268,   271,   272,   273,   105,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,    67,   274,   275,   276,   278,   279,
     282,   283,   284,   285,   291,   294,    29,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,    64,
      30,  -919,   118,   358,   402,   300,  -919,   368,   371,   440,
     441,   377,   382,   449,   449,   450,   451,   386,   397,   465,
     449,   403,   404,   405,   408,   410,   413,   414,   349,  -919,
     545,   748,  -919,   356,   359,    31,  -919,  -919,  -919,   350,
     362,   363,   366,    17,  -919,  -919,  -919,  -919,   462,   471,
     367,  -919,  -919,   370,   372,  -919,  -919,    22,  -919,  -919,
    -919,   438,   449,   443,   444,   449,   488,   489,   492,   520,
     501,   525,   463,   464,   466,   535,   511,   470,   537,   539,
     541,   479,   449,   485,   486,   554,   532,   490,   558,   559,
     449,   560,   538,   563,   567,   502,   503,   434,   505,   436,
     449,   449,   507,   449,   552,   553,   512,   513,   514,   -23,
      18,   516,   517,   449,   449,   577,   449,   523,   526,   527,
     528,   536,   467,  -919,  -919,  -919,   469,   473,  -919,   475,
     478,    43,  -919,  -919,  -919,  -919,  -919,  -919,  -919,   474,
     480,   481,   483,   484,   487,  -919,   491,   494,   495,   496,
     500,   504,   506,   508,   510,   519,   524,   529,   357,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,   540,
    -919,   542,  -919,    14,  -919,  -919,  -919,   493,  -919,   543,
     544,   546,  -919,    33,  -919,  -919,  -919,  -919,  -919,   583,
     599,   601,   602,   605,   614,   615,   618,   245,   625,   626,
     586,   548,  -919,  -919,   636,   639,   550,  -919,   641,   555,
     549,   551,   557,    74,  -919,  -919,  -919,  -919,   608,   609,
     628,   648,   634,   637,   449,   569,  -919,  -919,   681,   640,
     682,   684,   685,   686,   687,   690,   714,   693,   694,   587,
    -919,   588,   589,  -919,   592,    35,  -919,  -919,  -919,  -919,
     590,   593,  -919,    36,  -919,  -919,  -919,   591,   597,   598,
    -919,   600,   604,   606,   607,   610,   611,   223,   613,   617,
     619,   623,   624,   627,   633,   635,   642,   643,   644,   645,
     646,   654,   656,  -919,   657,   596,   655,   659,   660,   663,
     664,   665,   670,   672,   673,   674,   675,   676,   347,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,   680,   679,   683,   689,   691,   692,   696,
     697,   698,   701,  -919,   702,   704,   706,   707,   709,   710,
     712,   716,   717,   334,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,   699,   711,   721,  -919,  -919,   449,
     715,   719,   722,  -919,   724,   729,  -919,   728,   746,   727,
     731,  -919,   732,   733,   734,   738,   740,   741,   742,   744,
     745,   747,   749,   753,   754,   755,   756,   757,   760,   761,
     762,   764,   765,   766,   767,   769,   770,   771,   772,   775,
     779,   783,   785,   786,   789,   791,   797,   798,   921,   799,
     959,   800,   802,   803,   804,   805,   806,   807,   808,   811,
     813,   814,   815,   816,   818,   819,   822,   823,    95,   824,
     825,   830,   831,   833,   834,   835,  -919,   787,   449,   669,
     809,   750,   793,   836,  -919,  -919,   726,   794,   795,   763,
     899,   837,   904,   905,   906,   908,   911,   912,   956,   826,
     957,   958,   916,   960,   851,  -919,   964,   852,   966,   857,
    -919,  -919,   855,   976,   979,  1008,   876,  -919,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   893,   894,   896,
     897,   907,   913,   914,   917,   918,  -919,   919,   920,  -919,
     922,   901,   928,   929,   931,   932,  -919,   939,   942,   948,
     949,   951,   952,   953,   954,   955,   967,   969,   970,   972,
     973,  -919,   974,   975,   977,   142,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  1026,  1031,  1033,   924,  -919,   961,   962,   981,
     982,   983,   984,   985,  -919,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,  -919,  -919,  1069,   998,
    1070,   999,  -919,  -919,  1079,  1000,  1002,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,   449,   449,   449,
     449,   449,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    1112,  1130,   449,  1131,  1133,  1137,  1138,  1116,  1140,  1141,
     449,   449,   577,  1009,  -919,  -919,  1120,  -171,  1078,  1122,
    1123,  1081,  1082,  1083,  1127,  1015,  1129,  1132,  1134,  1135,
    1153,  1136,  1139,  1088,  1142,  1023,  -919,  1027,  1028,  -919,
    1030,  1034,  1035,  -919,  -919,  -919,  1036,  1037,  1143,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -266,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -257,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
     577,   577,   577,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,    -8,  1039,  1040,     8,  1041,  1042,  -919,  1043,
    1044,  1045,  1046,  1047,  1165,  1048,  1049,  1050,  1051,  1052,
    1053,  1054,  1055,  1056,  1057,  1058,  1059,  -919,  1060,  1166,
    1062,  -919,   -80,  1063,  1064,  1095,  1061,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    1144,  1176,  1177,  1145,  1146,  1065,  1147,  1148,  1149,  1150,
    1151,  1179,  1152,  1154,  1180,  1155,  1156,  1157,  1181,  1158,
    1071,  1159,  1182,  1160,  1073,  -919,  1075,  1076,  1086,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  1094,   812,
    1096,  -919,  1097,   845,  -919,  -919,  -919,  -919,  -919,  -919,
    1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,
    1108,  1109,  1110,  -919,  1111,  1113,  1114,  1115,  1117,  1118,
    1119,  1121,  1124,  1125,  1229,  1126,  1128,  1161,  1162,  1163,
    1164,  1167,  1168,  1169,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -250,  -919,  -919,   921,  -919,   959,  -919,
    -919,  -919,  -919,  -919,  -249,  -919,  -919,  -919,  -919,  -919,
    -228,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -219,  -919,   846,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -207,  -919,  -919,
    -919,  -919,  -200,  -919,  -919,  -919,  1245,  1008,  1170,  1171,
    1172,  1173,  1174,  1175,  1250,  1178,  1183,  1184,  1185,  1186,
    1187,  1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,   997,
    1196,  1197,  1198,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -198,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -185,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -150,  -919,   323,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  1143,  -919,  -919,  -919,    -8,
    -919,     8,   846,  -919,  1165,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  1166,  -919,
     -80,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -138,  -919,   751,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -133,  -919,
    -919,  -919,  -919,  -919,   812,  -919,   845,   323,  -919,  1229,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,   751,  -919,  1250,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,   997,  -919,  -919,  -919,
    -919,  -919,  -919,  -919
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -919,  -919,  -919,  -918,  -363,  -800,  -463,  -919,  -919,  1199,
    -919,  -919,  -919,  -919,  -919,  1001,  -919,  -919,  -919,  -919,
    -919,  1067,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  1322,  -919,  -919,  -919,  -919,
    -919,  1200,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,   521,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -179,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -155,
    -919,  -919,  -147,  -919,  -919,  -919,  -919,   752,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,   -76,  -919,   862,
    -919,  -919,  -919,    52,  -919,  -919,  -919,  -919,  -919,   900,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,   -53,
    -919,  -919,   -50,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,   840,  -919,  -919,
    -919,  -919,  -919,  -919,   810,  -919,  -919,  -919,  -919,  -919,
    -120,  -919,  -919,  -919,   817,  -919,  -919,  -919,  -919,  -119,
    -919,  -919,  -919,  -919,   723,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -121,  -919,  -919,
    -118,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,   -58,  -919,   888,  -919,
    -919,  -919,  -919,  -919,  1038,  -919,  -919,  -919,  -919,  1287,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,   -30,  -919,  1017,
    -919,  -919,  -919,  -919,  1224,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,   119,  -919,  -919,  -919,   122,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,   950,  -919,  -919,  -919,  -919,
    -919,   -32,  -919,  -919,  -919,  -919,  -919,   -27,  -919,  -919,
    1332,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,  -919,
    -919,  -919,  -919,  -919,  1201,  -919,  -919,  -919,  -919,  -919,
    -919,  -919
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     628,   629,   789,    49,  1312,  1350,    70,   635,  1305,    47,
      48,   132,  1306,   296,    70,   528,   528,  1307,   389,   124,
    1318,  1308,    50,   402,  1454,  1458,   132,   127,  1455,  1459,
     324,   610,   382,    55,   537,    57,   601,   610,   133,  1255,
    1256,  1257,  1258,  1259,   474,    62,  1460,   475,    71,   733,
    1461,   269,   736,   133,   140,  1463,    71,  1275,  1276,  1464,
      72,   141,   142,   143,    63,   601,   144,  1477,    72,   753,
     390,  1478,   325,   145,  1479,   569,  1533,   761,  1480,    66,
    1534,    67,   146,   147,   148,   382,   149,   771,   772,  1535,
     774,   150,   151,  1536,   130,   538,   476,   570,   152,   477,
     786,   787,   153,   790,   154,   155,   307,   156,   134,   296,
    1130,  1131,  1132,   157,   270,   271,   272,   273,   274,   275,
     276,   277,   326,   134,  1538,   539,   402,   131,  1539,   383,
     139,   540,   158,   159,    73,   265,  1555,   160,   303,   297,
    1556,  1575,    73,   860,   161,  1576,   391,   861,   162,   163,
     164,   403,   308,   165,   266,   478,   166,   167,   327,   611,
     267,   328,   329,   278,   602,   611,  1351,   168,   309,   862,
     863,   298,   479,   169,   170,   268,   171,   172,   173,   174,
     529,   529,   383,   392,   780,   781,   864,   306,   404,   349,
     310,   175,   311,   602,   312,   313,   541,   384,   279,   865,
     176,  1313,   177,   178,   866,   330,   179,   331,   571,   180,
     181,   530,   530,   182,   314,   350,   867,  1319,   351,   405,
     352,   923,   332,   868,   183,   782,   783,   612,   869,   353,
     870,   354,   603,   612,   357,   297,   788,   358,   359,    79,
     572,   360,   361,   871,   184,   185,   362,   186,   363,   364,
     384,   187,    80,   365,   403,   188,   189,   190,   191,   192,
     366,   603,   367,   193,   194,   368,   369,   298,   333,   548,
     370,   872,   195,   531,   531,    81,   371,   873,    82,    83,
     355,   280,   617,   372,    84,   400,    85,   566,   373,   829,
     389,   404,   722,   874,   604,   563,   374,   730,   334,   335,
     875,   375,   480,   376,   599,   196,   716,   197,   836,   377,
     941,   946,   876,   198,   877,   878,   199,   281,   803,   879,
     380,   200,   405,   604,   381,   561,   201,   568,   472,   569,
    1309,  1310,  1311,   398,  1540,   673,  1541,   674,   399,   324,
     675,   587,   390,    86,    87,   676,   411,   474,   644,   915,
     475,   570,   412,    88,    89,  1542,  1020,   413,   489,  1543,
     677,   678,   414,   415,   627,   307,   679,   416,   417,   418,
     680,   645,   646,   419,    90,    91,   420,   537,   490,   421,
     585,   325,   647,   880,   491,   492,   422,   423,   424,   881,
     425,   681,    92,    93,   426,   682,   683,   427,   428,   476,
     882,   883,   477,    94,   957,   958,   959,   960,   961,   429,
     430,   308,    95,   884,   493,   494,   431,  1224,   391,   495,
     432,   433,   434,   435,   436,   437,   684,   309,   685,   438,
    1544,   326,   439,   496,   440,  1143,   441,   442,   538,   443,
     497,   444,   686,   445,   446,   448,   450,   451,   452,   310,
     453,   311,   454,   312,   313,   392,   455,   456,   478,   498,
     457,   458,   571,   687,   648,   649,   650,   327,   539,   651,
     328,   329,   459,   314,   540,   479,   652,   846,   847,   848,
     849,   850,   851,   852,   460,   461,   462,   499,   500,   463,
     653,   654,   464,   465,   572,   466,   501,   688,   467,    96,
      97,   468,    98,    99,   100,   469,   470,   471,   655,   656,
     549,   689,   550,   378,   330,   502,   331,   551,   552,   553,
     554,   690,   618,   555,   503,   504,   556,   557,   558,  1272,
     559,   332,   269,   657,   560,   140,   564,   565,   578,   541,
     579,   580,   141,   142,   143,   581,   644,   144,   582,   583,
     584,   588,   589,   590,   145,   591,   592,   505,   506,   593,
     594,   595,   596,   146,   147,   148,   619,   149,   597,   645,
     646,   598,   150,   151,   620,   621,  1545,   333,   622,   152,
     647,   623,   624,   153,   625,   154,   155,   691,   156,   626,
     627,   630,   631,   632,   157,   270,   271,   272,   273,   274,
     275,   276,   277,   692,   633,   480,   634,   334,   335,  1015,
     636,   637,   638,   158,   159,   639,   507,   640,   160,  1262,
     641,   642,   993,   643,   718,   161,   724,  1270,  1271,   162,
     163,   164,   824,   714,   165,   725,   715,   166,   167,   719,
     720,   726,   860,   721,   278,   732,   861,   727,   168,   728,
     734,   735,   737,   738,   169,   170,   739,   171,   172,   173,
     174,   740,   648,   649,   650,   741,   742,   651,   862,   863,
     743,   744,   175,   745,   652,   747,   746,   748,   749,   279,
     750,   176,   751,   177,   178,   864,   752,   179,   653,   654,
     180,   181,   754,   755,   182,   756,   757,   758,   865,   759,
     760,   762,   763,   866,   764,   183,   655,   656,   765,   766,
     767,   768,   769,   770,   773,   867,   775,   776,   788,   777,
     778,   779,   868,   784,   785,   184,   185,   869,   186,   870,
     791,   657,   187,   792,   793,   794,   188,   189,   190,   191,
     192,   796,   871,   795,   193,   194,   798,   838,   805,   673,
     799,   674,   801,   195,   675,   802,  1557,   806,   807,   676,
     808,   809,   280,   839,   810,   840,   841,   831,   812,   842,
     872,   813,   814,   815,   677,   678,   873,   816,   843,   844,
     679,   817,   845,   818,   680,   819,   196,   820,   197,   853,
     854,    79,   874,   855,   198,  1558,   821,   199,   281,   875,
     857,   822,   200,   858,    80,   681,   823,   201,  1559,   682,
     683,   876,   920,   877,   878,   917,   918,   826,   879,   828,
     833,   834,   856,   835,   859,  1560,   912,    81,   913,   911,
      82,    83,  1561,   489,   914,   919,    84,  1562,    85,  1563,
     684,   921,   685,   924,   922,   925,   927,   926,   928,   929,
     930,   931,  1564,   490,   932,   933,   686,   934,   935,   491,
     492,   936,   937,  1017,   943,   948,   938,  1465,  1466,   940,
     944,   949,   950,   980,   951,  1018,  1144,   687,   952,  1021,
     953,   954,   880,  1022,   955,   956,  1565,   964,   881,   493,
     494,   965,  1026,   966,   495,    86,    87,   967,   968,   882,
     883,   969,  1566,  1567,  1467,    88,    89,   970,   496,   971,
    1027,   688,   884,  1388,  1146,   497,   972,   973,   974,   975,
     976,  1568,  1468,  1569,  1570,   689,    90,    91,   977,  1469,
     978,   979,   981,  1149,   498,   690,   982,   983,     2,     3,
     984,   985,   986,     4,    92,    93,  1405,   987,  1470,   988,
     989,   990,   991,   992,   995,    94,   996,  1147,  1150,  1151,
     997,     5,   499,   500,    95,     6,   998,  1162,   999,  1000,
    1152,   501,     7,  1001,  1002,  1003,  1471,  1472,  1004,  1006,
       8,  1007,  1389,  1008,  1009,  1473,  1010,  1011,     9,  1012,
     502,  1390,  1571,  1013,  1014,  1019,  1023,    10,  1024,   503,
     504,   691,  1391,  1025,  1028,  1029,  1030,  1031,  1032,  1572,
      11,    12,  1033,    13,  1034,  1035,  1036,   692,  1037,  1038,
      14,  1039,  1573,  1040,  1406,  1392,  1474,  1041,  1042,  1043,
    1044,  1045,   505,   506,  1046,  1047,  1048,    15,  1049,  1050,
    1051,  1052,  1393,  1053,  1054,  1055,  1056,  1475,    16,  1057,
      17,    96,    97,  1058,    98,    99,   100,  1059,  1407,  1060,
    1061,  1394,  1395,  1062,  1142,  1063,    18,  1396,  1397,  1398,
    1399,  1064,  1065,  1089,  1113,  1408,  1114,  1115,  1116,  1117,
    1118,  1119,  1120,  1400,    19,  1121,  1145,  1122,  1123,  1124,
    1125,   507,  1126,  1127,  1409,  1410,  1128,  1129,  1135,  1136,
    1411,  1412,  1413,  1414,  1137,  1138,  1153,  1139,  1140,  1141,
    1148,  1155,  1156,  1157,  1154,  1158,  1415,    20,  1159,  1160,
    1161,  1163,  1164,  1165,  1166,  1167,    21,    22,  1168,  1169,
    1170,  1171,  1172,    23,    24,  1066,  1067,  1068,  1069,  1070,
    1173,  1071,  1072,  1174,  1073,  1074,  1075,  1076,  1077,  1175,
    1178,  1078,  1179,  1180,  1181,  1182,  1183,  1184,  1185,  1186,
    1187,  1079,  1080,  1081,  1082,  1083,  1084,  1188,  1189,  1085,
    1190,  1191,  1086,  1090,  1091,  1092,  1093,  1094,  1200,  1095,
    1096,  1192,  1097,  1098,  1099,  1100,  1101,  1193,  1194,  1102,
    1226,  1195,  1196,  1197,  1198,  1227,  1199,  1228,  1229,  1103,
    1104,  1105,  1106,  1107,  1108,  1201,  1202,  1109,  1203,  1204,
    1110,  1507,  1508,  1509,  1510,  1511,  1206,  1512,  1513,  1207,
    1514,  1515,  1516,  1517,  1518,  1208,  1209,  1519,  1210,  1211,
    1212,  1213,  1214,  1248,  1250,  1230,  1231,  1520,  1521,  1522,
    1523,  1524,  1525,  1252,  1215,  1526,  1216,  1217,  1527,  1218,
    1219,  1221,  1222,  1260,  1223,  1232,  1233,  1234,  1235,  1236,
    1237,  1238,  1239,  1240,  1241,  1242,  1243,  1244,  1245,  1246,
    1247,  1261,  1263,  1251,  1264,  1249,  1254,  1253,  1265,  1266,
    1267,  1268,  1269,  1273,  1274,  1277,  1278,  1279,  1280,  1281,
    1282,  1283,  1284,  1285,  1289,  1292,  1286,  1294,  1287,  1288,
    1290,  1295,  1296,  1291,  1297,  1329,  1293,  1356,  1298,  1299,
    1300,  1301,  1302,  1316,  1317,  1322,  1323,  1324,  1325,  1326,
    1327,  1328,  1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,
    1341,  1342,  1343,  1344,  1345,  1346,  1349,  1354,  1355,  1357,
    1360,  1361,  1364,  1370,  1373,  1377,  1381,  1383,  1379,  1384,
    1385,  1359,  1362,  1363,  1365,  1366,  1367,  1368,  1369,  1371,
    1386,  1372,  1374,  1375,  1376,  1378,  1380,  1382,  1387,  1441,
    1403,  1404,  1418,  1419,  1420,  1421,  1422,  1423,  1424,  1425,
    1426,  1427,  1428,  1429,  1430,  1431,  1481,  1432,  1433,  1434,
    1489,  1435,  1436,  1437,   723,  1438,   356,  1583,  1439,  1440,
    1445,  1582,  1446,   600,  1553,   837,  1225,  1581,   825,  1482,
     994,  1551,  1550,   916,  1577,   942,  1016,  1578,  1580,  1579,
    1552,   830,   401,   717,   731,  1547,   473,  1457,  1456,  1549,
     947,   804,  1548,   379,     0,  1447,  1448,  1449,  1450,     0,
       0,  1451,  1452,  1453,  1483,  1484,  1485,  1486,  1487,  1488,
       0,     0,  1493,     0,     0,     0,     0,  1494,  1495,  1496,
    1497,  1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,
    1530,  1531,  1532,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   562,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   567,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   586
};

static const yytype_int16 yycheck[] =
{
     363,   364,   465,   276,    12,    85,     1,   370,   274,   274,
     275,     1,   278,     1,     1,     1,     1,   274,     1,   164,
      12,   278,   276,     1,   274,   274,     1,   164,   278,   278,
       1,     1,     1,   276,     1,   276,     1,     1,    28,   957,
     958,   959,   960,   961,     1,   276,   274,     4,    43,   412,
     278,     1,   415,    28,     1,   274,    43,   228,   229,   278,
      55,     8,     9,    10,   276,     1,    13,   274,    55,   432,
      53,   278,    43,    20,   274,     1,   274,   440,   278,   276,
     278,   276,    29,    30,    31,     1,    33,   450,   451,   274,
     453,    38,    39,   278,   276,    62,    53,    23,    45,    56,
     463,   464,    49,   466,    51,    52,     1,    54,    98,     1,
      15,    16,    17,    60,    64,    65,    66,    67,    68,    69,
      70,    71,    93,    98,   274,    92,     1,   276,   278,    98,
     276,    98,    79,    80,   129,   276,   274,    84,   164,   127,
     278,   274,   129,     1,    91,   278,   129,     5,    95,    96,
      97,   129,    47,   100,   276,   112,   103,   104,   129,   129,
     276,   132,   133,   113,   129,   129,   246,   114,    63,    27,
      28,   159,   129,   120,   121,   276,   123,   124,   125,   126,
     166,   166,    98,   166,   207,   208,    44,   276,   166,   276,
      85,   138,    87,   129,    89,    90,   163,   166,   148,    57,
     147,   209,   149,   150,    62,   176,   153,   178,   134,   156,
     157,   197,   197,   160,   109,   276,    74,   209,   274,   197,
     277,   584,   193,    81,   171,   207,   208,   197,    86,   277,
      88,   277,   197,   197,   277,   127,   141,   277,   277,     1,
     166,   277,   277,   101,   191,   192,   277,   194,   277,   277,
     166,   198,    14,   277,   129,   202,   203,   204,   205,   206,
     277,   197,   277,   210,   211,   277,   277,   159,   239,   274,
     277,   129,   219,   259,   259,    37,   277,   135,    40,    41,
     275,   231,   164,   277,    46,   275,    48,   275,   277,   275,
       1,   166,   275,   151,   259,   274,   277,   275,   269,   270,
     158,   277,   259,   277,   275,   252,   275,   254,   275,   277,
     275,   275,   170,   260,   172,   173,   263,   267,   275,   177,
     276,   268,   197,   259,   276,   275,   273,   276,   275,     1,
    1130,  1131,  1132,   277,    11,     1,    13,     3,   277,     1,
       6,   274,    53,   105,   106,    11,   277,     1,     1,   275,
       4,    23,   277,   115,   116,    32,   719,   277,     1,    36,
      26,    27,   277,   277,   141,     1,    32,   277,   277,   277,
      36,    24,    25,   277,   136,   137,   277,     1,    21,   277,
     275,    43,    35,   241,    27,    28,   277,   277,   277,   247,
     277,    57,   154,   155,   277,    61,    62,   277,   277,    53,
     258,   259,    56,   165,   181,   182,   183,   184,   185,   277,
     277,    47,   174,   271,    57,    58,   277,   275,   129,    62,
     277,   277,   277,   277,   277,   277,    92,    63,    94,   277,
     107,    93,   277,    76,   277,   798,   277,   277,    62,   277,
      83,   277,   108,   277,   277,   277,   277,   277,   277,    85,
     277,    87,   277,    89,    90,   166,   277,   277,   112,   102,
     277,   277,   134,   129,   117,   118,   119,   129,    92,   122,
     132,   133,   277,   109,    98,   129,   129,   232,   233,   234,
     235,   236,   237,   238,   277,   277,   277,   130,   131,   277,
     143,   144,   277,   277,   166,   277,   139,   163,   277,   261,
     262,   277,   264,   265,   266,   277,   277,   277,   161,   162,
     277,   177,   277,   275,   176,   158,   178,   277,   277,   277,
     277,   187,   164,   277,   167,   168,   277,   277,   277,   992,
     277,   193,     1,   186,   277,     1,   277,   277,   277,   163,
     277,   277,     8,     9,    10,   277,     1,    13,   277,   277,
     277,   277,   277,   277,    20,   277,   277,   200,   201,   277,
     277,   277,   277,    29,    30,    31,   164,    33,   277,    24,
      25,   277,    38,    39,   274,   207,   253,   239,   207,    45,
      35,   141,   141,    49,   207,    51,    52,   253,    54,   207,
     141,   141,   141,   207,    60,    64,    65,    66,    67,    68,
      69,    70,    71,   269,   207,   259,   141,   269,   270,   275,
     207,   207,   207,    79,    80,   207,   259,   207,    84,   982,
     207,   207,   275,   274,   274,    91,   164,   990,   991,    95,
      96,    97,   275,   277,   100,   164,   277,   103,   104,   277,
     277,   274,     1,   277,   113,   207,     5,   277,   114,   277,
     207,   207,   164,   164,   120,   121,   164,   123,   124,   125,
     126,   141,   117,   118,   119,   164,   141,   122,    27,    28,
     207,   207,   138,   207,   129,   164,   141,   207,   141,   148,
     141,   147,   141,   149,   150,    44,   207,   153,   143,   144,
     156,   157,   207,   207,   160,   141,   164,   207,    57,   141,
     141,   141,   164,    62,   141,   171,   161,   162,   141,   207,
     207,   277,   207,   277,   207,    74,   164,   164,   141,   207,
     207,   207,    81,   207,   207,   191,   192,    86,   194,    88,
     207,   186,   198,   207,   207,   207,   202,   203,   204,   205,
     206,   274,   101,   207,   210,   211,   277,   164,   274,     1,
     277,     3,   277,   219,     6,   277,     5,   277,   277,    11,
     277,   277,   231,   164,   277,   164,   164,   274,   277,   164,
     129,   277,   277,   277,    26,    27,   135,   277,   164,   164,
      32,   277,   164,   277,    36,   277,   252,   277,   254,   164,
     164,     1,   151,   207,   260,    44,   277,   263,   267,   158,
     164,   277,   268,   164,    14,    57,   277,   273,    57,    61,
      62,   170,   164,   172,   173,   207,   207,   277,   177,   277,
     277,   277,   274,   277,   274,    74,   277,    37,   277,   274,
      40,    41,    81,     1,   277,   207,    46,    86,    48,    88,
      92,   207,    94,   274,   207,   164,   164,   207,   164,   164,
     164,   164,   101,    21,   164,   141,   108,   164,   164,    27,
      28,   274,   274,   164,   274,   274,   277,    21,    22,   277,
     277,   274,   274,   277,   274,   164,   207,   129,   274,   164,
     274,   274,   241,   164,   274,   274,   135,   274,   247,    57,
      58,   274,   164,   274,    62,   105,   106,   274,   274,   258,
     259,   274,   151,   152,    58,   115,   116,   274,    76,   274,
     164,   163,   271,   101,   164,    83,   274,   274,   274,   274,
     274,   170,    76,   172,   173,   177,   136,   137,   274,    83,
     274,   274,   277,   207,   102,   187,   277,   277,     0,     1,
     277,   277,   277,     5,   154,   155,   101,   277,   102,   277,
     277,   277,   277,   277,   274,   165,   277,   164,   164,   164,
     277,    23,   130,   131,   174,    27,   277,   141,   277,   277,
     207,   139,    34,   277,   277,   277,   130,   131,   277,   277,
      42,   277,   170,   277,   277,   139,   277,   277,    50,   277,
     158,   179,   241,   277,   277,   274,   274,    59,   274,   167,
     168,   253,   190,   274,   277,   274,   274,   274,   274,   258,
      72,    73,   274,    75,   274,   274,   274,   269,   274,   274,
      82,   274,   271,   274,   179,   213,   180,   274,   274,   274,
     274,   274,   200,   201,   274,   274,   274,    99,   274,   274,
     274,   274,   230,   274,   274,   274,   274,   201,   110,   274,
     112,   261,   262,   274,   264,   265,   266,   274,   213,   274,
     274,   249,   250,   274,   277,   274,   128,   255,   256,   257,
     258,   274,   274,   274,   274,   230,   274,   274,   274,   274,
     274,   274,   274,   271,   146,   274,   277,   274,   274,   274,
     274,   259,   274,   274,   249,   250,   274,   274,   274,   274,
     255,   256,   257,   258,   274,   274,   207,   274,   274,   274,
     274,   207,   207,   207,   277,   207,   271,   179,   207,   207,
     164,   164,   164,   207,   164,   274,   188,   189,   164,   277,
     164,   274,   277,   195,   196,   214,   215,   216,   217,   218,
     164,   220,   221,   164,   223,   224,   225,   226,   227,   141,
     274,   230,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   240,   241,   242,   243,   244,   245,   274,   274,   248,
     274,   274,   251,   214,   215,   216,   217,   218,   277,   220,
     221,   274,   223,   224,   225,   226,   227,   274,   274,   230,
     164,   274,   274,   274,   274,   164,   274,   164,   274,   240,
     241,   242,   243,   244,   245,   277,   277,   248,   277,   277,
     251,   214,   215,   216,   217,   218,   277,   220,   221,   277,
     223,   224,   225,   226,   227,   277,   277,   230,   277,   277,
     277,   277,   277,   164,   164,   274,   274,   240,   241,   242,
     243,   244,   245,   164,   277,   248,   277,   277,   251,   277,
     277,   277,   277,   141,   277,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   141,   141,   274,   141,   277,   274,   277,   141,   141,
     164,   141,   141,   274,   164,   207,   164,   164,   207,   207,
     207,   164,   277,   164,   141,   207,   164,   274,   164,   164,
     164,   274,   274,   164,   274,   140,   164,   212,   274,   274,
     274,   274,   169,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   169,   274,   274,   274,   278,
     164,   164,   277,   164,   164,   164,   164,   274,   277,   274,
     274,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     274,   207,   207,   207,   207,   207,   207,   207,   274,   140,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   141,   274,   274,   274,
     140,   274,   274,   274,   393,   274,    74,  1576,   274,   274,
     274,  1556,   274,   336,  1480,   543,   885,  1554,   508,  1357,
     658,  1464,  1462,   573,  1534,   605,   693,  1536,  1539,  1537,
    1478,   533,   135,   385,   407,  1455,   202,  1308,  1306,  1461,
     613,   481,  1459,   101,    -1,   274,   274,   274,   274,    -1,
      -1,   274,   274,   274,   274,   274,   274,   274,   274,   274,
      -1,    -1,   274,    -1,    -1,    -1,    -1,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   315
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   280,     0,     1,     5,    23,    27,    34,    42,    50,
      59,    72,    73,    75,    82,    99,   110,   112,   128,   146,
     179,   188,   189,   195,   196,   281,   286,   291,   298,   312,
     318,   333,   372,   391,   405,   433,   440,   450,   459,   490,
     500,   506,   511,   521,   591,   607,   631,   274,   275,   276,
     276,   373,   460,   501,   292,   276,   512,   276,   592,   406,
     491,   392,   276,   276,   334,   434,   276,   276,   441,   451,
       1,    43,    55,   129,   313,   314,   315,   316,   317,     1,
      14,    37,    40,    41,    46,    48,   105,   106,   115,   116,
     136,   137,   154,   155,   165,   174,   261,   262,   264,   265,
     266,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   628,   629,   630,   164,   374,   378,   164,   461,   465,
     276,   276,     1,    28,    98,   507,   508,   509,   510,   276,
       1,     8,     9,    10,    13,    20,    29,    30,    31,    33,
      38,    39,    45,    49,    51,    52,    54,    60,    79,    80,
      84,    91,    95,    96,    97,   100,   103,   104,   114,   120,
     121,   123,   124,   125,   126,   138,   147,   149,   150,   153,
     156,   157,   160,   171,   191,   192,   194,   198,   202,   203,
     204,   205,   206,   210,   211,   219,   252,   254,   260,   263,
     268,   273,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   582,
     586,   587,   588,   589,   590,   276,   276,   276,   276,     1,
      64,    65,    66,    67,    68,    69,    70,    71,   113,   148,
     231,   267,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,     1,   127,   159,   287,
     288,   289,   290,   164,   335,   339,   276,     1,    47,    63,
      85,    87,    89,    90,   109,   632,   633,   634,   635,   636,
     637,   638,   639,   640,     1,    43,    93,   129,   132,   133,
     176,   178,   193,   239,   269,   270,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   276,
     276,   274,   277,   277,   277,   275,   314,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   275,   609,
     276,   276,     1,    98,   166,   502,   503,   504,   505,     1,
      53,   129,   166,   293,   294,   295,   296,   297,   277,   277,
     275,   508,     1,   129,   166,   197,   513,   517,   518,   519,
     520,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   583,   277,   579,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   275,   523,     1,     4,    53,    56,   112,   129,
     259,   593,   594,   595,   596,   597,   601,   602,   603,     1,
      21,    27,    28,    57,    58,    62,    76,    83,   102,   130,
     131,   139,   158,   167,   168,   200,   201,   259,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,     1,   166,
     197,   259,   492,   496,   497,   498,   499,     1,    62,    92,
      98,   163,   393,   397,   398,   399,   403,   404,   274,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   275,   320,   274,   277,   277,   275,   288,   276,     1,
      23,   134,   166,   435,   436,   437,   438,   439,   277,   277,
     277,   277,   277,   277,   277,   275,   633,   274,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   275,
     300,     1,   129,   197,   259,   442,   443,   444,   445,   446,
       1,   129,   197,   452,   453,   454,   455,   164,   164,   164,
     274,   207,   207,   141,   141,   207,   207,   141,   283,   283,
     141,   141,   207,   207,   141,   283,   207,   207,   207,   207,
     207,   207,   207,   274,     1,    24,    25,    35,   117,   118,
     119,   122,   129,   143,   144,   161,   162,   186,   375,   376,
     377,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,     1,     3,     6,    11,    26,    27,    32,
      36,    57,    61,    62,    92,    94,   108,   129,   163,   177,
     187,   253,   269,   462,   463,   464,   466,   467,   468,   469,
     470,   471,   472,   473,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   277,   277,   275,   503,   274,   277,
     277,   277,   275,   294,   164,   164,   274,   277,   277,   514,
     275,   518,   207,   283,   207,   207,   283,   164,   164,   164,
     141,   164,   141,   207,   207,   207,   141,   164,   207,   141,
     141,   141,   207,   283,   207,   207,   141,   164,   207,   141,
     141,   283,   141,   164,   141,   141,   207,   207,   277,   207,
     277,   283,   283,   207,   283,   164,   164,   207,   207,   207,
     207,   208,   207,   208,   207,   207,   283,   283,   141,   285,
     283,   207,   207,   207,   207,   207,   274,   604,   277,   277,
     598,   277,   277,   275,   594,   274,   277,   277,   277,   277,
     277,   416,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   275,   408,   277,   493,   277,   275,
     497,   274,   394,   277,   277,   277,   275,   398,   164,   164,
     164,   164,   164,   164,   164,   164,   232,   233,   234,   235,
     236,   237,   238,   164,   164,   207,   274,   164,   164,   274,
       1,     5,    27,    28,    44,    57,    62,    74,    81,    86,
      88,   101,   129,   135,   151,   158,   170,   172,   173,   177,
     241,   247,   258,   259,   271,   336,   337,   338,   340,   341,
     342,   343,   344,   345,   346,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   274,   277,   277,   277,   275,   436,   207,   207,   207,
     164,   207,   207,   283,   274,   164,   207,   164,   164,   164,
     164,   164,   164,   141,   164,   164,   274,   274,   277,   447,
     277,   275,   443,   274,   277,   456,   275,   453,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   181,   182,   183,
     184,   185,   282,   283,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   275,   376,   274,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   474,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   275,   463,   164,   164,   274,
     283,   164,   164,   274,   274,   274,   164,   164,   277,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   214,   215,   216,   217,
     218,   220,   221,   223,   224,   225,   226,   227,   230,   240,
     241,   242,   243,   244,   245,   248,   251,   584,   585,   274,
     214,   215,   216,   217,   218,   220,   221,   223,   224,   225,
     226,   227,   230,   240,   241,   242,   243,   244,   245,   248,
     251,   580,   581,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
      15,    16,    17,   284,   285,   274,   274,   274,   274,   274,
     274,   274,   277,   283,   207,   277,   164,   164,   274,   207,
     164,   164,   207,   207,   277,   207,   207,   207,   207,   207,
     207,   164,   141,   164,   164,   207,   164,   274,   164,   277,
     164,   274,   277,   164,   164,   141,   401,   402,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     277,   277,   277,   277,   277,   366,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     347,   277,   277,   277,   275,   337,   164,   164,   164,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   164,   277,
     164,   274,   164,   277,   274,   282,   282,   282,   282,   282,
     141,   141,   283,   141,   141,   141,   141,   164,   141,   141,
     283,   283,   285,   274,   164,   228,   229,   207,   164,   164,
     207,   207,   207,   164,   277,   164,   164,   164,   164,   141,
     164,   164,   207,   164,   274,   274,   274,   274,   274,   274,
     274,   274,   169,   515,   516,   274,   278,   274,   278,   284,
     284,   284,    12,   209,   605,   606,   274,   274,    12,   209,
     599,   600,   274,   274,   274,   274,   274,   274,   274,   140,
     417,   418,   420,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   169,   494,   495,   274,
      85,   246,   395,   396,   274,   274,   212,   278,   400,   207,
     164,   164,   207,   207,   277,   207,   207,   207,   207,   207,
     164,   207,   207,   164,   207,   207,   207,   164,   207,   277,
     207,   164,   207,   274,   274,   274,   274,   274,   101,   170,
     179,   190,   213,   230,   249,   250,   255,   256,   257,   258,
     271,   448,   449,   274,   274,   101,   179,   213,   230,   249,
     250,   255,   256,   257,   258,   271,   457,   458,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   140,   475,   476,   478,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   278,   585,   581,   274,   278,
     274,   278,   419,   274,   278,    21,    22,    58,    76,    83,
     102,   130,   131,   139,   180,   201,   421,   274,   278,   274,
     278,   141,   402,   274,   274,   274,   274,   274,   274,   140,
     367,   368,   370,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   214,   215,   216,
     217,   218,   220,   221,   223,   224,   225,   226,   227,   230,
     240,   241,   242,   243,   244,   245,   248,   251,   348,   349,
     274,   274,   274,   274,   278,   274,   278,   477,   274,   278,
      11,    13,    32,    36,   107,   253,   479,   516,   606,   600,
     421,   418,   495,   396,   369,   274,   278,     5,    44,    57,
      74,    81,    86,    88,   101,   135,   151,   152,   170,   172,
     173,   241,   258,   271,   371,   274,   278,   449,   458,   479,
     476,   371,   368,   349
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
#line 442 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 444 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number);
		}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 448 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);
		}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 452 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 456 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 460 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 464 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 7 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 469 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 470 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number); }
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 471 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); }
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 472 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 + (yyvsp[(3) - (3)].number); }
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 473 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 * 1024 + (yyvsp[(3) - (3)].number); }
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 487 "ircd_parser.y"
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
#line 504 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 516 "ircd_parser.y"
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
#line 528 "ircd_parser.y"
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
#line 541 "ircd_parser.y"
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
#line 550 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_dconf->duration = (yyvsp[(3) - (4)].number);
}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 556 "ircd_parser.y"
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
#line 581 "ircd_parser.y"
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
#line 615 "ircd_parser.y"
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
#line 675 "ircd_parser.y"
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
#line 689 "ircd_parser.y"
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
#line 704 "ircd_parser.y"
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
#line 713 "ircd_parser.y"
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
#line 727 "ircd_parser.y"
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
#line 736 "ircd_parser.y"
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
#line 764 "ircd_parser.y"
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
#line 794 "ircd_parser.y"
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
#line 817 "ircd_parser.y"
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
#line 873 "ircd_parser.y"
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
#line 882 "ircd_parser.y"
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
#line 891 "ircd_parser.y"
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
#line 918 "ircd_parser.y"
    {
                        }
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 922 "ircd_parser.y"
    {
                        }
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 926 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 933 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 940 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 947 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
            sizeof(ConfigLoggingEntry.operspylog));
}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 954 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
            sizeof(ConfigLoggingEntry.glinelog));
}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 961 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
            sizeof(ConfigLoggingEntry.klinelog));
}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 968 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
            sizeof(ConfigLoggingEntry.ioerrlog));
}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 975 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.killlog, yylval.string,
            sizeof(ConfigLoggingEntry.killlog));
}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 982 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 986 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 990 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 994 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 998 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 1002 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 1006 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 1012 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 1021 "ircd_parser.y"
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
#line 1034 "ircd_parser.y"
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
#line 1134 "ircd_parser.y"
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
#line 1146 "ircd_parser.y"
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
#line 1158 "ircd_parser.y"
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
#line 1192 "ircd_parser.y"
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
#line 1213 "ircd_parser.y"
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
#line 1225 "ircd_parser.y"
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
#line 1236 "ircd_parser.y"
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
#line 1278 "ircd_parser.y"
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
#line 1287 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes = 0;
}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 1294 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_BOTS;
}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 1298 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CCONN;
}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 1302 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_NOCTCP;
}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 1306 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_DEAF;
}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 1310 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_DEBUG;
}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 1314 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_FULL;
}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 1318 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SKILL;
}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 1322 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_NCHANGE;
}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 1326 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_REJ;
}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 1330 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_UNAUTH;
}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 1334 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SPY;
}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 1338 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_EXTERNAL;
}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 1342 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_OPERWALL;
}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 1346 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SERVNOTICE;
}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 1350 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_INVISIBLE;
}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 1354 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_WALLOP;
}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 1358 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SOFTCALLERID;
}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 1362 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CALLERID;
}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 1366 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_LOCOPS;
}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 1370 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_HIDECHANNELS;
}
    break;

  case 193:

/* Line 1464 of yacc.c  */
#line 1374 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_FARCONNECT;
}
    break;

  case 194:

/* Line 1464 of yacc.c  */
#line 1380 "ircd_parser.y"
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

  case 195:

/* Line 1464 of yacc.c  */
#line 1391 "ircd_parser.y"
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

  case 196:

/* Line 1464 of yacc.c  */
#line 1402 "ircd_parser.y"
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

  case 197:

/* Line 1464 of yacc.c  */
#line 1413 "ircd_parser.y"
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

  case 198:

/* Line 1464 of yacc.c  */
#line 1424 "ircd_parser.y"
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

  case 199:

/* Line 1464 of yacc.c  */
#line 1435 "ircd_parser.y"
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

  case 200:

/* Line 1464 of yacc.c  */
#line 1446 "ircd_parser.y"
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

  case 201:

/* Line 1464 of yacc.c  */
#line 1457 "ircd_parser.y"
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

  case 202:

/* Line 1464 of yacc.c  */
#line 1468 "ircd_parser.y"
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

  case 203:

/* Line 1464 of yacc.c  */
#line 1479 "ircd_parser.y"
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

  case 204:

/* Line 1464 of yacc.c  */
#line 1490 "ircd_parser.y"
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

  case 205:

/* Line 1464 of yacc.c  */
#line 1501 "ircd_parser.y"
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

  case 206:

/* Line 1464 of yacc.c  */
#line 1512 "ircd_parser.y"
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

  case 207:

/* Line 1464 of yacc.c  */
#line 1523 "ircd_parser.y"
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

  case 208:

/* Line 1464 of yacc.c  */
#line 1534 "ircd_parser.y"
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

  case 209:

/* Line 1464 of yacc.c  */
#line 1545 "ircd_parser.y"
    {
}
    break;

  case 213:

/* Line 1464 of yacc.c  */
#line 1549 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 215:

/* Line 1464 of yacc.c  */
#line 1550 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 217:

/* Line 1464 of yacc.c  */
#line 1553 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)yy_aconf->port &= ~OPER_FLAG_GLOBAL_KILL;
    else yy_aconf->port |= OPER_FLAG_GLOBAL_KILL;
  }
}
    break;

  case 218:

/* Line 1464 of yacc.c  */
#line 1560 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTE;
    else yy_aconf->port |= OPER_FLAG_REMOTE;
  }
}
    break;

  case 219:

/* Line 1464 of yacc.c  */
#line 1567 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_K;
    else yy_aconf->port |= OPER_FLAG_K;
  }
}
    break;

  case 220:

/* Line 1464 of yacc.c  */
#line 1574 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_UNKLINE;
    else yy_aconf->port |= OPER_FLAG_UNKLINE;
  } 
}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 1581 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_X;
    else yy_aconf->port |= OPER_FLAG_X;
  }
}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 1588 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_GLINE;
    else yy_aconf->port |= OPER_FLAG_GLINE;
  }
}
    break;

  case 223:

/* Line 1464 of yacc.c  */
#line 1595 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_DIE;
    else yy_aconf->port |= OPER_FLAG_DIE;
  }
}
    break;

  case 224:

/* Line 1464 of yacc.c  */
#line 1602 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REHASH;
    else yy_aconf->port |= OPER_FLAG_REHASH;
  }
}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 1609 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_ADMIN;
    else yy_aconf->port |= OPER_FLAG_ADMIN;
  }
}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 1616 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_ADMIN;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_ADMIN;
  }
}
    break;

  case 227:

/* Line 1464 of yacc.c  */
#line 1623 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_N;
    else yy_aconf->port |= OPER_FLAG_N;
  }
}
    break;

  case 228:

/* Line 1464 of yacc.c  */
#line 1630 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPERWALL;
    else yy_aconf->port |= OPER_FLAG_OPERWALL;
  }
}
    break;

  case 229:

/* Line 1464 of yacc.c  */
#line 1637 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_OPER_SPY;
    else yy_aconf->port |= OPER_FLAG_OPER_SPY;
  }
}
    break;

  case 230:

/* Line 1464 of yacc.c  */
#line 1644 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_HIDDEN_OPER;
    else yy_aconf->port |= OPER_FLAG_HIDDEN_OPER;
  }
}
    break;

  case 231:

/* Line 1464 of yacc.c  */
#line 1651 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_REMOTEBAN;
    else yy_aconf->port |= OPER_FLAG_REMOTEBAN;
  }
}
    break;

  case 232:

/* Line 1464 of yacc.c  */
#line 1658 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) ClearConfEncrypted(yy_aconf);
    else SetConfEncrypted(yy_aconf);
  }
}
    break;

  case 233:

/* Line 1464 of yacc.c  */
#line 1665 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->port &= ~OPER_FLAG_FARCONNECT;
    else yy_aconf->port |= OPER_FLAG_FARCONNECT;
  }
}
    break;

  case 234:

/* Line 1464 of yacc.c  */
#line 1678 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    yy_conf = make_conf_item(CLASS_TYPE);
    yy_class = map_to_conf(yy_conf);
  }
}
    break;

  case 235:

/* Line 1464 of yacc.c  */
#line 1685 "ircd_parser.y"
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

  case 254:

/* Line 1464 of yacc.c  */
#line 1744 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 1753 "ircd_parser.y"
    {
  if (ypass == 1)
  {
    MyFree(yy_class_name);
    DupString(yy_class_name, yylval.string);
  }
}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 1762 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 1768 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 1774 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 1780 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 1786 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 1792 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 1798 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 1804 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 1810 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 1816 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV4(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 1822 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV6(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 267:

/* Line 1464 of yacc.c  */
#line 1828 "ircd_parser.y"
    {
  if (ypass == 1)
    NumberPerCidr(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 268:

/* Line 1464 of yacc.c  */
#line 1837 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    listener_address = NULL;
    listener_flags = 0;
  }
}
    break;

  case 269:

/* Line 1464 of yacc.c  */
#line 1844 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    listener_address = NULL;
  }
}
    break;

  case 270:

/* Line 1464 of yacc.c  */
#line 1853 "ircd_parser.y"
    {
  listener_flags = 0;
}
    break;

  case 274:

/* Line 1464 of yacc.c  */
#line 1859 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 275:

/* Line 1464 of yacc.c  */
#line 1863 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 283:

/* Line 1464 of yacc.c  */
#line 1871 "ircd_parser.y"
    { listener_flags = 0; }
    break;

  case 287:

/* Line 1464 of yacc.c  */
#line 1876 "ircd_parser.y"
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

  case 288:

/* Line 1464 of yacc.c  */
#line 1890 "ircd_parser.y"
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

  case 289:

/* Line 1464 of yacc.c  */
#line 1910 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 290:

/* Line 1464 of yacc.c  */
#line 1919 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(listener_address);
    DupString(listener_address, yylval.string);
  }
}
    break;

  case 291:

/* Line 1464 of yacc.c  */
#line 1931 "ircd_parser.y"
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

  case 292:

/* Line 1464 of yacc.c  */
#line 1943 "ircd_parser.y"
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

  case 314:

/* Line 1464 of yacc.c  */
#line 2016 "ircd_parser.y"
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

  case 315:

/* Line 1464 of yacc.c  */
#line 2053 "ircd_parser.y"
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

  case 316:

/* Line 1464 of yacc.c  */
#line 2066 "ircd_parser.y"
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

  case 317:

/* Line 1464 of yacc.c  */
#line 2087 "ircd_parser.y"
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

  case 318:

/* Line 1464 of yacc.c  */
#line 2098 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 319:

/* Line 1464 of yacc.c  */
#line 2107 "ircd_parser.y"
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

  case 320:

/* Line 1464 of yacc.c  */
#line 2118 "ircd_parser.y"
    {
}
    break;

  case 324:

/* Line 1464 of yacc.c  */
#line 2122 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 326:

/* Line 1464 of yacc.c  */
#line 2123 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 328:

/* Line 1464 of yacc.c  */
#line 2126 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_SPOOF_NOTICE;
    else yy_aconf->flags |= CONF_FLAGS_SPOOF_NOTICE;
  }

}
    break;

  case 329:

/* Line 1464 of yacc.c  */
#line 2134 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NOLIMIT;
    else yy_aconf->flags |= CONF_FLAGS_NOLIMIT;
  }
}
    break;

  case 330:

/* Line 1464 of yacc.c  */
#line 2141 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTKLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTKLINE;
  } 
}
    break;

  case 331:

/* Line 1464 of yacc.c  */
#line 2148 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_IDENTD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_IDENTD;
  }
}
    break;

  case 332:

/* Line 1464 of yacc.c  */
#line 2155 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_CAN_FLOOD;
    else yy_aconf->flags |= CONF_FLAGS_CAN_FLOOD;
  }
}
    break;

  case 333:

/* Line 1464 of yacc.c  */
#line 2162 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_IDLE_LINED;
    else yy_aconf->flags |= CONF_FLAGS_IDLE_LINED;
  }
}
    break;

  case 334:

/* Line 1464 of yacc.c  */
#line 2169 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NO_TILDE;
    else yy_aconf->flags |= CONF_FLAGS_NO_TILDE;
  } 
}
    break;

  case 335:

/* Line 1464 of yacc.c  */
#line 2176 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTGLINE;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTGLINE;
  } 
}
    break;

  case 336:

/* Line 1464 of yacc.c  */
#line 2183 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_EXEMPTRESV;
    else yy_aconf->flags |= CONF_FLAGS_EXEMPTRESV;
  }
}
    break;

  case 337:

/* Line 1464 of yacc.c  */
#line 2190 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_WEBIRC;
    else yy_aconf->flags |= CONF_FLAGS_WEBIRC;
  }
}
    break;

  case 338:

/* Line 1464 of yacc.c  */
#line 2197 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 339:

/* Line 1464 of yacc.c  */
#line 2206 "ircd_parser.y"
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

  case 340:

/* Line 1464 of yacc.c  */
#line 2217 "ircd_parser.y"
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

  case 341:

/* Line 1464 of yacc.c  */
#line 2228 "ircd_parser.y"
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

  case 342:

/* Line 1464 of yacc.c  */
#line 2239 "ircd_parser.y"
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

  case 343:

/* Line 1464 of yacc.c  */
#line 2250 "ircd_parser.y"
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

  case 344:

/* Line 1464 of yacc.c  */
#line 2261 "ircd_parser.y"
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

  case 345:

/* Line 1464 of yacc.c  */
#line 2273 "ircd_parser.y"
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

  case 346:

/* Line 1464 of yacc.c  */
#line 2292 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 347:

/* Line 1464 of yacc.c  */
#line 2302 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[(3) - (4)].number);
  }
}
    break;

  case 348:

/* Line 1464 of yacc.c  */
#line 2311 "ircd_parser.y"
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

  case 349:

/* Line 1464 of yacc.c  */
#line 2322 "ircd_parser.y"
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

  case 350:

/* Line 1464 of yacc.c  */
#line 2337 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 351:

/* Line 1464 of yacc.c  */
#line 2344 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 358:

/* Line 1464 of yacc.c  */
#line 2356 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 359:

/* Line 1464 of yacc.c  */
#line 2365 "ircd_parser.y"
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

  case 360:

/* Line 1464 of yacc.c  */
#line 2380 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 361:

/* Line 1464 of yacc.c  */
#line 2393 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 362:

/* Line 1464 of yacc.c  */
#line 2401 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 369:

/* Line 1464 of yacc.c  */
#line 2412 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 370:

/* Line 1464 of yacc.c  */
#line 2421 "ircd_parser.y"
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

  case 371:

/* Line 1464 of yacc.c  */
#line 2443 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 375:

/* Line 1464 of yacc.c  */
#line 2450 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 376:

/* Line 1464 of yacc.c  */
#line 2454 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 377:

/* Line 1464 of yacc.c  */
#line 2458 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 378:

/* Line 1464 of yacc.c  */
#line 2462 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 379:

/* Line 1464 of yacc.c  */
#line 2466 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 380:

/* Line 1464 of yacc.c  */
#line 2470 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 381:

/* Line 1464 of yacc.c  */
#line 2474 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 382:

/* Line 1464 of yacc.c  */
#line 2478 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 383:

/* Line 1464 of yacc.c  */
#line 2482 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 384:

/* Line 1464 of yacc.c  */
#line 2486 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 385:

/* Line 1464 of yacc.c  */
#line 2490 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_SERVICES;
}
    break;

  case 386:

/* Line 1464 of yacc.c  */
#line 2494 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_REHASH;
}
    break;

  case 387:

/* Line 1464 of yacc.c  */
#line 2498 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 388:

/* Line 1464 of yacc.c  */
#line 2507 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 389:

/* Line 1464 of yacc.c  */
#line 2514 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 395:

/* Line 1464 of yacc.c  */
#line 2527 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 396:

/* Line 1464 of yacc.c  */
#line 2533 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 400:

/* Line 1464 of yacc.c  */
#line 2540 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 401:

/* Line 1464 of yacc.c  */
#line 2544 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 402:

/* Line 1464 of yacc.c  */
#line 2548 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 403:

/* Line 1464 of yacc.c  */
#line 2552 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 404:

/* Line 1464 of yacc.c  */
#line 2556 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 405:

/* Line 1464 of yacc.c  */
#line 2560 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 406:

/* Line 1464 of yacc.c  */
#line 2564 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 407:

/* Line 1464 of yacc.c  */
#line 2568 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 408:

/* Line 1464 of yacc.c  */
#line 2572 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 409:

/* Line 1464 of yacc.c  */
#line 2576 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 410:

/* Line 1464 of yacc.c  */
#line 2580 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 411:

/* Line 1464 of yacc.c  */
#line 2589 "ircd_parser.y"
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

  case 412:

/* Line 1464 of yacc.c  */
#line 2607 "ircd_parser.y"
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

  case 437:

/* Line 1464 of yacc.c  */
#line 2746 "ircd_parser.y"
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
#line 2758 "ircd_parser.y"
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

  case 439:

/* Line 1464 of yacc.c  */
#line 2770 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 440:

/* Line 1464 of yacc.c  */
#line 2779 "ircd_parser.y"
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

  case 441:

/* Line 1464 of yacc.c  */
#line 2805 "ircd_parser.y"
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

  case 442:

/* Line 1464 of yacc.c  */
#line 2823 "ircd_parser.y"
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

  case 443:

/* Line 1464 of yacc.c  */
#line 2841 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[(3) - (4)].number);
}
    break;

  case 444:

/* Line 1464 of yacc.c  */
#line 2847 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 445:

/* Line 1464 of yacc.c  */
#line 2851 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 446:

/* Line 1464 of yacc.c  */
#line 2859 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 447:

/* Line 1464 of yacc.c  */
#line 2868 "ircd_parser.y"
    {
}
    break;

  case 451:

/* Line 1464 of yacc.c  */
#line 2872 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 453:

/* Line 1464 of yacc.c  */
#line 2873 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 455:

/* Line 1464 of yacc.c  */
#line 2876 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 456:

/* Line 1464 of yacc.c  */
#line 2883 "ircd_parser.y"
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

  case 457:

/* Line 1464 of yacc.c  */
#line 2894 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 458:

/* Line 1464 of yacc.c  */
#line 2901 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 459:

/* Line 1464 of yacc.c  */
#line 2908 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 460:

/* Line 1464 of yacc.c  */
#line 2915 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 461:

/* Line 1464 of yacc.c  */
#line 2925 "ircd_parser.y"
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

  case 462:

/* Line 1464 of yacc.c  */
#line 2966 "ircd_parser.y"
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

  case 463:

/* Line 1464 of yacc.c  */
#line 2977 "ircd_parser.y"
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

  case 464:

/* Line 1464 of yacc.c  */
#line 2988 "ircd_parser.y"
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

  case 465:

/* Line 1464 of yacc.c  */
#line 3003 "ircd_parser.y"
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

  case 466:

/* Line 1464 of yacc.c  */
#line 3014 "ircd_parser.y"
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

  case 467:

/* Line 1464 of yacc.c  */
#line 3025 "ircd_parser.y"
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

  case 468:

/* Line 1464 of yacc.c  */
#line 3038 "ircd_parser.y"
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

  case 469:

/* Line 1464 of yacc.c  */
#line 3051 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 470:

/* Line 1464 of yacc.c  */
#line 3060 "ircd_parser.y"
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

  case 471:

/* Line 1464 of yacc.c  */
#line 3095 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 472:

/* Line 1464 of yacc.c  */
#line 3102 "ircd_parser.y"
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

  case 473:

/* Line 1464 of yacc.c  */
#line 3158 "ircd_parser.y"
    {
}
    break;

  case 477:

/* Line 1464 of yacc.c  */
#line 3163 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 484:

/* Line 1464 of yacc.c  */
#line 3172 "ircd_parser.y"
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

  case 485:

/* Line 1464 of yacc.c  */
#line 3191 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 486:

/* Line 1464 of yacc.c  */
#line 3200 "ircd_parser.y"
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

  case 487:

/* Line 1464 of yacc.c  */
#line 3209 "ircd_parser.y"
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

  case 493:

/* Line 1464 of yacc.c  */
#line 3225 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 494:

/* Line 1464 of yacc.c  */
#line 3234 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 501:

/* Line 1464 of yacc.c  */
#line 3251 "ircd_parser.y"
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

  case 502:

/* Line 1464 of yacc.c  */
#line 3269 "ircd_parser.y"
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

  case 503:

/* Line 1464 of yacc.c  */
#line 3302 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 504:

/* Line 1464 of yacc.c  */
#line 3309 "ircd_parser.y"
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

  case 505:

/* Line 1464 of yacc.c  */
#line 3343 "ircd_parser.y"
    {
}
    break;

  case 509:

/* Line 1464 of yacc.c  */
#line 3348 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 516:

/* Line 1464 of yacc.c  */
#line 3357 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 517:

/* Line 1464 of yacc.c  */
#line 3363 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 583:

/* Line 1464 of yacc.c  */
#line 3411 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = (yyvsp[(3) - (4)].number);
}
    break;

  case 584:

/* Line 1464 of yacc.c  */
#line 3416 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = (yyvsp[(3) - (4)].number);
}
    break;

  case 585:

/* Line 1464 of yacc.c  */
#line 3421 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 586:

/* Line 1464 of yacc.c  */
#line 3426 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 587:

/* Line 1464 of yacc.c  */
#line 3431 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
}
    break;

  case 588:

/* Line 1464 of yacc.c  */
#line 3436 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 589:

/* Line 1464 of yacc.c  */
#line 3441 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = (yyvsp[(3) - (4)].number);
}
    break;

  case 590:

/* Line 1464 of yacc.c  */
#line 3446 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 591:

/* Line 1464 of yacc.c  */
#line 3451 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 592:

/* Line 1464 of yacc.c  */
#line 3456 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 593:

/* Line 1464 of yacc.c  */
#line 3461 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 594:

/* Line 1464 of yacc.c  */
#line 3466 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 595:

/* Line 1464 of yacc.c  */
#line 3471 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = (yyvsp[(3) - (4)].number); 
}
    break;

  case 596:

/* Line 1464 of yacc.c  */
#line 3476 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = (yyvsp[(3) - (4)].number);
}
    break;

  case 597:

/* Line 1464 of yacc.c  */
#line 3481 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = (yyvsp[(3) - (4)].number);
}
    break;

  case 598:

/* Line 1464 of yacc.c  */
#line 3486 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 599:

/* Line 1464 of yacc.c  */
#line 3491 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_connect_numeric = yylval.number;
}
    break;

  case 600:

/* Line 1464 of yacc.c  */
#line 3496 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = (yyvsp[(3) - (4)].number);
}
    break;

  case 601:

/* Line 1464 of yacc.c  */
#line 3501 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[(3) - (4)].number);
}
    break;

  case 602:

/* Line 1464 of yacc.c  */
#line 3507 "ircd_parser.y"
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

  case 603:

/* Line 1464 of yacc.c  */
#line 3518 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 604:

/* Line 1464 of yacc.c  */
#line 3523 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 605:

/* Line 1464 of yacc.c  */
#line 3532 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key1);
    DupString(ConfigFileEntry.cloak_key1, yylval.string);
  }
}
    break;

  case 606:

/* Line 1464 of yacc.c  */
#line 3541 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key2);
    DupString(ConfigFileEntry.cloak_key2, yylval.string);
  }
}
    break;

  case 607:

/* Line 1464 of yacc.c  */
#line 3550 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key3);
    DupString(ConfigFileEntry.cloak_key3, yylval.string);
  }
}
    break;

  case 608:

/* Line 1464 of yacc.c  */
#line 3559 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.services_name);
    DupString(ConfigFileEntry.services_name, yylval.string);
  }
}
    break;

  case 609:

/* Line 1464 of yacc.c  */
#line 3568 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 610:

/* Line 1464 of yacc.c  */
#line 3573 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 611:

/* Line 1464 of yacc.c  */
#line 3578 "ircd_parser.y"
    {
  ConfigFileEntry.stats_e_disabled = yylval.number;
}
    break;

  case 612:

/* Line 1464 of yacc.c  */
#line 3583 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 613:

/* Line 1464 of yacc.c  */
#line 3588 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 614:

/* Line 1464 of yacc.c  */
#line 3593 "ircd_parser.y"
    {
  ConfigFileEntry.hide_killer = yylval.number;
}
    break;

  case 615:

/* Line 1464 of yacc.c  */
#line 3598 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 616:

/* Line 1464 of yacc.c  */
#line 3601 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 617:

/* Line 1464 of yacc.c  */
#line 3606 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 618:

/* Line 1464 of yacc.c  */
#line 3609 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 619:

/* Line 1464 of yacc.c  */
#line 3614 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = (yyvsp[(3) - (4)].number);
}
    break;

  case 620:

/* Line 1464 of yacc.c  */
#line 3619 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = (yyvsp[(3) - (4)].number);
}
    break;

  case 621:

/* Line 1464 of yacc.c  */
#line 3624 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 622:

/* Line 1464 of yacc.c  */
#line 3629 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = (yyvsp[(3) - (4)].number);
}
    break;

  case 623:

/* Line 1464 of yacc.c  */
#line 3634 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 624:

/* Line 1464 of yacc.c  */
#line 3639 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 625:

/* Line 1464 of yacc.c  */
#line 3644 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 626:

/* Line 1464 of yacc.c  */
#line 3649 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 627:

/* Line 1464 of yacc.c  */
#line 3654 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 628:

/* Line 1464 of yacc.c  */
#line 3665 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = (yyvsp[(3) - (4)].number);
}
    break;

  case 629:

/* Line 1464 of yacc.c  */
#line 3670 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = (yyvsp[(3) - (4)].number);
}
    break;

  case 630:

/* Line 1464 of yacc.c  */
#line 3675 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = (yyvsp[(3) - (4)].number);
}
    break;

  case 631:

/* Line 1464 of yacc.c  */
#line 3680 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 632:

/* Line 1464 of yacc.c  */
#line 3689 "ircd_parser.y"
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

  case 633:

/* Line 1464 of yacc.c  */
#line 3721 "ircd_parser.y"
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

  case 634:

/* Line 1464 of yacc.c  */
#line 3739 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 635:

/* Line 1464 of yacc.c  */
#line 3744 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 636:

/* Line 1464 of yacc.c  */
#line 3753 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 637:

/* Line 1464 of yacc.c  */
#line 3758 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 638:

/* Line 1464 of yacc.c  */
#line 3763 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 639:

/* Line 1464 of yacc.c  */
#line 3768 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 643:

/* Line 1464 of yacc.c  */
#line 3774 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 644:

/* Line 1464 of yacc.c  */
#line 3777 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 645:

/* Line 1464 of yacc.c  */
#line 3780 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NOCTCP;
}
    break;

  case 646:

/* Line 1464 of yacc.c  */
#line 3783 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 647:

/* Line 1464 of yacc.c  */
#line 3786 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 648:

/* Line 1464 of yacc.c  */
#line 3789 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 649:

/* Line 1464 of yacc.c  */
#line 3792 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 650:

/* Line 1464 of yacc.c  */
#line 3795 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 651:

/* Line 1464 of yacc.c  */
#line 3798 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 652:

/* Line 1464 of yacc.c  */
#line 3801 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 653:

/* Line 1464 of yacc.c  */
#line 3804 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 654:

/* Line 1464 of yacc.c  */
#line 3807 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 655:

/* Line 1464 of yacc.c  */
#line 3810 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 656:

/* Line 1464 of yacc.c  */
#line 3813 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 657:

/* Line 1464 of yacc.c  */
#line 3816 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 658:

/* Line 1464 of yacc.c  */
#line 3819 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 659:

/* Line 1464 of yacc.c  */
#line 3822 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 660:

/* Line 1464 of yacc.c  */
#line 3825 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 661:

/* Line 1464 of yacc.c  */
#line 3828 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 662:

/* Line 1464 of yacc.c  */
#line 3831 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_HIDECHANNELS;
}
    break;

  case 663:

/* Line 1464 of yacc.c  */
#line 3834 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FARCONNECT;
}
    break;

  case 664:

/* Line 1464 of yacc.c  */
#line 3839 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 668:

/* Line 1464 of yacc.c  */
#line 3845 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 669:

/* Line 1464 of yacc.c  */
#line 3848 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 670:

/* Line 1464 of yacc.c  */
#line 3851 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NOCTCP;
}
    break;

  case 671:

/* Line 1464 of yacc.c  */
#line 3854 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 672:

/* Line 1464 of yacc.c  */
#line 3857 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 673:

/* Line 1464 of yacc.c  */
#line 3860 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 674:

/* Line 1464 of yacc.c  */
#line 3863 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 675:

/* Line 1464 of yacc.c  */
#line 3866 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 676:

/* Line 1464 of yacc.c  */
#line 3869 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 677:

/* Line 1464 of yacc.c  */
#line 3872 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 678:

/* Line 1464 of yacc.c  */
#line 3875 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 679:

/* Line 1464 of yacc.c  */
#line 3878 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 680:

/* Line 1464 of yacc.c  */
#line 3881 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 681:

/* Line 1464 of yacc.c  */
#line 3884 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 682:

/* Line 1464 of yacc.c  */
#line 3887 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 683:

/* Line 1464 of yacc.c  */
#line 3890 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 684:

/* Line 1464 of yacc.c  */
#line 3893 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 685:

/* Line 1464 of yacc.c  */
#line 3896 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 686:

/* Line 1464 of yacc.c  */
#line 3899 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 687:

/* Line 1464 of yacc.c  */
#line 3902 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_HIDECHANNELS;
}
    break;

  case 688:

/* Line 1464 of yacc.c  */
#line 3905 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_FARCONNECT;
}
    break;

  case 689:

/* Line 1464 of yacc.c  */
#line 3910 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = (yyvsp[(3) - (4)].number);
}
    break;

  case 690:

/* Line 1464 of yacc.c  */
#line 3915 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = (yyvsp[(3) - (4)].number);
}
    break;

  case 691:

/* Line 1464 of yacc.c  */
#line 3920 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = (yyvsp[(3) - (4)].number);
}
    break;

  case 692:

/* Line 1464 of yacc.c  */
#line 3925 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = (yyvsp[(3) - (4)].number);
}
    break;

  case 693:

/* Line 1464 of yacc.c  */
#line 3930 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 694:

/* Line 1464 of yacc.c  */
#line 3938 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = map_to_conf(yy_conf);
  }
}
    break;

  case 695:

/* Line 1464 of yacc.c  */
#line 3945 "ircd_parser.y"
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

  case 705:

/* Line 1464 of yacc.c  */
#line 3971 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 706:

/* Line 1464 of yacc.c  */
#line 3977 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 707:

/* Line 1464 of yacc.c  */
#line 3983 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 711:

/* Line 1464 of yacc.c  */
#line 3989 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 712:

/* Line 1464 of yacc.c  */
#line 3993 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 713:

/* Line 1464 of yacc.c  */
#line 3999 "ircd_parser.y"
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

  case 714:

/* Line 1464 of yacc.c  */
#line 4033 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 715:

/* Line 1464 of yacc.c  */
#line 4042 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 716:

/* Line 1464 of yacc.c  */
#line 4046 "ircd_parser.y"
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

  case 719:

/* Line 1464 of yacc.c  */
#line 4093 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 720:

/* Line 1464 of yacc.c  */
#line 4097 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 746:

/* Line 1464 of yacc.c  */
#line 4122 "ircd_parser.y"
    {
  ConfigChannel.cycle_on_hostchange = yylval.number;
}
    break;

  case 747:

/* Line 1464 of yacc.c  */
#line 4127 "ircd_parser.y"
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
    break;

  case 748:

/* Line 1464 of yacc.c  */
#line 4132 "ircd_parser.y"
    {
  ConfigChannel.restrict_channels = yylval.number;
}
    break;

  case 749:

/* Line 1464 of yacc.c  */
#line 4137 "ircd_parser.y"
    {
  ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 750:

/* Line 1464 of yacc.c  */
#line 4142 "ircd_parser.y"
    {
  ConfigChannel.use_except = yylval.number;
}
    break;

  case 751:

/* Line 1464 of yacc.c  */
#line 4147 "ircd_parser.y"
    {
  ConfigChannel.use_invex = yylval.number;
}
    break;

  case 752:

/* Line 1464 of yacc.c  */
#line 4152 "ircd_parser.y"
    {
  ConfigChannel.regex_bans = yylval.number;
}
    break;

  case 753:

/* Line 1464 of yacc.c  */
#line 4157 "ircd_parser.y"
    {
  ConfigChannel.use_knock = yylval.number;
}
    break;

  case 754:

/* Line 1464 of yacc.c  */
#line 4162 "ircd_parser.y"
    {
  ConfigChannel.use_noctcp = yylval.number;
}
    break;

  case 755:

/* Line 1464 of yacc.c  */
#line 4167 "ircd_parser.y"
    {
  ConfigChannel.knock_delay = (yyvsp[(3) - (4)].number);
}
    break;

  case 756:

/* Line 1464 of yacc.c  */
#line 4172 "ircd_parser.y"
    {
  ConfigChannel.knock_delay_channel = (yyvsp[(3) - (4)].number);
}
    break;

  case 757:

/* Line 1464 of yacc.c  */
#line 4177 "ircd_parser.y"
    {
  ConfigChannel.max_chans_per_user = (yyvsp[(3) - (4)].number);
}
    break;

  case 758:

/* Line 1464 of yacc.c  */
#line 4182 "ircd_parser.y"
    {
  ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 759:

/* Line 1464 of yacc.c  */
#line 4187 "ircd_parser.y"
    {
  ConfigChannel.max_bans = (yyvsp[(3) - (4)].number);
}
    break;

  case 760:

/* Line 1464 of yacc.c  */
#line 4192 "ircd_parser.y"
    {
  ConfigChannel.default_split_user_count = (yyvsp[(3) - (4)].number);
}
    break;

  case 761:

/* Line 1464 of yacc.c  */
#line 4197 "ircd_parser.y"
    {
  ConfigChannel.default_split_server_count = (yyvsp[(3) - (4)].number);
}
    break;

  case 762:

/* Line 1464 of yacc.c  */
#line 4202 "ircd_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 763:

/* Line 1464 of yacc.c  */
#line 4207 "ircd_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 764:

/* Line 1464 of yacc.c  */
#line 4212 "ircd_parser.y"
    {
  ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 765:

/* Line 1464 of yacc.c  */
#line 4217 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 766:

/* Line 1464 of yacc.c  */
#line 4222 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 778:

/* Line 1464 of yacc.c  */
#line 4241 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 779:

/* Line 1464 of yacc.c  */
#line 4247 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 780:

/* Line 1464 of yacc.c  */
#line 4253 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
}
    break;

  case 781:

/* Line 1464 of yacc.c  */
#line 4262 "ircd_parser.y"
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

  case 782:

/* Line 1464 of yacc.c  */
#line 4276 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 783:

/* Line 1464 of yacc.c  */
#line 4282 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 784:

/* Line 1464 of yacc.c  */
#line 4288 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;



/* Line 1464 of yacc.c  */
#line 9112 "y.tab.c"
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



