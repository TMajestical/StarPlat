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
     T_INT = 258,
     T_FLOAT = 259,
     T_BOOL = 260,
     T_STRING = 261,
     T_DOUBLE = 262,
     T_LONG = 263,
     T_AUTOREF = 264,
     T_FORALL = 265,
     T_FOR = 266,
     T_P_INF = 267,
     T_INF = 268,
     T_N_INF = 269,
     T_FUNC = 270,
     T_IF = 271,
     T_ELSE = 272,
     T_WHILE = 273,
     T_RETURN = 274,
     T_DO = 275,
     T_IN = 276,
     T_FIXEDPOINT = 277,
     T_UNTIL = 278,
     T_FILTER = 279,
     T_ADD_ASSIGN = 280,
     T_SUB_ASSIGN = 281,
     T_MUL_ASSIGN = 282,
     T_DIV_ASSIGN = 283,
     T_MOD_ASSIGN = 284,
     T_AND_ASSIGN = 285,
     T_XOR_ASSIGN = 286,
     T_OR_ASSIGN = 287,
     T_INC_OP = 288,
     T_DEC_OP = 289,
     T_PTR_OP = 290,
     T_AND_OP = 291,
     T_OR_OP = 292,
     T_LE_OP = 293,
     T_GE_OP = 294,
     T_EQ_OP = 295,
     T_NE_OP = 296,
     T_AND = 297,
     T_OR = 298,
     T_SUM = 299,
     T_AVG = 300,
     T_COUNT = 301,
     T_PRODUCT = 302,
     T_MAX = 303,
     T_MIN = 304,
     T_GRAPH = 305,
     T_GNN = 306,
     T_DIR_GRAPH = 307,
     T_NODE = 308,
     T_EDGE = 309,
     T_UPDATES = 310,
     T_CONTAINER = 311,
     T_NODEMAP = 312,
     T_VECTOR = 313,
     T_HASHMAP = 314,
     T_HASHSET = 315,
     T_NP = 316,
     T_EP = 317,
     T_LIST = 318,
     T_SET_NODES = 319,
     T_SET_EDGES = 320,
     T_FROM = 321,
     T_BFS = 322,
     T_REVERSE = 323,
     T_INCREMENTAL = 324,
     T_DECREMENTAL = 325,
     T_STATIC = 326,
     T_DYNAMIC = 327,
     T_BATCH = 328,
     T_ONADD = 329,
     T_ONDELETE = 330,
     ID = 331,
     INT_NUM = 332,
     FLOAT_NUM = 333,
     BOOL_VAL = 334,
     CHAR_VAL = 335,
     STRING_VAL = 336,
     return_func = 337
   };
#endif
/* Tokens.  */
#define T_INT 258
#define T_FLOAT 259
#define T_BOOL 260
#define T_STRING 261
#define T_DOUBLE 262
#define T_LONG 263
#define T_AUTOREF 264
#define T_FORALL 265
#define T_FOR 266
#define T_P_INF 267
#define T_INF 268
#define T_N_INF 269
#define T_FUNC 270
#define T_IF 271
#define T_ELSE 272
#define T_WHILE 273
#define T_RETURN 274
#define T_DO 275
#define T_IN 276
#define T_FIXEDPOINT 277
#define T_UNTIL 278
#define T_FILTER 279
#define T_ADD_ASSIGN 280
#define T_SUB_ASSIGN 281
#define T_MUL_ASSIGN 282
#define T_DIV_ASSIGN 283
#define T_MOD_ASSIGN 284
#define T_AND_ASSIGN 285
#define T_XOR_ASSIGN 286
#define T_OR_ASSIGN 287
#define T_INC_OP 288
#define T_DEC_OP 289
#define T_PTR_OP 290
#define T_AND_OP 291
#define T_OR_OP 292
#define T_LE_OP 293
#define T_GE_OP 294
#define T_EQ_OP 295
#define T_NE_OP 296
#define T_AND 297
#define T_OR 298
#define T_SUM 299
#define T_AVG 300
#define T_COUNT 301
#define T_PRODUCT 302
#define T_MAX 303
#define T_MIN 304
#define T_GRAPH 305
#define T_GNN 306
#define T_DIR_GRAPH 307
#define T_NODE 308
#define T_EDGE 309
#define T_UPDATES 310
#define T_CONTAINER 311
#define T_NODEMAP 312
#define T_VECTOR 313
#define T_HASHMAP 314
#define T_HASHSET 315
#define T_NP 316
#define T_EP 317
#define T_LIST 318
#define T_SET_NODES 319
#define T_SET_EDGES 320
#define T_FROM 321
#define T_BFS 322
#define T_REVERSE 323
#define T_INCREMENTAL 324
#define T_DECREMENTAL 325
#define T_STATIC 326
#define T_DYNAMIC 327
#define T_BATCH 328
#define T_ONADD 329
#define T_ONDELETE 330
#define ID 331
#define INT_NUM 332
#define FLOAT_NUM 333
#define BOOL_VAL 334
#define CHAR_VAL 335
#define STRING_VAL 336
#define return_func 337




/* Copy the first part of user declarations.  */
#line 3 "lrparser.y"

	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <stdbool.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include "includeHeader.hpp"
	#include "../analyser/attachProp/attachPropAnalyser.h"
	#include "../analyser/dataRace/dataRaceAnalyser.h"
	#include "../analyser/deviceVars/deviceVarsAnalyser.h"
	#include "../analyser/pushpull/pushpullAnalyser.h"

	#include "../analyser/blockVars/blockVarsAnalyser.h"
	#include<getopt.h>
	//#include "../symbolutil/SymbolTableBuilder.cpp"
     
	void yyerror(const char *);
	int yylex(void);
    extern FILE* yyin;

	char mytext[100];
	char var[100];
	int num = 0;
	vector<map<int,vector<Identifier*>>> graphId(5);
	extern char *yytext;
	//extern SymbolTable* symbTab;
	FrontEndContext frontEndContext;
	map<string,int> push_map;
	set<string> allGpuUsedVars;
	char* backendTarget ;
    vector<Identifier*> tempIds; //stores graph vars in current function's param list.
    //symbTab=new SymbolTable();
	//symbolTableList.push_back(new SymbolTable());


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
#line 42 "lrparser.y"
{
    int  info;
    long ival;
	bool bval;
    double fval;
    char* text;
	char cval;
	ASTNode* node;
	paramList* pList;
	argList* aList;
	ASTNodeList* nodeList;
    tempNode* temporary;
     }
/* Line 193 of yacc.c.  */
#line 310 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 323 "y.tab.c"

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
#define YYLAST   993

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNRULES -- Number of states.  */
#define YYNSTATES  415

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   337

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   101,     2,     2,     2,    91,    95,     2,
      92,    93,    89,    87,    94,    88,    97,    90,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    96,
      85,   100,    86,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   102,     2,   103,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    98,     2,    99,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    16,    22,    27,    32,
      38,    40,    44,    46,    48,    50,    53,    57,    60,    64,
      70,    72,    73,    76,    79,    82,    85,    87,    90,    92,
      94,    97,   100,   102,   104,   106,   110,   118,   129,   140,
     142,   144,   147,   150,   155,   158,   163,   168,   170,   172,
     174,   176,   178,   180,   182,   184,   186,   188,   190,   192,
     194,   196,   198,   203,   208,   213,   215,   217,   219,   221,
     223,   233,   241,   246,   256,   264,   269,   274,   281,   286,
     288,   290,   292,   297,   302,   307,   312,   317,   322,   326,
     330,   332,   334,   338,   342,   346,   350,   354,   358,   362,
     366,   370,   374,   378,   382,   386,   389,   393,   395,   397,
     399,   401,   406,   409,   412,   417,   422,   427,   434,   436,
     438,   440,   442,   444,   446,   448,   450,   452,   461,   467,
     475,   486,   494,   502,   513,   521,   529,   530,   536,   538,
     544,   552,   556,   566,   570,   574,   576,   578,   580,   582,
     584,   588,   590,   594,   598,   600,   602,   607,   609,   611,
     613,   615,   617,   619,   621,   623,   625,   626,   630,   634,
     636,   638,   652,   665,   668,   674,   678,   685,   691
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     105,     0,    -1,    -1,   105,   106,    -1,   107,   111,    -1,
      15,   159,    92,   108,    93,    -1,    71,   159,    92,   108,
      93,    -1,    69,    92,   108,    93,    -1,    70,    92,   108,
      93,    -1,    72,   159,    92,   108,    93,    -1,   110,    -1,
     110,    94,   108,    -1,   122,    -1,   133,    -1,   124,    -1,
     122,   159,    -1,   122,    95,   159,    -1,   133,   159,    -1,
     133,    95,   159,    -1,   133,   159,    92,   159,    93,    -1,
     114,    -1,    -1,   112,   113,    -1,   121,    96,    -1,   135,
      96,    -1,   140,    96,    -1,   142,    -1,   147,    96,    -1,
     155,    -1,   114,    -1,   139,    96,    -1,   120,    96,    -1,
     115,    -1,   116,    -1,   117,    -1,   118,   112,   119,    -1,
      73,    92,   159,    84,   137,    93,   114,    -1,    74,    92,
     159,    21,   159,    97,   140,    93,    84,   114,    -1,    75,
      92,   159,    21,   159,    97,   140,    93,    84,   114,    -1,
      98,    -1,    99,    -1,    19,   137,    -1,   122,   159,    -1,
     122,   159,   100,   136,    -1,   133,   159,    -1,   133,   159,
     100,   136,    -1,   124,   159,   100,   136,    -1,   123,    -1,
     125,    -1,   127,    -1,   126,    -1,     3,    -1,     4,    -1,
       5,    -1,     7,    -1,     8,    -1,     6,    -1,     9,    -1,
      50,    -1,    52,    -1,    51,    -1,    63,    -1,    64,    85,
     159,    86,    -1,    65,    85,   159,    86,    -1,    55,    85,
     159,    86,    -1,   128,    -1,   129,    -1,   130,    -1,   131,
      -1,   132,    -1,    56,    85,   109,    86,    92,   154,    94,
     109,    93,    -1,    56,    85,   109,    86,    92,   154,    93,
      -1,    56,    85,   109,    86,    -1,    58,    85,   109,    86,
      92,   154,    94,   109,    93,    -1,    58,    85,   109,    86,
      92,   154,    93,    -1,    58,    85,   109,    86,    -1,    57,
      92,   109,    93,    -1,    59,    85,   109,    94,   109,    86,
      -1,    60,    85,   109,    86,    -1,    53,    -1,    54,    -1,
     134,    -1,    61,    85,   123,    86,    -1,    62,    85,   123,
      86,    -1,    61,    85,   127,    86,    -1,    62,    85,   127,
      86,    -1,    61,    85,    53,    86,    -1,    61,    85,    54,
      86,    -1,   153,   100,   136,    -1,   138,   100,   136,    -1,
     137,    -1,   140,    -1,   137,    87,   137,    -1,   137,    88,
     137,    -1,   137,    89,   137,    -1,   137,    90,   137,    -1,
     137,    91,   137,    -1,   137,    36,   137,    -1,   137,    37,
     137,    -1,   137,    38,   137,    -1,   137,    39,   137,    -1,
     137,    85,   137,    -1,   137,    86,   137,    -1,   137,    40,
     137,    -1,   137,    41,   137,    -1,   101,   137,    -1,    92,
     137,    93,    -1,   141,    -1,   153,    -1,   139,    -1,   138,
      -1,   137,   102,   137,   103,    -1,   137,    33,    -1,   137,
      34,    -1,   153,    92,   154,    93,    -1,    69,    92,   154,
      93,    -1,    70,    92,   154,    93,    -1,   138,    97,   153,
      92,   154,    93,    -1,    77,    -1,    78,    -1,    79,    -1,
      81,    -1,    13,    -1,    12,    -1,    14,    -1,   146,    -1,
     143,    -1,    22,    23,    92,   159,    84,   137,    93,   114,
      -1,    18,    92,   145,    93,   114,    -1,    20,   114,    18,
      92,   145,    93,    96,    -1,    10,    92,   159,    21,   159,
      97,   140,   144,    93,   114,    -1,    10,    92,   159,    21,
     153,    93,   114,    -1,    11,    92,   159,    21,   153,    93,
     114,    -1,    11,    92,   159,    21,   159,    97,   140,   144,
      93,   114,    -1,    11,    92,   159,    21,   138,    93,   114,
      -1,    10,    92,   159,    21,   138,    93,   114,    -1,    -1,
      97,    24,    92,   145,    93,    -1,   137,    -1,    16,    92,
     145,    93,   113,    -1,    16,    92,   145,    93,   113,    17,
     113,    -1,   153,   100,   151,    -1,    85,   149,    86,   100,
      85,   151,    94,   150,    86,    -1,   153,   148,   137,    -1,
     137,   148,   137,    -1,    25,    -1,    27,    -1,    32,    -1,
      30,    -1,    26,    -1,   153,    94,   149,    -1,   153,    -1,
     141,    94,   150,    -1,   153,    94,   150,    -1,   141,    -1,
     153,    -1,   152,    92,   154,    93,    -1,    44,    -1,    46,
      -1,    47,    -1,    48,    -1,    49,    -1,   159,    -1,   157,
      -1,   158,    -1,   138,    -1,    -1,   135,    94,   154,    -1,
     137,    94,   154,    -1,   137,    -1,   135,    -1,    67,    92,
     159,    21,   159,    97,   140,    66,   159,    93,   144,   114,
     156,    -1,    67,    92,   159,    21,   159,    97,   140,    66,
     159,    93,   144,   114,    -1,    68,   114,    -1,    68,    92,
     145,    93,   114,    -1,   159,    97,   159,    -1,   159,    97,
     159,   102,   159,   103,    -1,   159,    97,   159,    97,   159,
      -1,    76,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   111,   113,   120,   126,   132,   138,   144,
     151,   152,   155,   156,   157,   159,   176,   193,   198,   202,
     211,   214,   215,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   231,   233,   235,   237,   239,
     241,   243,   246,   255,   258,   261,   264,   268,   269,   270,
     271,   274,   275,   276,   277,   278,   279,   281,   283,   284,
     286,   288,   289,   291,   293,   294,   295,   296,   297,   298,
     300,   301,   302,   305,   306,   307,   309,   311,   314,   317,
     318,   319,   321,   322,   323,   324,   325,   327,   330,   331,
     334,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   354,   355,   356,
     357,   359,   361,   362,   364,   369,   373,   378,   389,   390,
     391,   392,   393,   394,   395,   398,   399,   401,   402,   403,
     404,   406,   407,   408,   409,   410,   412,   413,   415,   417,
     418,   421,   422,   424,   425,   428,   429,   430,   431,   432,
     434,   436,   438,   439,   441,   442,   451,   453,   454,   455,
     456,   457,   459,   460,   461,   462,   465,   469,   486,   493,
     498,   506,   507,   511,   512,   515,   519,   526,   530
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_FLOAT", "T_BOOL", "T_STRING",
  "T_DOUBLE", "T_LONG", "T_AUTOREF", "T_FORALL", "T_FOR", "T_P_INF",
  "T_INF", "T_N_INF", "T_FUNC", "T_IF", "T_ELSE", "T_WHILE", "T_RETURN",
  "T_DO", "T_IN", "T_FIXEDPOINT", "T_UNTIL", "T_FILTER", "T_ADD_ASSIGN",
  "T_SUB_ASSIGN", "T_MUL_ASSIGN", "T_DIV_ASSIGN", "T_MOD_ASSIGN",
  "T_AND_ASSIGN", "T_XOR_ASSIGN", "T_OR_ASSIGN", "T_INC_OP", "T_DEC_OP",
  "T_PTR_OP", "T_AND_OP", "T_OR_OP", "T_LE_OP", "T_GE_OP", "T_EQ_OP",
  "T_NE_OP", "T_AND", "T_OR", "T_SUM", "T_AVG", "T_COUNT", "T_PRODUCT",
  "T_MAX", "T_MIN", "T_GRAPH", "T_GNN", "T_DIR_GRAPH", "T_NODE", "T_EDGE",
  "T_UPDATES", "T_CONTAINER", "T_NODEMAP", "T_VECTOR", "T_HASHMAP",
  "T_HASHSET", "T_NP", "T_EP", "T_LIST", "T_SET_NODES", "T_SET_EDGES",
  "T_FROM", "T_BFS", "T_REVERSE", "T_INCREMENTAL", "T_DECREMENTAL",
  "T_STATIC", "T_DYNAMIC", "T_BATCH", "T_ONADD", "T_ONDELETE", "ID",
  "INT_NUM", "FLOAT_NUM", "BOOL_VAL", "CHAR_VAL", "STRING_VAL",
  "return_func", "'?'", "':'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'('", "')'", "','", "'&'", "';'", "'.'", "'{'", "'}'", "'='",
  "'!'", "'['", "']'", "$accept", "program", "function_def",
  "function_data", "paramList", "type", "param", "function_body",
  "statements", "statement", "blockstatements", "batch_blockstmt",
  "on_add_blockstmt", "on_delete_blockstmt", "block_begin", "block_end",
  "return_stmt", "declaration", "type1", "primitive", "type3", "graph",
  "gnn", "collections", "container", "vector", "nodemap", "hashmap",
  "hashset", "type2", "property", "assignment", "rhs", "expression",
  "indexExpr", "unary_expr", "proc_call", "val", "control_flow",
  "iteration_cf", "filterExpr", "boolean_expr", "selection_cf",
  "reduction", "reduce_op", "leftList", "rightList", "reductionCall",
  "reduction_calls", "leftSide", "arg_list", "bfs_abstraction",
  "reverse_abstraction", "oid", "tid", "id", 0
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
     335,   336,   337,    63,    58,    60,    62,    43,    45,    42,
      47,    37,    40,    41,    44,    38,    59,    46,   123,   125,
      61,    33,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   106,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   109,   110,   110,   110,   110,   110,
     111,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   121,   121,   121,   121,   122,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   124,   125,   125,
     126,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   128,   129,   129,   129,   130,   131,   132,   133,
     133,   133,   134,   134,   134,   134,   134,   134,   135,   135,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   138,   139,   139,   140,   140,   140,   140,   141,   141,
     141,   141,   141,   141,   141,   142,   142,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   144,   144,   145,   146,
     146,   147,   147,   147,   147,   148,   148,   148,   148,   148,
     149,   149,   150,   150,   150,   150,   151,   152,   152,   152,
     152,   152,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   155,   155,   156,   156,   157,   157,   158,   159
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     5,     5,     4,     4,     5,
       1,     3,     1,     1,     1,     2,     3,     2,     3,     5,
       1,     0,     2,     2,     2,     2,     1,     2,     1,     1,
       2,     2,     1,     1,     1,     3,     7,    10,    10,     1,
       1,     2,     2,     4,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     1,     1,     1,     1,     1,
       9,     7,     4,     9,     7,     4,     4,     6,     4,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     3,     3,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     1,     1,     1,
       1,     4,     2,     2,     4,     4,     4,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     8,     5,     7,
      10,     7,     7,    10,     7,     7,     0,     5,     1,     5,
       7,     3,     9,     3,     3,     1,     1,     1,     1,     1,
       3,     1,     3,     3,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     3,     1,
       1,    13,    12,     2,     5,     3,     6,     5,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     3,     0,
     178,     0,     0,     0,     0,     0,    39,     4,    20,    21,
       0,    51,    52,    53,    56,    54,    55,    58,    60,    59,
      79,    80,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,     0,     0,    10,     0,    47,    48,    50,    49,
      65,    66,    67,    68,    69,     0,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,    15,     0,    17,     8,     0,
       0,    57,     0,     0,   123,   122,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   119,
     120,   121,     0,     0,    40,     0,    22,    29,    32,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,   110,
     109,    91,   107,    26,   126,   125,     0,   108,    28,   163,
     164,   162,     5,     0,     0,    12,    14,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    16,    18,     0,     6,     9,     0,     0,     0,     0,
      41,   110,   109,    91,   108,     0,     0,     0,   166,   166,
       0,     0,     0,     0,     0,   108,     0,   105,    31,    23,
      42,     0,    44,    24,   145,   149,   146,   148,   147,   112,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    25,
      27,   166,     0,     0,     0,    64,    72,    76,    75,     0,
      78,    86,    87,    82,    84,    83,    85,    62,    63,     0,
       0,     0,   138,     0,     0,     0,     0,     0,   170,   169,
     108,     0,     0,     0,     0,     0,     0,     0,   106,     0,
       0,     0,    97,    98,    99,   100,   103,   104,   101,   102,
      92,    93,    94,    95,    96,     0,   144,   108,    89,    90,
       0,   157,   158,   159,   160,   161,    88,   141,     0,   143,
     175,   166,   166,     0,    19,     0,     0,     0,     0,     0,
       0,     0,   166,   166,     0,   115,   116,     0,     0,     0,
       0,   150,    43,    46,    45,   111,   166,   114,   166,     0,
       0,     0,     0,    77,   110,   108,   162,   110,   108,   162,
     139,   128,     0,     0,     0,   167,   168,     0,     0,     0,
       0,     0,     0,   177,     0,    71,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   156,   176,     0,     0,   135,   131,
      91,   162,   134,   132,    91,   140,   129,     0,    91,    36,
      91,    91,     0,    70,    73,     0,     0,     0,     0,   127,
       0,     0,     0,   107,     0,   108,     0,     0,   175,     0,
       0,     0,     0,     0,   142,     0,     0,   130,   133,   136,
      37,    38,   152,   153,     0,     0,   137,   172,     0,   171,
       0,   173,     0,     0,   174
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     8,     9,    43,   134,    44,    17,    60,   106,
     107,   108,   109,   110,    19,   111,   112,   113,   135,    46,
     136,    47,    48,    49,    50,    51,    52,    53,    54,   137,
      56,   238,   276,   173,   161,   162,   163,   122,   123,   124,
     376,   233,   125,   126,   205,   174,   384,   277,   278,   164,
     241,   128,   409,   129,   130,   131
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -348
static const yytype_int16 yypact[] =
{
    -348,    22,  -348,   -26,   -27,   -24,   -26,   -26,  -348,     6,
    -348,   -13,   497,   497,    -3,    14,  -348,  -348,  -348,  -348,
     497,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,  -348,    23,    26,    24,    36,    40,    42,    62,    71,
    -348,    73,    78,   103,    95,   -53,  -348,  -348,  -348,  -348,
    -348,  -348,  -348,  -348,  -348,   -19,  -348,   107,   497,   497,
     414,   109,   -26,   865,   865,   865,   865,   865,   849,   928,
     -26,   -26,  -348,   497,   -26,  -348,   -26,   114,  -348,   116,
     119,  -348,   115,   121,  -348,  -348,  -348,   122,   123,   181,
       6,   188,   124,   125,   127,   128,   129,   132,  -348,  -348,
    -348,  -348,   181,   181,  -348,   181,  -348,  -348,  -348,  -348,
    -348,  -348,   105,   131,   -26,   -26,   -26,   135,   608,   -79,
     136,   140,  -348,  -348,  -348,  -348,   141,    13,  -348,  -348,
    -348,   144,  -348,   157,   159,  -348,  -348,  -348,   153,   162,
     158,   167,   169,   175,   179,   183,   192,   194,   198,   199,
    -348,  -348,  -348,   -26,  -348,  -348,   -26,   -26,   181,   181,
     776,   -66,  -348,  -348,   196,   273,   200,   -26,   181,   181,
     -26,   -26,   -26,   776,   207,   -10,   667,   776,  -348,  -348,
     201,   206,   209,  -348,  -348,  -348,  -348,  -348,  -348,  -348,
    -348,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,  -348,  -348,
    -348,   181,   583,   181,   -26,  -348,   202,  -348,   204,   865,
    -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,  -348,   205,
     289,   295,   776,   232,   234,   236,   -26,   305,   235,   691,
     -86,   239,   243,   262,   326,   331,   253,   181,  -348,   181,
     181,   181,   808,   799,   233,   233,   353,   353,   233,   233,
      96,    96,   -29,   -29,   -29,   632,   776,   263,  -348,   776,
     261,  -348,  -348,  -348,  -348,  -348,  -348,  -348,   264,   776,
     -44,   181,   181,   274,  -348,   181,   181,   513,     6,   181,
     275,   -26,   181,   181,   181,  -348,  -348,   181,   -26,   -26,
     276,  -348,  -348,  -348,  -348,  -348,   181,  -348,   181,   -26,
     -26,   -65,    21,  -348,    31,    77,   265,    58,    85,   267,
     349,  -348,   277,   181,   270,  -348,  -348,   709,   271,   272,
     118,   278,   279,  -348,   282,  -348,   865,  -348,   865,     6,
       6,   181,     6,     6,   181,   513,   280,   734,   181,     6,
     181,   181,   281,   178,  -348,  -348,   284,   286,  -348,  -348,
     -46,    10,  -348,  -348,   -46,  -348,  -348,     6,   307,  -348,
     304,   310,   181,  -348,  -348,   350,   312,   -26,   313,  -348,
     -26,   314,   323,   294,   322,     3,   317,     6,    29,     6,
     318,     6,     6,   181,  -348,   181,   181,  -348,  -348,   315,
    -348,  -348,  -348,  -348,   320,     6,  -348,   342,   -15,  -348,
     181,  -348,   338,     6,  -348
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -348,  -348,  -348,  -348,    28,   -31,  -348,  -348,  -348,  -284,
      -9,  -348,  -348,  -348,  -348,  -348,  -348,  -348,    -4,   111,
     -58,  -348,  -348,   113,  -348,  -348,  -348,  -348,  -348,    12,
    -348,   -48,  -187,   -59,   108,   -45,   -33,  -305,  -348,  -348,
    -347,  -140,  -348,  -348,   288,   190,  -297,   117,  -348,    57,
    -109,  -348,  -348,  -348,  -348,     4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -178
static const yytype_int16 yytable[] =
{
      18,   118,   115,   320,   189,   190,   211,    11,    45,    45,
      14,    15,   117,  -165,   294,   120,    45,   378,   206,   234,
     268,   207,     2,    10,    55,    55,  -165,   121,   335,   336,
     160,   206,    55,   138,   139,   140,   141,     3,   184,   185,
     186,    57,    74,   187,   176,   188,   177,  -136,    61,    75,
      10,   375,   405,   309,    45,    45,   114,    10,   310,    77,
     242,   365,   302,   303,   304,    12,   133,   383,    13,    45,
      55,    55,   116,   204,   148,   149,    76,   410,   151,    20,
     152,   165,   211,    16,   247,    55,    79,    80,   383,    58,
     383,     4,     5,     6,     7,   211,   402,   395,   403,   232,
     232,   150,   270,  -175,    16,   211,    59,   377,    62,   239,
     239,    63,   310,   212,   337,   338,    64,   127,   180,   181,
     182,    65,  -177,  -165,   339,    66,   309,    67,   206,   189,
     190,   310,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,    68,   269,   322,
    -165,   342,   239,   269,   279,   206,    69,   229,    70,   175,
     230,   231,   271,    71,   272,   273,   274,   275,   119,   211,
     340,   237,   311,   312,   243,   244,   245,   211,   343,   144,
     146,   145,   147,   325,   326,   201,   202,   203,   283,    73,
     269,   269,   269,    84,    85,    86,    72,   331,   204,   332,
      78,   178,   132,  -117,  -117,  -117,   153,   156,  -117,   154,
    -117,   166,   155,   157,   158,   159,   167,   168,   280,   169,
     170,   171,   239,   239,   172,   240,   240,   179,   118,   115,
     232,   183,   208,   239,   239,   269,   209,   210,   327,   117,
     290,   214,   120,   215,  -117,   216,   217,   239,   218,   239,
      93,    94,   219,   220,   121,   221,   404,    10,    98,    99,
     100,   222,   101,   267,   347,   223,   189,   190,   240,   224,
     412,  -117,  -117,   103,  -117,  -117,   119,   119,   225,   321,
     226,  -117,   105,   114,   227,   228,   118,   115,   211,   316,
     319,   235,   236,   246,   281,   324,   282,   117,   284,   116,
     120,   249,   328,   329,   175,   356,   250,   357,   360,   251,
     285,   364,   121,   333,   334,   368,   286,   370,   371,   119,
     199,   200,   201,   202,   203,   287,   291,   288,   289,   292,
     358,   359,   295,   362,   363,   204,   296,   232,   240,   240,
     369,   114,   315,   318,   127,   361,   297,   298,   361,   240,
     240,   232,   299,   300,   307,   306,   308,   116,   379,   323,
     313,   330,   341,   240,   344,   240,   345,   348,   350,   351,
     346,   353,   354,   380,   386,   372,   366,   373,   397,   374,
     398,   388,   400,   401,   390,   355,   189,   190,   393,   119,
     119,   193,   194,   314,   317,   119,   407,   381,   391,   411,
     119,   119,   127,   382,   414,   387,   389,   392,   394,   396,
     408,   399,   375,   406,   119,   213,   119,    21,    22,    23,
      24,    25,    26,    81,    82,    83,    84,    85,    86,   385,
      87,   413,    88,    89,    90,     0,    91,   301,   197,   198,
     199,   200,   201,   202,   203,     0,     0,   352,     0,     0,
     385,     0,   385,   119,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       0,    92,     0,    93,    94,     0,     0,    95,    96,    97,
      10,    98,    99,   100,     0,   101,     0,     0,     0,   102,
      21,    22,    23,    24,    25,    26,   103,     0,     0,     0,
       0,     0,    16,   104,     0,   105,    21,    22,    23,    24,
      25,    26,    81,    82,    83,    84,    85,    86,     0,    87,
       0,    88,    89,    90,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
      92,     0,    93,    94,     0,     0,    95,    96,    97,    10,
      98,    99,   100,     0,   101,    84,    85,    86,   102,     0,
       0,     0,     0,     0,     0,   103,     0,     0,     0,     0,
       0,    16,     0,     0,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   271,     0,   272,
     273,   274,   275,   184,   185,   186,     0,     0,   187,     0,
     188,   189,   190,     0,   191,   192,   193,   194,   195,   196,
       0,     0,    93,    94,     0,     0,     0,     0,     0,    10,
      98,    99,   100,     0,   101,   189,   190,     0,   191,   192,
     193,   194,   195,   196,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,   105,     0,     0,     0,     0,     0,
       0,     0,     0,   197,   198,   199,   200,   201,   202,   203,
     189,   190,     0,   191,   192,   193,   194,   195,   196,     0,
     204,     0,     0,     0,     0,     0,     0,   197,   198,   199,
     200,   201,   202,   203,   189,   190,     0,   191,   192,   193,
     194,   195,   196,     0,   204,   305,     0,     0,     0,     0,
       0,     0,   189,   190,     0,   191,   192,   193,   194,   195,
     196,     0,   197,   198,   199,   200,   201,   202,   203,     0,
     248,     0,     0,     0,     0,     0,     0,   189,   190,   204,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     0,   204,   197,   198,   199,   200,   201,   202,
     203,     0,   349,     0,     0,     0,     0,     0,     0,   189,
     190,   204,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   199,   200,   201,   202,   203,     0,   367,     0,     0,
       0,     0,   189,   190,     0,   191,   204,   193,   194,   195,
     196,   189,   190,     0,     0,     0,   193,   194,   195,   196,
       0,     0,    21,    22,    23,    24,    25,    26,     0,     0,
       0,   197,   198,   199,   200,   201,   202,   203,    21,    22,
      23,    24,    25,    26,    81,     0,     0,     0,   204,     0,
       0,     0,     0,     0,   197,   198,   199,   200,   201,   202,
     203,     0,     0,   197,   198,   199,   200,   201,   202,   203,
       0,   204,   142,   143,    32,    33,    34,    35,    36,    37,
     204,     0,    40,    41,    42,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,    36,    37,     0,
       0,    40,    41,    42
};

static const yytype_int16 yycheck[] =
{
       9,    60,    60,   287,    33,    34,    92,     3,    12,    13,
       6,     7,    60,    92,   100,    60,    20,   364,    97,   159,
     207,   100,     0,    76,    12,    13,    92,    60,    93,    94,
      89,    97,    20,    64,    65,    66,    67,    15,    25,    26,
      27,    13,    95,    30,   103,    32,   105,    93,    20,    45,
      76,    97,   399,    97,    58,    59,    60,    76,   102,    55,
     169,   345,   249,   250,   251,    92,    62,   372,    92,    73,
      58,    59,    60,   102,    70,    71,    95,    92,    74,    92,
      76,    90,    92,    98,    94,    73,    58,    59,   393,    92,
     395,    69,    70,    71,    72,    92,   393,    94,   395,   158,
     159,    73,   211,    93,    98,    92,    92,    97,    85,   168,
     169,    85,   102,   100,    93,    94,    92,    60,   114,   115,
     116,    85,    93,    92,    93,    85,    97,    85,    97,    33,
      34,   102,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,    85,   207,   289,
      92,    93,   211,   212,   213,    97,    85,   153,    85,   102,
     156,   157,    44,    85,    46,    47,    48,    49,    60,    92,
      93,   167,   281,   282,   170,   171,   172,    92,    93,    68,
      69,    68,    69,   292,   293,    89,    90,    91,   219,    94,
     249,   250,   251,    12,    13,    14,    93,   306,   102,   308,
      93,    96,    93,    25,    26,    27,    92,    92,    30,    93,
      32,    23,    93,    92,    92,    92,    92,    92,   214,    92,
      92,    92,   281,   282,    92,   168,   169,    96,   287,   287,
     289,    96,    96,   292,   293,   294,    96,    96,   297,   287,
     236,    97,   287,    86,    66,    86,    93,   306,    86,   308,
      69,    70,    94,    86,   287,    86,   396,    76,    77,    78,
      79,    86,    81,   206,   323,    86,    33,    34,   211,    86,
     410,    93,    94,    92,    96,    97,   168,   169,    86,   288,
      86,   103,   101,   287,    86,    86,   345,   345,    92,   285,
     286,    18,    92,    86,    92,   291,    92,   345,    93,   287,
     345,   100,   298,   299,   247,   336,   100,   338,   341,   100,
      21,   344,   345,   309,   310,   348,    21,   350,   351,   211,
      87,    88,    89,    90,    91,    93,    21,    93,    92,    94,
     339,   340,    93,   342,   343,   102,    93,   396,   281,   282,
     349,   345,   285,   286,   287,   341,    84,    21,   344,   292,
     293,   410,    21,   100,    93,    92,    92,   345,   367,    84,
      86,    85,    97,   306,    97,   308,    17,    97,    97,    97,
      93,    93,    93,    66,    24,    94,    96,    93,   387,    93,
     389,   377,   391,   392,   380,   103,    33,    34,    94,   281,
     282,    38,    39,   285,   286,   287,   405,    93,    84,   408,
     292,   293,   345,    93,   413,    93,    93,    84,    86,    92,
      68,    93,    97,    93,   306,   127,   308,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   372,
      16,    93,    18,    19,    20,    -1,    22,   247,    85,    86,
      87,    88,    89,    90,    91,    -1,    -1,   330,    -1,    -1,
     393,    -1,   395,   345,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    69,    70,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    -1,    81,    -1,    -1,    -1,    85,
       3,     4,     5,     6,     7,     8,    92,    -1,    -1,    -1,
      -1,    -1,    98,    99,    -1,   101,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    18,    19,    20,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      67,    -1,    69,    70,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    -1,    81,    12,    13,    14,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,
      47,    48,    49,    25,    26,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    76,
      77,    78,    79,    -1,    81,    33,    34,    -1,    36,    37,
      38,    39,    40,    41,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    33,    34,    -1,    36,    37,    38,
      39,    40,    41,    -1,   102,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    -1,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,   102,
      36,    37,    38,    39,    40,    41,    85,    86,    87,    88,
      89,    90,    91,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,   102,    36,    37,    38,    39,    40,    41,    -1,    85,
      86,    87,    88,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    -1,    33,    34,    -1,    36,   102,    38,    39,    40,
      41,    33,    34,    -1,    -1,    -1,    38,    39,    40,    41,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      -1,   102,    53,    54,    55,    56,    57,    58,    59,    60,
     102,    -1,    63,    64,    65,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    -1,
      -1,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   105,     0,    15,    69,    70,    71,    72,   106,   107,
      76,   159,    92,    92,   159,   159,    98,   111,   114,   118,
      92,     3,     4,     5,     6,     7,     8,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,   108,   110,   122,   123,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   108,    92,    92,
     112,   108,    85,    85,    92,    85,    85,    85,    85,    85,
      85,    85,    93,    94,    95,   159,    95,   159,    93,   108,
     108,     9,    10,    11,    12,    13,    14,    16,    18,    19,
      20,    22,    67,    69,    70,    73,    74,    75,    77,    78,
      79,    81,    85,    92,    99,   101,   113,   114,   115,   116,
     117,   119,   120,   121,   122,   124,   133,   135,   137,   138,
     139,   140,   141,   142,   143,   146,   147,   153,   155,   157,
     158,   159,    93,   159,   109,   122,   124,   133,   109,   109,
     109,   109,    53,    54,   123,   127,   123,   127,   159,   159,
     108,   159,   159,    92,    93,    93,    92,    92,    92,    92,
     137,   138,   139,   140,   153,   114,    23,    92,    92,    92,
      92,    92,    92,   137,   149,   153,   137,   137,    96,    96,
     159,   159,   159,    96,    25,    26,    27,    30,    32,    33,
      34,    36,    37,    38,    39,    40,    41,    85,    86,    87,
      88,    89,    90,    91,   102,   148,    97,   100,    96,    96,
      96,    92,   100,   148,    97,    86,    86,    93,    86,    94,
      86,    86,    86,    86,    86,    86,    86,    86,    86,   159,
     159,   159,   137,   145,   145,    18,    92,   159,   135,   137,
     153,   154,   154,   159,   159,   159,    86,    94,    93,   100,
     100,   100,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   153,   136,   137,
     154,    44,    46,    47,    48,    49,   136,   151,   152,   137,
     159,    92,    92,   109,    93,    21,    21,    93,    93,    92,
     159,    21,    94,    94,   100,    93,    93,    84,    21,    21,
     100,   149,   136,   136,   136,   103,    92,    93,    92,    97,
     102,   154,   154,    86,   138,   153,   159,   138,   153,   159,
     113,   114,   145,    84,   159,   154,   154,   137,   159,   159,
      85,   154,   154,   159,   159,    93,    94,    93,    94,    93,
      93,    97,    93,    93,    97,    17,    93,   137,    97,    93,
      97,    97,   151,    93,    93,   103,   109,   109,   114,   114,
     140,   159,   114,   114,   140,   113,    96,    93,   140,   114,
     140,   140,    94,    93,    93,    97,   144,    97,   144,   114,
      66,    93,    93,   141,   150,   153,    24,    93,   159,    93,
     159,    84,    84,    94,    86,    94,    92,   114,   114,    93,
     114,   114,   150,   150,   145,   144,    93,   114,    68,   156,
      92,   114,   145,    93,   114
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
        case 3:
#line 111 "lrparser.y"
    {/* printf("LIST SIZE %d",frontEndContext.getFuncList().size())  ;*/ }
    break;

  case 4:
#line 113 "lrparser.y"
    { 
	                                          Function* func=(Function*)(yyvsp[(1) - (2)].node);
                                              blockStatement* block=(blockStatement*)(yyvsp[(2) - (2)].node);
                                              func->setBlockStatement(block);
											   Util::addFuncToList(func);
											}
    break;

  case 5:
#line 120 "lrparser.y"
    { 
										   (yyval.node)=Util::createFuncNode((yyvsp[(2) - (5)].node),(yyvsp[(4) - (5)].pList)->PList);
                                           Util::setCurrentFuncType(GEN_FUNC);
										   Util::resetTemp(tempIds);
										   tempIds.clear();
	                                      }
    break;

  case 6:
#line 126 "lrparser.y"
    { 
										   (yyval.node)=Util::createStaticFuncNode((yyvsp[(2) - (5)].node),(yyvsp[(4) - (5)].pList)->PList);
                                            Util::setCurrentFuncType(STATIC_FUNC);
											Util::resetTemp(tempIds);
											tempIds.clear();
	                                      }
    break;

  case 7:
#line 132 "lrparser.y"
    { 
										   (yyval.node)=Util::createIncrementalNode((yyvsp[(3) - (4)].pList)->PList);
                                            Util::setCurrentFuncType(INCREMENTAL_FUNC);
											Util::resetTemp(tempIds);
											tempIds.clear();
	                                      }
    break;

  case 8:
#line 138 "lrparser.y"
    { 
										   (yyval.node)=Util::createDecrementalNode((yyvsp[(3) - (4)].pList)->PList);
                                            Util::setCurrentFuncType(DECREMENTAL_FUNC);
											Util::resetTemp(tempIds);
											tempIds.clear();
	                                      }
    break;

  case 9:
#line 144 "lrparser.y"
    { (yyval.node)=Util::createDynamicFuncNode((yyvsp[(2) - (5)].node),(yyvsp[(4) - (5)].pList)->PList);
                                            Util::setCurrentFuncType(DYNAMIC_FUNC);
											Util::resetTemp(tempIds);
											tempIds.clear();
											}
    break;

  case 10:
#line 151 "lrparser.y"
    {(yyval.pList)=Util::createPList((yyvsp[(1) - (1)].node));}
    break;

  case 11:
#line 152 "lrparser.y"
    {(yyval.pList)=Util::addToPList((yyvsp[(3) - (3)].pList),(yyvsp[(1) - (3)].node)); 
			                           }
    break;

  case 12:
#line 155 "lrparser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 13:
#line 156 "lrparser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 14:
#line 157 "lrparser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 15:
#line 159 "lrparser.y"
    {  //Identifier* id=(Identifier*)Util::createIdentifierNode($2);
                        Type* type=(Type*)(yyvsp[(1) - (2)].node);
	                     Identifier* id=(Identifier*)(yyvsp[(2) - (2)].node);
						 
						 if(type->isGraphType())
						    {
							 tempIds.push_back(id);
						   
							}
						 if(type->isGNNType())
						    {
							 tempIds.push_back(id);
						   
							}
					printf("\n");
                    (yyval.node)=Util::createParamNode((yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node)); }
    break;

  case 16:
#line 176 "lrparser.y"
    {  //Identifier* id=(Identifier*)Util::createIdentifierNode($3);
                        Type* type=(Type*)(yyvsp[(1) - (3)].node);
	                     Identifier* id=(Identifier*)(yyvsp[(3) - (3)].node);
						 
						 if(type->isGraphType())
						    {
							 tempIds.push_back(id);
						   
							}
						 if(type->isGNNType())
						    {
							 tempIds.push_back(id);
						   
							}
					printf("\n");
                    (yyval.node)=Util::createParamNode((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),true); }
    break;

  case 17:
#line 193 "lrparser.y"
    { // Identifier* id=(Identifier*)Util::createIdentifierNode($2);
			  
					
                             (yyval.node)=Util::createParamNode((yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));}
    break;

  case 18:
#line 198 "lrparser.y"
    { // Identifier* id=(Identifier*)Util::createIdentifierNode($3);
			  
					
                             (yyval.node)=Util::createParamNode((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),true);}
    break;

  case 19:
#line 202 "lrparser.y"
    { // Identifier* id1=(Identifier*)Util::createIdentifierNode($4);
			                            //Identifier* id=(Identifier*)Util::createIdentifierNode($2);
				                        Type* tempType=(Type*)(yyvsp[(1) - (5)].node);
			                            if(tempType->isNodeEdgeType())
										  tempType->addSourceGraph((yyvsp[(4) - (5)].node));
				                         (yyval.node)=Util::createParamNode(tempType,(yyvsp[(2) - (5)].node));
									 }
    break;

  case 20:
#line 211 "lrparser.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 21:
#line 214 "lrparser.y"
    {}
    break;

  case 22:
#line 215 "lrparser.y"
    {printf ("found one statement\n") ; Util::addToBlock((yyvsp[(2) - (2)].node)); }
    break;

  case 23:
#line 217 "lrparser.y"
    {(yyval.node)=(yyvsp[(1) - (2)].node);}
    break;

  case 24:
#line 218 "lrparser.y"
    {printf ("found an assignment type statement" ); (yyval.node)=(yyvsp[(1) - (2)].node);}
    break;

  case 25:
#line 219 "lrparser.y"
    {printf ("found an proc call type statement" );(yyval.node)=Util::createNodeForProcCallStmt((yyvsp[(1) - (2)].node));}
    break;

  case 26:
#line 220 "lrparser.y"
    {printf ("found an control flow type statement" );(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 27:
#line 221 "lrparser.y"
    {printf ("found an reduction type statement" );(yyval.node)=(yyvsp[(1) - (2)].node);}
    break;

  case 28:
#line 222 "lrparser.y"
    {printf ("found bfs\n") ;(yyval.node)=(yyvsp[(1) - (1)].node); }
    break;

  case 29:
#line 223 "lrparser.y"
    {printf ("found block\n") ;(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 30:
#line 224 "lrparser.y"
    {printf ("found unary\n") ;(yyval.node)=Util::createNodeForUnaryStatements((yyvsp[(1) - (2)].node));}
    break;

  case 31:
#line 225 "lrparser.y"
    {printf ("found return\n") ;(yyval.node) = (yyvsp[(1) - (2)].node) ;}
    break;

  case 32:
#line 226 "lrparser.y"
    {printf ("found batch\n") ;(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 33:
#line 227 "lrparser.y"
    {printf ("found on add block\n") ;(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 34:
#line 228 "lrparser.y"
    {printf ("found delete block\n") ;(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 35:
#line 231 "lrparser.y"
    { (yyval.node)=Util::finishBlock();}
    break;

  case 36:
#line 233 "lrparser.y"
    {(yyval.node) = Util::createBatchBlockStmt((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node));}
    break;

  case 37:
#line 235 "lrparser.y"
    {(yyval.node) = Util::createOnAddBlock((yyvsp[(3) - (10)].node), (yyvsp[(5) - (10)].node), (yyvsp[(7) - (10)].node), (yyvsp[(10) - (10)].node));}
    break;

  case 38:
#line 237 "lrparser.y"
    {(yyval.node) = Util::createOnDeleteBlock((yyvsp[(3) - (10)].node), (yyvsp[(5) - (10)].node), (yyvsp[(7) - (10)].node), (yyvsp[(10) - (10)].node));}
    break;

  case 39:
#line 239 "lrparser.y"
    { Util::createNewBlock(); }
    break;

  case 41:
#line 243 "lrparser.y"
    {(yyval.node) = Util::createReturnStatementNode((yyvsp[(2) - (2)].node));}
    break;

  case 42:
#line 246 "lrparser.y"
    {
	                     Type* type=(Type*)(yyvsp[(1) - (2)].node);
	                     Identifier* id=(Identifier*)(yyvsp[(2) - (2)].node);
						 
						 if(type->isGraphType())
						    Util::storeGraphId(id);


                         (yyval.node)=Util::createNormalDeclNode((yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node));}
    break;

  case 43:
#line 255 "lrparser.y"
    {//Identifier* id=(Identifier*)Util::createIdentifierNode($2);
	                    
	                    (yyval.node)=Util::createAssignedDeclNode((yyvsp[(1) - (4)].node),(yyvsp[(2) - (4)].node),(yyvsp[(4) - (4)].node));}
    break;

  case 44:
#line 258 "lrparser.y"
    {//Identifier* id=(Identifier*)Util::createIdentifierNode($2);
	            
                         (yyval.node)=Util::createNormalDeclNode((yyvsp[(1) - (2)].node),(yyvsp[(2) - (2)].node)); }
    break;

  case 45:
#line 261 "lrparser.y"
    {//Identifier* id=(Identifier*)Util::createIdentifierNode($2);
	                   
	                    (yyval.node)=Util::createAssignedDeclNode((yyvsp[(1) - (4)].node),(yyvsp[(2) - (4)].node),(yyvsp[(4) - (4)].node));}
    break;

  case 46:
#line 264 "lrparser.y"
    {//Identifier* id=(Identifier*)Util::createIdentifierNode($2);
	                   
	                    (yyval.node)=Util::createAssignedDeclNode((yyvsp[(1) - (4)].node),(yyvsp[(2) - (4)].node),(yyvsp[(4) - (4)].node));}
    break;

  case 47:
#line 268 "lrparser.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node); }
    break;

  case 48:
#line 269 "lrparser.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 49:
#line 270 "lrparser.y"
    { (yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 50:
#line 271 "lrparser.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 51:
#line 274 "lrparser.y"
    { (yyval.node)=Util::createPrimitiveTypeNode(TYPE_INT);}
    break;

  case 52:
#line 275 "lrparser.y"
    { (yyval.node)=Util::createPrimitiveTypeNode(TYPE_FLOAT);}
    break;

  case 53:
#line 276 "lrparser.y"
    { (yyval.node)=Util::createPrimitiveTypeNode(TYPE_BOOL);}
    break;

  case 54:
#line 277 "lrparser.y"
    { (yyval.node)=Util::createPrimitiveTypeNode(TYPE_DOUBLE); }
    break;

  case 55:
#line 278 "lrparser.y"
    {(yyval.node)=(yyval.node)=Util::createPrimitiveTypeNode(TYPE_LONG);}
    break;

  case 56:
#line 279 "lrparser.y"
    {(yyval.node)=(yyval.node)=Util::createPrimitiveTypeNode(TYPE_STRING);}
    break;

  case 57:
#line 281 "lrparser.y"
    { (yyval.node)=Util::createPrimitiveTypeNode(TYPE_AUTOREF);}
    break;

  case 58:
#line 283 "lrparser.y"
    { (yyval.node)=Util::createGraphTypeNode(TYPE_GRAPH,NULL);}
    break;

  case 59:
#line 284 "lrparser.y"
    {(yyval.node)=Util::createGraphTypeNode(TYPE_DIRGRAPH,NULL);}
    break;

  case 60:
#line 286 "lrparser.y"
    { (yyval.node)=Util::createGNNTypeNode(TYPE_GNN,NULL);}
    break;

  case 61:
#line 288 "lrparser.y"
    { (yyval.node)=Util::createCollectionTypeNode(TYPE_LIST,NULL);}
    break;

  case 62:
#line 289 "lrparser.y"
    {//Identifier* id=(Identifier*)Util::createIdentifierNode($3);
			                     (yyval.node)=Util::createCollectionTypeNode(TYPE_SETN,(yyvsp[(3) - (4)].node));}
    break;

  case 63:
#line 291 "lrparser.y"
    {// Identifier* id=(Identifier*)Util::createIdentifierNode($3);
					                    (yyval.node)=Util::createCollectionTypeNode(TYPE_SETE,(yyvsp[(3) - (4)].node));}
    break;

  case 64:
#line 293 "lrparser.y"
    { (yyval.node)=Util::createCollectionTypeNode(TYPE_UPDATES,(yyvsp[(3) - (4)].node));}
    break;

  case 65:
#line 294 "lrparser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 66:
#line 295 "lrparser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 67:
#line 296 "lrparser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 68:
#line 297 "lrparser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 69:
#line 298 "lrparser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 70:
#line 300 "lrparser.y"
    {(yyval.node) = Util::createContainerTypeNode(TYPE_CONTAINER, (yyvsp[(3) - (9)].node), (yyvsp[(6) - (9)].aList)->AList, (yyvsp[(8) - (9)].node));}
    break;

  case 71:
#line 301 "lrparser.y"
    { (yyval.node) =  Util::createContainerTypeNode(TYPE_CONTAINER, (yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].aList)->AList, NULL);}
    break;

  case 72:
#line 302 "lrparser.y"
    { list<argument*> argList;
			                          (yyval.node) = Util::createContainerTypeNode(TYPE_CONTAINER, (yyvsp[(3) - (4)].node), argList, NULL);}
    break;

  case 73:
#line 305 "lrparser.y"
    {(yyval.node) = Util::createContainerTypeNode(TYPE_VECTOR, (yyvsp[(3) - (9)].node), (yyvsp[(6) - (9)].aList)->AList, (yyvsp[(8) - (9)].node));}
    break;

  case 74:
#line 306 "lrparser.y"
    { (yyval.node) =  Util::createContainerTypeNode(TYPE_VECTOR, (yyvsp[(3) - (7)].node), (yyvsp[(6) - (7)].aList)->AList, NULL);}
    break;

  case 75:
#line 307 "lrparser.y"
    { list<argument*> argList;
			                          (yyval.node) = Util::createContainerTypeNode(TYPE_VECTOR, (yyvsp[(3) - (4)].node), argList, NULL);}
    break;

  case 76:
#line 309 "lrparser.y"
    {(yyval.node) = Util::createNodeMapTypeNode(TYPE_NODEMAP, (yyvsp[(3) - (4)].node));}
    break;

  case 77:
#line 311 "lrparser.y"
    { list<argument*> argList;
			                          (yyval.node) = Util::createHashMapTypeNode(TYPE_HASHMAP, (yyvsp[(3) - (6)].node), argList, (yyvsp[(5) - (6)].node));}
    break;

  case 78:
#line 314 "lrparser.y"
    { list<argument*> argList;
			                          (yyval.node) = Util::createHashSetTypeNode(TYPE_HASHSET, (yyvsp[(3) - (4)].node), argList, NULL);}
    break;

  case 79:
#line 317 "lrparser.y"
    {(yyval.node)=Util::createNodeEdgeTypeNode(TYPE_NODE) ;}
    break;

  case 80:
#line 318 "lrparser.y"
    {(yyval.node)=Util::createNodeEdgeTypeNode(TYPE_EDGE);}
    break;

  case 81:
#line 319 "lrparser.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 82:
#line 321 "lrparser.y"
    { (yyval.node)=Util::createPropertyTypeNode(TYPE_PROPNODE,(yyvsp[(3) - (4)].node)); }
    break;

  case 83:
#line 322 "lrparser.y"
    { (yyval.node)=Util::createPropertyTypeNode(TYPE_PROPEDGE,(yyvsp[(3) - (4)].node)); }
    break;

  case 84:
#line 323 "lrparser.y"
    {  (yyval.node)=Util::createPropertyTypeNode(TYPE_PROPNODE,(yyvsp[(3) - (4)].node)); }
    break;

  case 85:
#line 324 "lrparser.y"
    {(yyval.node)=Util::createPropertyTypeNode(TYPE_PROPEDGE,(yyvsp[(3) - (4)].node));}
    break;

  case 86:
#line 325 "lrparser.y"
    {ASTNode* type = Util::createNodeEdgeTypeNode(TYPE_NODE);
			                         (yyval.node)=Util::createPropertyTypeNode(TYPE_PROPNODE, type); }
    break;

  case 87:
#line 327 "lrparser.y"
    {ASTNode* type = Util::createNodeEdgeTypeNode(TYPE_EDGE);
			                         (yyval.node)=Util::createPropertyTypeNode(TYPE_PROPNODE, type); }
    break;

  case 88:
#line 330 "lrparser.y"
    { printf("testassign\n");(yyval.node)=Util::createAssignmentNode((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));}
    break;

  case 89:
#line 331 "lrparser.y"
    {printf ("called assign for count\n") ; (yyval.node)=Util::createAssignmentNode((yyvsp[(1) - (3)].node) , (yyvsp[(3) - (3)].node));}
    break;

  case 90:
#line 334 "lrparser.y"
    { (yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 91:
#line 336 "lrparser.y"
    { (yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 92:
#line 337 "lrparser.y"
    { (yyval.node)=Util::createNodeForArithmeticExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_ADD);}
    break;

  case 93:
#line 338 "lrparser.y"
    { (yyval.node)=Util::createNodeForArithmeticExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_SUB);}
    break;

  case 94:
#line 339 "lrparser.y"
    {(yyval.node)=Util::createNodeForArithmeticExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_MUL);}
    break;

  case 95:
#line 340 "lrparser.y"
    {(yyval.node)=Util::createNodeForArithmeticExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_DIV);}
    break;

  case 96:
#line 341 "lrparser.y"
    {(yyval.node)=Util::createNodeForArithmeticExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_DIV);}
    break;

  case 97:
#line 342 "lrparser.y"
    {(yyval.node)=Util::createNodeForLogicalExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_AND);}
    break;

  case 98:
#line 343 "lrparser.y"
    {(yyval.node)=Util::createNodeForLogicalExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_OR);}
    break;

  case 99:
#line 344 "lrparser.y"
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_LE);}
    break;

  case 100:
#line 345 "lrparser.y"
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_GE);}
    break;

  case 101:
#line 346 "lrparser.y"
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_LT);}
    break;

  case 102:
#line 347 "lrparser.y"
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_GT);}
    break;

  case 103:
#line 348 "lrparser.y"
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_EQ);}
    break;

  case 104:
#line 349 "lrparser.y"
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),OPERATOR_NE);}
    break;

  case 105:
#line 350 "lrparser.y"
    {(yyval.node)=Util::createNodeForUnaryExpr((yyvsp[(2) - (2)].node),OPERATOR_NOT);}
    break;

  case 106:
#line 351 "lrparser.y"
    { Expression* expr=(Expression*)(yyvsp[(2) - (3)].node);
				                     expr->setEnclosedBrackets();
			                        (yyval.node)=expr;}
    break;

  case 107:
#line 354 "lrparser.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 108:
#line 355 "lrparser.y"
    { (yyval.node)=Util::createNodeForId((yyvsp[(1) - (1)].node));}
    break;

  case 109:
#line 356 "lrparser.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 110:
#line 357 "lrparser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 111:
#line 359 "lrparser.y"
    {printf("first done this \n");(yyval.node) = Util::createNodeForIndexExpr((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), OPERATOR_INDEX);}
    break;

  case 112:
#line 361 "lrparser.y"
    {(yyval.node)=Util::createNodeForUnaryExpr((yyvsp[(1) - (2)].node),OPERATOR_INC);}
    break;

  case 113:
#line 362 "lrparser.y"
    {(yyval.node)=Util::createNodeForUnaryExpr((yyvsp[(1) - (2)].node),OPERATOR_DEC);}
    break;

  case 114:
#line 364 "lrparser.y"
    { 
                                       
                                       (yyval.node) = Util::createNodeForProcCall((yyvsp[(1) - (4)].node),(yyvsp[(3) - (4)].aList)->AList,NULL); 

									    }
    break;

  case 115:
#line 369 "lrparser.y"
    { ASTNode* id = Util::createIdentifierNode("Incremental");
			                                   (yyval.node) = Util::createNodeForProcCall(id, (yyvsp[(3) - (4)].aList)->AList,NULL); 

				                               }
    break;

  case 116:
#line 373 "lrparser.y"
    { ASTNode* id = Util::createIdentifierNode("Decremental");
			                                   (yyval.node) = Util::createNodeForProcCall(id, (yyvsp[(3) - (4)].aList)->AList,NULL); 

				                               }
    break;

  case 117:
#line 378 "lrparser.y"
    {
                                                   
													 Expression* expr = (Expression*)(yyvsp[(1) - (6)].node);
                                                     (yyval.node) = Util::createNodeForProcCall((yyvsp[(3) - (6)].node) , (yyvsp[(5) - (6)].aList)->AList, expr); 

									                 }
    break;

  case 118:
#line 389 "lrparser.y"
    { (yyval.node) = Util::createNodeForIval((yyvsp[(1) - (1)].ival)); }
    break;

  case 119:
#line 390 "lrparser.y"
    {(yyval.node) = Util::createNodeForFval((yyvsp[(1) - (1)].fval));}
    break;

  case 120:
#line 391 "lrparser.y"
    { (yyval.node) = Util::createNodeForBval((yyvsp[(1) - (1)].bval));}
    break;

  case 121:
#line 392 "lrparser.y"
    { (yyval.node) = Util::createNodeForSval((yyvsp[(1) - (1)].text));}
    break;

  case 122:
#line 393 "lrparser.y"
    {(yyval.node)=Util::createNodeForINF(true);}
    break;

  case 123:
#line 394 "lrparser.y"
    {(yyval.node)=Util::createNodeForINF(true);}
    break;

  case 124:
#line 395 "lrparser.y"
    {(yyval.node)=Util::createNodeForINF(false);}
    break;

  case 125:
#line 398 "lrparser.y"
    { (yyval.node)=(yyvsp[(1) - (1)].node); }
    break;

  case 126:
#line 399 "lrparser.y"
    { (yyval.node)=(yyvsp[(1) - (1)].node); }
    break;

  case 127:
#line 401 "lrparser.y"
    { (yyval.node)=Util::createNodeForFixedPointStmt((yyvsp[(4) - (8)].node),(yyvsp[(6) - (8)].node),(yyvsp[(8) - (8)].node));}
    break;

  case 128:
#line 402 "lrparser.y"
    {(yyval.node)=Util::createNodeForWhileStmt((yyvsp[(3) - (5)].node),(yyvsp[(5) - (5)].node)); }
    break;

  case 129:
#line 403 "lrparser.y"
    {(yyval.node)=Util::createNodeForDoWhileStmt((yyvsp[(5) - (7)].node),(yyvsp[(2) - (7)].node));  }
    break;

  case 130:
#line 404 "lrparser.y"
    { 
																				(yyval.node)=Util::createNodeForForAllStmt((yyvsp[(3) - (10)].node),(yyvsp[(5) - (10)].node),(yyvsp[(7) - (10)].node),(yyvsp[(8) - (10)].node),(yyvsp[(10) - (10)].node),true);}
    break;

  case 131:
#line 406 "lrparser.y"
    { (yyval.node)=Util::createNodeForForStmt((yyvsp[(3) - (7)].node),(yyvsp[(5) - (7)].node),(yyvsp[(7) - (7)].node),true);}
    break;

  case 132:
#line 407 "lrparser.y"
    { (yyval.node)=Util::createNodeForForStmt((yyvsp[(3) - (7)].node),(yyvsp[(5) - (7)].node),(yyvsp[(7) - (7)].node),false);}
    break;

  case 133:
#line 408 "lrparser.y"
    {(yyval.node)=Util::createNodeForForAllStmt((yyvsp[(3) - (10)].node),(yyvsp[(5) - (10)].node),(yyvsp[(7) - (10)].node),(yyvsp[(8) - (10)].node),(yyvsp[(10) - (10)].node),false);}
    break;

  case 134:
#line 409 "lrparser.y"
    {(yyval.node) = Util::createNodeForForStmt((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node), false);}
    break;

  case 135:
#line 410 "lrparser.y"
    {(yyval.node) = Util::createNodeForForStmt((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].node), true);}
    break;

  case 136:
#line 412 "lrparser.y"
    { (yyval.node)=NULL;}
    break;

  case 137:
#line 413 "lrparser.y"
    { (yyval.node)=(yyvsp[(4) - (5)].node);}
    break;

  case 138:
#line 415 "lrparser.y"
    { (yyval.node)=(yyvsp[(1) - (1)].node) ;}
    break;

  case 139:
#line 417 "lrparser.y"
    { (yyval.node)=Util::createNodeForIfStmt((yyvsp[(3) - (5)].node),(yyvsp[(5) - (5)].node),NULL); }
    break;

  case 140:
#line 418 "lrparser.y"
    {(yyval.node)=Util::createNodeForIfStmt((yyvsp[(3) - (7)].node),(yyvsp[(5) - (7)].node),(yyvsp[(7) - (7)].node)); }
    break;

  case 141:
#line 421 "lrparser.y"
    { (yyval.node)=Util::createNodeForReductionStmt((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node)) ;}
    break;

  case 142:
#line 422 "lrparser.y"
    { reductionCall* reduc=(reductionCall*)(yyvsp[(6) - (9)].node);
		                                                               (yyval.node)=Util::createNodeForReductionStmtList((yyvsp[(2) - (9)].nodeList)->ASTNList,reduc,(yyvsp[(8) - (9)].nodeList)->ASTNList);}
    break;

  case 143:
#line 424 "lrparser.y"
    {(yyval.node)=Util::createNodeForReductionOpStmt((yyvsp[(1) - (3)].node),(yyvsp[(2) - (3)].ival),(yyvsp[(3) - (3)].node));}
    break;

  case 144:
#line 425 "lrparser.y"
    {printf ("here calling creation for red op\n") ;(yyval.node)=Util::createNodeForReductionOpStmt ((yyvsp[(1) - (3)].node),(yyvsp[(2) - (3)].ival),(yyvsp[(3) - (3)].node));}
    break;

  case 145:
#line 428 "lrparser.y"
    {(yyval.ival)=OPERATOR_ADDASSIGN;}
    break;

  case 146:
#line 429 "lrparser.y"
    {(yyval.ival)=OPERATOR_MULASSIGN;}
    break;

  case 147:
#line 430 "lrparser.y"
    {(yyval.ival)=OPERATOR_ORASSIGN;}
    break;

  case 148:
#line 431 "lrparser.y"
    {(yyval.ival)=OPERATOR_ANDASSIGN;}
    break;

  case 149:
#line 432 "lrparser.y"
    {(yyval.ival)=OPERATOR_SUBASSIGN;}
    break;

  case 150:
#line 434 "lrparser.y"
    { (yyval.nodeList)=Util::addToNList((yyvsp[(3) - (3)].nodeList),(yyvsp[(1) - (3)].node));
                                         }
    break;

  case 151:
#line 436 "lrparser.y"
    { (yyval.nodeList)=Util::createNList((yyvsp[(1) - (1)].node));;}
    break;

  case 152:
#line 438 "lrparser.y"
    { (yyval.nodeList)=Util::addToNList((yyvsp[(3) - (3)].nodeList),(yyvsp[(1) - (3)].node));}
    break;

  case 153:
#line 439 "lrparser.y"
    { ASTNode* node = Util::createNodeForId((yyvsp[(1) - (3)].node));
			                         (yyval.nodeList)=Util::addToNList((yyvsp[(3) - (3)].nodeList),node);}
    break;

  case 154:
#line 441 "lrparser.y"
    { (yyval.nodeList)=Util::createNList((yyvsp[(1) - (1)].node));}
    break;

  case 155:
#line 442 "lrparser.y"
    { ASTNode* node = Util::createNodeForId((yyvsp[(1) - (1)].node));
			            (yyval.nodeList)=Util::createNList(node);}
    break;

  case 156:
#line 451 "lrparser.y"
    {(yyval.node)=Util::createNodeforReductionCall((yyvsp[(1) - (4)].ival),(yyvsp[(3) - (4)].aList)->AList);}
    break;

  case 157:
#line 453 "lrparser.y"
    { (yyval.ival)=REDUCE_SUM;}
    break;

  case 158:
#line 454 "lrparser.y"
    {(yyval.ival)=REDUCE_COUNT;}
    break;

  case 159:
#line 455 "lrparser.y"
    {(yyval.ival)=REDUCE_PRODUCT;}
    break;

  case 160:
#line 456 "lrparser.y"
    {(yyval.ival)=REDUCE_MAX;}
    break;

  case 161:
#line 457 "lrparser.y"
    {(yyval.ival)=REDUCE_MIN;}
    break;

  case 162:
#line 459 "lrparser.y"
    { (yyval.node)=(yyvsp[(1) - (1)].node); }
    break;

  case 163:
#line 460 "lrparser.y"
    { printf("Here hello \n"); (yyval.node)=(yyvsp[(1) - (1)].node); }
    break;

  case 164:
#line 461 "lrparser.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 165:
#line 462 "lrparser.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 166:
#line 465 "lrparser.y"
    {
                 argList* aList=new argList();
				 (yyval.aList)=aList;  }
    break;

  case 167:
#line 469 "lrparser.y"
    {argument* a1=new argument();
		                          assignment* assign=(assignment*)(yyvsp[(1) - (3)].node);
		                     a1->setAssign(assign);
							 a1->setAssignFlag();
		                 //a1->assignExpr=(assignment*)$1;
						 // a1->assign=true;
						  (yyval.aList)=Util::addToAList((yyvsp[(3) - (3)].aList),a1);
						  /*
						  for(argument* arg:$$->AList)
						  {
							  printf("VALUE OF ARG %d",arg->getAssignExpr()); //rm for warnings
						  }
						  */ 
						  
                          }
    break;

  case 168:
#line 486 "lrparser.y"
    {argument* a1=new argument();
		                                Expression* expr=(Expression*)(yyvsp[(1) - (3)].node);
										a1->setExpression(expr);
										a1->setExpressionFlag();
						               // a1->expressionflag=true;
										 (yyval.aList)=Util::addToAList((yyvsp[(3) - (3)].aList),a1);
						                }
    break;

  case 169:
#line 493 "lrparser.y"
    {argument* a1=new argument();
		                 Expression* expr=(Expression*)(yyvsp[(1) - (1)].node);
						 a1->setExpression(expr);
						a1->setExpressionFlag();
						  (yyval.aList)=Util::createAList(a1); }
    break;

  case 170:
#line 498 "lrparser.y"
    { argument* a1=new argument();
		                   assignment* assign=(assignment*)(yyvsp[(1) - (1)].node);
		                     a1->setAssign(assign);
							 a1->setAssignFlag();
						   (yyval.aList)=Util::createAList(a1);
						   }
    break;

  case 171:
#line 506 "lrparser.y"
    {(yyval.node)=Util::createIterateInBFSNode((yyvsp[(3) - (13)].node),(yyvsp[(5) - (13)].node),(yyvsp[(7) - (13)].node),(yyvsp[(9) - (13)].node),(yyvsp[(11) - (13)].node),(yyvsp[(12) - (13)].node),(yyvsp[(13) - (13)].node)) ;}
    break;

  case 172:
#line 507 "lrparser.y"
    {(yyval.node)=Util::createIterateInBFSNode((yyvsp[(3) - (12)].node),(yyvsp[(5) - (12)].node),(yyvsp[(7) - (12)].node),(yyvsp[(9) - (12)].node),(yyvsp[(11) - (12)].node),(yyvsp[(12) - (12)].node),NULL) ; }
    break;

  case 173:
#line 511 "lrparser.y"
    {(yyval.node)=Util::createIterateInReverseBFSNode(NULL,(yyvsp[(2) - (2)].node));}
    break;

  case 174:
#line 512 "lrparser.y"
    {(yyval.node)=Util::createIterateInReverseBFSNode((yyvsp[(3) - (5)].node),(yyvsp[(5) - (5)].node));}
    break;

  case 175:
#line 515 "lrparser.y"
    { //Identifier* id1=(Identifier*)Util::createIdentifierNode($1);
                  // Identifier* id2=(Identifier*)Util::createIdentifierNode($1);
				   (yyval.node) = Util::createPropIdNode((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));
				    }
    break;

  case 176:
#line 519 "lrparser.y"
    { ASTNode* expr1 = Util::createNodeForId((yyvsp[(3) - (6)].node));
	                          ASTNode* expr2 = Util::createNodeForId((yyvsp[(5) - (6)].node));
							  ASTNode* indexexpr =  Util::createNodeForIndexExpr(expr1, expr2, OPERATOR_INDEX);
	                          (yyval.node) = Util::createPropIdNode((yyvsp[(1) - (6)].node) , indexexpr);}
    break;

  case 177:
#line 526 "lrparser.y"
    {// Identifier* id1=(Identifier*)Util::createIdentifierNode($1);
                  // Identifier* id2=(Identifier*)Util::createIdentifierNode($1);
				   (yyval.node)=Util::createPropIdNode((yyvsp[(1) - (5)].node),(yyvsp[(3) - (5)].node));
				    }
    break;

  case 178:
#line 530 "lrparser.y"
    { 
	         (yyval.node)=Util::createIdentifierNode((yyvsp[(1) - (1)].text));  

            
            }
    break;


/* Line 1267 of yacc.c.  */
#line 3051 "y.tab.c"
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


#line 538 "lrparser.y"


void create_directory(const char *backendTarget) {
    char directory_name[256];
    snprintf(directory_name, sizeof(directory_name), "../graphcode/generated_S", backendTarget);

    // Check if directory already exists
    struct stat st = {0};
    if (stat(directory_name, &st) == -1) {
        // Create the directory
        if (mkdir(directory_name, 0700) == 0) {
            printf("Directory created: %s\n", directory_name);
        } else {
            perror("mkdir failed");
        }
    } else {
        printf("Directory already exists: %s\n", directory_name);
    }
}

void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
}


int main(int argc,char **argv) 
{
  
  if(argc<4){
    std::cout<< "Usage: " << argv[0] << " [-s|-d] -f <dsl.sp> -b [cuda|omp|mpi|acc|multigpu|amd] " << '\n';
    std::cout<< "E.g. : " << argv[0] << " -s -f ../graphcode/sssp_dslV2 -b omp " << '\n';
    exit(-1);
  }
  
    //dsl_cpp_generator cpp_backend;
    SymbolTableBuilder stBuilder;
     FILE    *fd;
     
  int opt;
  char* fileName=NULL;
  backendTarget = NULL;
  bool staticGen = false;
  bool dynamicGen = false;
  bool optimize = false;

  while ((opt = getopt(argc, argv, "sdf:b:o")) != -1) 
  {
     switch (opt) 
     {
      case 'f':
        fileName = optarg;
        break;
      case 'b':
        backendTarget = optarg;
        break;
      case 's':
	    staticGen = true;
		break;
	  case 'd':
	    dynamicGen = true;
        break;	
	  case 'o':
	  	optimize = true;
		break;	
      case '?':
        fprintf(stderr,"Unknown option: %c\n", optopt);
		exit(-1);
        break;
      case ':':
        fprintf(stderr,"Missing arg for %c\n", optopt);
		exit(-1);
        break;
     }
  }
   
   printf("fileName %s\n",fileName);
   printf("Backend Target %s\n",backendTarget);

   
   if(fileName==NULL||backendTarget==NULL)
   {
	   if(fileName==NULL)
	      fprintf(stderr,"FileName option Error!\n");
	   if(backendTarget==NULL)
	      fprintf(stderr,"backendTarget option Error!\n")	;
	   exit(-1);	    
   }
   else
    {

		if(!((strcmp(backendTarget,"omp")==0)|| (strcmp(backendTarget,"amd")==0) || (strcmp(backendTarget,"mpi")==0)||(strcmp(backendTarget,"cuda")==0) || (strcmp(backendTarget,"acc")==0) || (strcmp(backendTarget,"sycl")==0)|| (strcmp(backendTarget,"multigpu")==0)))

		   {
			  fprintf(stderr, "Specified backend target is not implemented in the current version!\n");
			   exit(-1);
		   }
	}

   if(!(staticGen || dynamicGen)) {
		fprintf(stderr, "Type of graph(static/dynamic) not specified!\n");
		exit(-1);
     }
	  
     

   // only create a directory if the passed option is a valid option
   create_directory(backendTarget);
   yyin= fopen(fileName,"r");
   
   if(!yyin) {
	printf("file doesn't exists!\n");
	exit(-1);
   }
   
   
   int error=yyparse();
   printf("error val %d\n",error);


	if(error!=1)
	{
     //TODO: redirect to different backend generator after comparing with the 'b' option
    std::cout << "at 1" << std::endl;
	stBuilder.buildST(frontEndContext.getFuncList());
	frontEndContext.setDynamicLinkFuncs(stBuilder.getDynamicLinkedFuncs());
	std::cout << "at 2" << std::endl;

	if(staticGen)
	  {
		  /*
		  if(optimize)
		  {
			  attachPropAnalyser apAnalyser;
			  apAnalyser.analyse(frontEndContext.getFuncList());

			  dataRaceAnalyser drAnalyser;
			  drAnalyser.analyse(frontEndContext.getFuncList());
			  
			  if(strcmp(backendTarget,"cuda")==0)
			  {
			  	deviceVarsAnalyser dvAnalyser;
				//cpp_backend.setOptimized();
			  	dvAnalyser.analyse(frontEndContext.getFuncList());
			  }
		  }
		  */
	  //cpp_backend.setFileName(fileName);
	  //cpp_backend.generate();
     if (strcmp(backendTarget, "cuda") == 0) {
        spcuda::dsl_cpp_generator cpp_backend;
        cpp_backend.setFileName(fileName);
	//~ cpp_backend.setOptimized();
	
	if (optimize) {
	  attachPropAnalyser apAnalyser;
	  apAnalyser.analyse(frontEndContext.getFuncList());

	  dataRaceAnalyser drAnalyser;
	  drAnalyser.analyse(frontEndContext.getFuncList());

	  deviceVarsAnalyser dvAnalyser;
	  dvAnalyser.analyse(frontEndContext.getFuncList());
	  cpp_backend.setOptimized();
	}
		  
        cpp_backend.generate();
      } 
      else if (strcmp(backendTarget, "omp") == 0) {
        spomp::dsl_cpp_generator cpp_backend;
	std::cout<< "size:" << frontEndContext.getFuncList().size() << '\n';
        cpp_backend.setFileName(fileName);
        cpp_backend.generate();
      } 
	  else if (strcmp(backendTarget, "mpi") == 0) {
        spmpi::dsl_cpp_generator cpp_backend;
		std::cout<< "size:" << frontEndContext.getFuncList().size() << '\n';
        cpp_backend.setFileName(fileName);
        cpp_backend.generate();
      } 
      else if (strcmp(backendTarget, "acc") == 0) {
        spacc::dsl_cpp_generator cpp_backend;
        cpp_backend.setFileName(fileName);
		if(optimize) {
			cpp_backend.setOptimized();
			blockVarsAnalyser bvAnalyser;
			bvAnalyser.analyse(frontEndContext.getFuncList());
		}
        cpp_backend.generate();
      }
	  else if(strcmp(backendTarget, "multigpu") == 0){
		spmultigpu::dsl_cpp_generator cpp_backend;
		pushpullAnalyser pp;
		pp.analyse(frontEndContext.getFuncList());
		cpp_backend.setFileName(fileName);
		cpp_backend.generate();
}
	  else if (strcmp(backendTarget, "sycl") == 0) {
		std::cout<<"GENERATING SYCL CODE"<<std::endl;
        spsycl::dsl_cpp_generator cpp_backend;
        cpp_backend.setFileName(fileName);
        cpp_backend.generate();
	  }
	  else if (strcmp(backendTarget, "amd") == 0) {
		std::cout<<"GENERATING OPENCL CODE"<<std::endl;
        spamd::dsl_cpp_generator cpp_backend;
        cpp_backend.setFileName(fileName);
        cpp_backend.generate();
	  }
      else
	    std::cout<< "invalid backend" << '\n';
	  }
	else 
	 {
		if(strcmp(backendTarget, "omp") == 0) {
		   spdynomp::dsl_dyn_cpp_generator cpp_dyn_gen;
		   cpp_dyn_gen.setFileName(fileName);
	       cpp_dyn_gen.generate();
		}
		if(strcmp(backendTarget, "mpi") == 0){
		   spdynmpi::dsl_dyn_cpp_generator cpp_dyn_gen;
		   std::cout<<"created dyn mpi"<<std::endl;
		   cpp_dyn_gen.setFileName(fileName);
		   std::cout<<"file name set"<<std::endl;
	       cpp_dyn_gen.generate();	
		}
	 }
	
   }

	printf("finished successfully\n");
   
   /* to generate code, ./finalcode -s/-d -f "filename" -b "backendname"*/
	return 0;   
	 
}

