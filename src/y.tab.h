/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1685 of yacc.c  */
#line 135 "ircd_parser.y"

  int number;
  char *string;



/* Line 1685 of yacc.c  */
#line 604 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


