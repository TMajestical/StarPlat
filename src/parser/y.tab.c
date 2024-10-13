/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "lrparser.y" /* yacc.c:339  */

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

#line 102 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 42 "lrparser.y" /* yacc.c:355  */

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
     

#line 321 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 338 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   917

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  414

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   337

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   109,   111,   118,   124,   130,   136,   142,
     149,   150,   153,   154,   155,   157,   174,   180,   188,   189,
     192,   195,   196,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   212,   214,   216,   218,   220,
     222,   224,   227,   236,   239,   242,   245,   249,   250,   251,
     252,   255,   256,   257,   258,   259,   260,   262,   264,   265,
     267,   269,   270,   272,   274,   275,   276,   277,   278,   279,
     281,   282,   283,   286,   287,   288,   290,   292,   295,   298,
     299,   300,   302,   303,   304,   305,   306,   308,   311,   312,
     315,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   335,   336,   337,
     338,   340,   342,   343,   345,   350,   354,   359,   370,   371,
     372,   373,   374,   375,   376,   379,   380,   382,   383,   384,
     385,   387,   388,   389,   390,   391,   393,   394,   396,   398,
     399,   402,   403,   405,   406,   409,   410,   411,   412,   413,
     415,   417,   419,   420,   422,   423,   432,   434,   435,   436,
     437,   438,   440,   441,   442,   443,   446,   450,   467,   474,
     479,   487,   488,   492,   493,   496,   500,   507,   511
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "function_data", "paramList", "type", "param", "by_reference",
  "function_body", "statements", "statement", "blockstatements",
  "batch_blockstmt", "on_add_blockstmt", "on_delete_blockstmt",
  "block_begin", "block_end", "return_stmt", "declaration", "type1",
  "primitive", "type3", "graph", "gnn", "collections", "container",
  "vector", "nodemap", "hashmap", "hashset", "type2", "property",
  "assignment", "rhs", "expression", "indexExpr", "unary_expr",
  "proc_call", "val", "control_flow", "iteration_cf", "filterExpr",
  "boolean_expr", "selection_cf", "reduction", "reduce_op", "leftList",
  "rightList", "reductionCall", "reduction_calls", "leftSide", "arg_list",
  "bfs_abstraction", "reverse_abstraction", "oid", "tid", "id", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -352

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-352)))

#define YYTABLE_NINF -178

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -352,    23,  -352,   -73,   -40,    63,   -73,   -73,  -352,    -2,
    -352,    84,   852,   852,   109,   115,  -352,  -352,  -352,  -352,
     852,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,
    -352,  -352,  -352,   103,   124,   118,   126,   127,   128,   129,
     130,  -352,   132,   133,   131,   125,   136,  -352,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,   125,  -352,
     135,   852,   852,   401,   147,   -73,   852,   852,   852,   852,
     852,   484,   835,   -73,   -73,  -352,  -352,   -73,   852,   -73,
    -352,   149,   150,   153,   155,  -352,  -352,  -352,   160,   161,
     101,    -2,   196,   162,   163,   165,   166,   167,   168,  -352,
    -352,  -352,  -352,   101,   101,  -352,   101,  -352,  -352,  -352,
    -352,  -352,  -352,   145,   169,   -73,   -73,   -73,   172,   595,
      25,   179,   180,  -352,  -352,  -352,  -352,   184,    24,  -352,
    -352,  -352,   164,  -352,   137,   139,  -352,   170,   176,   197,
     210,   211,   213,   221,   222,   228,   231,   239,   240,  -352,
    -352,   235,  -352,  -352,   -73,   -73,   101,   101,   763,   -67,
    -352,  -352,   236,   313,   242,   -73,   101,   101,   -73,   -73,
     -73,   763,   250,   -52,   654,   763,  -352,  -352,   238,   241,
     245,  -352,  -352,  -352,  -352,  -352,  -352,  -352,  -352,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,  -352,  -352,  -352,   101,
     570,   101,   -73,  -352,   254,  -352,   256,   852,  -352,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,  -352,   -73,   321,   328,
     763,   257,   259,   261,   -73,   333,   262,   678,   -61,   265,
     266,   271,   339,   340,   264,   101,  -352,   101,   101,   101,
     786,   233,    73,    73,   795,   795,    73,    73,    96,    96,
     -32,   -32,   -32,   619,   763,   273,  -352,   763,   276,  -352,
    -352,  -352,  -352,  -352,  -352,  -352,   279,   763,    26,   101,
     101,   286,   282,   101,   101,   500,    -2,   101,   292,   -73,
     101,   101,   101,  -352,  -352,   101,   -73,   -73,   293,  -352,
    -352,  -352,  -352,  -352,   101,  -352,   101,   -73,   -73,   -66,
     -21,  -352,  -352,    57,     8,   287,   107,    18,   288,   369,
    -352,   295,   101,   297,  -352,  -352,   696,   299,   300,   148,
     306,   307,  -352,   289,  -352,   852,  -352,   852,    -2,    -2,
     101,    -2,    -2,   101,   500,   294,   721,   101,    -2,   101,
     101,   308,    -6,  -352,  -352,   323,   325,  -352,  -352,    -8,
     -26,  -352,  -352,    -8,  -352,  -352,    -2,   335,  -352,   329,
     331,   101,  -352,  -352,   402,   332,   -73,   336,  -352,   -73,
     344,   346,   337,   347,   -51,   342,    -2,   -18,    -2,   343,
      -2,    -2,   101,  -352,   101,   101,  -352,  -352,   338,  -352,
    -352,  -352,  -352,   345,    -2,  -352,   364,    20,  -352,   101,
    -352,   348,    -2,  -352
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     3,     0,
     178,     0,     0,     0,     0,     0,    39,     4,    20,    21,
       0,    51,    52,    53,    56,    54,    55,    57,    58,    60,
      59,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,     0,     0,    18,    10,    12,    47,    14,
      48,    50,    49,    65,    66,    67,    68,    69,    13,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,    19,     0,     0,     0,
       8,     0,     0,     0,     0,   123,   122,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     119,   120,   121,     0,     0,    40,     0,    22,    29,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
     110,   109,    91,   107,    26,   126,   125,     0,   108,    28,
     163,   164,   162,     5,     0,     0,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      11,    16,     6,     9,     0,     0,     0,     0,    41,   110,
     109,    91,   108,     0,     0,     0,   166,   166,     0,     0,
       0,     0,     0,   108,     0,   105,    31,    23,    42,     0,
      44,    24,   145,   149,   146,   148,   147,   112,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    25,    27,   166,
       0,     0,     0,    64,    72,    76,    75,     0,    78,    86,
      87,    82,    84,    83,    85,    62,    63,     0,     0,     0,
     138,     0,     0,     0,     0,     0,   170,   169,   108,     0,
       0,     0,     0,     0,     0,     0,   106,     0,     0,     0,
      97,    98,    99,   100,   103,   104,   101,   102,    92,    93,
      94,    95,    96,     0,   144,   108,    89,    90,     0,   157,
     158,   159,   160,   161,    88,   141,     0,   143,   175,   166,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     166,   166,     0,   115,   116,     0,     0,     0,     0,   150,
      43,    46,    45,   111,   166,   114,   166,     0,     0,     0,
       0,    77,    17,   110,   108,   162,   110,   108,   162,   139,
     128,     0,     0,     0,   167,   168,     0,     0,     0,     0,
       0,     0,   177,     0,    71,     0,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   156,   176,     0,     0,   135,   131,    91,
     162,   134,   132,    91,   140,   129,     0,    91,    36,    91,
      91,     0,    70,    73,     0,     0,     0,     0,   127,     0,
       0,     0,   107,     0,   108,     0,     0,   175,     0,     0,
       0,     0,     0,   142,     0,     0,   130,   133,   136,    37,
      38,   152,   153,     0,     0,   137,   172,     0,   171,     0,
     173,     0,     0,   174
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -352,  -352,  -352,  -352,     2,   -33,  -352,   379,  -352,  -352,
    -279,    -9,  -352,  -352,  -352,  -352,  -352,  -352,  -352,   -59,
      55,   -50,  -352,  -352,   134,  -352,  -352,  -352,  -352,  -352,
      -4,  -352,   -49,  -144,   -58,    83,   -46,   -34,  -326,  -352,
    -352,  -351,  -139,  -352,  -352,   311,   195,  -339,   113,  -352,
      -1,  -123,  -352,  -352,  -352,  -352,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     8,     9,    44,    45,    46,    77,    17,    63,
     107,   108,   109,   110,   111,    19,   112,   113,   114,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
     136,    59,   236,   274,   171,   159,   160,   161,   123,   124,
     125,   375,   231,   126,   127,   203,   172,   383,   275,   276,
     162,   239,   129,   408,   130,   131,   132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,   187,   188,    10,   115,   119,   319,    11,    58,    58,
      14,    15,   377,   116,   118,    60,    58,   121,   232,  -117,
    -117,  -117,    64,     2,  -117,  -165,  -117,   334,   335,   122,
     204,   209,   158,   135,   137,   138,   139,   140,     3,   292,
     209,   209,   245,   394,   240,   382,   174,   404,   175,   182,
     183,   184,    12,   401,   185,   402,   186,    58,    58,   117,
    -117,   266,   128,    81,    82,   364,   382,  -175,   382,   134,
     202,   376,   336,   337,    58,  -177,   308,   147,   148,   307,
     150,   149,   163,   151,   308,  -136,   268,  -117,  -117,   374,
    -117,  -117,     4,     5,     6,     7,    16,  -117,   230,   230,
     209,   339,   173,   300,   301,   302,   187,   188,   237,   237,
     209,   342,   409,    85,    86,    87,   209,  -165,    16,   178,
     179,   180,   204,   307,   210,   205,   143,   145,   308,   187,
     188,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   120,   267,   321,  -165,
     338,   237,   267,   277,   204,    13,   309,   310,   228,   229,
     197,   198,   199,   200,   201,   238,   238,   324,   325,   235,
      94,    95,   241,   242,   243,   202,    20,    10,    99,   100,
     101,   330,   102,   331,   281,   199,   200,   201,    65,   267,
     267,   267,   269,   104,   270,   271,   272,   273,   202,  -165,
     341,    61,   106,   265,   204,   144,   146,    62,   238,    66,
      67,    68,    69,    70,    71,    72,   278,    73,    74,   164,
      76,   237,   237,   213,    75,   214,   115,   119,    80,   230,
      78,   282,   237,   237,   267,   116,   118,   326,   288,   121,
     133,   176,   152,   153,   173,   154,   237,   155,   237,   120,
     120,   122,   156,   157,   165,   166,   403,   167,   168,   169,
     170,   212,   216,   215,   346,   177,   187,   188,   181,   189,
     411,   191,   192,   193,   194,   206,   207,   320,   238,   238,
     208,   117,   314,   317,   128,   115,   119,   315,   318,   238,
     238,   217,   120,   323,   116,   118,   218,   219,   121,   220,
     327,   328,   355,   238,   356,   238,   359,   221,   222,   363,
     122,   332,   333,   367,   223,   369,   370,   224,   195,   196,
     197,   198,   199,   200,   201,   225,   226,   227,   209,   357,
     358,   233,   361,   362,   234,   202,   244,   230,   247,   368,
     117,   248,   283,   128,   360,   249,   279,   360,   280,   284,
     285,   230,   286,   287,   289,   295,   290,   378,   293,   294,
     296,   297,   120,   120,   298,   304,   313,   316,   120,   305,
     384,   306,   311,   120,   120,   312,   322,   396,   329,   397,
     387,   399,   400,   389,   340,   343,   344,   120,   345,   120,
     365,   384,   354,   384,   347,   406,   349,   350,   410,   352,
     353,   379,   371,   413,    21,    22,    23,    24,    25,    26,
      27,    83,    84,    85,    86,    87,   372,    88,   373,    89,
      90,    91,   380,    92,   381,   386,   385,   120,   390,   388,
     391,   392,   407,   393,   395,   374,   398,    79,   405,   211,
     299,   412,   351,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     0,    93,     0,
      94,    95,     0,     0,    96,    97,    98,    10,    99,   100,
     101,     0,   102,     0,     0,     0,   103,    21,    22,    23,
      24,    25,    26,   104,     0,     0,     0,     0,     0,    16,
     105,     0,   106,    21,    22,    23,    24,    25,    26,    27,
      83,    84,    85,    86,    87,     0,    88,     0,    89,    90,
      91,     0,    92,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   141,   142,    33,
      34,    35,    36,    37,    38,     0,     0,    41,    42,    43,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     0,    93,     0,    94,
      95,     0,     0,    96,    97,    98,    10,    99,   100,   101,
       0,   102,    85,    86,    87,   103,     0,     0,     0,     0,
       0,     0,   104,     0,     0,     0,     0,     0,    16,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   269,     0,   270,   271,   272,   273,
     182,   183,   184,     0,     0,   185,     0,   186,   187,   188,
       0,   189,   190,   191,   192,   193,   194,     0,     0,    94,
      95,     0,     0,     0,     0,     0,    10,    99,   100,   101,
       0,   102,   187,   188,     0,   189,   190,   191,   192,   193,
     194,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,     0,     0,
     195,   196,   197,   198,   199,   200,   201,   187,   188,     0,
     189,   190,   191,   192,   193,   194,     0,   202,     0,     0,
       0,     0,     0,     0,   195,   196,   197,   198,   199,   200,
     201,   187,   188,     0,   189,   190,   191,   192,   193,   194,
       0,   202,   303,     0,     0,     0,     0,     0,     0,   187,
     188,     0,   189,   190,   191,   192,   193,   194,     0,   195,
     196,   197,   198,   199,   200,   201,     0,   246,     0,     0,
       0,     0,     0,     0,   187,   188,   202,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
       0,     0,   291,     0,     0,     0,     0,     0,     0,     0,
     202,   195,   196,   197,   198,   199,   200,   201,     0,   348,
       0,     0,     0,     0,     0,     0,   187,   188,   202,   189,
     190,   191,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,     0,   366,     0,     0,     0,     0,   187,
     188,     0,     0,   202,   191,   192,   193,   194,   187,   188,
       0,     0,     0,   191,   192,     0,     0,     0,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,   195,   196,
     197,   198,   199,   200,   201,    21,    22,    23,    24,    25,
      26,    27,     0,     0,     0,   202,     0,     0,     0,     0,
       0,   195,   196,   197,   198,   199,   200,   201,     0,     0,
     195,   196,   197,   198,   199,   200,   201,     0,   202,     0,
      33,    34,    35,    36,    37,    38,     0,   202,    41,    42,
      43,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43
};

static const yytype_int16 yycheck[] =
{
       9,    33,    34,    76,    63,    63,   285,     3,    12,    13,
       6,     7,   363,    63,    63,    13,    20,    63,   157,    25,
      26,    27,    20,     0,    30,    92,    32,    93,    94,    63,
      97,    92,    90,    66,    67,    68,    69,    70,    15,   100,
      92,    92,    94,    94,   167,   371,   104,   398,   106,    25,
      26,    27,    92,   392,    30,   394,    32,    61,    62,    63,
      66,   205,    63,    61,    62,   344,   392,    93,   394,    65,
     102,    97,    93,    94,    78,    93,   102,    73,    74,    97,
      78,    77,    91,    79,   102,    93,   209,    93,    94,    97,
      96,    97,    69,    70,    71,    72,    98,   103,   156,   157,
      92,    93,   103,   247,   248,   249,    33,    34,   166,   167,
      92,    93,    92,    12,    13,    14,    92,    92,    98,   115,
     116,   117,    97,    97,   100,   100,    71,    72,   102,    33,
      34,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,    63,   205,   287,    92,
      93,   209,   210,   211,    97,    92,   279,   280,   154,   155,
      87,    88,    89,    90,    91,   166,   167,   290,   291,   165,
      69,    70,   168,   169,   170,   102,    92,    76,    77,    78,
      79,   304,    81,   306,   217,    89,    90,    91,    85,   247,
     248,   249,    44,    92,    46,    47,    48,    49,   102,    92,
      93,    92,   101,   204,    97,    71,    72,    92,   209,    85,
      92,    85,    85,    85,    85,    85,   212,    85,    85,    23,
      95,   279,   280,    86,    93,    86,   285,   285,    93,   287,
      94,   227,   290,   291,   292,   285,   285,   295,   234,   285,
      93,    96,    93,    93,   245,    92,   304,    92,   306,   166,
     167,   285,    92,    92,    92,    92,   395,    92,    92,    92,
      92,    97,    86,    93,   322,    96,    33,    34,    96,    36,
     409,    38,    39,    40,    41,    96,    96,   286,   279,   280,
      96,   285,   283,   284,   285,   344,   344,   283,   284,   290,
     291,    94,   209,   289,   344,   344,    86,    86,   344,    86,
     296,   297,   335,   304,   337,   306,   340,    86,    86,   343,
     344,   307,   308,   347,    86,   349,   350,    86,    85,    86,
      87,    88,    89,    90,    91,    86,    86,    92,    92,   338,
     339,    18,   341,   342,    92,   102,    86,   395,   100,   348,
     344,   100,    21,   344,   340,   100,    92,   343,    92,    21,
      93,   409,    93,    92,    21,    84,    94,   366,    93,    93,
      21,    21,   279,   280,   100,    92,   283,   284,   285,    93,
     371,    92,    86,   290,   291,    93,    84,   386,    85,   388,
     376,   390,   391,   379,    97,    97,    17,   304,    93,   306,
      96,   392,   103,   394,    97,   404,    97,    97,   407,    93,
      93,    66,    94,   412,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    93,    16,    93,    18,
      19,    20,    93,    22,    93,    93,    24,   344,    84,    93,
      84,    94,    68,    86,    92,    97,    93,    58,    93,   128,
     245,    93,   329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    67,    -1,
      69,    70,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    -1,    81,    -1,    -1,    -1,    85,     3,     4,     5,
       6,     7,     8,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,    -1,   101,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    -1,    16,    -1,    18,    19,
      20,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    63,    64,    65,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    -1,    69,
      70,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      -1,    81,    12,    13,    14,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    46,    47,    48,    49,
      25,    26,    27,    -1,    -1,    30,    -1,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    69,
      70,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    81,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    33,    34,    -1,
      36,    37,    38,    39,    40,    41,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      -1,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    85,
      86,    87,    88,    89,    90,    91,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,   102,    36,    37,    38,
      39,    40,    41,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,   102,    36,
      37,    38,    39,    40,    41,    -1,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    -1,    -1,    -1,    -1,    33,
      34,    -1,    -1,   102,    38,    39,    40,    41,    33,    34,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    -1,   102,    -1,
      55,    56,    57,    58,    59,    60,    -1,   102,    63,    64,
      65,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   105,     0,    15,    69,    70,    71,    72,   106,   107,
      76,   160,    92,    92,   160,   160,    98,   112,   115,   119,
      92,     3,     4,     5,     6,     7,     8,     9,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,   108,   109,   110,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     108,    92,    92,   113,   108,    85,    85,    92,    85,    85,
      85,    85,    85,    85,    85,    93,    95,   111,    94,   111,
      93,   108,   108,    10,    11,    12,    13,    14,    16,    18,
      19,    20,    22,    67,    69,    70,    73,    74,    75,    77,
      78,    79,    81,    85,    92,    99,   101,   114,   115,   116,
     117,   118,   120,   121,   122,   123,   125,   134,   136,   138,
     139,   140,   141,   142,   143,   144,   147,   148,   154,   156,
     158,   159,   160,    93,   160,   109,   134,   109,   109,   109,
     109,    53,    54,   124,   128,   124,   128,   160,   160,   160,
     108,   160,    93,    93,    92,    92,    92,    92,   138,   139,
     140,   141,   154,   115,    23,    92,    92,    92,    92,    92,
      92,   138,   150,   154,   138,   138,    96,    96,   160,   160,
     160,    96,    25,    26,    27,    30,    32,    33,    34,    36,
      37,    38,    39,    40,    41,    85,    86,    87,    88,    89,
      90,    91,   102,   149,    97,   100,    96,    96,    96,    92,
     100,   149,    97,    86,    86,    93,    86,    94,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    92,   160,   160,
     138,   146,   146,    18,    92,   160,   136,   138,   154,   155,
     155,   160,   160,   160,    86,    94,    93,   100,   100,   100,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   154,   137,   138,   155,    44,
      46,    47,    48,    49,   137,   152,   153,   138,   160,    92,
      92,   109,   160,    21,    21,    93,    93,    92,   160,    21,
      94,    94,   100,    93,    93,    84,    21,    21,   100,   150,
     137,   137,   137,   103,    92,    93,    92,    97,   102,   155,
     155,    86,    93,   139,   154,   160,   139,   154,   160,   114,
     115,   146,    84,   160,   155,   155,   138,   160,   160,    85,
     155,   155,   160,   160,    93,    94,    93,    94,    93,    93,
      97,    93,    93,    97,    17,    93,   138,    97,    93,    97,
      97,   152,    93,    93,   103,   109,   109,   115,   115,   141,
     160,   115,   115,   141,   114,    96,    93,   141,   115,   141,
     141,    94,    93,    93,    97,   145,    97,   145,   115,    66,
      93,    93,   142,   151,   154,    24,    93,   160,    93,   160,
      84,    84,    94,    86,    94,    92,   115,   115,    93,   115,
     115,   151,   151,   146,   145,    93,   115,    68,   157,    92,
     115,   146,    93,   115
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   105,   106,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   109,   110,   110,   110,   111,   111,
     112,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   122,   122,   122,   122,   123,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   125,   126,   126,
     127,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   129,   130,   130,   130,   131,   132,   133,   134,
     134,   134,   135,   135,   135,   135,   135,   135,   136,   136,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   139,   140,   140,   141,   141,   141,   141,   142,   142,
     142,   142,   142,   142,   142,   143,   143,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   145,   145,   146,   147,
     147,   148,   148,   148,   148,   149,   149,   149,   149,   149,
     150,   150,   151,   151,   151,   151,   152,   153,   153,   153,
     153,   153,   154,   154,   154,   154,   155,   155,   155,   155,
     155,   156,   156,   157,   157,   158,   158,   159,   160
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     5,     5,     4,     4,     5,
       1,     3,     1,     1,     1,     3,     3,     6,     0,     1,
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 109 "lrparser.y" /* yacc.c:1646  */
    {/* printf("LIST SIZE %d",frontEndContext.getFuncList().size())  ;*/ }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 111 "lrparser.y" /* yacc.c:1646  */
    { 
	                                          Function* func=(Function*)(yyvsp[-1].node);
                                              blockStatement* block=(blockStatement*)(yyvsp[0].node);
                                              func->setBlockStatement(block);
											   Util::addFuncToList(func);
											}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 118 "lrparser.y" /* yacc.c:1646  */
    { 
										   (yyval.node)=Util::createFuncNode((yyvsp[-3].node),(yyvsp[-1].pList)->PList);
                                           Util::setCurrentFuncType(GEN_FUNC);
										   Util::resetTemp(tempIds);
										   tempIds.clear();
	                                      }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 124 "lrparser.y" /* yacc.c:1646  */
    { 
										   (yyval.node)=Util::createStaticFuncNode((yyvsp[-3].node),(yyvsp[-1].pList)->PList);
                                            Util::setCurrentFuncType(STATIC_FUNC);
											Util::resetTemp(tempIds);
											tempIds.clear();
	                                      }
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 130 "lrparser.y" /* yacc.c:1646  */
    { 
										   (yyval.node)=Util::createIncrementalNode((yyvsp[-1].pList)->PList);
                                            Util::setCurrentFuncType(INCREMENTAL_FUNC);
											Util::resetTemp(tempIds);
											tempIds.clear();
	                                      }
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 136 "lrparser.y" /* yacc.c:1646  */
    { 
										   (yyval.node)=Util::createDecrementalNode((yyvsp[-1].pList)->PList);
                                            Util::setCurrentFuncType(DECREMENTAL_FUNC);
											Util::resetTemp(tempIds);
											tempIds.clear();
	                                      }
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 142 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createDynamicFuncNode((yyvsp[-3].node),(yyvsp[-1].pList)->PList);
                                            Util::setCurrentFuncType(DYNAMIC_FUNC);
											Util::resetTemp(tempIds);
											tempIds.clear();
											}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 149 "lrparser.y" /* yacc.c:1646  */
    {(yyval.pList)=Util::createPList((yyvsp[0].node));}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 150 "lrparser.y" /* yacc.c:1646  */
    {(yyval.pList)=Util::addToPList((yyvsp[0].pList),(yyvsp[-2].node)); 
			                           }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 153 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 154 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 155 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 157 "lrparser.y" /* yacc.c:1646  */
    {  //Identifier* id=(Identifier*)Util::createIdentifierNode($3);
                        Type* type=(Type*)(yyvsp[-2].node);
	                     Identifier* id=(Identifier*)(yyvsp[0].node);
						 
						 if(type->isGraphType())
						    {
							 tempIds.push_back(id);
						   
							}
						 if(type->isGNNType())
						    {
							 tempIds.push_back(id);
						   
							}
					printf("\n");
                    (yyval.node)=Util::createParamNode((yyvsp[-2].node),(yyvsp[-1].bval),(yyvsp[0].node)); }
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 174 "lrparser.y" /* yacc.c:1646  */
    { // Identifier* id=(Identifier*)Util::createIdentifierNode($2);
			  
					
                             (yyval.node)=Util::createParamNode((yyvsp[-2].node),(yyvsp[-1].bval),(yyvsp[0].node));}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 180 "lrparser.y" /* yacc.c:1646  */
    { // Identifier* id1=(Identifier*)Util::createIdentifierNode($5);
			                            //Identifier* id=(Identifier*)Util::createIdentifierNode($3);
				                        Type* tempType=(Type*)(yyvsp[-5].node);
			                            if(tempType->isNodeEdgeType())
										  tempType->addSourceGraph((yyvsp[-1].node));
				                         (yyval.node)=Util::createParamNode(tempType,(yyvsp[-4].bval),(yyvsp[-3].node));
									 }
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 188 "lrparser.y" /* yacc.c:1646  */
    {(yyval.bval) = false;}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 189 "lrparser.y" /* yacc.c:1646  */
    {(yyval.bval) = true;}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 192 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 195 "lrparser.y" /* yacc.c:1646  */
    {}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 196 "lrparser.y" /* yacc.c:1646  */
    {printf ("found one statement\n") ; Util::addToBlock((yyvsp[0].node)); }
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 198 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 199 "lrparser.y" /* yacc.c:1646  */
    {printf ("found an assignment type statement" ); (yyval.node)=(yyvsp[-1].node);}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 200 "lrparser.y" /* yacc.c:1646  */
    {printf ("found an proc call type statement" );(yyval.node)=Util::createNodeForProcCallStmt((yyvsp[-1].node));}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 201 "lrparser.y" /* yacc.c:1646  */
    {printf ("found an control flow type statement" );(yyval.node)=(yyvsp[0].node);}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 202 "lrparser.y" /* yacc.c:1646  */
    {printf ("found an reduction type statement" );(yyval.node)=(yyvsp[-1].node);}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 203 "lrparser.y" /* yacc.c:1646  */
    {printf ("found bfs\n") ;(yyval.node)=(yyvsp[0].node); }
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 204 "lrparser.y" /* yacc.c:1646  */
    {printf ("found block\n") ;(yyval.node)=(yyvsp[0].node);}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 205 "lrparser.y" /* yacc.c:1646  */
    {printf ("found unary\n") ;(yyval.node)=Util::createNodeForUnaryStatements((yyvsp[-1].node));}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 206 "lrparser.y" /* yacc.c:1646  */
    {printf ("found return\n") ;(yyval.node) = (yyvsp[-1].node) ;}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 207 "lrparser.y" /* yacc.c:1646  */
    {printf ("found batch\n") ;(yyval.node) = (yyvsp[0].node);}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 208 "lrparser.y" /* yacc.c:1646  */
    {printf ("found on add block\n") ;(yyval.node) = (yyvsp[0].node);}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 209 "lrparser.y" /* yacc.c:1646  */
    {printf ("found delete block\n") ;(yyval.node) = (yyvsp[0].node);}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 212 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::finishBlock();}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 214 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = Util::createBatchBlockStmt((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 216 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = Util::createOnAddBlock((yyvsp[-7].node), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[0].node));}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 218 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = Util::createOnDeleteBlock((yyvsp[-7].node), (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[0].node));}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 220 "lrparser.y" /* yacc.c:1646  */
    { Util::createNewBlock(); }
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 224 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = Util::createReturnStatementNode((yyvsp[0].node));}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 227 "lrparser.y" /* yacc.c:1646  */
    {
	                     Type* type=(Type*)(yyvsp[-1].node);
	                     Identifier* id=(Identifier*)(yyvsp[0].node);
						 
						 if(type->isGraphType())
						    Util::storeGraphId(id);


                         (yyval.node)=Util::createNormalDeclNode((yyvsp[-1].node),(yyvsp[0].node));}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 236 "lrparser.y" /* yacc.c:1646  */
    {//Identifier* id=(Identifier*)Util::createIdentifierNode($2);
	                    
	                    (yyval.node)=Util::createAssignedDeclNode((yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 239 "lrparser.y" /* yacc.c:1646  */
    {//Identifier* id=(Identifier*)Util::createIdentifierNode($2);
	            
                         (yyval.node)=Util::createNormalDeclNode((yyvsp[-1].node),(yyvsp[0].node)); }
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 242 "lrparser.y" /* yacc.c:1646  */
    {//Identifier* id=(Identifier*)Util::createIdentifierNode($2);
	                   
	                    (yyval.node)=Util::createAssignedDeclNode((yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 245 "lrparser.y" /* yacc.c:1646  */
    {//Identifier* id=(Identifier*)Util::createIdentifierNode($2);
	                   
	                    (yyval.node)=Util::createAssignedDeclNode((yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 249 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); }
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 250 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 251 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 252 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 255 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createPrimitiveTypeNode(TYPE_INT);}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 256 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createPrimitiveTypeNode(TYPE_FLOAT);}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 257 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createPrimitiveTypeNode(TYPE_BOOL);}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 258 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createPrimitiveTypeNode(TYPE_DOUBLE); }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 259 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyval.node)=Util::createPrimitiveTypeNode(TYPE_LONG);}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 260 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyval.node)=Util::createPrimitiveTypeNode(TYPE_STRING);}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 262 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createPrimitiveTypeNode(TYPE_AUTOREF);}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 264 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createGraphTypeNode(TYPE_GRAPH,NULL);}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 265 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createGraphTypeNode(TYPE_DIRGRAPH,NULL);}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 267 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createGNNTypeNode(TYPE_GNN,NULL);}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 269 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createCollectionTypeNode(TYPE_LIST,NULL);}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 270 "lrparser.y" /* yacc.c:1646  */
    {//Identifier* id=(Identifier*)Util::createIdentifierNode($3);
			                     (yyval.node)=Util::createCollectionTypeNode(TYPE_SETN,(yyvsp[-1].node));}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 272 "lrparser.y" /* yacc.c:1646  */
    {// Identifier* id=(Identifier*)Util::createIdentifierNode($3);
					                    (yyval.node)=Util::createCollectionTypeNode(TYPE_SETE,(yyvsp[-1].node));}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 274 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createCollectionTypeNode(TYPE_UPDATES,(yyvsp[-1].node));}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 275 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 276 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 277 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 278 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 279 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 281 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = Util::createContainerTypeNode(TYPE_CONTAINER, (yyvsp[-6].node), (yyvsp[-3].aList)->AList, (yyvsp[-1].node));}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 282 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node) =  Util::createContainerTypeNode(TYPE_CONTAINER, (yyvsp[-4].node), (yyvsp[-1].aList)->AList, NULL);}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 283 "lrparser.y" /* yacc.c:1646  */
    { list<argument*> argList;
			                          (yyval.node) = Util::createContainerTypeNode(TYPE_CONTAINER, (yyvsp[-1].node), argList, NULL);}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 286 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = Util::createContainerTypeNode(TYPE_VECTOR, (yyvsp[-6].node), (yyvsp[-3].aList)->AList, (yyvsp[-1].node));}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 287 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node) =  Util::createContainerTypeNode(TYPE_VECTOR, (yyvsp[-4].node), (yyvsp[-1].aList)->AList, NULL);}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 288 "lrparser.y" /* yacc.c:1646  */
    { list<argument*> argList;
			                          (yyval.node) = Util::createContainerTypeNode(TYPE_VECTOR, (yyvsp[-1].node), argList, NULL);}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 290 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = Util::createNodeMapTypeNode(TYPE_NODEMAP, (yyvsp[-1].node));}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 292 "lrparser.y" /* yacc.c:1646  */
    { list<argument*> argList;
			                          (yyval.node) = Util::createHashMapTypeNode(TYPE_HASHMAP, (yyvsp[-3].node), argList, (yyvsp[-1].node));}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 295 "lrparser.y" /* yacc.c:1646  */
    { list<argument*> argList;
			                          (yyval.node) = Util::createHashSetTypeNode(TYPE_HASHSET, (yyvsp[-1].node), argList, NULL);}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 298 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeEdgeTypeNode(TYPE_NODE) ;}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 299 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeEdgeTypeNode(TYPE_EDGE);}
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 300 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 302 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createPropertyTypeNode(TYPE_PROPNODE,(yyvsp[-1].node)); }
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 303 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createPropertyTypeNode(TYPE_PROPEDGE,(yyvsp[-1].node)); }
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 304 "lrparser.y" /* yacc.c:1646  */
    {  (yyval.node)=Util::createPropertyTypeNode(TYPE_PROPNODE,(yyvsp[-1].node)); }
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 305 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createPropertyTypeNode(TYPE_PROPEDGE,(yyvsp[-1].node));}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 306 "lrparser.y" /* yacc.c:1646  */
    {ASTNode* type = Util::createNodeEdgeTypeNode(TYPE_NODE);
			                         (yyval.node)=Util::createPropertyTypeNode(TYPE_PROPNODE, type); }
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 308 "lrparser.y" /* yacc.c:1646  */
    {ASTNode* type = Util::createNodeEdgeTypeNode(TYPE_EDGE);
			                         (yyval.node)=Util::createPropertyTypeNode(TYPE_PROPNODE, type); }
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 311 "lrparser.y" /* yacc.c:1646  */
    { printf("testassign\n");(yyval.node)=Util::createAssignmentNode((yyvsp[-2].node),(yyvsp[0].node));}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 312 "lrparser.y" /* yacc.c:1646  */
    {printf ("called assign for count\n") ; (yyval.node)=Util::createAssignmentNode((yyvsp[-2].node) , (yyvsp[0].node));}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 315 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 317 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 318 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createNodeForArithmeticExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_ADD);}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 319 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createNodeForArithmeticExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_SUB);}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 320 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForArithmeticExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_MUL);}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 321 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForArithmeticExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_DIV);}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 322 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForArithmeticExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_MOD);}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 323 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForLogicalExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_AND);}
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 324 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForLogicalExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_OR);}
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 325 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_LE);}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 326 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_GE);}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 327 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_LT);}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 328 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_GT);}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 329 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_EQ);}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 330 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForRelationalExpr((yyvsp[-2].node),(yyvsp[0].node),OPERATOR_NE);}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 331 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForUnaryExpr((yyvsp[0].node),OPERATOR_NOT);}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 332 "lrparser.y" /* yacc.c:1646  */
    { Expression* expr=(Expression*)(yyvsp[-1].node);
				                     expr->setEnclosedBrackets();
			                        (yyval.node)=expr;}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 335 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 336 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createNodeForId((yyvsp[0].node));}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 337 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 338 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 340 "lrparser.y" /* yacc.c:1646  */
    {printf("first done this \n");(yyval.node) = Util::createNodeForIndexExpr((yyvsp[-3].node), (yyvsp[-1].node), OPERATOR_INDEX);}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 342 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForUnaryExpr((yyvsp[-1].node),OPERATOR_INC);}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 343 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForUnaryExpr((yyvsp[-1].node),OPERATOR_DEC);}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 345 "lrparser.y" /* yacc.c:1646  */
    { 
                                       
                                       (yyval.node) = Util::createNodeForProcCall((yyvsp[-3].node),(yyvsp[-1].aList)->AList,NULL); 

									    }
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 350 "lrparser.y" /* yacc.c:1646  */
    { ASTNode* id = Util::createIdentifierNode("Incremental");
			                                   (yyval.node) = Util::createNodeForProcCall(id, (yyvsp[-1].aList)->AList,NULL); 

				                               }
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 354 "lrparser.y" /* yacc.c:1646  */
    { ASTNode* id = Util::createIdentifierNode("Decremental");
			                                   (yyval.node) = Util::createNodeForProcCall(id, (yyvsp[-1].aList)->AList,NULL); 

				                               }
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 359 "lrparser.y" /* yacc.c:1646  */
    {
                                                   
													 Expression* expr = (Expression*)(yyvsp[-5].node);
                                                     (yyval.node) = Util::createNodeForProcCall((yyvsp[-3].node) , (yyvsp[-1].aList)->AList, expr); 

									                 }
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 370 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node) = Util::createNodeForIval((yyvsp[0].ival)); }
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 371 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = Util::createNodeForFval((yyvsp[0].fval));}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 372 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node) = Util::createNodeForBval((yyvsp[0].bval));}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 373 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node) = Util::createNodeForSval((yyvsp[0].text));}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 374 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForINF(true);}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 375 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForINF(true);}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 376 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForINF(false);}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 379 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 380 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 382 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createNodeForFixedPointStmt((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node));}
#line 2646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 383 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForWhileStmt((yyvsp[-2].node),(yyvsp[0].node)); }
#line 2652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 384 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForDoWhileStmt((yyvsp[-2].node),(yyvsp[-5].node));  }
#line 2658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 385 "lrparser.y" /* yacc.c:1646  */
    { 
																				(yyval.node)=Util::createNodeForForAllStmt((yyvsp[-7].node),(yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[0].node),true);}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 387 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createNodeForForStmt((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),true);}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 388 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createNodeForForStmt((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node),false);}
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 389 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForForAllStmt((yyvsp[-7].node),(yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[0].node),false);}
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 390 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = Util::createNodeForForStmt((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), false);}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 391 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = Util::createNodeForForStmt((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), true);}
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 393 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=NULL;}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 394 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[-1].node);}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 396 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node) ;}
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 398 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createNodeForIfStmt((yyvsp[-2].node),(yyvsp[0].node),NULL); }
#line 2719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 399 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForIfStmt((yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 402 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=Util::createNodeForReductionStmt((yyvsp[-2].node),(yyvsp[0].node)) ;}
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 403 "lrparser.y" /* yacc.c:1646  */
    { reductionCall* reduc=(reductionCall*)(yyvsp[-3].node);
		                                                               (yyval.node)=Util::createNodeForReductionStmtList((yyvsp[-7].nodeList)->ASTNList,reduc,(yyvsp[-1].nodeList)->ASTNList);}
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 405 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeForReductionOpStmt((yyvsp[-2].node),(yyvsp[-1].ival),(yyvsp[0].node));}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 406 "lrparser.y" /* yacc.c:1646  */
    {printf ("here calling creation for red op\n") ;(yyval.node)=Util::createNodeForReductionOpStmt ((yyvsp[-2].node),(yyvsp[-1].ival),(yyvsp[0].node));}
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 409 "lrparser.y" /* yacc.c:1646  */
    {(yyval.ival)=OPERATOR_ADDASSIGN;}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 410 "lrparser.y" /* yacc.c:1646  */
    {(yyval.ival)=OPERATOR_MULASSIGN;}
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 411 "lrparser.y" /* yacc.c:1646  */
    {(yyval.ival)=OPERATOR_ORASSIGN;}
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 412 "lrparser.y" /* yacc.c:1646  */
    {(yyval.ival)=OPERATOR_ANDASSIGN;}
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 413 "lrparser.y" /* yacc.c:1646  */
    {(yyval.ival)=OPERATOR_SUBASSIGN;}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 415 "lrparser.y" /* yacc.c:1646  */
    { (yyval.nodeList)=Util::addToNList((yyvsp[0].nodeList),(yyvsp[-2].node));
                                         }
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 417 "lrparser.y" /* yacc.c:1646  */
    { (yyval.nodeList)=Util::createNList((yyvsp[0].node));;}
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 419 "lrparser.y" /* yacc.c:1646  */
    { (yyval.nodeList)=Util::addToNList((yyvsp[0].nodeList),(yyvsp[-2].node));}
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 420 "lrparser.y" /* yacc.c:1646  */
    { ASTNode* node = Util::createNodeForId((yyvsp[-2].node));
			                         (yyval.nodeList)=Util::addToNList((yyvsp[0].nodeList),node);}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 422 "lrparser.y" /* yacc.c:1646  */
    { (yyval.nodeList)=Util::createNList((yyvsp[0].node));}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 423 "lrparser.y" /* yacc.c:1646  */
    { ASTNode* node = Util::createNodeForId((yyvsp[0].node));
			            (yyval.nodeList)=Util::createNList(node);}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 432 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createNodeforReductionCall((yyvsp[-3].ival),(yyvsp[-1].aList)->AList);}
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 434 "lrparser.y" /* yacc.c:1646  */
    { (yyval.ival)=REDUCE_SUM;}
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 435 "lrparser.y" /* yacc.c:1646  */
    {(yyval.ival)=REDUCE_COUNT;}
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 436 "lrparser.y" /* yacc.c:1646  */
    {(yyval.ival)=REDUCE_PRODUCT;}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 437 "lrparser.y" /* yacc.c:1646  */
    {(yyval.ival)=REDUCE_MAX;}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 438 "lrparser.y" /* yacc.c:1646  */
    {(yyval.ival)=REDUCE_MIN;}
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 440 "lrparser.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node); }
#line 2861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 441 "lrparser.y" /* yacc.c:1646  */
    { printf("Here hello \n"); (yyval.node)=(yyvsp[0].node); }
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 442 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node); }
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 443 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 446 "lrparser.y" /* yacc.c:1646  */
    {
                 argList* aList=new argList();
				 (yyval.aList)=aList;  }
#line 2887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 450 "lrparser.y" /* yacc.c:1646  */
    {argument* a1=new argument();
		                          assignment* assign=(assignment*)(yyvsp[-2].node);
		                     a1->setAssign(assign);
							 a1->setAssignFlag();
		                 //a1->assignExpr=(assignment*)$1;
						 // a1->assign=true;
						  (yyval.aList)=Util::addToAList((yyvsp[0].aList),a1);
						  /*
						  for(argument* arg:$$->AList)
						  {
							  printf("VALUE OF ARG %d",arg->getAssignExpr()); //rm for warnings
						  }
						  */ 
						  
                          }
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 467 "lrparser.y" /* yacc.c:1646  */
    {argument* a1=new argument();
		                                Expression* expr=(Expression*)(yyvsp[-2].node);
										a1->setExpression(expr);
										a1->setExpressionFlag();
						               // a1->expressionflag=true;
										 (yyval.aList)=Util::addToAList((yyvsp[0].aList),a1);
						                }
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 474 "lrparser.y" /* yacc.c:1646  */
    {argument* a1=new argument();
		                 Expression* expr=(Expression*)(yyvsp[0].node);
						 a1->setExpression(expr);
						a1->setExpressionFlag();
						  (yyval.aList)=Util::createAList(a1); }
#line 2929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 479 "lrparser.y" /* yacc.c:1646  */
    { argument* a1=new argument();
		                   assignment* assign=(assignment*)(yyvsp[0].node);
		                     a1->setAssign(assign);
							 a1->setAssignFlag();
						   (yyval.aList)=Util::createAList(a1);
						   }
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 487 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createIterateInBFSNode((yyvsp[-10].node),(yyvsp[-8].node),(yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node)) ;}
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 488 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createIterateInBFSNode((yyvsp[-9].node),(yyvsp[-7].node),(yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-1].node),(yyvsp[0].node),NULL) ; }
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 492 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createIterateInReverseBFSNode(NULL,(yyvsp[0].node));}
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 493 "lrparser.y" /* yacc.c:1646  */
    {(yyval.node)=Util::createIterateInReverseBFSNode((yyvsp[-2].node),(yyvsp[0].node));}
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 496 "lrparser.y" /* yacc.c:1646  */
    { //Identifier* id1=(Identifier*)Util::createIdentifierNode($1);
                  // Identifier* id2=(Identifier*)Util::createIdentifierNode($1);
				   (yyval.node) = Util::createPropIdNode((yyvsp[-2].node),(yyvsp[0].node));
				    }
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 500 "lrparser.y" /* yacc.c:1646  */
    { ASTNode* expr1 = Util::createNodeForId((yyvsp[-3].node));
	                          ASTNode* expr2 = Util::createNodeForId((yyvsp[-1].node));
							  ASTNode* indexexpr =  Util::createNodeForIndexExpr(expr1, expr2, OPERATOR_INDEX);
	                          (yyval.node) = Util::createPropIdNode((yyvsp[-5].node) , indexexpr);}
#line 2982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 507 "lrparser.y" /* yacc.c:1646  */
    {// Identifier* id1=(Identifier*)Util::createIdentifierNode($1);
                  // Identifier* id2=(Identifier*)Util::createIdentifierNode($1);
				   (yyval.node)=Util::createPropIdNode((yyvsp[-4].node),(yyvsp[-2].node));
				    }
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 511 "lrparser.y" /* yacc.c:1646  */
    { 
	         (yyval.node)=Util::createIdentifierNode((yyvsp[0].text));  

            
            }
#line 3001 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3005 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 519 "lrparser.y" /* yacc.c:1906  */


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
