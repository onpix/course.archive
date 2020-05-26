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
#line 3 "parser.y" /* yacc.c:339  */

#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
int yylex();
void yyerror(const char* fmt, ...);
void display(struct ASTNode *,int);

#line 79 "parser.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    INT = 258,
    ID = 259,
    RELOP = 260,
    TYPE = 261,
    FLOAT = 262,
    CHAR = 263,
    STRING = 264,
    STRUCT = 265,
    DPLUS = 266,
    LP = 267,
    RP = 268,
    LC = 269,
    RC = 270,
    LB = 271,
    RB = 272,
    SEMI = 273,
    COMMA = 274,
    DOT = 275,
    PLUS = 276,
    MINUS = 277,
    STAR = 278,
    DIV = 279,
    MOD = 280,
    ASSIGNOP = 281,
    PLUS_ASSIGN_OP = 282,
    MINUS_ASSIGN_OP = 283,
    MULT_ASSIGN_OP = 284,
    DIV_ASSIGN_OP = 285,
    MOD_ASSIGN_OP = 286,
    AND = 287,
    OR = 288,
    NOT = 289,
    AUTOPLUS = 290,
    AUTOMINUS = 291,
    IF = 292,
    ELSE = 293,
    WHILE = 294,
    RETURN = 295,
    FOR = 296,
    CONTINUE = 297,
    BREAK = 298,
    SWITCH = 299,
    CASE = 300,
    DEFAULT = 301,
    COLON = 302,
    EXT_DEF_LIST = 303,
    EXT_VAR_DEF = 304,
    FUNC_DEF = 305,
    FUNC_DEC = 306,
    EXT_DEC_LIST = 307,
    PARAM_LIST = 308,
    PARAM_DEC = 309,
    VAR_DEF = 310,
    DEC_LIST = 311,
    DEF_LIST = 312,
    COMP_STM = 313,
    STM_LIST = 314,
    EXP_STMT = 315,
    IF_THEN = 316,
    IF_THEN_ELSE = 317,
    ARRAY_LIST = 318,
    ARRAY_ID = 319,
    FUNC_CALL = 320,
    ARGS = 321,
    FUNCTION = 322,
    PARAM = 323,
    ARG = 324,
    CALL = 325,
    LABEL = 326,
    GOTO = 327,
    JLT = 328,
    JLE = 329,
    JGT = 330,
    JGE = 331,
    EQ = 332,
    NEQ = 333,
    FOR_DEC = 334,
    STRUCT_DEF = 335,
    STRUCT_DEC = 336,
    STRUCT_NAME = 337,
    ACCESS_MEMBER = 338,
    SWITCH_STMT = 339,
    CASE_STMT = 340,
    DEFAULT_STMT = 341,
    CASE_STMT_LIST = 342,
    UMINUS = 343,
    LOWER_THEN_ELSE = 344
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "parser.y" /* yacc.c:355  */

	int    type_int;
	float  type_float;
	char   type_id[32];

    char   type_char;
    char   type_string[32];
    char   struct_name[32];
    struct ASTNode *ptr;

#line 220 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 251 "parser.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   632

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    66,    67,    69,    70,    71,    73,    74,
      79,    80,    82,    83,    85,    87,    88,    92,    93,    95,
      96,    97,    98,   101,   102,   105,   106,   108,   111,   113,
     114,   116,   117,   118,   119,   120,   121,   124,   125,   126,
     127,   130,   133,   134,   138,   139,   140,   147,   148,   152,
     153,   154,   156,   158,   159,   161,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   196,   197,   199,
     200
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "RELOP", "TYPE", "FLOAT",
  "CHAR", "STRING", "STRUCT", "DPLUS", "LP", "RP", "LC", "RC", "LB", "RB",
  "SEMI", "COMMA", "DOT", "PLUS", "MINUS", "STAR", "DIV", "MOD",
  "ASSIGNOP", "PLUS_ASSIGN_OP", "MINUS_ASSIGN_OP", "MULT_ASSIGN_OP",
  "DIV_ASSIGN_OP", "MOD_ASSIGN_OP", "AND", "OR", "NOT", "AUTOPLUS",
  "AUTOMINUS", "IF", "ELSE", "WHILE", "RETURN", "FOR", "CONTINUE", "BREAK",
  "SWITCH", "CASE", "DEFAULT", "COLON", "EXT_DEF_LIST", "EXT_VAR_DEF",
  "FUNC_DEF", "FUNC_DEC", "EXT_DEC_LIST", "PARAM_LIST", "PARAM_DEC",
  "VAR_DEF", "DEC_LIST", "DEF_LIST", "COMP_STM", "STM_LIST", "EXP_STMT",
  "IF_THEN", "IF_THEN_ELSE", "ARRAY_LIST", "ARRAY_ID", "FUNC_CALL", "ARGS",
  "FUNCTION", "PARAM", "ARG", "CALL", "LABEL", "GOTO", "JLT", "JLE", "JGT",
  "JGE", "EQ", "NEQ", "FOR_DEC", "STRUCT_DEF", "STRUCT_DEC", "STRUCT_NAME",
  "ACCESS_MEMBER", "SWITCH_STMT", "CASE_STMT", "DEFAULT_STMT",
  "CASE_STMT_LIST", "UMINUS", "LOWER_THEN_ELSE", "$accept", "program",
  "ExtDefList", "ExtDef", "Specifier", "StructSpecifier", "OptTag", "Tag",
  "Arraylist", "ExtDecList", "VarDec", "FuncDec", "VarList", "ParamDec",
  "CompSt", "StmList", "Stmt", "DefaultStmt", "CaseStmt", "CaseStmtList",
  "ForDec", "DefList", "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -50

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    18,  -101,    47,    53,  -101,     8,    50,  -101,  -101,
      64,    56,  -101,  -101,  -101,    22,    54,    57,    66,    31,
      34,    78,   208,    58,  -101,    81,   134,  -101,    80,    81,
      82,   134,  -101,    81,    86,    83,    87,  -101,    23,  -101,
    -101,  -101,   208,   208,   208,   208,   208,   208,   208,   516,
     208,    17,  -101,   150,  -101,  -101,    85,    89,  -101,  -101,
    -101,  -101,    39,    84,    79,  -101,    -1,   226,   255,    93,
      -1,    -1,    -1,    -1,   208,  -101,   107,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
    -101,  -101,   516,   104,   105,   208,   106,   101,   102,   109,
    -101,   108,   150,   284,  -101,    81,  -101,  -101,  -101,   111,
    -101,   208,  -101,   596,  -101,   198,   198,    -5,    -5,    -5,
     545,   545,   545,   545,   545,   545,   590,   568,   208,   208,
     313,   192,  -101,  -101,   208,  -101,  -101,  -101,  -101,  -101,
    -101,   342,   371,  -101,   208,   112,   400,   429,   150,   150,
     458,   150,   208,   113,    88,  -101,  -101,  -101,   487,    33,
     150,   208,     9,   100,  -101,    33,   114,  -101,   516,   116,
     118,   150,  -101,  -101,   150,   150,  -101,  -101,  -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     8,    12,     0,     2,     0,     0,     9,     7,
      13,     0,    11,     1,     4,    19,     0,    17,     0,     0,
       0,     0,     0,    20,     5,     0,     0,     6,     0,     0,
       0,     0,    24,     0,     0,    25,     0,    82,    81,    83,
      84,    85,     0,     0,     0,     0,     0,     0,     0,    22,
       0,    19,    18,    29,    51,    55,     0,    53,    10,    50,
      27,    23,     0,    15,     0,    86,    77,     0,    90,     0,
      75,    76,    72,    73,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    71,    21,     0,     0,     0,     0,     0,     0,     0,
      32,     0,    29,     0,    52,     0,    26,    16,    80,     0,
      74,     0,    87,    64,    88,    65,    66,    67,    68,    69,
      56,    57,    58,    59,    60,    61,    62,    63,     0,     0,
       0,     0,    38,    39,     0,    28,    30,    31,    54,    79,
      89,     0,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    36,    48,    37,     0,    44,
       0,     0,     0,     0,    46,    44,     0,    35,    47,     0,
       0,    29,    45,    40,    29,    29,    41,    42,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -101,  -101,   122,  -101,     7,  -101,  -101,  -101,   -34,   126,
     -28,  -101,    69,  -101,   115,  -100,   -55,  -101,  -101,   -33,
    -101,   -15,  -101,    29,  -101,   -22,   -61
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    29,     8,    11,    12,    23,    16,
      17,    18,    34,    35,   100,   101,   102,   164,   165,   166,
     145,    30,    31,    56,    57,   103,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    55,   136,   109,    65,    60,    75,     7,    -3,     1,
      75,    53,   169,     7,     2,    76,    59,   170,     3,    76,
      66,    67,    68,    70,    71,    72,    73,    33,    92,   107,
      90,    91,    28,    21,    20,    64,     9,     2,    21,    21,
       2,     3,    68,    22,     3,     2,   -49,    32,    22,     3,
     140,    10,   113,    13,    15,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   -14,    33,
      19,   176,    24,   130,   177,   178,    25,    55,   162,   163,
      26,    36,    37,    38,    50,    51,    39,    40,    41,    68,
      42,    43,   108,   154,   155,    44,   157,    58,    54,    61,
      21,    45,    62,   104,    63,   167,   141,   142,   105,   146,
     112,   114,   147,    46,    47,    48,   128,   129,   131,   132,
     133,   134,   150,   135,   139,   151,   160,   159,    14,   173,
     158,   106,   172,    27,   138,    28,     0,   -49,   -49,   168,
       2,   -49,   -49,   -49,     3,   -49,   -49,   171,   -49,   -49,
     -49,    52,     0,    37,    38,     0,   -49,    39,    40,    41,
       0,    42,    43,   174,    26,   175,    44,     0,   -49,   -49,
     -49,   -49,    45,   -49,   -49,   -49,   -49,   -49,   -49,     0,
       0,     0,     0,     0,    46,    47,    48,    93,     0,    94,
      95,    96,    97,    98,    99,    37,    38,     0,     0,    39,
      40,    41,     0,    42,    43,     0,     0,     0,    44,    75,
     144,    37,    38,     0,    45,    39,    40,    41,    76,    42,
      43,    79,    80,    81,    44,     0,    46,    47,    48,     0,
      45,    74,     0,    90,    91,     0,     0,    75,     0,   110,
       0,     0,    46,    47,    48,     0,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      74,    90,    91,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,   111,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    74,
      90,    91,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,   137,     0,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    74,    90,
      91,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,   143,     0,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    74,    90,    91,
       0,     0,     0,    75,     0,   148,     0,     0,     0,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    74,    90,    91,     0,
       0,     0,    75,     0,   149,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    74,    90,    91,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,   152,     0,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    74,    90,    91,     0,     0,     0,
      75,     0,   153,     0,     0,     0,     0,     0,     0,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    74,    90,    91,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,   156,     0,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    74,    90,    91,     0,     0,     0,    75,     0,
       0,     0,     0,     0,     0,   161,     0,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    74,    90,    91,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      74,    90,    91,     0,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,    76,    77,    78,    79,    80,
      81,     0,     0,    74,     0,     0,     0,    88,    89,    75,
      90,    91,     0,     0,     0,     0,     0,     0,    76,    77,
      78,    79,    80,    81,     0,    74,     0,     0,     0,     0,
      88,    75,     0,    90,    91,     0,     0,    75,     0,     0,
      76,    77,    78,    79,    80,    81,    76,    77,    78,    79,
      80,    81,     0,     0,     0,    90,    91,     0,     0,     0,
       0,    90,    91
};

static const yytype_int16 yycheck[] =
{
      22,    29,   102,    64,    38,    33,    11,     0,     0,     1,
      11,    26,     3,     6,     6,    20,    31,     8,    10,    20,
      42,    43,    44,    45,    46,    47,    48,    20,    50,    63,
      35,    36,     1,    16,    12,    12,    18,     6,    16,    16,
       6,    10,    64,    26,    10,     6,    15,    13,    26,    10,
     111,     4,    74,     0,     4,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,     4,    62,
      14,   171,    18,    95,   174,   175,    19,   105,    45,    46,
      14,     3,     3,     4,    26,     4,     7,     8,     9,   111,
      11,    12,    13,   148,   149,    16,   151,    15,    18,    13,
      16,    22,    19,    18,    17,   160,   128,   129,    19,   131,
      17,     4,   134,    34,    35,    36,    12,    12,    12,    18,
      18,    12,   144,    15,    13,    13,    38,    14,     6,    15,
     152,    62,   165,    18,   105,     1,    -1,     3,     4,   161,
       6,     7,     8,     9,    10,    11,    12,    47,    14,    15,
      16,    25,    -1,     3,     4,    -1,    22,     7,     8,     9,
      -1,    11,    12,    47,    14,    47,    16,    -1,    34,    35,
      36,    37,    22,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,     3,     4,    -1,    -1,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    -1,    16,    11,
      18,     3,     4,    -1,    22,     7,     8,     9,    20,    11,
      12,    23,    24,    25,    16,    -1,    34,    35,    36,    -1,
      22,     5,    -1,    35,    36,    -1,    -1,    11,    -1,    13,
      -1,    -1,    34,    35,    36,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
       5,    35,    36,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     5,
      35,    36,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     5,    35,
      36,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,     5,    35,    36,
      -1,    -1,    -1,    11,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     5,    35,    36,    -1,
      -1,    -1,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     5,    35,    36,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,     5,    35,    36,    -1,    -1,    -1,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     5,    35,    36,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,     5,    35,    36,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,     5,    35,    36,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
       5,    35,    36,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,     5,    -1,    -1,    -1,    32,    33,    11,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,     5,    -1,    -1,    -1,    -1,
      32,    11,    -1,    35,    36,    -1,    -1,    11,    -1,    -1,
      20,    21,    22,    23,    24,    25,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,    10,    91,    92,    93,    94,    95,    18,
       4,    96,    97,     0,    92,     4,    99,   100,   101,    14,
      12,    16,    26,    98,    18,    19,    14,   104,     1,    94,
     111,   112,    13,    94,   102,   103,     3,     3,     4,     7,
       8,     9,    11,    12,    16,    22,    34,    35,    36,   115,
      26,     4,    99,   111,    18,   100,   113,   114,    15,   111,
     100,    13,    19,    17,    12,    98,   115,   115,   115,   116,
     115,   115,   115,   115,     5,    11,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      35,    36,   115,    37,    39,    40,    41,    42,    43,    44,
     104,   105,   106,   115,    18,    19,   102,    98,    13,   116,
      13,    19,    17,   115,     4,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,    12,    12,
     115,    12,    18,    18,    12,    15,   105,    18,   113,    13,
     116,   115,   115,    18,    18,   110,   115,   115,    13,    13,
     115,    13,    18,    13,   106,   106,    18,   106,   115,    14,
      38,    18,    45,    46,   107,   108,   109,   106,   115,     3,
       8,    47,   109,    15,    47,    47,   105,   105,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    92,    93,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    98,    98,    99,    99,   100,
     100,   100,   100,   101,   101,   102,   102,   103,   104,   105,
     105,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   108,   108,   109,   109,   109,   110,   110,   111,
     111,   111,   112,   113,   113,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   116,
     116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     3,     2,     1,     1,
       5,     2,     0,     1,     1,     3,     4,     1,     3,     1,
       2,     4,     3,     4,     3,     1,     3,     2,     4,     0,
       2,     2,     1,     3,     5,     7,     5,     5,     2,     2,
       7,     3,     4,     4,     0,     2,     1,     5,     3,     0,
       2,     2,     3,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     2,     2,     2,     2,     4,
       3,     1,     1,     1,     1,     1,     2,     3,     3,     3,
       1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 64 "parser.y" /* yacc.c:1646  */
    {printf("\n\033[1;32m==============\nProgram start:\n==============\n\033[0m\n");display((yyvsp[0].ptr),0);}
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 66 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=NULL;}
#line 1658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,EXT_DEF_LIST,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 69 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,EXT_VAR_DEF,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr));}
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 70 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(3,FUNC_DEF,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 71 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=NULL;}
#line 1682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,TYPE,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));(yyval.ptr)->type=!strcmp((yyvsp[0].type_id),"int")?INT:FLOAT;}
#line 1688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 74 "parser.y" /* yacc.c:1646  */
    {}
#line 1694 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 79 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2, STRUCT_DEF, yylineno, (yyvsp[-3].ptr),(yyvsp[-1].ptr));}
#line 1700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 80 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1, STRUCT_DEF, yylineno, (yyvsp[0].ptr));}
#line 1706 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 82 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=NULL;}
#line 1712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0, STRUCT_NAME, yylineno);strcpy((yyval.ptr)->struct_name, (yyvsp[0].type_id));}
#line 1718 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 85 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0, STRUCT_NAME, yylineno); strcpy((yyval.ptr)->struct_name, (yyvsp[0].type_id));}
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 87 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,ARRAY_LIST,yylineno);(yyval.ptr)->type_int=(yyvsp[-1].type_int);}
#line 1730 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 88 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,ARRAY_LIST,yylineno,(yyvsp[-2].type_int),(yyvsp[0].ptr));}
#line 1736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 92 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 93 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,EXT_DEC_LIST,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1748 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 95 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 1754 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 96 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,ARRAY_LIST,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 1760 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 97 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,ARRAY_LIST,yylineno,(yyvsp[-2].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 1766 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 98 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-2].type_id));}
#line 1772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 101 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,FUNC_DEC,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 1778 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 102 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,FUNC_DEC,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-2].type_id));(yyval.ptr)->ptr[0]=NULL;}
#line 1784 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 105 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,PARAM_LIST,yylineno,(yyvsp[0].ptr));}
#line 1790 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,PARAM_LIST,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 108 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,PARAM_DEC,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,COMP_STM,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr));}
#line 1808 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=NULL; }
#line 1814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,STM_LIST,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,EXP_STMT,yylineno,(yyvsp[-1].ptr));}
#line 1826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 117 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 118 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,RETURN,yylineno,(yyvsp[-1].ptr));}
#line 1838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 119 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 120 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[-4].ptr),(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 121 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,WHILE,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 124 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,FOR,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 125 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,CONTINUE, yylineno);}
#line 1868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 126 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,BREAK,yylineno);}
#line 1874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 127 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2, SWITCH_STMT, yylineno, (yyvsp[-4].ptr), (yyvsp[-1].ptr));}
#line 1880 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 130 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1, DEFAULT_STMT, yylineno, (yyvsp[0].ptr));}
#line 1886 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 133 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1, CASE_STMT, yylineno, (yyvsp[0].ptr));(yyval.ptr)->type_int=(yyvsp[-2].type_int);(yyval.ptr)->type=INT;}
#line 1892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1, CASE_STMT, yylineno, (yyvsp[0].ptr));(yyval.ptr)->type_char=(yyvsp[-2].type_char);(yyval.ptr)->type=CHAR;}
#line 1898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=NULL;}
#line 1904 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2, CASE_STMT_LIST, yylineno, (yyvsp[-1].ptr), (yyvsp[0].ptr));}
#line 1910 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 140 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1, CASE_STMT_LIST, yylineno,(yyvsp[0].ptr));}
#line 1916 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 147 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(3, FOR_DEC, yylineno, (yyvsp[-4].ptr), (yyvsp[-2].ptr), (yyvsp[0].ptr));}
#line 1922 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 148 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,FOR_DEC, yylineno, (yyvsp[-1].ptr));}
#line 1928 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=NULL; }
#line 1934 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,DEF_LIST,yylineno,(yyvsp[-1].ptr),(yyvsp[0].ptr));}
#line 1940 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=NULL;}
#line 1946 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 156 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,VAR_DEF,yylineno,(yyvsp[-2].ptr),(yyvsp[-1].ptr));}
#line 1952 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 158 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,DEC_LIST,yylineno,(yyvsp[0].ptr));}
#line 1958 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 159 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,DEC_LIST,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 1964 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 161 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 1970 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");}
#line 1976 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,PLUS_ASSIGN_OP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id, "PLUS_ASSIGN_OP");}
#line 1982 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,MINUS_ASSIGN_OP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id, "MINUS_ASSIGN_OP");}
#line 1988 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2, MULT_ASSIGN_OP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"MULT_ASSIGN_OP");}
#line 1994 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,DIV_ASSIGN_OP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"DIV_ASSIGN_OP");}
#line 2000 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 169 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,MOD_ASSIGN_OP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id, "MOD_ASSIGN_OP");}
#line 2006 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 170 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,AND,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"AND");}
#line 2012 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,OR,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"OR");}
#line 2018 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,RELOP,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 2024 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,PLUS,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"PLUS");}
#line 2030 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,MINUS,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"MINUS");}
#line 2036 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 175 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,STAR,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"STAR");}
#line 2042 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 176 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,DIV,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"DIV");}
#line 2048 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,MOD,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"MOD");}
#line 2054 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,AUTOPLUS,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id, "RPAUTOPLUS");}
#line 2060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,AUTOMINUS,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,"RPAUTOMINUS");}
#line 2066 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,AUTOPLUS,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id, "LPAUTOPLUS");}
#line 2072 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,AUTOMINUS,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id, "LPAUTOMINUS");}
#line 2078 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 2084 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,UMINUS,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"UMINUS");}
#line 2090 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,NOT,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"NOT");}
#line 2096 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 185 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,DPLUS,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,"DPLUS");}
#line 2102 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 186 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,DPLUS,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,"DPLUS");}
#line 2108 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,FUNC_CALL,yylineno,(yyvsp[-1].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-3].type_id));}
#line 2114 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,FUNC_CALL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[-2].type_id));}
#line 2120 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 2126 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,INT,yylineno);(yyval.ptr)->type_int=(yyvsp[0].type_int);(yyval.ptr)->type=INT;}
#line 2132 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 191 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,FLOAT,yylineno);(yyval.ptr)->type_float=(yyvsp[0].type_float);(yyval.ptr)->type=FLOAT;}
#line 2138 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 192 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,CHAR,yylineno);(yyval.ptr)->type_char=(yyvsp[0].type_char);(yyval.ptr)->type=CHAR;}
#line 2144 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(0,STRING,yylineno);strcpy((yyval.ptr)->type_string,(yyvsp[0].type_string));(yyval.ptr)->type=STRING;}
#line 2150 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 194 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,ARRAY_ID,yylineno,(yyvsp[0].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[-1].type_id));}
#line 2156 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 196 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 2162 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,ACCESS_MEMBER,yylineno,(yyvsp[-2].ptr)); strcpy((yyval.ptr)->type_id,(yyvsp[0].type_id));}
#line 2168 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(2,ARGS,yylineno,(yyvsp[-2].ptr),(yyvsp[0].ptr));}
#line 2174 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.ptr)=mknode(1,ARGS,yylineno,(yyvsp[0].ptr));}
#line 2180 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2184 "parser.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 203 "parser.y" /* yacc.c:1906  */


int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return 0;
	yylineno=1;
        printf("\033[1;32m=======\nTokens:\n=======\n\033[0m");
	yyparse();
	return 0;
	}

#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "\033[0;31mERR(%d, %d): ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\033[0m\n");
}