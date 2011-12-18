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
     OPER_UMODES = 407,
     JOIN_FLOOD_COUNT = 408,
     JOIN_FLOOD_TIME = 409,
     PACE_WAIT = 410,
     PACE_WAIT_SIMPLE = 411,
     PASSWORD = 412,
     PATH = 413,
     PING_COOKIE = 414,
     PING_TIME = 415,
     PING_WARNING = 416,
     PORT = 417,
     QSTRING = 418,
     QUIET_ON_BAN = 419,
     REASON = 420,
     REDIRPORT = 421,
     REDIRSERV = 422,
     REGEX_T = 423,
     REHASH = 424,
     TREJECT_HOLD_TIME = 425,
     REMOTE = 426,
     REMOTEBAN = 427,
     RESTRICT_CHANNELS = 428,
     RESTRICTED = 429,
     RSA_PRIVATE_KEY_FILE = 430,
     RSA_PUBLIC_KEY_FILE = 431,
     SSL_CERTIFICATE_FILE = 432,
     RESV = 433,
     RESV_EXEMPT = 434,
     SECONDS = 435,
     MINUTES = 436,
     HOURS = 437,
     DAYS = 438,
     WEEKS = 439,
     SENDQ = 440,
     SEND_PASSWORD = 441,
     SERVERHIDE = 442,
     SERVERINFO = 443,
     SERVICES = 444,
     SERVICES_NAME = 445,
     SERVLINK_PATH = 446,
     IRCD_SID = 447,
     TKLINE_EXPIRE_NOTICES = 448,
     T_SHARED = 449,
     T_CLUSTER = 450,
     TYPE = 451,
     SHORT_MOTD = 452,
     SILENT = 453,
     SPOOF = 454,
     SPOOF_NOTICE = 455,
     STATS_E_DISABLED = 456,
     STATS_I_OPER_ONLY = 457,
     STATS_K_OPER_ONLY = 458,
     STATS_O_OPER_ONLY = 459,
     STATS_P_OPER_ONLY = 460,
     TBOOL = 461,
     TMASKED = 462,
     T_REJECT = 463,
     TS_MAX_DELTA = 464,
     TS_WARN_DELTA = 465,
     TWODOTS = 466,
     T_ALL = 467,
     T_BOTS = 468,
     T_SOFTCALLERID = 469,
     T_CALLERID = 470,
     T_CCONN = 471,
     T_NOCTCP = 472,
     T_CLIENT_FLOOD = 473,
     T_DEAF = 474,
     T_DEBUG = 475,
     T_DRONE = 476,
     T_EXTERNAL = 477,
     T_FULL = 478,
     T_HIDECHANNELS = 479,
     T_INVISIBLE = 480,
     T_IPV4 = 481,
     T_IPV6 = 482,
     T_LOCOPS = 483,
     T_LOGPATH = 484,
     T_L_CRIT = 485,
     T_L_DEBUG = 486,
     T_L_ERROR = 487,
     T_L_INFO = 488,
     T_L_NOTICE = 489,
     T_L_TRACE = 490,
     T_L_WARN = 491,
     T_MAX_CLIENTS = 492,
     T_NCHANGE = 493,
     T_OPERWALL = 494,
     T_REJ = 495,
     T_SERVNOTICE = 496,
     T_SKILL = 497,
     T_SPY = 498,
     T_SSL = 499,
     T_UMODES = 500,
     T_UNAUTH = 501,
     T_UNRESV = 502,
     T_UNXLINE = 503,
     T_WALLOP = 504,
     THROTTLE_TIME = 505,
     TOPICBURST = 506,
     TRUE_NO_OPER_FLOOD = 507,
     TKLINE = 508,
     TXLINE = 509,
     TRESV = 510,
     UNKLINE = 511,
     USER = 512,
     USE_EGD = 513,
     USE_EXCEPT = 514,
     USE_INVEX = 515,
     HIDE_KILLER = 516,
     USE_REGEX_BANS = 517,
     USE_KNOCK = 518,
     USE_NOCTCP = 519,
     USE_LOGGING = 520,
     USE_WHOIS_ACTUALLY = 521,
     VHOST = 522,
     VHOST6 = 523,
     XLINE = 524,
     WARN = 525,
     WARN_NO_NLINE = 526
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
#define OPER_UMODES 407
#define JOIN_FLOOD_COUNT 408
#define JOIN_FLOOD_TIME 409
#define PACE_WAIT 410
#define PACE_WAIT_SIMPLE 411
#define PASSWORD 412
#define PATH 413
#define PING_COOKIE 414
#define PING_TIME 415
#define PING_WARNING 416
#define PORT 417
#define QSTRING 418
#define QUIET_ON_BAN 419
#define REASON 420
#define REDIRPORT 421
#define REDIRSERV 422
#define REGEX_T 423
#define REHASH 424
#define TREJECT_HOLD_TIME 425
#define REMOTE 426
#define REMOTEBAN 427
#define RESTRICT_CHANNELS 428
#define RESTRICTED 429
#define RSA_PRIVATE_KEY_FILE 430
#define RSA_PUBLIC_KEY_FILE 431
#define SSL_CERTIFICATE_FILE 432
#define RESV 433
#define RESV_EXEMPT 434
#define SECONDS 435
#define MINUTES 436
#define HOURS 437
#define DAYS 438
#define WEEKS 439
#define SENDQ 440
#define SEND_PASSWORD 441
#define SERVERHIDE 442
#define SERVERINFO 443
#define SERVICES 444
#define SERVICES_NAME 445
#define SERVLINK_PATH 446
#define IRCD_SID 447
#define TKLINE_EXPIRE_NOTICES 448
#define T_SHARED 449
#define T_CLUSTER 450
#define TYPE 451
#define SHORT_MOTD 452
#define SILENT 453
#define SPOOF 454
#define SPOOF_NOTICE 455
#define STATS_E_DISABLED 456
#define STATS_I_OPER_ONLY 457
#define STATS_K_OPER_ONLY 458
#define STATS_O_OPER_ONLY 459
#define STATS_P_OPER_ONLY 460
#define TBOOL 461
#define TMASKED 462
#define T_REJECT 463
#define TS_MAX_DELTA 464
#define TS_WARN_DELTA 465
#define TWODOTS 466
#define T_ALL 467
#define T_BOTS 468
#define T_SOFTCALLERID 469
#define T_CALLERID 470
#define T_CCONN 471
#define T_NOCTCP 472
#define T_CLIENT_FLOOD 473
#define T_DEAF 474
#define T_DEBUG 475
#define T_DRONE 476
#define T_EXTERNAL 477
#define T_FULL 478
#define T_HIDECHANNELS 479
#define T_INVISIBLE 480
#define T_IPV4 481
#define T_IPV6 482
#define T_LOCOPS 483
#define T_LOGPATH 484
#define T_L_CRIT 485
#define T_L_DEBUG 486
#define T_L_ERROR 487
#define T_L_INFO 488
#define T_L_NOTICE 489
#define T_L_TRACE 490
#define T_L_WARN 491
#define T_MAX_CLIENTS 492
#define T_NCHANGE 493
#define T_OPERWALL 494
#define T_REJ 495
#define T_SERVNOTICE 496
#define T_SKILL 497
#define T_SPY 498
#define T_SSL 499
#define T_UMODES 500
#define T_UNAUTH 501
#define T_UNRESV 502
#define T_UNXLINE 503
#define T_WALLOP 504
#define THROTTLE_TIME 505
#define TOPICBURST 506
#define TRUE_NO_OPER_FLOOD 507
#define TKLINE 508
#define TXLINE 509
#define TRESV 510
#define UNKLINE 511
#define USER 512
#define USE_EGD 513
#define USE_EXCEPT 514
#define USE_INVEX 515
#define HIDE_KILLER 516
#define USE_REGEX_BANS 517
#define USE_KNOCK 518
#define USE_NOCTCP 519
#define USE_LOGGING 520
#define USE_WHOIS_ACTUALLY 521
#define VHOST 522
#define VHOST6 523
#define XLINE 524
#define WARN 525
#define WARN_NO_NLINE 526




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 135 "ircd_parser.y"

  int number;
  char *string;



/* Line 214 of yacc.c  */
#line 768 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 780 "y.tab.c"

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
#define YYLAST   1513

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  277
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  362
/* YYNRULES -- Number of rules.  */
#define YYNRULES  780
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1580

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   526

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   276,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   272,
       2,   275,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   274,     2,   273,     2,     2,     2,     2,
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
     265,   266,   267,   268,   269,   270,   271
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
    1000,  1002,  1004,  1006,  1008,  1010,  1012,  1014,  1019,  1024,
    1029,  1034,  1039,  1044,  1049,  1054,  1059,  1064,  1069,  1070,
    1077,  1080,  1082,  1084,  1086,  1088,  1091,  1096,  1101,  1106,
    1107,  1114,  1117,  1119,  1121,  1123,  1125,  1128,  1133,  1138,
    1139,  1145,  1149,  1151,  1153,  1155,  1157,  1159,  1161,  1163,
    1165,  1167,  1169,  1171,  1173,  1175,  1177,  1178,  1185,  1188,
    1190,  1192,  1194,  1197,  1202,  1203,  1209,  1213,  1215,  1217,
    1219,  1221,  1223,  1225,  1227,  1229,  1231,  1233,  1235,  1237,
    1238,  1246,  1247,  1249,  1252,  1254,  1256,  1258,  1260,  1262,
    1264,  1266,  1268,  1270,  1272,  1274,  1276,  1278,  1280,  1282,
    1284,  1286,  1288,  1290,  1292,  1295,  1300,  1302,  1307,  1312,
    1317,  1322,  1327,  1332,  1337,  1342,  1343,  1349,  1353,  1355,
    1356,  1360,  1361,  1364,  1366,  1368,  1370,  1372,  1374,  1376,
    1381,  1386,  1391,  1396,  1401,  1406,  1411,  1416,  1421,  1426,
    1427,  1434,  1435,  1441,  1445,  1447,  1449,  1452,  1454,  1456,
    1458,  1460,  1462,  1467,  1472,  1473,  1480,  1483,  1485,  1487,
    1489,  1491,  1496,  1501,  1507,  1510,  1512,  1514,  1516,  1518,
    1523,  1528,  1529,  1536,  1537,  1543,  1547,  1549,  1551,  1554,
    1556,  1558,  1560,  1562,  1564,  1569,  1574,  1580,  1583,  1585,
    1587,  1589,  1591,  1593,  1595,  1597,  1599,  1601,  1603,  1605,
    1607,  1609,  1611,  1613,  1615,  1617,  1619,  1621,  1623,  1625,
    1627,  1629,  1631,  1633,  1635,  1637,  1639,  1641,  1643,  1645,
    1647,  1649,  1651,  1653,  1655,  1657,  1659,  1661,  1663,  1665,
    1667,  1669,  1671,  1673,  1675,  1677,  1679,  1681,  1683,  1685,
    1687,  1689,  1691,  1693,  1695,  1697,  1699,  1701,  1703,  1705,
    1707,  1709,  1714,  1719,  1724,  1729,  1734,  1739,  1744,  1749,
    1754,  1759,  1764,  1769,  1774,  1779,  1784,  1789,  1794,  1799,
    1804,  1809,  1814,  1819,  1824,  1829,  1834,  1839,  1844,  1849,
    1854,  1859,  1864,  1869,  1874,  1879,  1884,  1889,  1894,  1899,
    1904,  1909,  1914,  1919,  1924,  1929,  1934,  1939,  1944,  1949,
    1954,  1959,  1964,  1969,  1974,  1979,  1984,  1989,  1990,  1996,
    2000,  2002,  2004,  2006,  2008,  2010,  2012,  2014,  2016,  2018,
    2020,  2022,  2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,
    2040,  2042,  2043,  2049,  2053,  2055,  2057,  2059,  2061,  2063,
    2065,  2067,  2069,  2071,  2073,  2075,  2077,  2079,  2081,  2083,
    2085,  2087,  2089,  2091,  2093,  2095,  2100,  2105,  2110,  2115,
    2120,  2121,  2128,  2131,  2133,  2135,  2137,  2139,  2141,  2143,
    2145,  2147,  2152,  2157,  2158,  2164,  2168,  2170,  2172,  2174,
    2179,  2184,  2185,  2191,  2195,  2197,  2199,  2201,  2207,  2210,
    2212,  2214,  2216,  2218,  2220,  2222,  2224,  2226,  2228,  2230,
    2232,  2234,  2236,  2238,  2240,  2242,  2244,  2246,  2248,  2250,
    2252,  2254,  2256,  2261,  2266,  2271,  2276,  2281,  2286,  2291,
    2296,  2301,  2306,  2311,  2316,  2321,  2326,  2331,  2336,  2341,
    2346,  2351,  2356,  2361,  2367,  2370,  2372,  2374,  2376,  2378,
    2380,  2382,  2384,  2386,  2388,  2393,  2398,  2403,  2408,  2413,
    2418
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     278,     0,    -1,    -1,   278,   279,    -1,   310,    -1,   316,
      -1,   331,    -1,   605,    -1,   370,    -1,   389,    -1,   403,
      -1,   296,    -1,   629,    -1,   431,    -1,   438,    -1,   448,
      -1,   457,    -1,   488,    -1,   498,    -1,   504,    -1,   519,
      -1,   589,    -1,   509,    -1,   284,    -1,   289,    -1,     1,
     272,    -1,     1,   273,    -1,    -1,   281,    -1,   141,   280,
      -1,   141,   180,   280,    -1,   141,   181,   280,    -1,   141,
     182,   280,    -1,   141,   183,   280,    -1,   141,   184,   280,
      -1,    -1,   283,    -1,   141,   282,    -1,   141,    15,   282,
      -1,   141,    16,   282,    -1,   141,    17,   282,    -1,   128,
     274,   285,   273,   272,    -1,   285,   286,    -1,   286,    -1,
     287,    -1,   288,    -1,     1,   272,    -1,   127,   275,   163,
     272,    -1,   158,   275,   163,   272,    -1,    -1,    50,   290,
     274,   291,   273,   272,    -1,   291,   292,    -1,   292,    -1,
     293,    -1,   294,    -1,   295,    -1,     1,   272,    -1,   129,
     275,   163,   272,    -1,    53,   275,   281,   272,    -1,   165,
     275,   163,   272,    -1,   188,   274,   297,   273,   272,    -1,
     297,   298,    -1,   298,    -1,   301,    -1,   306,    -1,   309,
      -1,   303,    -1,   304,    -1,   305,    -1,   308,    -1,   300,
      -1,   307,    -1,   302,    -1,   299,    -1,     1,   272,    -1,
     177,   275,   163,   272,    -1,   175,   275,   163,   272,    -1,
     129,   275,   163,   272,    -1,   192,   275,   163,   272,    -1,
      43,   275,   163,   272,    -1,   133,   275,   163,   272,    -1,
     132,   275,   163,   272,    -1,   267,   275,   163,   272,    -1,
     268,   275,   163,   272,    -1,   237,   275,   141,   272,    -1,
      93,   275,   206,   272,    -1,     5,   274,   311,   273,   272,
      -1,   311,   312,    -1,   312,    -1,   313,    -1,   315,    -1,
     314,    -1,     1,   272,    -1,   129,   275,   163,   272,    -1,
      55,   275,   163,   272,    -1,    43,   275,   163,   272,    -1,
     112,   274,   317,   273,   272,    -1,   317,   318,    -1,   318,
      -1,   319,    -1,   320,    -1,   329,    -1,   330,    -1,   321,
      -1,   323,    -1,   325,    -1,   326,    -1,   328,    -1,   324,
      -1,   327,    -1,   322,    -1,     1,   272,    -1,   229,   275,
     163,   272,    -1,   148,   275,   163,   272,    -1,    71,   275,
     163,   272,    -1,    64,   275,   163,   272,    -1,    69,   275,
     163,   272,    -1,    70,   275,   163,   272,    -1,    67,   275,
     163,   272,    -1,    66,   275,   163,   272,    -1,    68,   275,
     163,   272,    -1,    65,   275,   163,   272,    -1,   113,   275,
     230,   272,    -1,   113,   275,   232,   272,    -1,   113,   275,
     236,   272,    -1,   113,   275,   234,   272,    -1,   113,   275,
     235,   272,    -1,   113,   275,   233,   272,    -1,   113,   275,
     231,   272,    -1,   265,   275,   206,   272,    -1,    -1,   146,
     332,   333,   274,   334,   273,   272,    -1,    -1,   337,    -1,
     334,   335,    -1,   335,    -1,   336,    -1,   338,    -1,   340,
      -1,   359,    -1,   360,    -1,   344,    -1,   343,    -1,   348,
      -1,   349,    -1,   351,    -1,   352,    -1,   353,    -1,   354,
      -1,   355,    -1,   350,    -1,   356,    -1,   357,    -1,   358,
      -1,   362,    -1,   341,    -1,   342,    -1,   339,    -1,   361,
      -1,   363,    -1,     1,   272,    -1,   129,   275,   163,   272,
      -1,   163,    -1,   257,   275,   163,   272,    -1,    28,   275,
     163,   272,    -1,   157,   275,   163,   272,    -1,    57,   275,
     206,   272,    -1,   176,   275,   163,   272,    -1,    27,   275,
     163,   272,    -1,    -1,   245,   345,   275,   346,   272,    -1,
     346,   276,   347,    -1,   347,    -1,   213,    -1,   216,    -1,
     217,    -1,   219,    -1,   220,    -1,   223,    -1,   242,    -1,
     238,    -1,   240,    -1,   246,    -1,   243,    -1,   222,    -1,
     239,    -1,   241,    -1,   225,    -1,   249,    -1,   214,    -1,
     215,    -1,   228,    -1,   224,    -1,    81,   275,   206,   272,
      -1,   171,   275,   206,   272,    -1,   172,   275,   206,   272,
      -1,   101,   275,   206,   272,    -1,   269,   275,   206,   272,
      -1,   256,   275,   206,   272,    -1,    74,   275,   206,   272,
      -1,   135,   275,   206,   272,    -1,    44,   275,   206,   272,
      -1,   169,   275,   206,   272,    -1,     5,   275,   206,   272,
      -1,    86,   275,   206,   272,    -1,    88,   275,   206,   272,
      -1,   151,   275,   206,   272,    -1,   239,   275,   206,   272,
      -1,    -1,    62,   364,   275,   365,   272,    -1,   365,   276,
     366,    -1,   366,    -1,    -1,   140,   367,   369,    -1,    -1,
     368,   369,    -1,    81,    -1,   171,    -1,   101,    -1,   256,
      -1,   269,    -1,    74,    -1,    44,    -1,   169,    -1,     5,
      -1,    86,    -1,   135,    -1,   239,    -1,   151,    -1,    88,
      -1,   172,    -1,    57,    -1,    -1,    27,   371,   372,   274,
     373,   273,   272,    -1,    -1,   376,    -1,   373,   374,    -1,
     374,    -1,   375,    -1,   386,    -1,   387,    -1,   377,    -1,
     378,    -1,   388,    -1,   379,    -1,   380,    -1,   381,    -1,
     382,    -1,   383,    -1,   384,    -1,   385,    -1,     1,   272,
      -1,   129,   275,   163,   272,    -1,   163,    -1,   160,   275,
     281,   272,    -1,   161,   275,   281,   272,    -1,   144,   275,
     141,   272,    -1,    35,   275,   281,   272,    -1,   122,   275,
     141,   272,    -1,   117,   275,   141,   272,    -1,   119,   275,
     141,   272,    -1,   118,   275,   141,   272,    -1,   185,   275,
     283,   272,    -1,    24,   275,   141,   272,    -1,    25,   275,
     141,   272,    -1,   143,   275,   141,   272,    -1,    -1,   110,
     390,   274,   395,   273,   272,    -1,    -1,    62,   392,   275,
     393,   272,    -1,   393,   276,   394,    -1,   394,    -1,   244,
      -1,    85,    -1,   395,   396,    -1,   396,    -1,   397,    -1,
     391,    -1,   401,    -1,   402,    -1,     1,   272,    -1,    -1,
     162,   275,   399,   398,   272,    -1,   399,   276,   400,    -1,
     400,    -1,   141,    -1,   141,   211,   141,    -1,    98,   275,
     163,   272,    -1,    92,   275,   163,   272,    -1,    -1,    82,
     404,   274,   405,   273,   272,    -1,   405,   406,    -1,   406,
      -1,   407,    -1,   408,    -1,   411,    -1,   413,    -1,   420,
      -1,   421,    -1,   422,    -1,   424,    -1,   425,    -1,   426,
      -1,   410,    -1,   429,    -1,   427,    -1,   428,    -1,   423,
      -1,   430,    -1,   412,    -1,   409,    -1,     1,   272,    -1,
     257,   275,   163,   272,    -1,   157,   275,   163,   272,    -1,
      28,   275,   163,   272,    -1,   200,   275,   206,   272,    -1,
      27,   275,   163,   272,    -1,    57,   275,   206,   272,    -1,
      -1,    62,   414,   275,   415,   272,    -1,   415,   276,   416,
      -1,   416,    -1,    -1,   140,   417,   419,    -1,    -1,   418,
     419,    -1,   200,    -1,    58,    -1,   102,    -1,    83,    -1,
      21,    -1,    22,    -1,   139,    -1,    76,    -1,   179,    -1,
     131,    -1,   130,    -1,   102,   275,   206,   272,    -1,    83,
     275,   206,   272,    -1,    58,   275,   206,   272,    -1,    21,
     275,   206,   272,    -1,   139,   275,   206,   272,    -1,    76,
     275,   206,   272,    -1,   199,   275,   163,   272,    -1,   167,
     275,   163,   272,    -1,   166,   275,   141,   272,    -1,   131,
     275,   206,   272,    -1,   130,   275,   206,   272,    -1,    -1,
     178,   432,   274,   433,   273,   272,    -1,   433,   434,    -1,
     434,    -1,   435,    -1,   436,    -1,   437,    -1,     1,   272,
      -1,   165,   275,   163,   272,    -1,    23,   275,   163,   272,
      -1,   134,   275,   163,   272,    -1,    -1,   194,   439,   274,
     440,   273,   272,    -1,   440,   441,    -1,   441,    -1,   442,
      -1,   443,    -1,   444,    -1,     1,   272,    -1,   129,   275,
     163,   272,    -1,   257,   275,   163,   272,    -1,    -1,   196,
     445,   275,   446,   272,    -1,   446,   276,   447,    -1,   447,
      -1,   101,    -1,   253,    -1,   256,    -1,   269,    -1,   254,
      -1,   248,    -1,   178,    -1,   255,    -1,   247,    -1,   228,
      -1,   189,    -1,   169,    -1,   212,    -1,    -1,   195,   449,
     274,   450,   273,   272,    -1,   450,   451,    -1,   451,    -1,
     452,    -1,   453,    -1,     1,   272,    -1,   129,   275,   163,
     272,    -1,    -1,   196,   454,   275,   455,   272,    -1,   455,
     276,   456,    -1,   456,    -1,   101,    -1,   253,    -1,   256,
      -1,   269,    -1,   254,    -1,   248,    -1,   178,    -1,   255,
      -1,   247,    -1,   228,    -1,   212,    -1,    -1,    34,   458,
     459,   274,   460,   273,   272,    -1,    -1,   463,    -1,   460,
     461,    -1,   461,    -1,   462,    -1,   464,    -1,   465,    -1,
     466,    -1,   467,    -1,   469,    -1,   468,    -1,   470,    -1,
     471,    -1,   484,    -1,   485,    -1,   486,    -1,   482,    -1,
     479,    -1,   481,    -1,   480,    -1,   478,    -1,   487,    -1,
     483,    -1,     1,   272,    -1,   129,   275,   163,   272,    -1,
     163,    -1,    92,   275,   163,   272,    -1,   267,   275,   163,
     272,    -1,   186,   275,   163,   272,    -1,     3,   275,   163,
     272,    -1,   162,   275,   141,   272,    -1,     6,   275,   226,
     272,    -1,     6,   275,   227,   272,    -1,    61,   275,   163,
     272,    -1,    -1,    62,   472,   275,   473,   272,    -1,   473,
     276,   474,    -1,   474,    -1,    -1,   140,   475,   477,    -1,
      -1,   476,   477,    -1,   107,    -1,    32,    -1,    36,    -1,
      11,    -1,    13,    -1,   251,    -1,   176,   275,   163,   272,
      -1,    57,   275,   206,   272,    -1,    36,   275,   206,   272,
      -1,    32,   275,   206,   272,    -1,    11,   275,   206,   272,
      -1,   251,   275,   206,   272,    -1,    94,   275,   163,   272,
      -1,   108,   275,   163,   272,    -1,    27,   275,   163,   272,
      -1,    26,   275,   163,   272,    -1,    -1,    99,   489,   274,
     494,   273,   272,    -1,    -1,   196,   491,   275,   492,   272,
      -1,   492,   276,   493,    -1,   493,    -1,   168,    -1,   494,
     495,    -1,   495,    -1,   496,    -1,   497,    -1,   490,    -1,
       1,    -1,   257,   275,   163,   272,    -1,   165,   275,   163,
     272,    -1,    -1,    42,   499,   274,   500,   273,   272,    -1,
     500,   501,    -1,   501,    -1,   502,    -1,   503,    -1,     1,
      -1,    98,   275,   163,   272,    -1,   165,   275,   163,   272,
      -1,    59,   274,   505,   273,   272,    -1,   505,   506,    -1,
     506,    -1,   507,    -1,   508,    -1,     1,    -1,    98,   275,
     163,   272,    -1,    28,   275,   163,   272,    -1,    -1,    72,
     510,   274,   515,   273,   272,    -1,    -1,   196,   512,   275,
     513,   272,    -1,   513,   276,   514,    -1,   514,    -1,   168,
      -1,   515,   516,    -1,   516,    -1,   517,    -1,   518,    -1,
     511,    -1,     1,    -1,   129,   275,   163,   272,    -1,   165,
     275,   163,   272,    -1,    73,   274,   520,   273,   272,    -1,
     520,   521,    -1,   521,    -1,   529,    -1,   530,    -1,   532,
      -1,   533,    -1,   534,    -1,   535,    -1,   536,    -1,   537,
      -1,   538,    -1,   539,    -1,   540,    -1,   528,    -1,   542,
      -1,   543,    -1,   548,    -1,   549,    -1,   566,    -1,   551,
      -1,   554,    -1,   556,    -1,   555,    -1,   559,    -1,   552,
      -1,   560,    -1,   561,    -1,   562,    -1,   563,    -1,   565,
      -1,   564,    -1,   580,    -1,   567,    -1,   571,    -1,   572,
      -1,   576,    -1,   557,    -1,   558,    -1,   586,    -1,   584,
      -1,   585,    -1,   568,    -1,   531,    -1,   569,    -1,   550,
      -1,   570,    -1,   587,    -1,   575,    -1,   541,    -1,   588,
      -1,   573,    -1,   574,    -1,   524,    -1,   527,    -1,   522,
      -1,   523,    -1,   525,    -1,   526,    -1,   553,    -1,   544,
      -1,   545,    -1,   546,    -1,   547,    -1,     1,    -1,    79,
     275,   141,   272,    -1,    80,   275,   141,   272,    -1,    13,
     275,   206,   272,    -1,   266,   275,   206,   272,    -1,   170,
     275,   281,   272,    -1,   193,   275,   206,   272,    -1,   100,
     275,   141,   272,    -1,    91,   275,   206,   272,    -1,    96,
     275,   206,   272,    -1,    49,   275,   206,   272,    -1,    60,
     275,   206,   272,    -1,     8,   275,   206,   272,    -1,   121,
     275,   281,   272,    -1,   120,   275,   141,   272,    -1,   114,
     275,   141,   272,    -1,     9,   275,   281,   272,    -1,    10,
     275,   206,   272,    -1,   210,   275,   281,   272,    -1,   209,
     275,   281,   272,    -1,    84,   275,   141,   272,    -1,   104,
     275,   206,   272,    -1,   103,   275,   163,   272,    -1,    29,
     275,   163,   272,    -1,    30,   275,   163,   272,    -1,    31,
     275,   163,   272,    -1,   190,   275,   163,   272,    -1,    97,
     275,   206,   272,    -1,   271,   275,   206,   272,    -1,   201,
     275,   206,   272,    -1,   204,   275,   206,   272,    -1,   205,
     275,   206,   272,    -1,   261,   275,   206,   272,    -1,   203,
     275,   206,   272,    -1,   203,   275,   207,   272,    -1,   202,
     275,   206,   272,    -1,   202,   275,   207,   272,    -1,   155,
     275,   281,   272,    -1,    20,   275,   281,   272,    -1,   147,
     275,   206,   272,    -1,   156,   275,   281,   272,    -1,   197,
     275,   206,   272,    -1,   138,   275,   206,   272,    -1,   252,
     275,   206,   272,    -1,   150,   275,   206,   272,    -1,   124,
     275,   163,   272,    -1,    95,   275,   281,   272,    -1,    52,
     275,   141,   272,    -1,   123,   275,   141,   272,    -1,   191,
     275,   163,   272,    -1,    38,   275,   163,   272,    -1,    33,
     275,   141,   272,    -1,   258,   275,   206,   272,    -1,    54,
     275,   163,   272,    -1,   159,   275,   206,   272,    -1,    45,
     275,   206,   272,    -1,   250,   275,   281,   272,    -1,    -1,
     152,   577,   275,   578,   272,    -1,   578,   276,   579,    -1,
     579,    -1,   213,    -1,   216,    -1,   217,    -1,   219,    -1,
     220,    -1,   223,    -1,   242,    -1,   238,    -1,   240,    -1,
     246,    -1,   243,    -1,   222,    -1,   239,    -1,   241,    -1,
     225,    -1,   249,    -1,   214,    -1,   215,    -1,   228,    -1,
     224,    -1,    -1,   149,   581,   275,   582,   272,    -1,   582,
     276,   583,    -1,   583,    -1,   213,    -1,   216,    -1,   217,
      -1,   219,    -1,   220,    -1,   223,    -1,   242,    -1,   238,
      -1,   240,    -1,   246,    -1,   243,    -1,   222,    -1,   239,
      -1,   241,    -1,   225,    -1,   249,    -1,   214,    -1,   215,
      -1,   228,    -1,   224,    -1,   125,   275,   141,   272,    -1,
     126,   275,   141,   272,    -1,    39,   275,   141,   272,    -1,
     218,   275,   283,   272,    -1,    51,   275,   206,   272,    -1,
      -1,    75,   590,   274,   591,   273,   272,    -1,   591,   592,
      -1,   592,    -1,   593,    -1,   594,    -1,   595,    -1,   599,
      -1,   600,    -1,   601,    -1,     1,    -1,    56,   275,   206,
     272,    -1,    53,   275,   281,   272,    -1,    -1,   112,   596,
     275,   597,   272,    -1,   597,   276,   598,    -1,   598,    -1,
     208,    -1,    12,    -1,   257,   275,   163,   272,    -1,   129,
     275,   163,   272,    -1,    -1,     4,   602,   275,   603,   272,
      -1,   603,   276,   604,    -1,   604,    -1,   208,    -1,    12,
      -1,    23,   274,   606,   273,   272,    -1,   606,   607,    -1,
     607,    -1,   611,    -1,   612,    -1,   613,    -1,   615,    -1,
     616,    -1,   614,    -1,   621,    -1,   617,    -1,   618,    -1,
     619,    -1,   620,    -1,   622,    -1,   623,    -1,   624,    -1,
     610,    -1,   625,    -1,   626,    -1,   627,    -1,   628,    -1,
     609,    -1,   608,    -1,     1,    -1,    37,   275,   206,   272,
      -1,    46,   275,   206,   272,    -1,   173,   275,   206,   272,
      -1,    48,   275,   206,   272,    -1,   259,   275,   206,   272,
      -1,   260,   275,   206,   272,    -1,   262,   275,   206,   272,
      -1,   263,   275,   206,   272,    -1,   264,   275,   206,   272,
      -1,   105,   275,   281,   272,    -1,   106,   275,   281,   272,
      -1,   116,   275,   141,   272,    -1,   164,   275,   206,   272,
      -1,   115,   275,   141,   272,    -1,    41,   275,   141,   272,
      -1,    40,   275,   141,   272,    -1,   136,   275,   206,   272,
      -1,   137,   275,   206,   272,    -1,    14,   275,   206,   272,
      -1,   153,   275,   141,   272,    -1,   154,   275,   281,   272,
      -1,   187,   274,   630,   273,   272,    -1,   630,   631,    -1,
     631,    -1,   632,    -1,   633,    -1,   635,    -1,   637,    -1,
     636,    -1,   634,    -1,   638,    -1,     1,    -1,    63,   275,
     206,   272,    -1,    90,   275,   206,   272,    -1,    87,   275,
     163,   272,    -1,   109,   275,   281,   272,    -1,    85,   275,
     206,   272,    -1,    47,   275,   206,   272,    -1,    89,   275,
     206,   272,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   410,   410,   411,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   440,   440,   441,
     445,   449,   453,   457,   461,   467,   467,   468,   469,   470,
     471,   478,   481,   481,   482,   482,   482,   484,   501,   514,
     513,   534,   534,   536,   536,   536,   536,   538,   547,   553,
     565,   568,   569,   570,   570,   571,   571,   572,   572,   573,
     574,   574,   575,   575,   576,   578,   612,   672,   686,   701,
     710,   724,   733,   761,   791,   814,   864,   866,   866,   867,
     867,   868,   868,   870,   879,   888,   901,   903,   904,   906,
     906,   907,   908,   908,   909,   909,   910,   910,   911,   911,
     912,   913,   915,   919,   923,   930,   937,   944,   951,   958,
     965,   972,   979,   983,   987,   991,   995,   999,  1003,  1009,
    1019,  1018,  1120,  1120,  1121,  1121,  1122,  1122,  1122,  1122,
    1123,  1123,  1124,  1124,  1124,  1125,  1125,  1125,  1126,  1126,
    1126,  1127,  1127,  1127,  1127,  1128,  1128,  1128,  1128,  1129,
    1129,  1131,  1143,  1155,  1189,  1210,  1222,  1233,  1275,  1285,
    1284,  1290,  1290,  1291,  1295,  1299,  1303,  1307,  1311,  1315,
    1319,  1323,  1327,  1331,  1335,  1339,  1343,  1347,  1351,  1355,
    1359,  1363,  1367,  1373,  1384,  1395,  1406,  1417,  1428,  1439,
    1450,  1461,  1472,  1483,  1494,  1505,  1516,  1527,  1539,  1538,
    1542,  1542,  1543,  1543,  1544,  1544,  1546,  1553,  1560,  1567,
    1574,  1581,  1588,  1595,  1602,  1609,  1616,  1623,  1630,  1637,
    1644,  1651,  1665,  1664,  1713,  1713,  1715,  1715,  1716,  1717,
    1717,  1718,  1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,
    1727,  1728,  1730,  1739,  1748,  1754,  1760,  1766,  1772,  1778,
    1784,  1790,  1796,  1802,  1808,  1814,  1824,  1823,  1840,  1839,
    1844,  1844,  1845,  1849,  1855,  1855,  1856,  1856,  1856,  1856,
    1856,  1858,  1858,  1860,  1860,  1862,  1876,  1896,  1905,  1918,
    1917,  1994,  1994,  1995,  1995,  1995,  1995,  1996,  1996,  1997,
    1997,  1997,  1998,  1998,  1998,  1999,  1999,  1999,  2000,  2000,
    2000,  2000,  2002,  2039,  2052,  2073,  2084,  2093,  2105,  2104,
    2108,  2108,  2109,  2109,  2110,  2110,  2112,  2120,  2127,  2134,
    2141,  2148,  2155,  2162,  2169,  2176,  2183,  2192,  2203,  2214,
    2225,  2236,  2247,  2259,  2278,  2288,  2297,  2308,  2324,  2323,
    2339,  2339,  2340,  2340,  2340,  2340,  2342,  2351,  2366,  2380,
    2379,  2395,  2395,  2396,  2396,  2396,  2396,  2398,  2407,  2430,
    2429,  2435,  2435,  2436,  2440,  2444,  2448,  2452,  2456,  2460,
    2464,  2468,  2472,  2476,  2480,  2484,  2494,  2493,  2510,  2510,
    2511,  2511,  2511,  2513,  2520,  2519,  2525,  2525,  2526,  2530,
    2534,  2538,  2542,  2546,  2550,  2554,  2558,  2562,  2566,  2576,
    2575,  2721,  2721,  2722,  2722,  2723,  2723,  2723,  2724,  2724,
    2725,  2725,  2726,  2726,  2726,  2727,  2727,  2727,  2728,  2728,
    2728,  2729,  2729,  2730,  2730,  2732,  2744,  2756,  2765,  2791,
    2809,  2827,  2833,  2837,  2845,  2855,  2854,  2858,  2858,  2859,
    2859,  2860,  2860,  2862,  2869,  2880,  2887,  2894,  2901,  2911,
    2952,  2963,  2974,  2989,  3000,  3011,  3024,  3037,  3046,  3082,
    3081,  3145,  3144,  3148,  3148,  3149,  3155,  3155,  3156,  3156,
    3156,  3156,  3158,  3177,  3187,  3186,  3208,  3208,  3209,  3209,
    3209,  3211,  3220,  3232,  3234,  3234,  3235,  3235,  3235,  3237,
    3255,  3289,  3288,  3330,  3329,  3333,  3333,  3334,  3340,  3340,
    3341,  3341,  3341,  3341,  3343,  3349,  3358,  3361,  3361,  3362,
    3362,  3363,  3363,  3364,  3364,  3365,  3365,  3366,  3367,  3367,
    3368,  3368,  3369,  3369,  3370,  3370,  3371,  3371,  3372,  3372,
    3373,  3373,  3374,  3374,  3375,  3375,  3376,  3376,  3377,  3377,
    3378,  3378,  3379,  3379,  3380,  3380,  3381,  3381,  3382,  3382,
    3383,  3383,  3384,  3384,  3385,  3385,  3386,  3386,  3387,  3387,
    3388,  3388,  3389,  3389,  3390,  3390,  3391,  3391,  3391,  3392,
    3393,  3397,  3402,  3407,  3412,  3417,  3422,  3427,  3432,  3437,
    3442,  3447,  3452,  3457,  3462,  3467,  3472,  3477,  3482,  3487,
    3493,  3504,  3509,  3518,  3527,  3536,  3545,  3554,  3559,  3564,
    3569,  3574,  3579,  3584,  3587,  3592,  3595,  3600,  3605,  3610,
    3615,  3620,  3625,  3630,  3635,  3640,  3651,  3656,  3661,  3666,
    3675,  3707,  3725,  3730,  3739,  3744,  3749,  3755,  3754,  3759,
    3759,  3760,  3763,  3766,  3769,  3772,  3775,  3778,  3781,  3784,
    3787,  3790,  3793,  3796,  3799,  3802,  3805,  3808,  3811,  3814,
    3817,  3823,  3822,  3827,  3827,  3828,  3831,  3834,  3837,  3840,
    3843,  3846,  3849,  3852,  3855,  3858,  3861,  3864,  3867,  3870,
    3873,  3876,  3879,  3882,  3885,  3890,  3895,  3900,  3905,  3910,
    3919,  3918,  3942,  3942,  3943,  3944,  3945,  3946,  3947,  3948,
    3949,  3951,  3957,  3964,  3963,  3968,  3968,  3969,  3973,  3979,
    4013,  4023,  4022,  4072,  4072,  4073,  4077,  4086,  4089,  4089,
    4090,  4090,  4091,  4091,  4091,  4091,  4092,  4092,  4093,  4093,
    4094,  4094,  4095,  4096,  4096,  4097,  4097,  4098,  4098,  4099,
    4100,  4100,  4102,  4107,  4112,  4117,  4122,  4127,  4132,  4137,
    4142,  4147,  4152,  4157,  4162,  4167,  4172,  4177,  4182,  4187,
    4192,  4197,  4202,  4210,  4213,  4213,  4214,  4214,  4215,  4216,
    4217,  4217,  4218,  4219,  4221,  4227,  4233,  4242,  4256,  4262,
    4268
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
     525,   526,    59,   125,   123,    61,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   277,   278,   278,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   280,   280,   281,
     281,   281,   281,   281,   281,   282,   282,   283,   283,   283,
     283,   284,   285,   285,   286,   286,   286,   287,   288,   290,
     289,   291,   291,   292,   292,   292,   292,   293,   294,   295,
     296,   297,   297,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   311,   312,
     312,   312,   312,   313,   314,   315,   316,   317,   317,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   329,   329,   329,   329,   329,   329,   330,
     332,   331,   333,   333,   334,   334,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   345,
     344,   346,   346,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   364,   363,
     365,   365,   367,   366,   368,   366,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   371,   370,   372,   372,   373,   373,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   390,   389,   392,   391,
     393,   393,   394,   394,   395,   395,   396,   396,   396,   396,
     396,   398,   397,   399,   399,   400,   400,   401,   402,   404,
     403,   405,   405,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   407,   408,   409,   410,   411,   412,   414,   413,
     415,   415,   417,   416,   418,   416,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   432,   431,
     433,   433,   434,   434,   434,   434,   435,   436,   437,   439,
     438,   440,   440,   441,   441,   441,   441,   442,   443,   445,
     444,   446,   446,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   449,   448,   450,   450,
     451,   451,   451,   452,   454,   453,   455,   455,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   458,
     457,   459,   459,   460,   460,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   469,   470,   472,   471,   473,   473,   475,
     474,   476,   474,   477,   477,   477,   477,   477,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   489,
     488,   491,   490,   492,   492,   493,   494,   494,   495,   495,
     495,   495,   496,   497,   499,   498,   500,   500,   501,   501,
     501,   502,   503,   504,   505,   505,   506,   506,   506,   507,
     508,   510,   509,   512,   511,   513,   513,   514,   515,   515,
     516,   516,   516,   516,   517,   518,   519,   520,   520,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   554,   555,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   577,   576,   578,
     578,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   581,   580,   582,   582,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   583,   584,   585,   586,   587,   588,
     590,   589,   591,   591,   592,   592,   592,   592,   592,   592,
     592,   593,   594,   596,   595,   597,   597,   598,   598,   599,
     600,   602,   601,   603,   603,   604,   604,   605,   606,   606,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   607,   607,   607,   607,   607,   607,   607,   607,
     607,   607,   608,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   630,   631,   631,   631,   631,
     631,   631,   631,   631,   632,   633,   634,   635,   636,   637,
     638
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
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     2,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     2,     4,     4,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     6,     2,     1,
       1,     1,     2,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       7,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     0,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       6,     0,     5,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     4,     4,     5,     2,     1,     1,     1,     1,     4,
       4,     0,     6,     0,     5,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     4,     4,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     0,     5,     3,     1,     1,     1,     4,
       4,     0,     5,     3,     1,     1,     1,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
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
       2,     0,     1,     0,     0,     0,   232,   409,   484,    49,
       0,   501,     0,   690,   289,   469,   266,     0,     0,   130,
     348,     0,     0,   359,   386,     3,    23,    24,    11,     4,
       5,     6,     8,     9,    10,    13,    14,    15,    16,    17,
      18,    19,    22,    20,    21,     7,    12,    25,    26,     0,
       0,   234,   411,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    91,    90,   741,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   719,   740,   739,   734,   720,   721,   722,   725,
     723,   724,   727,   728,   729,   730,   726,   731,   732,   733,
     735,   736,   737,   738,   253,     0,   235,   436,     0,   412,
       0,     0,   498,     0,     0,     0,   495,   496,   497,     0,
     580,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   661,     0,   637,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   518,   571,   572,   569,   573,   574,   570,
     530,   519,   520,   559,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   565,   531,   532,   576,   577,   578,   579,
     533,   534,   561,   536,   541,   575,   537,   539,   538,   553,
     554,   540,   542,   543,   544,   545,   547,   546,   535,   549,
     558,   560,   562,   550,   551,   567,   568,   564,   552,   548,
     556,   557,   555,   563,   566,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   103,   110,   104,   108,
     105,   106,   109,   107,   101,   102,     0,     0,     0,     0,
      43,    44,    45,   162,     0,   133,     0,   773,     0,     0,
       0,     0,     0,     0,     0,     0,   765,   766,   767,   771,
     768,   770,   769,   772,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    73,    70,
      63,    72,    66,    67,    68,    64,    71,    69,    65,     0,
       0,    92,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   718,
       0,     0,   490,     0,     0,     0,   487,   488,   489,     0,
       0,     0,     0,     0,    52,    53,    54,    55,     0,     0,
       0,   494,   513,     0,     0,   503,   512,     0,   509,   510,
     511,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   517,   700,   711,     0,     0,   703,     0,
       0,     0,   693,   694,   695,   696,   697,   698,   699,     0,
       0,     0,     0,     0,     0,   318,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   292,
     293,   294,   310,   303,   295,   309,   296,   297,   298,   299,
     307,   300,   301,   302,   305,   306,   304,   308,   481,     0,
     471,     0,   480,     0,   477,   478,   479,     0,   268,     0,
       0,     0,   277,     0,   275,   276,   278,   279,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    46,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,   351,   352,   353,   354,     0,     0,
       0,     0,     0,     0,     0,     0,   764,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,     0,   369,     0,     0,   362,   363,   364,   365,
       0,     0,   394,     0,   389,   390,   391,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   717,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     238,   241,   242,   244,   245,   246,   247,   248,   249,   250,
     239,   240,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   414,   415,   416,   417,   418,   419,
     421,   420,   422,   423,   431,   428,   430,   429,   427,   433,
     424,   425,   426,   432,     0,     0,     0,   486,    56,     0,
       0,     0,     0,    51,     0,     0,   493,     0,     0,     0,
       0,   508,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,   516,     0,     0,     0,
       0,     0,     0,     0,   692,   311,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   291,     0,     0,     0,     0,
     476,   280,     0,     0,     0,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,    41,
       0,     0,     0,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,     0,     0,     0,     0,   135,   136,   137,   157,
     138,   155,   156,   142,   141,   143,   144,   150,   145,   146,
     147,   148,   149,   151,   152,   153,   139,   140,   158,   154,
     159,   355,     0,     0,     0,     0,   350,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,   366,     0,     0,
       0,     0,   361,   392,     0,     0,     0,   388,    95,    94,
      93,   760,   742,   757,   756,   743,   745,    27,    27,    27,
      27,    27,    29,    28,   751,   752,   755,   753,   758,   759,
     761,   762,   754,   744,   746,   747,   748,   749,   750,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   236,   434,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   413,     0,     0,   485,
       0,     0,     0,    50,   500,   499,     0,     0,     0,   502,
     592,   596,   597,   583,   618,   603,   604,   605,   631,   630,
     687,   635,   590,   689,   627,   633,   591,   581,   582,   600,
     588,   626,   589,   607,   587,   602,   601,   595,   594,   593,
     628,   625,   685,   686,   622,   619,   665,   681,   682,   666,
     667,   668,   669,   676,   670,   684,   679,   683,   672,   677,
     673,   678,   671,   675,   674,   680,     0,   664,   624,   641,
     657,   658,   642,   643,   644,   645,   652,   646,   660,   655,
     659,   648,   653,   649,   654,   647,   651,   650,   656,     0,
     640,   617,   620,   634,   585,   606,   629,   586,   621,   609,
     615,   616,   613,   614,   610,   611,   599,   598,    35,    35,
      35,    37,    36,   688,   636,   623,   632,   612,   584,   608,
       0,     0,     0,     0,     0,     0,   691,     0,     0,     0,
       0,     0,   324,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   290,     0,     0,     0,   470,
       0,     0,     0,   285,   281,   284,   267,   115,   121,   119,
     118,   120,   116,   117,   114,   122,   128,   123,   127,   125,
     126,   124,   113,   112,   129,    47,    48,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,     0,     0,     0,   349,   779,   774,
     778,   776,   780,   775,   777,    79,    85,    77,    81,    80,
      76,    75,    78,    84,    82,    83,     0,     0,     0,   360,
       0,     0,   387,    30,    31,    32,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   451,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   410,   491,   492,    58,    57,    59,   514,   515,
     507,     0,   506,   662,     0,   638,     0,    38,    39,    40,
     716,   715,     0,   714,   702,   701,   708,   707,     0,   706,
     710,   709,   340,   316,   314,   317,   339,   322,     0,   321,
       0,   342,   338,   337,   347,   346,   341,   313,   345,   344,
     343,   315,   312,   483,   475,     0,   474,   482,   273,   272,
       0,   271,   288,   287,     0,     0,     0,     0,     0,     0,
       0,     0,   214,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,   357,   358,   356,   367,   373,   384,   379,   383,
     385,   382,   381,   378,   374,   377,   380,   375,   376,     0,
     372,   368,   393,   398,   404,   408,   407,   406,   403,   399,
     402,   405,   400,   401,     0,   397,   263,   264,   257,   259,
     261,   260,   258,   252,   265,   256,   254,   255,   262,   440,
     442,   443,   463,   468,   467,   462,   461,   460,   444,   449,
       0,   448,     0,   437,   465,   466,   435,   441,   459,   439,
     464,   438,   504,     0,   663,   639,   712,     0,   704,     0,
       0,   319,   324,   330,   331,   327,   333,   329,   328,   336,
     335,   332,   334,   326,   325,   472,     0,   269,     0,   286,
     283,   282,   203,   168,   164,   201,   166,   212,     0,   211,
       0,   199,   193,   204,   205,   196,   161,   200,   206,   165,
     202,   194,   195,   167,   207,   173,   189,   190,   174,   175,
     176,   177,   184,   178,   192,   187,   191,   180,   185,   181,
     186,   179,   183,   182,   188,     0,   172,   198,   163,   197,
     370,     0,   395,     0,     0,   446,   451,   456,   457,   454,
     455,   453,   458,   452,   505,   713,   705,   323,   320,   473,
     270,     0,   209,   214,   224,   222,   231,   221,   216,   225,
     229,   218,   226,   228,   223,   217,   230,   227,   219,   220,
     215,   170,     0,   371,   396,   450,   447,   213,   210,   171
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
     305,   888,   889,   890,   891,   892,   893,   894,  1218,  1525,
    1526,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   907,   908,   909,   910,  1203,  1488,  1489,
    1551,  1490,  1570,    32,    51,   125,   658,   659,   660,   126,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,    33,    61,   542,   832,  1350,  1351,   543,   544,
     545,  1356,  1174,  1175,   546,   547,    34,    59,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   811,  1328,  1329,
    1460,  1330,  1474,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,    35,    65,   573,   574,   575,   576,
     577,    36,    68,   605,   606,   607,   608,   609,   939,  1399,
    1400,    37,    69,   613,   614,   615,   616,   945,  1414,  1415,
      38,    52,   128,   693,   694,   695,   129,   696,   697,   698,
     699,   700,   701,   702,   703,  1005,  1440,  1441,  1534,  1442,
    1543,   704,   705,   706,   707,   708,   709,   710,   711,   712,
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
#define YYPACT_NINF -782
static const yytype_int16 yypact[] =
{
    -782,   918,  -782,  -245,  -268,  -261,  -782,  -782,  -782,  -782,
    -258,  -782,  -237,  -782,  -782,  -782,  -782,  -232,  -229,  -782,
    -782,  -224,  -214,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   143,
     773,  -106,   -90,  -195,  -178,    82,  -165,   466,  -138,  -129,
    -111,  -103,   423,    83,   -30,   -98,   393,   521,   -95,   -85,
     -64,   -53,   -27,   -22,     3,  -782,  -782,  -782,  -782,  -782,
     -20,   -13,     6,    25,    41,    50,    51,    54,    55,    63,
      66,    70,    80,    86,    87,    88,    89,    92,    94,    95,
      96,   129,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,     4,  -782,  -782,    14,  -782,
      22,   189,  -782,    98,    99,    64,  -782,  -782,  -782,    18,
    -782,   100,   109,   110,   121,   122,   131,   132,   135,   136,
     138,   139,   141,   142,   144,   148,   151,   153,   156,   157,
     158,   163,   170,   174,   176,   177,   178,   179,   180,   182,
     184,   197,   202,   206,   209,   210,   223,  -782,   225,  -782,
     226,   231,   232,   233,   235,   238,   239,   241,   244,   246,
     248,   249,   253,   255,   257,   260,   262,   263,   265,   267,
     269,   272,     2,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,   103,   819,    17,   350,     5,
     273,   274,   276,   277,   278,   279,   280,   283,   285,   290,
     292,   293,   312,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,    20,   297,   298,     7,
    -782,  -782,  -782,  -782,    29,  -782,   256,  -782,   299,   300,
     301,   303,   304,   306,   307,    28,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,    27,   308,   309,   313,   325,   326,
     328,   331,   332,   333,   335,   336,   266,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   111,
     118,  -782,   194,   195,   439,   114,  -782,   133,   212,   415,
     471,   411,   414,   482,   482,   483,   485,   424,   427,   488,
     482,   428,   429,   431,   432,   433,   434,   435,   370,  -782,
     905,   708,  -782,   368,   369,    23,  -782,  -782,  -782,   373,
     371,   372,   374,   166,  -782,  -782,  -782,  -782,   492,   495,
     379,  -782,  -782,   385,   387,  -782,  -782,    35,  -782,  -782,
    -782,   458,   482,   459,   467,   482,   509,   511,   514,   538,
     517,   540,   476,   477,   480,   546,   526,   487,   550,   553,
     554,   491,   482,   493,   494,   560,   541,   497,   565,   566,
     482,   567,   547,   571,   574,   515,   516,   442,   519,   445,
     482,   482,   520,   482,   568,   573,   522,   523,   524,   -68,
     -33,   532,   536,   482,   482,   582,   482,   537,   542,   545,
     551,   556,   474,  -782,  -782,  -782,   472,   478,  -782,   481,
     484,   193,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   496,
     489,   502,   504,   506,   507,  -782,   518,   528,   530,   531,
     533,   534,   543,   548,   549,   552,   558,   559,   270,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   561,
    -782,   563,  -782,    60,  -782,  -782,  -782,   500,  -782,   564,
     569,   570,  -782,    16,  -782,  -782,  -782,  -782,  -782,   589,
     597,   600,   603,   621,   627,   628,   629,   363,   631,   632,
     590,   525,  -782,  -782,   636,   638,   535,  -782,   604,   557,
     575,   576,   577,   200,  -782,  -782,  -782,  -782,   606,   609,
     611,   662,   620,   622,   482,   581,  -782,  -782,   668,   635,
     672,   679,   691,   692,   694,   699,   626,   700,   701,   593,
    -782,   599,   605,  -782,   607,    13,  -782,  -782,  -782,  -782,
     602,   608,  -782,    62,  -782,  -782,  -782,   613,   614,   615,
    -782,   618,   624,   633,   639,   640,   642,   281,   643,   645,
     648,   650,   652,   653,   659,   660,   661,   663,   666,   667,
     670,   671,   675,  -782,   676,   641,   669,   680,   681,   682,
     686,   687,   688,   689,   690,   695,   696,   698,   286,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,   702,   703,   704,   705,   707,   709,   712,
     713,   714,   719,  -782,   720,   721,   722,   723,   724,   726,
     727,   729,   730,   258,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,   738,   740,   711,  -782,  -782,   482,
     745,   771,   731,  -782,   734,   735,  -782,   788,   791,   733,
     737,  -782,   739,   741,   742,   744,   748,   749,   753,   754,
     757,   766,   767,   768,   769,   770,   772,   775,   780,   781,
     782,   783,   789,   790,   795,   796,   797,   798,   799,   801,
     802,   805,   806,   807,   808,   809,   810,   811,   901,   812,
     938,   813,   814,   815,   816,   817,   820,   821,   822,   823,
     825,   826,   827,   828,   829,   830,   831,   832,   327,   835,
     836,   837,   838,   839,   847,   850,  -782,   785,   482,   761,
     800,   849,   880,   855,  -782,  -782,   763,   882,   900,   804,
     885,   853,   924,   925,   926,   927,   928,   929,   973,   752,
     974,   982,   932,   983,   876,  -782,   986,   881,   996,   892,
    -782,  -782,   890,  1004,  1005,  1028,   898,  -782,   899,   902,
     903,   910,   911,   913,   914,   921,   930,   933,   934,   935,
     936,   937,   939,   940,   947,   948,  -782,   950,   951,  -782,
     953,   897,   952,   954,   955,   956,  -782,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,  -782,   971,   972,   976,    67,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  1010,  1033,  1038,   977,  -782,   978,   980,   981,
     984,   985,   987,   988,  -782,   989,   990,   991,   992,   993,
     994,   995,   997,   998,   999,  1000,  -782,  -782,  1041,   979,
    1047,  1001,  -782,  -782,  1063,  1002,  1003,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,   482,   482,   482,
     482,   482,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    1087,  1107,   482,  1114,  1117,  1127,  1133,  1113,  1137,  1138,
     482,   482,   582,  1008,  -782,  -782,  1118,    24,  1076,  1120,
    1121,  1079,  1080,  1081,  1125,  1014,  1128,  1129,  1130,  1131,
    1149,  1132,  1134,  1090,  1135,  1027,  -782,  1029,  1030,  -782,
    1031,  1032,  1034,  -782,  -782,  -782,  1035,  1036,  1141,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -267,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -246,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   582,   582,
     582,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
       8,  1039,  1040,     9,  1042,  1043,  -782,  1044,  1045,  1046,
    1048,  1049,  1160,  1050,  1051,  1052,  1053,  1054,  1055,  1056,
    1057,  1058,  1059,  1060,  1061,  -782,  1062,  1142,  1064,  -782,
     -60,  1065,  1066,   664,  1037,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  1099,  1156,
    1172,  1136,  1139,  1068,  1140,  1143,  1144,  1145,  1146,  1176,
    1147,  1148,  1177,  1150,  1151,  1152,  1178,  1153,  1069,  1154,
    1184,  1155,  1083,  -782,  1091,  1092,  1093,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  1094,   803,  1095,  -782,
    1096,   644,  -782,  -782,  -782,  -782,  -782,  -782,  1097,  1098,
    1100,  1101,  1102,  1103,  1104,  1105,  1106,  1108,  1109,  1110,
    1111,  -782,  1112,  1115,  1116,  1119,  1122,  1123,  1124,  1126,
    1157,  1158,  1208,  1159,  1161,  1162,  1163,  1164,  1165,  1166,
    1167,  1168,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -238,  -782,  -782,   901,  -782,   938,  -782,  -782,  -782,
    -782,  -782,  -233,  -782,  -782,  -782,  -782,  -782,  -228,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -217,  -782,
     728,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -205,  -782,  -782,  -782,  -782,
    -202,  -782,  -782,  -782,  1221,  1028,  1169,  1170,  1171,  1173,
    1174,  1175,  1231,  1179,  1180,  1181,  1182,  1183,  1185,  1186,
    1187,  1188,  1189,  1190,  1191,  1192,  1193,   975,  1194,  1195,
    1196,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -196,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -141,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -126,  -782,    53,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  1141,  -782,  -782,  -782,     8,  -782,     9,
     728,  -782,  1160,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  1142,  -782,   -60,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   -91,  -782,
     697,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,   -39,  -782,  -782,  -782,  -782,
    -782,   803,  -782,   644,    53,  -782,  1208,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,   697,  -782,  1231,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,   975,  -782,  -782,  -782,  -782,  -782,  -782,  -782
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -782,  -782,  -782,  -731,  -363,  -781,  -463,  -782,  -782,  1086,
    -782,  -782,  -782,  -782,  -782,  1006,  -782,  -782,  -782,  -782,
    -782,  1067,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  1305,  -782,  -782,  -782,  -782,
    -782,  1197,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   501,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -183,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -163,
    -782,  -782,  -159,  -782,  -782,  -782,  -782,   743,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,   -81,  -782,   857,
    -782,  -782,  -782,    38,  -782,  -782,  -782,  -782,  -782,   894,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,   -58,
    -782,  -782,   -55,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,   833,  -782,  -782,
    -782,  -782,  -782,  -782,   818,  -782,  -782,  -782,  -782,  -782,
    -124,  -782,  -782,  -782,   843,  -782,  -782,  -782,  -782,  -125,
    -782,  -782,  -782,  -782,   716,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -123,  -782,  -782,
    -122,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,   -66,  -782,   878,  -782,
    -782,  -782,  -782,  -782,  1084,  -782,  -782,  -782,  -782,  1279,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,   -38,  -782,  1009,
    -782,  -782,  -782,  -782,  1215,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,   112,  -782,  -782,  -782,   115,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,   941,  -782,  -782,  -782,  -782,
    -782,   -35,  -782,  -782,  -782,  -782,  -782,   -37,  -782,  -782,
    1320,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,  -782,
    -782,  -782,  -782,  -782,  1198,  -782,  -782,  -782,  -782,  -782,
    -782,  -782
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     628,   629,   789,   140,    70,  1303,    49,   635,   296,  1304,
     141,   142,   143,    50,   601,   144,    55,   537,   528,   402,
    1310,  1316,   145,   382,   382,  1348,  1305,    47,    48,   307,
    1306,   146,   147,   148,  1452,   149,   402,    57,  1453,  1456,
     150,   151,    62,  1457,  1458,    63,    71,   152,  1459,   733,
      66,   153,   736,   154,   155,  1461,   156,   124,    72,  1462,
      67,   528,   157,   610,  1537,   132,  1538,  1475,   860,   753,
    1477,  1476,   861,   127,  1478,   308,  1530,   761,   538,   130,
    1531,   158,   159,   132,   296,  1539,   160,   771,   772,  1540,
     774,   309,   133,   161,   862,   863,   131,   162,   163,   164,
     786,   787,   165,   790,   474,   166,   167,   475,   539,   139,
     133,   864,   601,   310,   540,   311,   168,   312,   313,   610,
     383,   383,   169,   170,   865,   171,   172,   173,   174,   866,
      79,  1532,    73,   303,   297,  1533,   265,   314,   780,   781,
     175,   867,   602,    80,    70,   266,  1535,   403,   868,   176,
    1536,   177,   178,   869,   179,   870,   476,   180,   181,   477,
    1541,   182,   134,   267,   403,   298,    81,   389,   871,    82,
      83,   268,   183,   782,   783,    84,   306,    85,   541,   349,
     134,  1552,   529,   404,  1349,  1553,    71,   384,   384,   350,
     389,   611,   184,   185,   474,   186,   872,   475,    72,   187,
     404,   569,   873,   188,   189,   190,   191,   192,   351,   603,
     297,   193,   194,   530,   405,   478,  1311,  1317,   874,   390,
     195,   923,   352,   570,   875,   529,  1253,  1254,  1255,  1256,
    1257,   405,   479,  1571,    86,    87,   876,  1572,   877,   878,
     602,   298,   390,   879,    88,    89,   476,   611,   353,   477,
    1273,  1274,   196,   354,   197,   357,   530,   569,   612,   673,
     198,   674,   358,   199,   675,    90,    91,   324,   200,   676,
     604,   489,    73,   201,   531,   472,   355,   548,   380,   570,
     566,   359,    92,    93,   677,   678,   941,   644,   381,   836,
     679,   490,   563,    94,   680,   391,   716,   491,   492,   587,
     360,   585,    95,   568,  1542,   478,   880,   603,   730,   325,
     645,   646,   881,   269,   612,   681,   361,   531,   391,   682,
     683,   647,   479,   882,   883,   362,   363,   493,   494,   364,
     365,   392,   495,   829,   571,   946,   884,   400,   366,   621,
    1222,   367,  1128,  1129,  1130,   368,   496,  1307,  1308,  1309,
     684,   537,   685,   497,   392,   369,  1020,   617,   618,   326,
     480,   370,   371,   372,   373,   572,   686,   374,   604,   375,
     376,   377,   498,   398,   399,   411,   270,   271,   272,   273,
     274,   275,   276,   277,   412,   413,   620,   687,    96,    97,
     571,    98,    99,   100,   307,   327,   414,   415,   328,   329,
     499,   500,   378,   648,   649,   650,   416,   417,   651,   501,
     418,   419,   538,   420,   421,   652,   422,   423,   622,   424,
     688,   572,   627,   425,   269,   278,   426,   502,   427,   653,
     654,   428,   429,   430,   689,  1141,   503,   504,   431,   722,
     308,   330,   539,   331,   690,   432,   655,   656,   540,   433,
     480,   434,   435,   436,   437,   438,   309,   439,   332,   440,
     279,   957,   958,   959,   960,   961,   803,   140,   788,   505,
     506,   657,   441,   915,   141,   142,   143,   442,   310,   144,
     311,   443,   312,   313,   444,   445,   145,   270,   271,   272,
     273,   274,   275,   276,   277,   146,   147,   148,   446,   149,
     448,   450,   314,   333,   150,   151,   451,   452,   453,   691,
     454,   152,   541,   455,   456,   153,   457,   154,   155,   458,
     156,   459,   324,   460,   461,   692,   157,   507,   462,  1270,
     463,  1015,   464,   334,   335,   465,   278,   466,   467,   599,
     468,   280,   469,   824,   470,   158,   159,   471,   549,   550,
     160,   551,   552,   553,   554,   555,   623,   161,   556,   993,
     557,   162,   163,   164,   325,   558,   165,   559,   560,   166,
     167,   279,   564,   565,   578,   579,   580,   281,   581,   582,
     168,   583,   584,   588,   589,   561,   169,   170,   590,   171,
     172,   173,   174,   846,   847,   848,   849,   850,   851,   852,
     591,   592,   619,   593,   175,   860,   594,   595,   596,   861,
     597,   598,   624,   176,   326,   177,   178,   625,   179,  1260,
     626,   180,   181,   627,   630,   182,   631,  1268,  1269,   634,
     632,   862,   863,   633,   636,   637,   183,   638,   639,   640,
     641,   642,   643,   714,   715,   718,   719,   720,   864,   721,
     327,   726,   280,   328,   329,   724,   184,   185,   725,   186,
     727,   865,   728,   187,   732,   734,   866,   188,   189,   190,
     191,   192,   737,   735,   738,   193,   194,   739,   867,   740,
     741,   742,   743,   744,   195,   868,   745,   746,   281,   747,
     869,   749,   870,   748,   750,   751,   330,   752,   331,   754,
     755,   756,  1554,   758,   757,   871,   759,   760,   762,   673,
     763,   674,   764,   332,   675,   765,   196,   768,   197,   676,
     770,   766,   767,   788,   198,   769,   773,   199,   777,   778,
     779,   775,   200,   872,   677,   678,   776,   201,   784,   873,
     679,  1555,   785,   791,   680,  1403,   796,   798,   792,  1463,
    1464,   793,   838,   799,  1556,   874,   801,   794,   333,   802,
     839,   875,   795,   840,   806,   681,   841,   933,   805,   682,
     683,  1557,   831,   876,    79,   877,   878,   807,  1558,   808,
     879,   809,   810,  1559,   842,  1560,  1465,    80,   334,   335,
     843,   844,   845,   812,   853,   854,   855,   856,  1561,   857,
     684,   858,   685,   813,  1466,   814,   815,   859,   816,   817,
      81,  1467,   917,    82,    83,   918,   686,   919,   818,    84,
     489,    85,  1404,   819,   820,   920,   921,   821,   922,   911,
    1468,   925,  1562,   822,   823,   927,   826,   687,   828,   833,
     490,   926,   928,   880,   834,   835,   491,   492,  1563,   881,
     912,   913,   914,   924,   929,   930,  1405,   931,  1469,  1470,
     882,   883,   932,   934,   935,   936,  1564,  1471,  1565,  1566,
     688,   937,  1406,   884,   943,  1354,   493,   494,    86,    87,
     938,   495,   940,   944,   689,   948,   949,   950,    88,    89,
     951,  1407,  1408,  1160,   690,   496,   952,  1409,  1410,  1411,
    1412,  1017,   497,  1018,  1386,   953,   644,  1472,  1021,    90,
      91,   954,   955,  1413,   956,   964,   980,   965,     2,     3,
     966,   498,   967,     4,   968,   969,    92,    93,  1473,   645,
     646,   970,   971,   972,  1022,   973,  1567,    94,   974,   975,
     647,     5,   976,   977,   981,     6,    95,   978,   979,   499,
     500,  1026,     7,  1568,  1027,   982,   983,   984,   501,   691,
       8,   985,   986,   987,   988,   989,  1569,  1142,     9,  1147,
     990,   991,  1387,   992,   995,   692,   502,    10,   996,   997,
     998,  1388,   999,  1019,  1000,   503,   504,  1001,  1002,  1003,
      11,    12,  1389,    13,  1004,  1006,  1007,  1008,  1009,  1010,
      14,  1011,  1012,  1023,  1013,  1014,  1024,  1025,  1028,  1029,
    1150,  1030,  1144,  1031,  1032,  1390,  1033,    15,   505,   506,
    1034,  1035,   648,   649,   650,  1036,  1037,   651,    16,  1038,
      17,  1391,    96,    97,   652,    98,    99,   100,  1039,  1040,
    1041,  1042,  1043,  1145,  1044,  1148,    18,  1045,   653,   654,
    1392,  1393,  1046,  1047,  1048,  1049,  1394,  1395,  1396,  1397,
    1140,  1050,  1051,  1149,    19,   655,   656,  1052,  1053,  1054,
    1055,  1056,  1398,  1057,  1058,  1143,   507,  1059,  1060,  1061,
    1062,  1063,  1064,  1065,  1088,  1111,  1112,  1113,  1114,  1115,
     657,  1151,  1116,  1117,  1118,  1119,    20,  1120,  1121,  1122,
    1123,  1124,  1125,  1126,  1127,    21,    22,  1133,  1134,  1135,
    1136,  1137,    23,    24,  1066,  1067,  1068,  1069,  1070,  1138,
    1071,  1072,  1139,  1073,  1074,  1075,  1076,  1146,  1152,  1077,
    1153,  1154,  1155,  1156,  1157,  1158,  1159,  1161,  1163,  1078,
    1079,  1080,  1081,  1082,  1083,  1162,  1164,  1084,  1165,  1166,
    1085,  1089,  1090,  1091,  1092,  1093,  1167,  1094,  1095,  1168,
    1096,  1097,  1098,  1099,  1169,  1170,  1100,  1171,  1172,  1173,
    1176,  1177,  1198,  1224,  1178,  1179,  1101,  1102,  1103,  1104,
    1105,  1106,  1180,  1181,  1107,  1182,  1183,  1108,  1505,  1506,
    1507,  1508,  1509,  1184,  1510,  1511,  1225,  1512,  1513,  1514,
    1515,  1226,  1185,  1516,  1246,  1186,  1187,  1188,  1189,  1190,
    1248,  1191,  1192,  1517,  1518,  1519,  1520,  1521,  1522,  1193,
    1194,  1523,  1195,  1196,  1524,  1197,  1250,  1199,  1258,  1200,
    1201,  1202,  1204,  1205,  1206,  1207,  1208,  1209,  1210,  1211,
    1212,  1213,  1214,  1215,  1216,  1217,  1219,  1220,  1259,  1227,
    1228,  1221,  1229,  1230,  1247,  1261,  1231,  1232,  1262,  1233,
    1234,  1235,  1236,  1237,  1238,  1239,  1240,  1241,  1263,  1242,
    1243,  1244,  1245,  1249,  1264,  1252,  1265,  1251,  1266,  1267,
    1271,  1272,  1275,  1276,  1277,  1278,  1279,  1280,  1281,  1282,
    1287,  1283,  1284,  1285,  1286,  1288,  1290,  1289,  1291,  1292,
    1327,  1293,  1294,  1295,  1296,  1357,  1297,  1298,  1299,  1300,
    1344,  1314,  1315,  1355,  1320,  1321,  1322,  1323,  1324,  1358,
    1325,  1326,  1331,  1332,  1333,  1334,  1335,  1336,  1337,  1338,
    1339,  1340,  1341,  1342,  1343,  1359,  1347,  1352,  1353,  1368,
    1371,  1375,  1360,  1362,  1377,  1361,  1363,  1379,  1439,  1364,
    1365,  1366,  1367,  1369,  1370,  1381,  1372,  1373,  1374,  1376,
    1378,  1380,  1479,  1382,  1383,  1384,  1385,  1401,  1402,  1416,
    1417,  1487,  1418,  1419,  1420,  1421,  1422,  1423,  1424,   356,
    1425,  1426,  1427,  1428,  1429,   567,  1223,  1430,  1431,  1579,
    1578,  1432,  1577,  1480,  1433,  1434,  1435,  1550,  1436,   723,
     837,   994,   825,   600,  1548,  1547,   916,  1573,  1574,  1016,
    1549,   830,  1575,  1576,   401,  1544,   731,   473,  1455,  1454,
    1545,   379,   804,   942,  1546,     0,     0,     0,     0,  1437,
    1438,  1443,     0,  1444,  1445,  1446,  1447,  1448,  1449,  1450,
    1451,  1481,  1482,  1483,     0,  1484,  1485,  1486,     0,     0,
       0,  1491,  1492,  1493,  1494,  1495,   947,  1496,  1497,  1498,
    1499,  1500,  1501,  1502,  1503,  1504,  1527,  1528,  1529,   717,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   562,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   586
};

static const yytype_int16 yycheck[] =
{
     363,   364,   465,     1,     1,   272,   274,   370,     1,   276,
       8,     9,    10,   274,     1,    13,   274,     1,     1,     1,
      12,    12,    20,     1,     1,    85,   272,   272,   273,     1,
     276,    29,    30,    31,   272,    33,     1,   274,   276,   272,
      38,    39,   274,   276,   272,   274,    43,    45,   276,   412,
     274,    49,   415,    51,    52,   272,    54,   163,    55,   276,
     274,     1,    60,     1,    11,     1,    13,   272,     1,   432,
     272,   276,     5,   163,   276,    47,   272,   440,    62,   274,
     276,    79,    80,     1,     1,    32,    84,   450,   451,    36,
     453,    63,    28,    91,    27,    28,   274,    95,    96,    97,
     463,   464,   100,   466,     1,   103,   104,     4,    92,   274,
      28,    44,     1,    85,    98,    87,   114,    89,    90,     1,
      98,    98,   120,   121,    57,   123,   124,   125,   126,    62,
       1,   272,   129,   163,   127,   276,   274,   109,   206,   207,
     138,    74,   129,    14,     1,   274,   272,   129,    81,   147,
     276,   149,   150,    86,   152,    88,    53,   155,   156,    56,
     107,   159,    98,   274,   129,   158,    37,     1,   101,    40,
      41,   274,   170,   206,   207,    46,   274,    48,   162,   274,
      98,   272,   165,   165,   244,   276,    43,   165,   165,   274,
       1,   129,   190,   191,     1,   193,   129,     4,    55,   197,
     165,     1,   135,   201,   202,   203,   204,   205,   272,   196,
     127,   209,   210,   196,   196,   112,   208,   208,   151,    53,
     218,   584,   275,    23,   157,   165,   957,   958,   959,   960,
     961,   196,   129,   272,   105,   106,   169,   276,   171,   172,
     129,   158,    53,   176,   115,   116,    53,   129,   275,    56,
     226,   227,   250,   275,   252,   275,   196,     1,   196,     1,
     258,     3,   275,   261,     6,   136,   137,     1,   266,    11,
     257,     1,   129,   271,   257,   273,   273,   272,   274,    23,
     273,   275,   153,   154,    26,    27,   273,     1,   274,   273,
      32,    21,   272,   164,    36,   129,   273,    27,    28,   272,
     275,   273,   173,   274,   251,   112,   239,   196,   273,    43,
      24,    25,   245,     1,   196,    57,   275,   257,   129,    61,
      62,    35,   129,   256,   257,   275,   275,    57,    58,   275,
     275,   165,    62,   273,   134,   273,   269,   273,   275,   206,
     273,   275,    15,    16,    17,   275,    76,  1128,  1129,  1130,
      92,     1,    94,    83,   165,   275,   719,   163,   163,    93,
     257,   275,   275,   275,   275,   165,   108,   275,   257,   275,
     275,   275,   102,   275,   275,   275,    64,    65,    66,    67,
      68,    69,    70,    71,   275,   275,   272,   129,   259,   260,
     134,   262,   263,   264,     1,   129,   275,   275,   132,   133,
     130,   131,   273,   117,   118,   119,   275,   275,   122,   139,
     275,   275,    62,   275,   275,   129,   275,   275,   206,   275,
     162,   165,   141,   275,     1,   113,   275,   157,   275,   143,
     144,   275,   275,   275,   176,   798,   166,   167,   275,   273,
      47,   175,    92,   177,   186,   275,   160,   161,    98,   275,
     257,   275,   275,   275,   275,   275,    63,   275,   192,   275,
     148,   180,   181,   182,   183,   184,   273,     1,   141,   199,
     200,   185,   275,   273,     8,     9,    10,   275,    85,    13,
      87,   275,    89,    90,   275,   275,    20,    64,    65,    66,
      67,    68,    69,    70,    71,    29,    30,    31,   275,    33,
     275,   275,   109,   237,    38,    39,   275,   275,   275,   251,
     275,    45,   162,   275,   275,    49,   275,    51,    52,   275,
      54,   275,     1,   275,   275,   267,    60,   257,   275,   992,
     275,   273,   275,   267,   268,   275,   113,   275,   275,   273,
     275,   229,   275,   273,   275,    79,    80,   275,   275,   275,
      84,   275,   275,   275,   275,   275,   141,    91,   275,   273,
     275,    95,    96,    97,    43,   275,   100,   275,   275,   103,
     104,   148,   275,   275,   275,   275,   275,   265,   275,   275,
     114,   275,   275,   275,   275,   273,   120,   121,   275,   123,
     124,   125,   126,   230,   231,   232,   233,   234,   235,   236,
     275,   275,   163,   275,   138,     1,   275,   275,   275,     5,
     275,   275,   141,   147,    93,   149,   150,   206,   152,   982,
     206,   155,   156,   141,   141,   159,   141,   990,   991,   141,
     206,    27,    28,   206,   206,   206,   170,   206,   206,   206,
     206,   206,   272,   275,   275,   272,   275,   275,    44,   275,
     129,   272,   229,   132,   133,   163,   190,   191,   163,   193,
     275,    57,   275,   197,   206,   206,    62,   201,   202,   203,
     204,   205,   163,   206,   163,   209,   210,   163,    74,   141,
     163,   141,   206,   206,   218,    81,   206,   141,   265,   163,
      86,   141,    88,   206,   141,   141,   175,   206,   177,   206,
     206,   141,     5,   206,   163,   101,   141,   141,   141,     1,
     163,     3,   141,   192,     6,   141,   250,   275,   252,    11,
     275,   206,   206,   141,   258,   206,   206,   261,   206,   206,
     206,   163,   266,   129,    26,    27,   163,   271,   206,   135,
      32,    44,   206,   206,    36,   101,   272,   275,   206,    21,
      22,   206,   163,   275,    57,   151,   275,   206,   237,   275,
     163,   157,   206,   163,   275,    57,   163,   141,   272,    61,
      62,    74,   272,   169,     1,   171,   172,   275,    81,   275,
     176,   275,   275,    86,   163,    88,    58,    14,   267,   268,
     163,   163,   163,   275,   163,   163,   206,   272,   101,   163,
      92,   163,    94,   275,    76,   275,   275,   272,   275,   275,
      37,    83,   206,    40,    41,   206,   108,   206,   275,    46,
       1,    48,   178,   275,   275,   163,   206,   275,   206,   272,
     102,   163,   135,   275,   275,   163,   275,   129,   275,   275,
      21,   206,   163,   239,   275,   275,    27,    28,   151,   245,
     275,   275,   275,   272,   163,   163,   212,   163,   130,   131,
     256,   257,   163,   163,   163,   272,   169,   139,   171,   172,
     162,   272,   228,   269,   272,   211,    57,    58,   105,   106,
     275,    62,   275,   275,   176,   272,   272,   272,   115,   116,
     272,   247,   248,   141,   186,    76,   272,   253,   254,   255,
     256,   163,    83,   163,   101,   272,     1,   179,   163,   136,
     137,   272,   272,   269,   272,   272,   275,   272,     0,     1,
     272,   102,   272,     5,   272,   272,   153,   154,   200,    24,
      25,   272,   272,   272,   163,   272,   239,   164,   272,   272,
      35,    23,   272,   272,   275,    27,   173,   272,   272,   130,
     131,   163,    34,   256,   163,   275,   275,   275,   139,   251,
      42,   275,   275,   275,   275,   275,   269,   206,    50,   206,
     275,   275,   169,   275,   272,   267,   157,    59,   275,   275,
     275,   178,   275,   272,   275,   166,   167,   275,   275,   275,
      72,    73,   189,    75,   275,   275,   275,   275,   275,   275,
      82,   275,   275,   272,   275,   275,   272,   272,   275,   272,
     206,   272,   163,   272,   272,   212,   272,    99,   199,   200,
     272,   272,   117,   118,   119,   272,   272,   122,   110,   272,
     112,   228,   259,   260,   129,   262,   263,   264,   272,   272,
     272,   272,   272,   163,   272,   163,   128,   272,   143,   144,
     247,   248,   272,   272,   272,   272,   253,   254,   255,   256,
     275,   272,   272,   163,   146,   160,   161,   272,   272,   272,
     272,   272,   269,   272,   272,   275,   257,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     185,   206,   272,   272,   272,   272,   178,   272,   272,   272,
     272,   272,   272,   272,   272,   187,   188,   272,   272,   272,
     272,   272,   194,   195,   213,   214,   215,   216,   217,   272,
     219,   220,   272,   222,   223,   224,   225,   272,   275,   228,
     206,   206,   206,   206,   206,   206,   163,   163,   206,   238,
     239,   240,   241,   242,   243,   163,   163,   246,   272,   163,
     249,   213,   214,   215,   216,   217,   275,   219,   220,   163,
     222,   223,   224,   225,   272,   275,   228,   163,   163,   141,
     272,   272,   275,   163,   272,   272,   238,   239,   240,   241,
     242,   243,   272,   272,   246,   272,   272,   249,   213,   214,
     215,   216,   217,   272,   219,   220,   163,   222,   223,   224,
     225,   163,   272,   228,   163,   272,   272,   272,   272,   272,
     163,   272,   272,   238,   239,   240,   241,   242,   243,   272,
     272,   246,   272,   272,   249,   272,   163,   275,   141,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   141,   272,
     272,   275,   272,   272,   275,   141,   272,   272,   141,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   141,   272,
     272,   272,   272,   272,   141,   272,   163,   275,   141,   141,
     272,   163,   206,   163,   163,   206,   206,   206,   163,   275,
     141,   163,   163,   163,   163,   163,   206,   163,   163,   272,
     140,   272,   272,   272,   272,   206,   272,   272,   272,   168,
     168,   272,   272,   276,   272,   272,   272,   272,   272,   163,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   163,   272,   272,   272,   163,
     163,   163,   206,   275,   275,   206,   206,   163,   140,   206,
     206,   206,   206,   206,   206,   272,   206,   206,   206,   206,
     206,   206,   141,   272,   272,   272,   272,   272,   272,   272,
     272,   140,   272,   272,   272,   272,   272,   272,   272,    74,
     272,   272,   272,   272,   272,   299,   885,   272,   272,  1572,
    1553,   272,  1551,  1355,   272,   272,   272,  1478,   272,   393,
     543,   658,   508,   336,  1462,  1460,   573,  1531,  1533,   693,
    1476,   533,  1534,  1536,   135,  1453,   407,   202,  1306,  1304,
    1457,   101,   481,   605,  1459,    -1,    -1,    -1,    -1,   272,
     272,   272,    -1,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,    -1,   272,   272,   272,    -1,    -1,
      -1,   272,   272,   272,   272,   272,   613,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   385,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   315
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   278,     0,     1,     5,    23,    27,    34,    42,    50,
      59,    72,    73,    75,    82,    99,   110,   112,   128,   146,
     178,   187,   188,   194,   195,   279,   284,   289,   296,   310,
     316,   331,   370,   389,   403,   431,   438,   448,   457,   488,
     498,   504,   509,   519,   589,   605,   629,   272,   273,   274,
     274,   371,   458,   499,   290,   274,   510,   274,   590,   404,
     489,   390,   274,   274,   332,   432,   274,   274,   439,   449,
       1,    43,    55,   129,   311,   312,   313,   314,   315,     1,
      14,    37,    40,    41,    46,    48,   105,   106,   115,   116,
     136,   137,   153,   154,   164,   173,   259,   260,   262,   263,
     264,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   163,   372,   376,   163,   459,   463,
     274,   274,     1,    28,    98,   505,   506,   507,   508,   274,
       1,     8,     9,    10,    13,    20,    29,    30,    31,    33,
      38,    39,    45,    49,    51,    52,    54,    60,    79,    80,
      84,    91,    95,    96,    97,   100,   103,   104,   114,   120,
     121,   123,   124,   125,   126,   138,   147,   149,   150,   152,
     155,   156,   159,   170,   190,   191,   193,   197,   201,   202,
     203,   204,   205,   209,   210,   218,   250,   252,   258,   261,
     266,   271,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   571,   572,   573,   574,   575,   576,   580,
     584,   585,   586,   587,   588,   274,   274,   274,   274,     1,
      64,    65,    66,    67,    68,    69,    70,    71,   113,   148,
     229,   265,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,     1,   127,   158,   285,
     286,   287,   288,   163,   333,   337,   274,     1,    47,    63,
      85,    87,    89,    90,   109,   630,   631,   632,   633,   634,
     635,   636,   637,   638,     1,    43,    93,   129,   132,   133,
     175,   177,   192,   237,   267,   268,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   274,
     274,   272,   275,   275,   275,   273,   312,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   273,   607,
     274,   274,     1,    98,   165,   500,   501,   502,   503,     1,
      53,   129,   165,   291,   292,   293,   294,   295,   275,   275,
     273,   506,     1,   129,   165,   196,   511,   515,   516,   517,
     518,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   581,   275,   577,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   273,   521,     1,     4,    53,    56,   112,   129,
     257,   591,   592,   593,   594,   595,   599,   600,   601,     1,
      21,    27,    28,    57,    58,    62,    76,    83,   102,   130,
     131,   139,   157,   166,   167,   199,   200,   257,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,     1,   165,
     196,   257,   490,   494,   495,   496,   497,     1,    62,    92,
      98,   162,   391,   395,   396,   397,   401,   402,   272,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   273,   318,   272,   275,   275,   273,   286,   274,     1,
      23,   134,   165,   433,   434,   435,   436,   437,   275,   275,
     275,   275,   275,   275,   275,   273,   631,   272,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   273,
     298,     1,   129,   196,   257,   440,   441,   442,   443,   444,
       1,   129,   196,   450,   451,   452,   453,   163,   163,   163,
     272,   206,   206,   141,   141,   206,   206,   141,   281,   281,
     141,   141,   206,   206,   141,   281,   206,   206,   206,   206,
     206,   206,   206,   272,     1,    24,    25,    35,   117,   118,
     119,   122,   129,   143,   144,   160,   161,   185,   373,   374,
     375,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,     1,     3,     6,    11,    26,    27,    32,
      36,    57,    61,    62,    92,    94,   108,   129,   162,   176,
     186,   251,   267,   460,   461,   462,   464,   465,   466,   467,
     468,   469,   470,   471,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   275,   275,   273,   501,   272,   275,
     275,   275,   273,   292,   163,   163,   272,   275,   275,   512,
     273,   516,   206,   281,   206,   206,   281,   163,   163,   163,
     141,   163,   141,   206,   206,   206,   141,   163,   206,   141,
     141,   141,   206,   281,   206,   206,   141,   163,   206,   141,
     141,   281,   141,   163,   141,   141,   206,   206,   275,   206,
     275,   281,   281,   206,   281,   163,   163,   206,   206,   206,
     206,   207,   206,   207,   206,   206,   281,   281,   141,   283,
     281,   206,   206,   206,   206,   206,   272,   602,   275,   275,
     596,   275,   275,   273,   592,   272,   275,   275,   275,   275,
     275,   414,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   273,   406,   275,   491,   275,   273,
     495,   272,   392,   275,   275,   275,   273,   396,   163,   163,
     163,   163,   163,   163,   163,   163,   230,   231,   232,   233,
     234,   235,   236,   163,   163,   206,   272,   163,   163,   272,
       1,     5,    27,    28,    44,    57,    62,    74,    81,    86,
      88,   101,   129,   135,   151,   157,   169,   171,   172,   176,
     239,   245,   256,   257,   269,   334,   335,   336,   338,   339,
     340,   341,   342,   343,   344,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   272,   275,   275,   275,   273,   434,   206,   206,   206,
     163,   206,   206,   281,   272,   163,   206,   163,   163,   163,
     163,   163,   163,   141,   163,   163,   272,   272,   275,   445,
     275,   273,   441,   272,   275,   454,   273,   451,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   180,   181,   182,
     183,   184,   280,   281,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   273,   374,   272,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   472,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   273,   461,   163,   163,   272,
     281,   163,   163,   272,   272,   272,   163,   163,   275,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   213,   214,   215,   216,
     217,   219,   220,   222,   223,   224,   225,   228,   238,   239,
     240,   241,   242,   243,   246,   249,   582,   583,   272,   213,
     214,   215,   216,   217,   219,   220,   222,   223,   224,   225,
     228,   238,   239,   240,   241,   242,   243,   246,   249,   578,
     579,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,    15,    16,
      17,   282,   283,   272,   272,   272,   272,   272,   272,   272,
     275,   281,   206,   275,   163,   163,   272,   206,   163,   163,
     206,   206,   275,   206,   206,   206,   206,   206,   206,   163,
     141,   163,   163,   206,   163,   272,   163,   275,   163,   272,
     275,   163,   163,   141,   399,   400,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   275,   275,
     275,   275,   275,   364,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   345,   275,
     275,   275,   273,   335,   163,   163,   163,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   163,   275,   163,   272,
     163,   275,   272,   280,   280,   280,   280,   280,   141,   141,
     281,   141,   141,   141,   141,   163,   141,   141,   281,   281,
     283,   272,   163,   226,   227,   206,   163,   163,   206,   206,
     206,   163,   275,   163,   163,   163,   163,   141,   163,   163,
     206,   163,   272,   272,   272,   272,   272,   272,   272,   272,
     168,   513,   514,   272,   276,   272,   276,   282,   282,   282,
      12,   208,   603,   604,   272,   272,    12,   208,   597,   598,
     272,   272,   272,   272,   272,   272,   272,   140,   415,   416,
     418,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   168,   492,   493,   272,    85,   244,
     393,   394,   272,   272,   211,   276,   398,   206,   163,   163,
     206,   206,   275,   206,   206,   206,   206,   206,   163,   206,
     206,   163,   206,   206,   206,   163,   206,   275,   206,   163,
     206,   272,   272,   272,   272,   272,   101,   169,   178,   189,
     212,   228,   247,   248,   253,   254,   255,   256,   269,   446,
     447,   272,   272,   101,   178,   212,   228,   247,   248,   253,
     254,   255,   256,   269,   455,   456,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   140,
     473,   474,   476,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   276,   583,   579,   272,   276,   272,   276,
     417,   272,   276,    21,    22,    58,    76,    83,   102,   130,
     131,   139,   179,   200,   419,   272,   276,   272,   276,   141,
     400,   272,   272,   272,   272,   272,   272,   140,   365,   366,
     368,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   213,   214,   215,   216,   217,
     219,   220,   222,   223,   224,   225,   228,   238,   239,   240,
     241,   242,   243,   246,   249,   346,   347,   272,   272,   272,
     272,   276,   272,   276,   475,   272,   276,    11,    13,    32,
      36,   107,   251,   477,   514,   604,   598,   419,   416,   493,
     394,   367,   272,   276,     5,    44,    57,    74,    81,    86,
      88,   101,   135,   151,   169,   171,   172,   239,   256,   269,
     369,   272,   276,   447,   456,   477,   474,   369,   366,   347
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
#line 440 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 442 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number);
		}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 446 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);
		}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 450 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 454 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 458 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 462 "ircd_parser.y"
    {
			(yyval.number) = (yyvsp[(1) - (3)].number) * 60 * 60 * 24 * 7 + (yyvsp[(3) - (3)].number);
		}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 467 "ircd_parser.y"
    { (yyval.number) = 0; }
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 468 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (2)].number) + (yyvsp[(2) - (2)].number); }
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 469 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); }
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 470 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 + (yyvsp[(3) - (3)].number); }
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 471 "ircd_parser.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * 1024 * 1024 + (yyvsp[(3) - (3)].number); }
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 485 "ircd_parser.y"
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
#line 502 "ircd_parser.y"
    {
#ifndef STATIC_MODULES
  if (ypass == 2)
    mod_add_path(yylval.string);
#endif
}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 514 "ircd_parser.y"
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
#line 526 "ircd_parser.y"
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
#line 539 "ircd_parser.y"
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
#line 548 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_dconf->duration = (yyvsp[(3) - (4)].number);
}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 554 "ircd_parser.y"
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
#line 579 "ircd_parser.y"
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
#line 613 "ircd_parser.y"
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
#line 673 "ircd_parser.y"
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
#line 687 "ircd_parser.y"
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
#line 702 "ircd_parser.y"
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
#line 711 "ircd_parser.y"
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
#line 725 "ircd_parser.y"
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
#line 734 "ircd_parser.y"
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
#line 762 "ircd_parser.y"
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
#line 792 "ircd_parser.y"
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
#line 815 "ircd_parser.y"
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
#line 871 "ircd_parser.y"
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
#line 880 "ircd_parser.y"
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
#line 889 "ircd_parser.y"
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
#line 916 "ircd_parser.y"
    {
                        }
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 920 "ircd_parser.y"
    {
                        }
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 924 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.userlog, yylval.string,
            sizeof(ConfigLoggingEntry.userlog));
}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 931 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.failed_operlog, yylval.string,
            sizeof(ConfigLoggingEntry.failed_operlog));
}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 938 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operlog, yylval.string,
            sizeof(ConfigLoggingEntry.operlog));
}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 945 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.operspylog, yylval.string,
            sizeof(ConfigLoggingEntry.operspylog));
}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 952 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.glinelog, yylval.string,
            sizeof(ConfigLoggingEntry.glinelog));
}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 959 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.klinelog, yylval.string,
            sizeof(ConfigLoggingEntry.klinelog));
}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 966 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.ioerrlog, yylval.string,
            sizeof(ConfigLoggingEntry.ioerrlog));
}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 973 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(ConfigLoggingEntry.killlog, yylval.string,
            sizeof(ConfigLoggingEntry.killlog));
}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 980 "ircd_parser.y"
    { 
  if (ypass == 2)
    set_log_level(L_CRIT);
}
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 984 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_ERROR);
}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 988 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_WARN);
}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 992 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_NOTICE);
}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 996 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_TRACE);
}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 1000 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_INFO);
}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 1004 "ircd_parser.y"
    {
  if (ypass == 2)
    set_log_level(L_DEBUG);
}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 1010 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigLoggingEntry.use_logging = yylval.number;
}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 1019 "ircd_parser.y"
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
#line 1032 "ircd_parser.y"
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
#line 1132 "ircd_parser.y"
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
#line 1144 "ircd_parser.y"
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
#line 1156 "ircd_parser.y"
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
#line 1190 "ircd_parser.y"
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
#line 1211 "ircd_parser.y"
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
#line 1223 "ircd_parser.y"
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
#line 1234 "ircd_parser.y"
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
#line 1276 "ircd_parser.y"
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
#line 1285 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes = 0;
}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 1292 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_BOTS;
}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 1296 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CCONN;
}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 1300 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_NOCTCP;
}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 1304 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_DEAF;
}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 1308 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_DEBUG;
}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 1312 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_FULL;
}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 1316 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SKILL;
}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 1320 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_NCHANGE;
}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 1324 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_REJ;
}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 1328 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_UNAUTH;
}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 1332 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SPY;
}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 1336 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_EXTERNAL;
}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 1340 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_OPERWALL;
}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 1344 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SERVNOTICE;
}
    break;

  case 187:

/* Line 1464 of yacc.c  */
#line 1348 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_INVISIBLE;
}
    break;

  case 188:

/* Line 1464 of yacc.c  */
#line 1352 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_WALLOP;
}
    break;

  case 189:

/* Line 1464 of yacc.c  */
#line 1356 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_SOFTCALLERID;
}
    break;

  case 190:

/* Line 1464 of yacc.c  */
#line 1360 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_CALLERID;
}
    break;

  case 191:

/* Line 1464 of yacc.c  */
#line 1364 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->modes |= UMODE_LOCOPS;
}
    break;

  case 192:

/* Line 1464 of yacc.c  */
#line 1368 "ircd_parser.y"
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
#line 1385 "ircd_parser.y"
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
#line 1396 "ircd_parser.y"
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
#line 1407 "ircd_parser.y"
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
#line 1418 "ircd_parser.y"
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
#line 1429 "ircd_parser.y"
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
#line 1440 "ircd_parser.y"
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
#line 1451 "ircd_parser.y"
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
#line 1462 "ircd_parser.y"
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
#line 1473 "ircd_parser.y"
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
#line 1484 "ircd_parser.y"
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
#line 1495 "ircd_parser.y"
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
#line 1506 "ircd_parser.y"
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
#line 1517 "ircd_parser.y"
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
#line 1528 "ircd_parser.y"
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
#line 1539 "ircd_parser.y"
    {
}
    break;

  case 212:

/* Line 1464 of yacc.c  */
#line 1543 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 214:

/* Line 1464 of yacc.c  */
#line 1544 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 216:

/* Line 1464 of yacc.c  */
#line 1547 "ircd_parser.y"
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
#line 1554 "ircd_parser.y"
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
#line 1561 "ircd_parser.y"
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
#line 1568 "ircd_parser.y"
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
#line 1575 "ircd_parser.y"
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
#line 1582 "ircd_parser.y"
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
#line 1589 "ircd_parser.y"
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
#line 1596 "ircd_parser.y"
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
#line 1603 "ircd_parser.y"
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
#line 1610 "ircd_parser.y"
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
#line 1617 "ircd_parser.y"
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
#line 1624 "ircd_parser.y"
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
#line 1631 "ircd_parser.y"
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
#line 1638 "ircd_parser.y"
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
#line 1645 "ircd_parser.y"
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
#line 1652 "ircd_parser.y"
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
#line 1665 "ircd_parser.y"
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
#line 1672 "ircd_parser.y"
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
#line 1731 "ircd_parser.y"
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
#line 1740 "ircd_parser.y"
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
#line 1749 "ircd_parser.y"
    {
  if (ypass == 1)
    PingFreq(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 255:

/* Line 1464 of yacc.c  */
#line 1755 "ircd_parser.y"
    {
  if (ypass == 1)
    PingWarning(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 256:

/* Line 1464 of yacc.c  */
#line 1761 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxPerIp(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 257:

/* Line 1464 of yacc.c  */
#line 1767 "ircd_parser.y"
    {
  if (ypass == 1)
    ConFreq(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 258:

/* Line 1464 of yacc.c  */
#line 1773 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxTotal(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 259:

/* Line 1464 of yacc.c  */
#line 1779 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxGlobal(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 260:

/* Line 1464 of yacc.c  */
#line 1785 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxLocal(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 261:

/* Line 1464 of yacc.c  */
#line 1791 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxIdent(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 262:

/* Line 1464 of yacc.c  */
#line 1797 "ircd_parser.y"
    {
  if (ypass == 1)
    MaxSendq(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 263:

/* Line 1464 of yacc.c  */
#line 1803 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV4(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 264:

/* Line 1464 of yacc.c  */
#line 1809 "ircd_parser.y"
    {
  if (ypass == 1)
    CidrBitlenIPV6(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 265:

/* Line 1464 of yacc.c  */
#line 1815 "ircd_parser.y"
    {
  if (ypass == 1)
    NumberPerCidr(yy_class) = (yyvsp[(3) - (4)].number);
}
    break;

  case 266:

/* Line 1464 of yacc.c  */
#line 1824 "ircd_parser.y"
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
#line 1831 "ircd_parser.y"
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
#line 1840 "ircd_parser.y"
    {
  listener_flags = 0;
}
    break;

  case 272:

/* Line 1464 of yacc.c  */
#line 1846 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_SSL;
}
    break;

  case 273:

/* Line 1464 of yacc.c  */
#line 1850 "ircd_parser.y"
    {
  if (ypass == 2)
    listener_flags |= LISTENER_HIDDEN;
}
    break;

  case 281:

/* Line 1464 of yacc.c  */
#line 1858 "ircd_parser.y"
    { listener_flags = 0; }
    break;

  case 285:

/* Line 1464 of yacc.c  */
#line 1863 "ircd_parser.y"
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
#line 1877 "ircd_parser.y"
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
#line 1897 "ircd_parser.y"
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
#line 1906 "ircd_parser.y"
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
#line 1918 "ircd_parser.y"
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
#line 1930 "ircd_parser.y"
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
#line 2003 "ircd_parser.y"
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
#line 2040 "ircd_parser.y"
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
#line 2053 "ircd_parser.y"
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
#line 2074 "ircd_parser.y"
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
#line 2085 "ircd_parser.y"
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
#line 2094 "ircd_parser.y"
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
#line 2105 "ircd_parser.y"
    {
}
    break;

  case 322:

/* Line 1464 of yacc.c  */
#line 2109 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 324:

/* Line 1464 of yacc.c  */
#line 2110 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 326:

/* Line 1464 of yacc.c  */
#line 2113 "ircd_parser.y"
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
#line 2121 "ircd_parser.y"
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
#line 2128 "ircd_parser.y"
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
#line 2135 "ircd_parser.y"
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
#line 2142 "ircd_parser.y"
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
#line 2149 "ircd_parser.y"
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
#line 2156 "ircd_parser.y"
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
#line 2163 "ircd_parser.y"
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
#line 2170 "ircd_parser.y"
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
#line 2177 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_WEBIRC;
    else yy_aconf->flags |= CONF_FLAGS_WEBIRC;
  }
}
    break;

  case 336:

/* Line 1464 of yacc.c  */
#line 2184 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom) yy_aconf->flags &= ~CONF_FLAGS_NEED_PASSWORD;
    else yy_aconf->flags |= CONF_FLAGS_NEED_PASSWORD;
  }
}
    break;

  case 337:

/* Line 1464 of yacc.c  */
#line 2193 "ircd_parser.y"
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

  case 338:

/* Line 1464 of yacc.c  */
#line 2204 "ircd_parser.y"
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

  case 339:

/* Line 1464 of yacc.c  */
#line 2215 "ircd_parser.y"
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

  case 340:

/* Line 1464 of yacc.c  */
#line 2226 "ircd_parser.y"
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

  case 341:

/* Line 1464 of yacc.c  */
#line 2237 "ircd_parser.y"
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

  case 342:

/* Line 1464 of yacc.c  */
#line 2248 "ircd_parser.y"
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

  case 343:

/* Line 1464 of yacc.c  */
#line 2260 "ircd_parser.y"
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

  case 344:

/* Line 1464 of yacc.c  */
#line 2279 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 345:

/* Line 1464 of yacc.c  */
#line 2289 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_aconf->flags |= CONF_FLAGS_REDIR;
    yy_aconf->port = (yyvsp[(3) - (4)].number);
  }
}
    break;

  case 346:

/* Line 1464 of yacc.c  */
#line 2298 "ircd_parser.y"
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

  case 347:

/* Line 1464 of yacc.c  */
#line 2309 "ircd_parser.y"
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

  case 348:

/* Line 1464 of yacc.c  */
#line 2324 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 349:

/* Line 1464 of yacc.c  */
#line 2331 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    resv_reason = NULL;
  }
}
    break;

  case 356:

/* Line 1464 of yacc.c  */
#line 2343 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(resv_reason);
    DupString(resv_reason, yylval.string);
  }
}
    break;

  case 357:

/* Line 1464 of yacc.c  */
#line 2352 "ircd_parser.y"
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

  case 358:

/* Line 1464 of yacc.c  */
#line 2367 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    char def_reason[] = "No reason";

    create_nick_resv(yylval.string, resv_reason != NULL ? resv_reason : def_reason, 1);
  }
}
    break;

  case 359:

/* Line 1464 of yacc.c  */
#line 2380 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(ULINE_TYPE);
    yy_match_item = map_to_conf(yy_conf);
    yy_match_item->action = SHARED_ALL;
  }
}
    break;

  case 360:

/* Line 1464 of yacc.c  */
#line 2388 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = NULL;
  }
}
    break;

  case 367:

/* Line 1464 of yacc.c  */
#line 2399 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 368:

/* Line 1464 of yacc.c  */
#line 2408 "ircd_parser.y"
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

  case 369:

/* Line 1464 of yacc.c  */
#line 2430 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = 0;
}
    break;

  case 373:

/* Line 1464 of yacc.c  */
#line 2437 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_KLINE;
}
    break;

  case 374:

/* Line 1464 of yacc.c  */
#line 2441 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TKLINE;
}
    break;

  case 375:

/* Line 1464 of yacc.c  */
#line 2445 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNKLINE;
}
    break;

  case 376:

/* Line 1464 of yacc.c  */
#line 2449 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_XLINE;
}
    break;

  case 377:

/* Line 1464 of yacc.c  */
#line 2453 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TXLINE;
}
    break;

  case 378:

/* Line 1464 of yacc.c  */
#line 2457 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNXLINE;
}
    break;

  case 379:

/* Line 1464 of yacc.c  */
#line 2461 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_RESV;
}
    break;

  case 380:

/* Line 1464 of yacc.c  */
#line 2465 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_TRESV;
}
    break;

  case 381:

/* Line 1464 of yacc.c  */
#line 2469 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_UNRESV;
}
    break;

  case 382:

/* Line 1464 of yacc.c  */
#line 2473 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_LOCOPS;
}
    break;

  case 383:

/* Line 1464 of yacc.c  */
#line 2477 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_SERVICES;
}
    break;

  case 384:

/* Line 1464 of yacc.c  */
#line 2481 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action |= SHARED_REHASH;
}
    break;

  case 385:

/* Line 1464 of yacc.c  */
#line 2485 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_match_item->action = SHARED_ALL;
}
    break;

  case 386:

/* Line 1464 of yacc.c  */
#line 2494 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(CLUSTER_TYPE);
    yy_conf->flags = SHARED_ALL;
  }
}
    break;

  case 387:

/* Line 1464 of yacc.c  */
#line 2501 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (yy_conf->name == NULL)
      DupString(yy_conf->name, "*");
    yy_conf = NULL;
  }
}
    break;

  case 393:

/* Line 1464 of yacc.c  */
#line 2514 "ircd_parser.y"
    {
  if (ypass == 2)
    DupString(yy_conf->name, yylval.string);
}
    break;

  case 394:

/* Line 1464 of yacc.c  */
#line 2520 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = 0;
}
    break;

  case 398:

/* Line 1464 of yacc.c  */
#line 2527 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_KLINE;
}
    break;

  case 399:

/* Line 1464 of yacc.c  */
#line 2531 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TKLINE;
}
    break;

  case 400:

/* Line 1464 of yacc.c  */
#line 2535 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNKLINE;
}
    break;

  case 401:

/* Line 1464 of yacc.c  */
#line 2539 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_XLINE;
}
    break;

  case 402:

/* Line 1464 of yacc.c  */
#line 2543 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TXLINE;
}
    break;

  case 403:

/* Line 1464 of yacc.c  */
#line 2547 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNXLINE;
}
    break;

  case 404:

/* Line 1464 of yacc.c  */
#line 2551 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_RESV;
}
    break;

  case 405:

/* Line 1464 of yacc.c  */
#line 2555 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_TRESV;
}
    break;

  case 406:

/* Line 1464 of yacc.c  */
#line 2559 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_UNRESV;
}
    break;

  case 407:

/* Line 1464 of yacc.c  */
#line 2563 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags |= SHARED_LOCOPS;
}
    break;

  case 408:

/* Line 1464 of yacc.c  */
#line 2567 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_conf->flags = SHARED_ALL;
}
    break;

  case 409:

/* Line 1464 of yacc.c  */
#line 2576 "ircd_parser.y"
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

  case 410:

/* Line 1464 of yacc.c  */
#line 2594 "ircd_parser.y"
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

  case 435:

/* Line 1464 of yacc.c  */
#line 2733 "ircd_parser.y"
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

  case 436:

/* Line 1464 of yacc.c  */
#line 2745 "ircd_parser.y"
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
#line 2757 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 438:

/* Line 1464 of yacc.c  */
#line 2766 "ircd_parser.y"
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

  case 439:

/* Line 1464 of yacc.c  */
#line 2792 "ircd_parser.y"
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

  case 440:

/* Line 1464 of yacc.c  */
#line 2810 "ircd_parser.y"
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

  case 441:

/* Line 1464 of yacc.c  */
#line 2828 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->port = (yyvsp[(3) - (4)].number);
}
    break;

  case 442:

/* Line 1464 of yacc.c  */
#line 2834 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->aftype = AF_INET;
}
    break;

  case 443:

/* Line 1464 of yacc.c  */
#line 2838 "ircd_parser.y"
    {
#ifdef IPV6
  if (ypass == 2)
    yy_aconf->aftype = AF_INET6;
#endif
}
    break;

  case 444:

/* Line 1464 of yacc.c  */
#line 2846 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->fakename);
    DupString(yy_aconf->fakename, yylval.string);
  }
}
    break;

  case 445:

/* Line 1464 of yacc.c  */
#line 2855 "ircd_parser.y"
    {
}
    break;

  case 449:

/* Line 1464 of yacc.c  */
#line 2859 "ircd_parser.y"
    { not_atom = 1; }
    break;

  case 451:

/* Line 1464 of yacc.c  */
#line 2860 "ircd_parser.y"
    { not_atom = 0; }
    break;

  case 453:

/* Line 1464 of yacc.c  */
#line 2863 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfLazyLink(yy_aconf);
    else SetConfLazyLink(yy_aconf);
  }
}
    break;

  case 454:

/* Line 1464 of yacc.c  */
#line 2870 "ircd_parser.y"
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

  case 455:

/* Line 1464 of yacc.c  */
#line 2881 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfCryptLink(yy_aconf);
    else SetConfCryptLink(yy_aconf);
  }
}
    break;

  case 456:

/* Line 1464 of yacc.c  */
#line 2888 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAllowAutoConn(yy_aconf);
    else SetConfAllowAutoConn(yy_aconf);
  }
}
    break;

  case 457:

/* Line 1464 of yacc.c  */
#line 2895 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfAwayBurst(yy_aconf);
    else SetConfAwayBurst(yy_aconf);
  }
}
    break;

  case 458:

/* Line 1464 of yacc.c  */
#line 2902 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (not_atom)ClearConfTopicBurst(yy_aconf);
    else SetConfTopicBurst(yy_aconf);
  }
}
    break;

  case 459:

/* Line 1464 of yacc.c  */
#line 2912 "ircd_parser.y"
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

  case 460:

/* Line 1464 of yacc.c  */
#line 2953 "ircd_parser.y"
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

  case 461:

/* Line 1464 of yacc.c  */
#line 2964 "ircd_parser.y"
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

  case 462:

/* Line 1464 of yacc.c  */
#line 2975 "ircd_parser.y"
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

  case 463:

/* Line 1464 of yacc.c  */
#line 2990 "ircd_parser.y"
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

  case 464:

/* Line 1464 of yacc.c  */
#line 3001 "ircd_parser.y"
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

  case 465:

/* Line 1464 of yacc.c  */
#line 3012 "ircd_parser.y"
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

  case 466:

/* Line 1464 of yacc.c  */
#line 3025 "ircd_parser.y"
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

  case 467:

/* Line 1464 of yacc.c  */
#line 3038 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(class_name);
    DupString(class_name, yylval.string);
  }
}
    break;

  case 468:

/* Line 1464 of yacc.c  */
#line 3047 "ircd_parser.y"
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

  case 469:

/* Line 1464 of yacc.c  */
#line 3082 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    userbuf[0] = hostbuf[0] = reasonbuf[0] = '\0';
    regex_ban = 0;
  }
}
    break;

  case 470:

/* Line 1464 of yacc.c  */
#line 3089 "ircd_parser.y"
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

  case 471:

/* Line 1464 of yacc.c  */
#line 3145 "ircd_parser.y"
    {
}
    break;

  case 475:

/* Line 1464 of yacc.c  */
#line 3150 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 482:

/* Line 1464 of yacc.c  */
#line 3159 "ircd_parser.y"
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

  case 483:

/* Line 1464 of yacc.c  */
#line 3178 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 484:

/* Line 1464 of yacc.c  */
#line 3187 "ircd_parser.y"
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

  case 485:

/* Line 1464 of yacc.c  */
#line 3196 "ircd_parser.y"
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

  case 491:

/* Line 1464 of yacc.c  */
#line 3212 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->host);
    DupString(yy_aconf->host, yylval.string);
  }
}
    break;

  case 492:

/* Line 1464 of yacc.c  */
#line 3221 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(yy_aconf->reason);
    DupString(yy_aconf->reason, yylval.string);
  }
}
    break;

  case 499:

/* Line 1464 of yacc.c  */
#line 3238 "ircd_parser.y"
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

  case 500:

/* Line 1464 of yacc.c  */
#line 3256 "ircd_parser.y"
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

  case 501:

/* Line 1464 of yacc.c  */
#line 3289 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    regex_ban = 0;
    reasonbuf[0] = gecos_name[0] = '\0';
  }
}
    break;

  case 502:

/* Line 1464 of yacc.c  */
#line 3296 "ircd_parser.y"
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

  case 503:

/* Line 1464 of yacc.c  */
#line 3330 "ircd_parser.y"
    {
}
    break;

  case 507:

/* Line 1464 of yacc.c  */
#line 3335 "ircd_parser.y"
    {
  if (ypass == 2)
    regex_ban = 1;
}
    break;

  case 514:

/* Line 1464 of yacc.c  */
#line 3344 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(gecos_name, yylval.string, sizeof(gecos_name));
}
    break;

  case 515:

/* Line 1464 of yacc.c  */
#line 3350 "ircd_parser.y"
    {
  if (ypass == 2)
    strlcpy(reasonbuf, yylval.string, sizeof(reasonbuf));
}
    break;

  case 581:

/* Line 1464 of yacc.c  */
#line 3398 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr = (yyvsp[(3) - (4)].number);
}
    break;

  case 582:

/* Line 1464 of yacc.c  */
#line 3403 "ircd_parser.y"
    {
  ConfigFileEntry.gline_min_cidr6 = (yyvsp[(3) - (4)].number);
}
    break;

  case 583:

/* Line 1464 of yacc.c  */
#line 3408 "ircd_parser.y"
    {
  ConfigFileEntry.burst_away = yylval.number;
}
    break;

  case 584:

/* Line 1464 of yacc.c  */
#line 3413 "ircd_parser.y"
    {
  ConfigFileEntry.use_whois_actually = yylval.number;
}
    break;

  case 585:

/* Line 1464 of yacc.c  */
#line 3418 "ircd_parser.y"
    {
  GlobalSetOptions.rejecttime = yylval.number;
}
    break;

  case 586:

/* Line 1464 of yacc.c  */
#line 3423 "ircd_parser.y"
    {
  ConfigFileEntry.tkline_expire_notices = yylval.number;
}
    break;

  case 587:

/* Line 1464 of yacc.c  */
#line 3428 "ircd_parser.y"
    {
  ConfigFileEntry.kill_chase_time_limit = (yyvsp[(3) - (4)].number);
}
    break;

  case 588:

/* Line 1464 of yacc.c  */
#line 3433 "ircd_parser.y"
    {
  ConfigFileEntry.hide_spoof_ips = yylval.number;
}
    break;

  case 589:

/* Line 1464 of yacc.c  */
#line 3438 "ircd_parser.y"
    {
  ConfigFileEntry.ignore_bogus_ts = yylval.number;
}
    break;

  case 590:

/* Line 1464 of yacc.c  */
#line 3443 "ircd_parser.y"
    {
  ConfigFileEntry.disable_remote = yylval.number;
}
    break;

  case 591:

/* Line 1464 of yacc.c  */
#line 3448 "ircd_parser.y"
    {
  ConfigFileEntry.failed_oper_notice = yylval.number;
}
    break;

  case 592:

/* Line 1464 of yacc.c  */
#line 3453 "ircd_parser.y"
    {
  ConfigFileEntry.anti_nick_flood = yylval.number;
}
    break;

  case 593:

/* Line 1464 of yacc.c  */
#line 3458 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_time = (yyvsp[(3) - (4)].number); 
}
    break;

  case 594:

/* Line 1464 of yacc.c  */
#line 3463 "ircd_parser.y"
    {
  ConfigFileEntry.max_nick_changes = (yyvsp[(3) - (4)].number);
}
    break;

  case 595:

/* Line 1464 of yacc.c  */
#line 3468 "ircd_parser.y"
    {
  ConfigFileEntry.max_accept = (yyvsp[(3) - (4)].number);
}
    break;

  case 596:

/* Line 1464 of yacc.c  */
#line 3473 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_exit_message_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 597:

/* Line 1464 of yacc.c  */
#line 3478 "ircd_parser.y"
    {
  ConfigFileEntry.anti_spam_connect_numeric = yylval.number;
}
    break;

  case 598:

/* Line 1464 of yacc.c  */
#line 3483 "ircd_parser.y"
    {
  ConfigFileEntry.ts_warn_delta = (yyvsp[(3) - (4)].number);
}
    break;

  case 599:

/* Line 1464 of yacc.c  */
#line 3488 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.ts_max_delta = (yyvsp[(3) - (4)].number);
}
    break;

  case 600:

/* Line 1464 of yacc.c  */
#line 3494 "ircd_parser.y"
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

  case 601:

/* Line 1464 of yacc.c  */
#line 3505 "ircd_parser.y"
    {
  ConfigFileEntry.kline_with_reason = yylval.number;
}
    break;

  case 602:

/* Line 1464 of yacc.c  */
#line 3510 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.kline_reason);
    DupString(ConfigFileEntry.kline_reason, yylval.string);
  }
}
    break;

  case 603:

/* Line 1464 of yacc.c  */
#line 3519 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key1);
    DupString(ConfigFileEntry.cloak_key1, yylval.string);
  }
}
    break;

  case 604:

/* Line 1464 of yacc.c  */
#line 3528 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key2);
    DupString(ConfigFileEntry.cloak_key2, yylval.string);
  }
}
    break;

  case 605:

/* Line 1464 of yacc.c  */
#line 3537 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.cloak_key3);
    DupString(ConfigFileEntry.cloak_key3, yylval.string);
  }
}
    break;

  case 606:

/* Line 1464 of yacc.c  */
#line 3546 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.services_name);
    DupString(ConfigFileEntry.services_name, yylval.string);
  }
}
    break;

  case 607:

/* Line 1464 of yacc.c  */
#line 3555 "ircd_parser.y"
    {
  ConfigFileEntry.invisible_on_connect = yylval.number;
}
    break;

  case 608:

/* Line 1464 of yacc.c  */
#line 3560 "ircd_parser.y"
    {
  ConfigFileEntry.warn_no_nline = yylval.number;
}
    break;

  case 609:

/* Line 1464 of yacc.c  */
#line 3565 "ircd_parser.y"
    {
  ConfigFileEntry.stats_e_disabled = yylval.number;
}
    break;

  case 610:

/* Line 1464 of yacc.c  */
#line 3570 "ircd_parser.y"
    {
  ConfigFileEntry.stats_o_oper_only = yylval.number;
}
    break;

  case 611:

/* Line 1464 of yacc.c  */
#line 3575 "ircd_parser.y"
    {
  ConfigFileEntry.stats_P_oper_only = yylval.number;
}
    break;

  case 612:

/* Line 1464 of yacc.c  */
#line 3580 "ircd_parser.y"
    {
  ConfigFileEntry.hide_killer = yylval.number;
}
    break;

  case 613:

/* Line 1464 of yacc.c  */
#line 3585 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 2 * yylval.number;
}
    break;

  case 614:

/* Line 1464 of yacc.c  */
#line 3588 "ircd_parser.y"
    {
  ConfigFileEntry.stats_k_oper_only = 1;
}
    break;

  case 615:

/* Line 1464 of yacc.c  */
#line 3593 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 2 * yylval.number;
}
    break;

  case 616:

/* Line 1464 of yacc.c  */
#line 3596 "ircd_parser.y"
    {
  ConfigFileEntry.stats_i_oper_only = 1;
}
    break;

  case 617:

/* Line 1464 of yacc.c  */
#line 3601 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait = (yyvsp[(3) - (4)].number);
}
    break;

  case 618:

/* Line 1464 of yacc.c  */
#line 3606 "ircd_parser.y"
    {
  ConfigFileEntry.caller_id_wait = (yyvsp[(3) - (4)].number);
}
    break;

  case 619:

/* Line 1464 of yacc.c  */
#line 3611 "ircd_parser.y"
    {
  ConfigFileEntry.opers_bypass_callerid = yylval.number;
}
    break;

  case 620:

/* Line 1464 of yacc.c  */
#line 3616 "ircd_parser.y"
    {
  ConfigFileEntry.pace_wait_simple = (yyvsp[(3) - (4)].number);
}
    break;

  case 621:

/* Line 1464 of yacc.c  */
#line 3621 "ircd_parser.y"
    {
  ConfigFileEntry.short_motd = yylval.number;
}
    break;

  case 622:

/* Line 1464 of yacc.c  */
#line 3626 "ircd_parser.y"
    {
  ConfigFileEntry.no_oper_flood = yylval.number;
}
    break;

  case 623:

/* Line 1464 of yacc.c  */
#line 3631 "ircd_parser.y"
    {
  ConfigFileEntry.true_no_oper_flood = yylval.number;
}
    break;

  case 624:

/* Line 1464 of yacc.c  */
#line 3636 "ircd_parser.y"
    {
  ConfigFileEntry.oper_pass_resv = yylval.number;
}
    break;

  case 625:

/* Line 1464 of yacc.c  */
#line 3641 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    if (strlen(yylval.string) > LOCALE_LENGTH-2)
      yylval.string[LOCALE_LENGTH-1] = '\0';

    set_locale(yylval.string);
  }
}
    break;

  case 626:

/* Line 1464 of yacc.c  */
#line 3652 "ircd_parser.y"
    {
  ConfigFileEntry.idletime = (yyvsp[(3) - (4)].number);
}
    break;

  case 627:

/* Line 1464 of yacc.c  */
#line 3657 "ircd_parser.y"
    {
  ConfigFileEntry.dots_in_ident = (yyvsp[(3) - (4)].number);
}
    break;

  case 628:

/* Line 1464 of yacc.c  */
#line 3662 "ircd_parser.y"
    {
  ConfigFileEntry.max_targets = (yyvsp[(3) - (4)].number);
}
    break;

  case 629:

/* Line 1464 of yacc.c  */
#line 3667 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.servlink_path);
    DupString(ConfigFileEntry.servlink_path, yylval.string);
  }
}
    break;

  case 630:

/* Line 1464 of yacc.c  */
#line 3676 "ircd_parser.y"
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

  case 631:

/* Line 1464 of yacc.c  */
#line 3708 "ircd_parser.y"
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

  case 632:

/* Line 1464 of yacc.c  */
#line 3726 "ircd_parser.y"
    {
  ConfigFileEntry.use_egd = yylval.number;
}
    break;

  case 633:

/* Line 1464 of yacc.c  */
#line 3731 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigFileEntry.egdpool_path);
    DupString(ConfigFileEntry.egdpool_path, yylval.string);
  }
}
    break;

  case 634:

/* Line 1464 of yacc.c  */
#line 3740 "ircd_parser.y"
    {
  ConfigFileEntry.ping_cookie = yylval.number;
}
    break;

  case 635:

/* Line 1464 of yacc.c  */
#line 3745 "ircd_parser.y"
    {
  ConfigFileEntry.disable_auth = yylval.number;
}
    break;

  case 636:

/* Line 1464 of yacc.c  */
#line 3750 "ircd_parser.y"
    {
  ConfigFileEntry.throttle_time = yylval.number;
}
    break;

  case 637:

/* Line 1464 of yacc.c  */
#line 3755 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes = 0;
}
    break;

  case 641:

/* Line 1464 of yacc.c  */
#line 3761 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_BOTS;
}
    break;

  case 642:

/* Line 1464 of yacc.c  */
#line 3764 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CCONN;
}
    break;

  case 643:

/* Line 1464 of yacc.c  */
#line 3767 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NOCTCP;
}
    break;

  case 644:

/* Line 1464 of yacc.c  */
#line 3770 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEAF;
}
    break;

  case 645:

/* Line 1464 of yacc.c  */
#line 3773 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_DEBUG;
}
    break;

  case 646:

/* Line 1464 of yacc.c  */
#line 3776 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_FULL;
}
    break;

  case 647:

/* Line 1464 of yacc.c  */
#line 3779 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SKILL;
}
    break;

  case 648:

/* Line 1464 of yacc.c  */
#line 3782 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_NCHANGE;
}
    break;

  case 649:

/* Line 1464 of yacc.c  */
#line 3785 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_REJ;
}
    break;

  case 650:

/* Line 1464 of yacc.c  */
#line 3788 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_UNAUTH;
}
    break;

  case 651:

/* Line 1464 of yacc.c  */
#line 3791 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SPY;
}
    break;

  case 652:

/* Line 1464 of yacc.c  */
#line 3794 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_EXTERNAL;
}
    break;

  case 653:

/* Line 1464 of yacc.c  */
#line 3797 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_OPERWALL;
}
    break;

  case 654:

/* Line 1464 of yacc.c  */
#line 3800 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 655:

/* Line 1464 of yacc.c  */
#line 3803 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_INVISIBLE;
}
    break;

  case 656:

/* Line 1464 of yacc.c  */
#line 3806 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_WALLOP;
}
    break;

  case 657:

/* Line 1464 of yacc.c  */
#line 3809 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 658:

/* Line 1464 of yacc.c  */
#line 3812 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_CALLERID;
}
    break;

  case 659:

/* Line 1464 of yacc.c  */
#line 3815 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_LOCOPS;
}
    break;

  case 660:

/* Line 1464 of yacc.c  */
#line 3818 "ircd_parser.y"
    {
  ConfigFileEntry.oper_umodes |= UMODE_HIDECHANNELS;
}
    break;

  case 661:

/* Line 1464 of yacc.c  */
#line 3823 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes = 0;
}
    break;

  case 665:

/* Line 1464 of yacc.c  */
#line 3829 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_BOTS;
}
    break;

  case 666:

/* Line 1464 of yacc.c  */
#line 3832 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CCONN;
}
    break;

  case 667:

/* Line 1464 of yacc.c  */
#line 3835 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NOCTCP;
}
    break;

  case 668:

/* Line 1464 of yacc.c  */
#line 3838 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEAF;
}
    break;

  case 669:

/* Line 1464 of yacc.c  */
#line 3841 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_DEBUG;
}
    break;

  case 670:

/* Line 1464 of yacc.c  */
#line 3844 "ircd_parser.y"
    { 
  ConfigFileEntry.oper_only_umodes |= UMODE_FULL;
}
    break;

  case 671:

/* Line 1464 of yacc.c  */
#line 3847 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SKILL;
}
    break;

  case 672:

/* Line 1464 of yacc.c  */
#line 3850 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_NCHANGE;
}
    break;

  case 673:

/* Line 1464 of yacc.c  */
#line 3853 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_REJ;
}
    break;

  case 674:

/* Line 1464 of yacc.c  */
#line 3856 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_UNAUTH;
}
    break;

  case 675:

/* Line 1464 of yacc.c  */
#line 3859 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SPY;
}
    break;

  case 676:

/* Line 1464 of yacc.c  */
#line 3862 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_EXTERNAL;
}
    break;

  case 677:

/* Line 1464 of yacc.c  */
#line 3865 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_OPERWALL;
}
    break;

  case 678:

/* Line 1464 of yacc.c  */
#line 3868 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SERVNOTICE;
}
    break;

  case 679:

/* Line 1464 of yacc.c  */
#line 3871 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_INVISIBLE;
}
    break;

  case 680:

/* Line 1464 of yacc.c  */
#line 3874 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_WALLOP;
}
    break;

  case 681:

/* Line 1464 of yacc.c  */
#line 3877 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_SOFTCALLERID;
}
    break;

  case 682:

/* Line 1464 of yacc.c  */
#line 3880 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_CALLERID;
}
    break;

  case 683:

/* Line 1464 of yacc.c  */
#line 3883 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_LOCOPS;
}
    break;

  case 684:

/* Line 1464 of yacc.c  */
#line 3886 "ircd_parser.y"
    {
  ConfigFileEntry.oper_only_umodes |= UMODE_HIDECHANNELS;
}
    break;

  case 685:

/* Line 1464 of yacc.c  */
#line 3891 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard = (yyvsp[(3) - (4)].number);
}
    break;

  case 686:

/* Line 1464 of yacc.c  */
#line 3896 "ircd_parser.y"
    {
  ConfigFileEntry.min_nonwildcard_simple = (yyvsp[(3) - (4)].number);
}
    break;

  case 687:

/* Line 1464 of yacc.c  */
#line 3901 "ircd_parser.y"
    {
  ConfigFileEntry.default_floodcount = (yyvsp[(3) - (4)].number);
}
    break;

  case 688:

/* Line 1464 of yacc.c  */
#line 3906 "ircd_parser.y"
    {
  ConfigFileEntry.client_flood = (yyvsp[(3) - (4)].number);
}
    break;

  case 689:

/* Line 1464 of yacc.c  */
#line 3911 "ircd_parser.y"
    {
  ConfigFileEntry.dot_in_ip6_addr = yylval.number;
}
    break;

  case 690:

/* Line 1464 of yacc.c  */
#line 3919 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    yy_conf = make_conf_item(GDENY_TYPE);
    yy_aconf = map_to_conf(yy_conf);
  }
}
    break;

  case 691:

/* Line 1464 of yacc.c  */
#line 3926 "ircd_parser.y"
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

  case 701:

/* Line 1464 of yacc.c  */
#line 3952 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.glines = yylval.number;
}
    break;

  case 702:

/* Line 1464 of yacc.c  */
#line 3958 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_time = (yyvsp[(3) - (4)].number);
}
    break;

  case 703:

/* Line 1464 of yacc.c  */
#line 3964 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging = 0;
}
    break;

  case 707:

/* Line 1464 of yacc.c  */
#line 3970 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_REJECT;
}
    break;

  case 708:

/* Line 1464 of yacc.c  */
#line 3974 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigFileEntry.gline_logging |= GDENY_BLOCK;
}
    break;

  case 709:

/* Line 1464 of yacc.c  */
#line 3980 "ircd_parser.y"
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

  case 710:

/* Line 1464 of yacc.c  */
#line 4014 "ircd_parser.y"
    {
  if (ypass == 2)  
  {
    MyFree(yy_conf->name);
    DupString(yy_conf->name, yylval.string);
  }
}
    break;

  case 711:

/* Line 1464 of yacc.c  */
#line 4023 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags = 0;
}
    break;

  case 712:

/* Line 1464 of yacc.c  */
#line 4027 "ircd_parser.y"
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

  case 715:

/* Line 1464 of yacc.c  */
#line 4074 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_REJECT;
}
    break;

  case 716:

/* Line 1464 of yacc.c  */
#line 4078 "ircd_parser.y"
    {
  if (ypass == 2)
    yy_aconf->flags |= GDENY_BLOCK;
}
    break;

  case 742:

/* Line 1464 of yacc.c  */
#line 4103 "ircd_parser.y"
    {
  ConfigChannel.cycle_on_hostchange = yylval.number;
}
    break;

  case 743:

/* Line 1464 of yacc.c  */
#line 4108 "ircd_parser.y"
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
    break;

  case 744:

/* Line 1464 of yacc.c  */
#line 4113 "ircd_parser.y"
    {
  ConfigChannel.restrict_channels = yylval.number;
}
    break;

  case 745:

/* Line 1464 of yacc.c  */
#line 4118 "ircd_parser.y"
    {
  ConfigChannel.disable_local_channels = yylval.number;
}
    break;

  case 746:

/* Line 1464 of yacc.c  */
#line 4123 "ircd_parser.y"
    {
  ConfigChannel.use_except = yylval.number;
}
    break;

  case 747:

/* Line 1464 of yacc.c  */
#line 4128 "ircd_parser.y"
    {
  ConfigChannel.use_invex = yylval.number;
}
    break;

  case 748:

/* Line 1464 of yacc.c  */
#line 4133 "ircd_parser.y"
    {
  ConfigChannel.regex_bans = yylval.number;
}
    break;

  case 749:

/* Line 1464 of yacc.c  */
#line 4138 "ircd_parser.y"
    {
  ConfigChannel.use_knock = yylval.number;
}
    break;

  case 750:

/* Line 1464 of yacc.c  */
#line 4143 "ircd_parser.y"
    {
  ConfigChannel.use_noctcp = yylval.number;
}
    break;

  case 751:

/* Line 1464 of yacc.c  */
#line 4148 "ircd_parser.y"
    {
  ConfigChannel.knock_delay = (yyvsp[(3) - (4)].number);
}
    break;

  case 752:

/* Line 1464 of yacc.c  */
#line 4153 "ircd_parser.y"
    {
  ConfigChannel.knock_delay_channel = (yyvsp[(3) - (4)].number);
}
    break;

  case 753:

/* Line 1464 of yacc.c  */
#line 4158 "ircd_parser.y"
    {
  ConfigChannel.max_chans_per_user = (yyvsp[(3) - (4)].number);
}
    break;

  case 754:

/* Line 1464 of yacc.c  */
#line 4163 "ircd_parser.y"
    {
  ConfigChannel.quiet_on_ban = yylval.number;
}
    break;

  case 755:

/* Line 1464 of yacc.c  */
#line 4168 "ircd_parser.y"
    {
  ConfigChannel.max_bans = (yyvsp[(3) - (4)].number);
}
    break;

  case 756:

/* Line 1464 of yacc.c  */
#line 4173 "ircd_parser.y"
    {
  ConfigChannel.default_split_user_count = (yyvsp[(3) - (4)].number);
}
    break;

  case 757:

/* Line 1464 of yacc.c  */
#line 4178 "ircd_parser.y"
    {
  ConfigChannel.default_split_server_count = (yyvsp[(3) - (4)].number);
}
    break;

  case 758:

/* Line 1464 of yacc.c  */
#line 4183 "ircd_parser.y"
    {
  ConfigChannel.no_create_on_split = yylval.number;
}
    break;

  case 759:

/* Line 1464 of yacc.c  */
#line 4188 "ircd_parser.y"
    {
  ConfigChannel.no_join_on_split = yylval.number;
}
    break;

  case 760:

/* Line 1464 of yacc.c  */
#line 4193 "ircd_parser.y"
    {
  ConfigChannel.burst_topicwho = yylval.number;
}
    break;

  case 761:

/* Line 1464 of yacc.c  */
#line 4198 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodcount = yylval.number;
}
    break;

  case 762:

/* Line 1464 of yacc.c  */
#line 4203 "ircd_parser.y"
    {
  GlobalSetOptions.joinfloodtime = yylval.number;
}
    break;

  case 774:

/* Line 1464 of yacc.c  */
#line 4222 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
    break;

  case 775:

/* Line 1464 of yacc.c  */
#line 4228 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
    break;

  case 776:

/* Line 1464 of yacc.c  */
#line 4234 "ircd_parser.y"
    {
  if (ypass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    DupString(ConfigServerHide.hidden_name, yylval.string);
  }
}
    break;

  case 777:

/* Line 1464 of yacc.c  */
#line 4243 "ircd_parser.y"
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

  case 778:

/* Line 1464 of yacc.c  */
#line 4257 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hidden = yylval.number;
}
    break;

  case 779:

/* Line 1464 of yacc.c  */
#line 4263 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.disable_hidden = yylval.number;
}
    break;

  case 780:

/* Line 1464 of yacc.c  */
#line 4269 "ircd_parser.y"
    {
  if (ypass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
    break;



/* Line 1464 of yacc.c  */
#line 9063 "y.tab.c"
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



