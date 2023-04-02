/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y++"

    #include "ast.h"
    #include<iostream>
    #include<stdio.h>
    #include <fstream>
    using namespace std;
    
    extern char* yytext;
    extern int line;
    extern vector<quad> code;

    extern void yyerror(char const*);
    extern void print3AC();
    int yylex (void); 

    FILE* dotfile;
    stack<int> block_stack;

    int func_flag = 0;
    int dump_tac = 1;  // testing
    int dump_sym_table = 1; // testing
    int block_count = 0;
    int if_found = 0;
	int isArray = 0;
    int previous_if_found = 0;
    int stop_compiler = 0;		// shows error while parsing
    int type_delim = 0;	

    string funcName = "";
    string className = "";
    string funcType = "";
    string classTemp ="";
    string type = "";
    string storage_class = "";
    vector<string> funcArgs;
    vector<string> idList;
    vector<vector<string> > currArgs(1,vector<string>() );
    vector<qid> initializer_list_values;
    vector<int> array_dims;
    map<string, vector<int>> gotolablelist;
    map<string, int> gotolabel;
    map<string, int> func_usage_map;
    map<string, vector<qid>> global_array_init_map;
    void set_int_type(int);
    void set_real_type();
    int char_int(string str);
    #define YYDEBUG 1
    #define YYERROR_VERBOSE


#line 121 "parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    RIGHT_OP = 258,
    LEFT_OP = 259,
    EQ_OP = 260,
    NE_OP = 261,
    AND_OP = 262,
    OR_OP = 263,
    LE_OP = 264,
    GE_OP = 265,
    ADD_ASSIGN = 266,
    SUB_ASSIGN = 267,
    MUL_ASSIGN = 268,
    DIV_ASSIGN = 269,
    MOD_ASSIGN = 270,
    LEFT_ASSIGN = 271,
    RIGHT_ASSIGN = 272,
    AND_ASSIGN = 273,
    XOR_ASSIGN = 274,
    OR_ASSIGN = 275,
    UNSIGNED_RIGHT = 276,
    UNSIGNED_RIGHT_ASSIGN = 277,
    integerLiteral = 278,
    stringLiteral = 279,
    nullLiteral = 280,
    characterLiteral = 281,
    textBlock = 282,
    booleanLiteral = 283,
    FloatingPointLiteral = 284,
    Identifier = 285,
    CONTINUE = 286,
    FOR = 287,
    NEW = 288,
    IF = 289,
    PACKAGE = 290,
    BOOLEAN = 291,
    PRIVATE = 292,
    THIS = 293,
    BREAK = 294,
    DOUBLE = 295,
    THROW = 296,
    BYTE = 297,
    ELSE = 298,
    PUBLIC = 299,
    RETURN = 300,
    INT = 301,
    SHORT = 302,
    CHAR = 303,
    FINAL = 304,
    STATIC = 305,
    VOID = 306,
    CLASS = 307,
    LONG = 308,
    FLOAT = 309,
    WHILE = 310,
    _ = 311,
    YIELD = 312,
    eof = 313,
    INC_OP = 314,
    DEC_OP = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "parser.y++"
 
    char* str;
    treeNode* ptr;
    constants* num;
    int ind;

#line 241 "parser.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1053

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  255
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  413

#define YYUNDEFTOK  2
#define YYMAXUTOK   315


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    23,     2,     2,     2,    14,    15,     2,
       3,     4,    12,    10,    18,    11,     9,    13,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    25,    19,
      20,    26,    21,    24,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     7,     2,     8,    17,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     5,    16,     6,    22,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    78,    78,    88,    99,   111,   121,   131,   140,   153,
     157,   168,   171,   177,   186,   194,   202,   210,   221,   229,
     240,   251,   272,   273,   276,   325,   366,   374,   380,   381,
     391,   392,   400,   419,   443,   444,   461,   465,   469,   473,
     480,   492,   493,   505,   506,   507,   508,   512,   526,   542,
     545,   555,   564,   587,   604,   627,   637,   650,   661,   673,
     687,   698,   751,   791,   810,   814,   815,   819,   822,   838,
     864,   865,   880,   891,   907,   915,   925,   939,   940,   950,
     951,   971,   987,   988,  1008,  1009,  1013,  1014,  1018,  1033,
    1034,  1035,  1036,  1037,  1038,  1042,  1043,  1044,  1045,  1046,
    1050,  1051,  1052,  1053,  1054,  1055,  1056,  1060,  1089,  1117,
    1123,  1124,  1125,  1126,  1127,  1128,  1129,  1133,  1133,  1148,
    1169,  1193,  1217,  1239,  1261,  1275,  1292,  1307,  1324,  1343,
    1363,  1364,  1368,  1369,  1373,  1374,  1378,  1379,  1383,  1387,
    1390,  1401,  1412,  1422,  1434,  1448,  1460,  1469,  1483,  1483,
    1515,  1526,  1527,  1530,  1534,  1535,  1536,  1537,  1538,  1543,
    1544,  1551,  1561,  1574,  1584,  1585,  1589,  1590,  1600,  1609,
    1626,  1646,  1654,  1667,  1682,  1696,  1707,  1708,  1718,  1728,
    1733,  1734,  1738,  1738,  1773,  1774,  1778,  1780,  1783,  1786,
    1789,  1792,  1795,  1798,  1801,  1804,  1807,  1810,  1816,  1865,
    1869,  1884,  1892,  1929,  1933,  1946,  1981,  1985,  1999,  2034,
    2037,  2078,  2082,  2123,  2127,  2166,  2207,  2211,  2257,  2301,
    2335,  2368,  2373,  2411,  2450,  2460,  2464,  2523,  2582,  2587,
    2654,  2719,  2758,  2763,  2764,  2765,  2798,  2830,  2834,  2870,
    2904,  2906,  2939,  2970,  2974,  2975,  2976,  2977,  2981,  3018,
    3056,  3068,  3077,  3086,  3092,  3103
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'('", "')'", "'{'", "'}'", "'['", "']'",
  "'.'", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'|'", "'^'", "','",
  "';'", "'<'", "'>'", "'~'", "'!'", "'?'", "':'", "'='", "RIGHT_OP",
  "LEFT_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "LE_OP", "GE_OP",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "UNSIGNED_RIGHT", "UNSIGNED_RIGHT_ASSIGN", "integerLiteral",
  "stringLiteral", "nullLiteral", "characterLiteral", "textBlock",
  "booleanLiteral", "FloatingPointLiteral", "Identifier", "CONTINUE",
  "FOR", "NEW", "IF", "PACKAGE", "BOOLEAN", "PRIVATE", "THIS", "BREAK",
  "DOUBLE", "THROW", "BYTE", "ELSE", "PUBLIC", "RETURN", "INT", "SHORT",
  "CHAR", "FINAL", "STATIC", "VOID", "CLASS", "LONG", "FLOAT", "WHILE",
  "_", "YIELD", "eof", "INC_OP", "DEC_OP", "$accept", "Literal",
  "PrimitiveType", "NumericType", "IntegralType", "FloatingPointType",
  "Dims", "Name", "SimpleName", "QualifiedName", "CompilationUnit",
  "OrdinaryCompilationUnit", "TopLevelClassOrInterfaceDeclarations",
  "TopLevelClassOrInterfaceDeclaration", "ClassDeclaration", "Modifiers",
  "Modifier", "ClassBody", "ClassBodyDeclarations", "ClassBodyDeclaration",
  "FieldDeclaration", "VariableDeclaratorList", "VariableDeclarator",
  "Declarator", "MethodDeclaration", "MethodHeader", "VOID2",
  "MethodorConstrDeclarator", "SimpleName2", "VariableInitializer",
  "Dimsy", "FormalParameterList", "FormalParameter", "MethodBody",
  "StaticInitializer", "ConstructorDeclaration", "ConstructorBody",
  "ExplicitConstructorInvocation", "ArgumentListy", "ClassBodyy", "Block",
  "BlockStatements", "BlockStatement", "Declaration_list",
  "LocalVariableDeclaration", "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "LabeledStatement",
  "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IF_CODE", "$@1", "IfThenStatement",
  "IfThenElseStatement", "IfThenElseStatementNoShortIf", "WhileStatement",
  "WhileStatementNoShortIf", "ForStatement", "ForStatementNoShortIf",
  "BasicForHeader", "EnhancedForHeader", "ForInity", "Expressiony",
  "ForUpdatey", "ForInit", "ForUpdate", "StatementExpressionList",
  "BreakStatement", "ContinueStatement", "ReturnStatement",
  "ThrowStatement", "EXPR_CODE", "$@2", "N", "Primary",
  "PrimaryNoNewArray", "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression",
  "ClassOrInterfaceTypeToInstantiate", "TypeArgumentsOrDiamondy",
  "ClassOrInterfaceTypeToInstant", "TypeArgumentsOrDiamond", "ArrayAccess",
  "MethodInvocation", "ArgumentList", "ArrayCreationExpression",
  "DimExprs", "DimExpr", "Expression", "AssignmentExpression",
  "Assignment", "$@4", "LeftHandSide", "AssignmentOperator",
  "ConditionalExpression", "GOTO_COND", "WRITE_GOTO",
  "ConditionalOrExpression", "GOTO_OR", "ConditionalAndExpression",
  "GOTO_AND", "InclusiveOrExpression", "ExclusiveOrExpression",
  "AndExpression", "EqualityExpression", "RelationalExpression",
  "ShiftExpression", "AdditiveExpression", "MultiplicativeExpression",
  "UnaryExpression", "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "PostfixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "CastExpression",
  "G", "S", "NEXT_QUAD", "ChangeTable", "A", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,    40,    41,   123,   125,    91,    93,    46,
      43,    45,    42,    47,    37,    38,   124,    94,    44,    59,
      60,    62,   126,    33,    63,    58,    61,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315
};
# endif

#define YYPACT_NINF (-357)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-248)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -357,    14,  -357,   126,  -357,  -357,  -357,  -357,  -357,  -357,
     -46,  -357,  -357,   -47,    83,  -357,  -357,   -46,  -357,    35,
    -357,  -357,  -357,    35,   643,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,    45,  -357,  -357,  -357,     0,  -357,  -357,
    -357,   463,  -357,  -357,  -357,    23,    27,  -357,  -357,  -357,
    -357,    82,    70,  -357,     9,  -357,   107,  -357,     0,    27,
     109,  -357,  -357,  -357,  -357,  -357,    62,  -357,   138,   956,
    -357,   123,  -357,  -357,    86,  -357,   146,  -357,  -357,  -357,
     683,   956,   956,   956,   956,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,   489,  -357,   956,   956,  -357,   955,  -357,
    -357,  -357,   154,  -357,  -357,  -357,  1007,  -357,  -357,  -357,
    -357,  -357,   449,  -357,  -357,    80,  -357,   153,  -357,   177,
     137,   180,   175,    75,    46,   196,   148,  -357,  -357,  -357,
    -357,   139,  -357,  -357,  -357,   149,  -357,   194,  -357,   195,
    -357,   606,   207,   227,    50,   201,  -357,  -357,  -357,  -357,
     229,   230,   241,  -357,  -357,   956,   956,     1,     1,   956,
    -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,   956,  -357,  -357,   956,  -357,   956,   956,
     956,   956,   956,   956,   956,   956,   956,   956,   956,   956,
     956,   956,   956,   956,   956,   956,  -357,  -357,   238,    27,
      26,  -357,   956,   240,  -357,   956,  -357,     7,   245,  -357,
       8,   956,   886,   249,    62,   228,  -357,  -357,  -357,  -357,
     235,  -357,  -357,  -357,  -357,   236,  -357,  -357,  -357,  -357,
    -357,   722,   722,  -357,  -357,  -357,  -357,    -4,     3,  -357,
    -357,  -357,   139,   141,   145,   956,  -357,   956,   252,  -357,
     202,   248,   956,   261,   253,  -357,   264,   202,  -357,  -357,
     271,  -357,   268,   956,  -357,   153,   177,   137,   180,   175,
      75,    75,    46,    46,    46,    46,   196,   196,   196,   148,
     148,  -357,  -357,  -357,   269,  -357,  -357,   238,  -357,  -357,
     280,  -357,  -357,   266,   816,   289,  -357,   276,   278,  -357,
     287,  -357,   290,  -357,  -357,  -357,   778,  -357,  -357,  -357,
     301,   903,  -357,  -357,   230,   293,  -357,  -357,   311,  -357,
     956,  -357,   956,  -357,  -357,   294,   238,  -357,  -357,   556,
     302,  -357,   299,   307,   309,  -357,  -357,   956,  -357,  -357,
    -357,  -357,   722,   323,   304,  -357,  -357,   263,  -357,  -357,
    -357,  -357,  -357,   778,   778,  -357,  -357,  -357,    35,  -357,
     327,  -357,  -357,  -357,  -357,   956,   761,   956,   329,   335,
     761,  -357,  -357,  -357,   273,   778,  -357,  -357,  -357,  -357,
    -357,   956,   337,  -357,   324,  -357,  -357,  -357,  -357,  -357,
     778,  -357,  -357,  -357,  -357,   761,   722,   338,  -357,   722,
     277,   342,  -357,  -357,  -357,  -357,  -357,  -357,  -357,   778,
     778,  -357,  -357
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      28,     0,    26,    27,     1,    31,    37,    36,    39,    38,
       0,    29,    30,     0,    34,   251,   252,     0,    35,     0,
     252,    41,    33,     0,     0,    32,    40,    10,    19,    13,
      15,    14,    17,    38,    60,    16,    18,     0,     9,    11,
      12,     0,    42,    43,    44,     0,     0,    45,    46,   254,
      72,    53,     0,    49,    51,    57,     0,    63,     0,     0,
       0,    71,    55,    70,    59,    82,     0,    48,     0,     0,
     255,     0,    56,    58,    82,    73,   253,    53,    50,    54,
       0,     0,     0,     0,     0,     2,     6,     8,     5,     7,
       4,     3,    24,     0,   154,     0,     0,   153,   245,    22,
      23,    52,   244,   151,   156,   159,   157,   158,   152,    64,
     179,   180,     0,   181,   253,   199,   253,   203,   253,   206,
     209,   211,   213,   216,   221,   225,   228,   232,   233,   234,
     237,   240,   246,   247,   243,     0,    47,     0,    82,   253,
      81,     0,     0,     0,   245,   157,   235,   236,   241,   242,
       0,   166,     0,   238,   239,    77,     0,     0,     0,     0,
     186,   190,   191,   188,   187,   189,   192,   193,   195,   196,
     197,   194,   182,     0,   200,   204,     0,   207,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   248,   249,    65,     0,
       0,    67,    77,   253,    75,     0,   101,     0,     0,   117,
       0,     0,     0,     0,     0,    22,    87,   100,    83,    84,
       0,    85,    89,    90,   102,     0,   253,    91,    92,    93,
      94,     0,     0,   103,   104,   105,   106,   116,   115,   110,
     111,   112,     0,   113,   114,     0,   155,     0,    65,   176,
       0,   164,    77,     0,    78,   173,     0,     0,    25,   160,
       0,   161,     0,     0,   201,   202,   205,   208,   210,   212,
     214,   215,   217,   218,   220,   219,   223,   222,   224,   226,
     227,   229,   230,   231,     0,    66,    62,    65,   253,   253,
       0,    74,   144,     0,   130,     0,   142,     0,     0,   146,
       0,   253,    88,   253,    86,   109,     0,   124,   125,   250,
       0,     0,   175,   177,   166,     0,   163,   165,     0,   171,
       0,   169,    77,   170,   183,     0,    20,    69,    61,     0,
       0,   143,   137,   139,     0,   131,   136,     0,   141,   147,
     145,   148,     0,     0,    22,   119,   150,    89,    96,   253,
      97,    98,    99,     0,     0,   178,   167,   168,    79,   174,
       0,   253,    21,    68,    76,     0,     0,   132,     0,     0,
       0,   107,   253,   253,     0,     0,   126,   127,    80,   162,
     172,     0,     0,   140,     0,   133,   118,   253,   149,   148,
       0,   253,   150,   198,   129,   134,     0,     0,   108,     0,
       0,     0,   135,   138,   122,   253,   120,   253,   128,     0,
       0,   123,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -357,  -357,    -3,  -357,  -357,  -357,    24,   -59,   -92,  -357,
    -357,  -357,  -357,  -357,   213,    89,  -357,   -23,  -357,  -357,
    -357,   -55,   291,  -357,  -357,  -357,   314,     5,   159,  -357,
    -235,  -357,    33,  -357,  -357,  -357,  -357,  -357,  -185,  -357,
      15,   -70,  -357,  -357,    71,   172,  -334,  -139,  -357,  -357,
    -357,  -288,  -132,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
    -357,  -130,  -126,  -357,  -357,  -357,  -357,  -357,  -356,  -357,
    -357,  -357,  -357,   -25,  -357,   -24,  -357,  -357,   -43,    77,
    -357,  -357,    56,  -357,   -12,     6,  -357,  -357,  -357,   125,
     -62,   108,    55,  -357,  -357,  -357,    -7,  -357,  -357,  -357,
    -357,   199,  -357,   200,   203,   197,   208,    58,  -153,     2,
      51,   198,    57,   106,  -357,   155,   204,   242,  -357,   362,
     360,   -71,  -357,  -357
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    97,   199,    38,    39,    40,   285,    98,    99,   100,
       1,     2,     3,    11,    12,    13,    14,    22,    24,    42,
      43,    52,    53,    54,    44,    45,    46,    55,    56,   101,
     286,   200,   201,    62,    47,    48,    75,   138,   253,   379,
     217,    76,   218,   219,   220,   307,   346,   347,   223,   348,
     224,   225,   349,   295,   227,   228,   350,   229,   351,   230,
     352,   353,   354,   334,   384,   401,   335,   402,   336,   233,
     234,   235,   236,   369,   370,   374,   102,   103,   104,   105,
     152,   316,   251,   317,   106,   107,   254,   108,   248,   249,
     255,   110,   111,   263,   112,   172,   113,   114,   325,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    16,
      19,   141,    65,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   151,   222,    71,   139,  -156,   333,   109,    15,   226,
     383,   231,  -158,   312,     4,   232,    68,   290,   143,   376,
     377,    37,   144,   144,   144,   144,   292,   296,    49,    17,
     288,   272,   273,   274,   275,    69,   144,   144,    58,   403,
      21,   392,    61,   173,   289,   176,    60,   178,    50,   215,
      49,    64,   327,   155,    51,    92,   398,   156,   257,   157,
      63,    92,    92,    72,    73,   258,   260,   318,   203,   145,
     145,   145,   145,   188,   189,   411,   412,   142,   333,  -156,
    -156,    57,   388,   145,   145,   -63,  -158,  -158,    66,    67,
     150,   190,   222,   222,   256,   184,   185,   262,   237,   226,
     226,   231,   231,    18,   174,   232,   232,   333,   186,   187,
      70,   264,   175,    41,    74,   293,    77,   144,   297,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   360,   214,   215,
     215,    66,   136,   143,     6,     5,    79,   238,   137,   298,
     300,     7,   140,   198,   180,   306,     8,     9,   314,   302,
     193,   194,   195,   158,   145,   151,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   177,   310,   144,     6,   237,   237,
     276,   277,   278,   179,     7,   181,   239,   202,   240,     8,
       9,   204,    10,   222,   182,   183,   191,   192,   159,    27,
     226,   245,   231,    28,   344,    29,   232,   328,   329,    30,
      31,    32,   196,   197,  -246,  -246,    35,    36,  -247,  -247,
     341,   246,   342,   145,   259,   261,   247,   238,   238,   250,
     270,   271,   279,   280,   252,   284,   291,   241,   294,   310,
     215,   237,   301,   303,   304,   305,    92,   222,   359,   311,
     222,   344,   344,   237,   226,   319,   231,   226,   315,   231,
     232,   320,   321,   232,   322,   368,   323,   326,   375,   146,
     147,   148,   149,   344,   330,   331,   239,   239,   240,   240,
     381,   214,   337,   153,   154,   338,   242,   339,   344,   237,
     238,   389,   390,   382,   215,   385,   340,   215,    66,   355,
     237,   237,   238,   221,   357,   358,   396,   344,   344,   361,
     399,   364,   144,   237,   365,   366,   372,   237,   367,   373,
     -95,   380,   237,   386,   409,   378,   410,   241,   241,   387,
     391,   394,   405,   395,   407,   243,   408,   237,   238,   239,
     362,   240,   237,   237,   216,    59,   237,    78,   287,   238,
     238,   239,   363,   240,   397,   332,   237,   237,   400,   145,
     356,   324,   238,   313,   393,   265,   238,   268,   266,    20,
      23,   238,   267,   244,     0,     0,   242,   242,     0,   269,
       0,   281,   282,   283,     0,     0,   238,   239,     0,   240,
     241,   238,   238,     0,   308,   238,     0,     0,   239,   239,
     240,   240,   241,     0,     0,   238,   238,     0,     0,     0,
       0,   239,     0,   240,     0,   239,     0,   240,     0,     0,
     239,     0,   240,     0,     0,   243,   243,     0,     0,     0,
       0,     0,     0,   309,     0,   239,     0,   240,   241,   242,
     239,   239,   240,   240,   239,     0,   240,     0,     0,   241,
     241,   242,     0,     0,   239,   239,   240,   240,     0,     0,
       0,     0,   241,   244,   244,   160,   241,     0,   345,     0,
       0,   241,     0,     0,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,     0,   171,   241,   242,   243,     0,
       0,   241,   241,     0,     0,   241,     0,     0,   242,   242,
     243,     0,     0,     0,   371,   241,   241,    57,     0,     0,
       0,   242,     0,    27,     0,   242,   308,    28,     0,    29,
     242,     0,     0,    30,    31,    32,   244,     0,    34,     0,
      35,    36,     0,    92,     0,   242,   243,   345,   244,    27,
     242,   242,     0,    28,   242,    29,     0,   243,   243,    30,
      31,    32,   371,     0,   242,   242,    35,    36,   404,     0,
     243,   406,     0,     0,   243,     0,     0,     0,     0,   243,
       0,   404,   406,     0,   244,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   243,   244,   244,     0,     0,   243,
     243,     0,     0,   243,     0,     0,     0,     0,   244,   205,
       0,    49,   244,   243,   243,     0,    27,   244,     0,     0,
      28,     0,    29,     0,     0,   206,    30,    31,    32,     0,
       0,     0,   244,    35,    36,     0,     0,   244,   244,     0,
       0,   244,     0,     0,     0,     0,     0,     0,     0,    26,
       0,   244,   244,    85,    86,    87,    88,    89,    90,    91,
      92,   207,   208,    93,   209,     0,    27,     6,    94,   210,
      28,   211,    29,     0,     7,   212,    30,    31,    32,     8,
       9,     0,    10,    35,    36,   213,    80,     0,     0,    95,
      96,     0,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     6,    83,    84,    28,     0,    29,
       0,     7,     0,    30,    31,    32,     8,    33,    34,     0,
      35,    36,     0,     0,     0,   205,     0,    49,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,     0,     0,
      93,   206,     0,    27,     0,    94,     0,    28,     0,    29,
       0,     0,     0,    30,    31,    32,     0,     0,     0,     0,
      35,    36,     0,     0,   205,     0,    95,    96,     0,    85,
      86,    87,    88,    89,    90,    91,    92,   207,   208,    93,
     209,   205,     0,    49,    94,   210,     0,   211,     0,     0,
       0,   212,     0,     0,     0,     0,     0,   206,     0,     0,
       0,   213,     0,     0,     0,    95,    96,     0,    85,    86,
      87,    88,    89,    90,    91,    92,     0,     0,    93,   205,
       0,     0,     0,    94,     0,    85,    86,    87,    88,    89,
      90,    91,    92,   207,   208,    93,   209,     0,     0,     0,
      94,   210,     0,   211,    95,    96,     0,   212,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,     0,     0,
       0,    95,    96,    85,    86,    87,    88,    89,    90,    91,
      92,     0,     0,    93,     0,     0,    27,     0,    94,     0,
      28,     0,    29,     0,     0,     0,    30,    31,    32,    80,
       0,     0,     0,    35,    36,     0,    81,    82,     0,    95,
      96,     0,     0,     0,     0,   299,    80,     0,    83,    84,
       0,   326,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    84,     0,     0,     0,
       0,     0,     0,    85,    86,    87,    88,    89,    90,    91,
      92,     0,     0,    93,     0,     0,     0,     0,    94,     0,
      85,    86,    87,    88,    89,    90,    91,    92,   155,    80,
      93,     0,   156,     0,   157,    94,    81,    82,     0,    95,
      96,     0,     0,     0,     0,     0,     0,     0,    83,    84,
       0,  -184,     0,     0,     0,     0,    95,    96,     0,     0,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
       0,  -184,     0,    85,    86,    87,    88,    89,    90,    91,
      92,     0,     0,    93,   159,     0,     0,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -185,     0,     0,     0,     0,     0,    95,
      96,     0,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,     0,  -185
};

static const yytype_int16 yycheck[] =
{
      23,    93,   141,    58,    74,     9,   294,    69,    54,   141,
     366,   141,     9,   248,     0,   141,     7,   202,    80,   353,
     354,    24,    81,    82,    83,    84,    19,    19,     5,    76,
       4,   184,   185,   186,   187,    26,    95,    96,    41,   395,
       5,   375,    19,   114,    18,   116,    41,   118,    33,   141,
       5,    46,   287,     3,    54,    54,   390,     7,    57,     9,
      45,    54,    54,    58,    59,   157,   158,   252,   138,    81,
      82,    83,    84,    27,    28,   409,   410,    80,   366,    83,
      84,    54,   370,    95,    96,     3,    83,    84,    18,    19,
      93,    45,   231,   232,   156,    20,    21,   159,   141,   231,
     232,   231,   232,    14,    24,   231,   232,   395,    33,    34,
       3,   173,    32,    24,     5,   207,    54,   176,   210,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   322,   141,   231,
     232,    18,    19,   205,    61,    19,     8,   141,    62,   211,
     212,    68,     6,     4,    17,   226,    73,    74,   250,   214,
      12,    13,    14,     9,   176,   257,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,    31,   247,   245,    61,   231,   232,
     188,   189,   190,    16,    68,    15,   141,     3,   141,    73,
      74,     6,    76,   342,    29,    30,    10,    11,     7,    60,
     342,     4,   342,    64,   306,    66,   342,   288,   289,    70,
      71,    72,    83,    84,    83,    84,    77,    78,    83,    84,
     301,     4,   303,   245,   157,   158,     7,   231,   232,     9,
     182,   183,   191,   192,     3,     7,     6,   141,     3,   311,
     342,   294,     3,    25,    19,    19,    54,   396,   320,     7,
     399,   353,   354,   306,   396,     4,   396,   399,    20,   399,
     396,    18,     8,   399,     3,   337,     8,     8,   349,    81,
      82,    83,    84,   375,     4,    19,   231,   232,   231,   232,
     361,   294,     3,    95,    96,    19,   141,    19,   390,   342,
     294,   372,   373,   365,   396,   367,    19,   399,    18,     8,
     353,   354,   306,   141,    21,     4,   387,   409,   410,    25,
     391,    19,   381,   366,    25,    18,     3,   370,    19,    25,
      67,     4,   375,     4,   405,   358,   407,   231,   232,     4,
      67,     4,     4,    19,    67,   141,     4,   390,   342,   294,
     326,   294,   395,   396,   141,    41,   399,    66,   199,   353,
     354,   306,   329,   306,   389,   294,   409,   410,   392,   381,
     314,   263,   366,   248,   381,   176,   370,   180,   178,    17,
      20,   375,   179,   141,    -1,    -1,   231,   232,    -1,   181,
      -1,   193,   194,   195,    -1,    -1,   390,   342,    -1,   342,
     294,   395,   396,    -1,   232,   399,    -1,    -1,   353,   354,
     353,   354,   306,    -1,    -1,   409,   410,    -1,    -1,    -1,
      -1,   366,    -1,   366,    -1,   370,    -1,   370,    -1,    -1,
     375,    -1,   375,    -1,    -1,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,   245,    -1,   390,    -1,   390,   342,   294,
     395,   396,   395,   396,   399,    -1,   399,    -1,    -1,   353,
     354,   306,    -1,    -1,   409,   410,   409,   410,    -1,    -1,
      -1,    -1,   366,   231,   232,    26,   370,    -1,   306,    -1,
      -1,   375,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,   390,   342,   294,    -1,
      -1,   395,   396,    -1,    -1,   399,    -1,    -1,   353,   354,
     306,    -1,    -1,    -1,   342,   409,   410,    54,    -1,    -1,
      -1,   366,    -1,    60,    -1,   370,   354,    64,    -1,    66,
     375,    -1,    -1,    70,    71,    72,   294,    -1,    75,    -1,
      77,    78,    -1,    54,    -1,   390,   342,   375,   306,    60,
     395,   396,    -1,    64,   399,    66,    -1,   353,   354,    70,
      71,    72,   390,    -1,   409,   410,    77,    78,   396,    -1,
     366,   399,    -1,    -1,   370,    -1,    -1,    -1,    -1,   375,
      -1,   409,   410,    -1,   342,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   390,   353,   354,    -1,    -1,   395,
     396,    -1,    -1,   399,    -1,    -1,    -1,    -1,   366,     3,
      -1,     5,   370,   409,   410,    -1,    60,   375,    -1,    -1,
      64,    -1,    66,    -1,    -1,    19,    70,    71,    72,    -1,
      -1,    -1,   390,    77,    78,    -1,    -1,   395,   396,    -1,
      -1,   399,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,   409,   410,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    78,    79,     3,    -1,    -1,    83,
      84,    -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    22,    23,    64,    -1,    66,
      -1,    68,    -1,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    -1,    -1,    -1,     3,    -1,     5,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    19,    -1,    60,    -1,    62,    -1,    64,    -1,    66,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,     3,    -1,    83,    84,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,     3,    -1,     5,    62,    63,    -1,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    83,    84,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    57,     3,
      -1,    -1,    -1,    62,    -1,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      62,    63,    -1,    65,    83,    84,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    83,    84,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,
      64,    -1,    66,    -1,    -1,    -1,    70,    71,    72,     3,
      -1,    -1,    -1,    77,    78,    -1,    10,    11,    -1,    83,
      84,    -1,    -1,    -1,    -1,    19,     3,    -1,    22,    23,
      -1,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,     3,     3,
      57,    -1,     7,    -1,     9,    62,    10,    11,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,    26,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,     7,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    83,
      84,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    95,    96,    97,     0,    19,    61,    68,    73,    74,
      76,    98,    99,   100,   101,    54,   204,    76,   100,   205,
     204,     5,   102,   205,   103,   102,     6,    60,    64,    66,
      70,    71,    72,    74,    75,    77,    78,    87,    88,    89,
      90,   100,   104,   105,   109,   110,   111,   119,   120,     5,
     125,    54,   106,   107,   108,   112,   113,    54,    87,   111,
     112,    19,   118,   125,   112,   207,    18,    19,     7,    26,
       3,   106,   112,   112,     5,   121,   126,    54,   107,     8,
       3,    10,    11,    22,    23,    47,    48,    49,    50,    51,
      52,    53,    54,    57,    62,    83,    84,    86,    92,    93,
      94,   114,   161,   162,   163,   164,   169,   170,   172,   175,
     176,   177,   179,   181,   182,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   208,    19,    62,   122,   126,
       6,   206,    87,   175,    92,   169,   196,   196,   196,   196,
      87,    93,   165,   196,   196,     3,     7,     9,     9,     7,
      26,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    46,   180,   206,    24,    32,   206,    31,   206,    16,
      17,    15,    29,    30,    20,    21,    33,    34,    27,    28,
      45,    10,    11,    12,    13,    14,    83,    84,     4,    87,
     116,   117,     3,   126,     6,     3,    19,    55,    56,    58,
      63,    65,    69,    79,    87,    93,    99,   125,   127,   128,
     129,   130,   132,   133,   135,   136,   137,   139,   140,   142,
     144,   146,   147,   154,   155,   156,   157,   163,   170,   177,
     197,   198,   200,   201,   202,     4,     4,     7,   173,   174,
       9,   167,     3,   123,   171,   175,   175,    57,    93,   164,
      93,   164,   175,   178,   175,   186,   188,   189,   190,   191,
     192,   192,   193,   193,   193,   193,   194,   194,   194,   195,
     195,   196,   196,   196,     7,    91,   115,   113,     4,    18,
     123,     6,    19,    93,     3,   138,    19,    93,   175,    19,
     175,     3,   106,    25,    19,    19,   206,   130,   130,   196,
     175,     7,   115,   174,    93,    20,   166,   168,   123,     4,
      18,     8,     3,     8,   176,   183,     8,   115,   206,   206,
       4,    19,   129,   136,   148,   151,   153,     3,    19,    19,
      19,   206,   206,    79,    93,   130,   131,   132,   134,   137,
     141,   143,   145,   146,   147,     8,   167,    21,     4,   175,
     123,    25,    91,   117,    19,    25,    18,    19,   175,   158,
     159,   130,     3,    25,   160,   206,   131,   131,   102,   124,
       4,   206,   175,   153,   149,   175,     4,     4,   136,   206,
     206,    67,   131,   181,     4,    19,   206,   158,   131,   206,
     160,   150,   152,   153,   130,     4,   130,    67,     4,   206,
     206,   131,   131
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    89,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    94,    95,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   101,   101,
     102,   103,   103,   104,   104,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   110,   110,   110,   110,
     111,   112,   112,   113,   114,   115,   115,   116,   116,   117,
     118,   118,   119,   120,   121,   121,   122,   123,   123,   124,
     124,   125,   126,   126,   127,   127,   128,   128,   129,   130,
     130,   130,   130,   130,   130,   131,   131,   131,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   133,   134,   135,
     136,   136,   136,   136,   136,   136,   136,   138,   137,   139,
     140,   141,   142,   143,   144,   144,   145,   145,   146,   147,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   153,
     153,   154,   154,   155,   155,   156,   156,   157,   159,   158,
     160,   161,   161,   162,   162,   162,   162,   162,   162,   163,
     163,   163,   164,   165,   166,   166,   167,   167,   168,   169,
     169,   170,   170,   171,   171,   172,   173,   173,   174,   175,
     176,   176,   178,   177,   179,   179,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   181,   181,
     182,   183,   184,   184,   185,   186,   186,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   191,   192,   192,   192,
     192,   192,   193,   193,   193,   193,   194,   194,   194,   195,
     195,   195,   195,   196,   196,   196,   196,   196,   197,   198,
     199,   199,   199,   199,   200,   200,   200,   200,   201,   202,
     203,   204,   205,   206,   207,   208
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     3,     1,     1,     0,     2,
       1,     1,     5,     4,     1,     2,     1,     1,     1,     1,
       3,     0,     2,     1,     1,     1,     1,     4,     3,     1,
       3,     1,     3,     1,     3,     2,     3,     2,     3,     2,
       1,     6,     5,     1,     1,     0,     1,     1,     4,     3,
       1,     1,     2,     3,     4,     3,     5,     0,     1,     0,
       1,     4,     0,     3,     1,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     2,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     3,
       7,     7,     7,     7,     2,     2,     2,     2,     8,     6,
       0,     1,     0,     1,     0,     1,     1,     1,     1,     1,
       3,     3,     2,     3,     2,     3,     2,     3,     0,     2,
       0,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       3,     3,     6,     3,     0,     1,     0,     3,     2,     4,
       4,     4,     6,     1,     3,     4,     1,     2,     3,     1,
       1,     1,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     1,
       2,     0,     3,     1,     2,     3,     1,     2,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       4,     1,     0,     0,     0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2:
#line 78 "parser.y++"
                     {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("int");
        (yyval.ptr)->intVal = stoi(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 1907 "parser.cpp"
    break;

  case 3:
#line 88 "parser.y++"
                           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("float");
        (yyval.ptr)->realVal = stod(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();

    }
#line 1923 "parser.cpp"
    break;

  case 4:
#line 99 "parser.y++"
                     {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("boolean");
        if(string((yyvsp[0].str)) == "true") (yyval.ptr)->intVal = 1;
        else (yyval.ptr)->intVal = 0;
        (yyval.ptr)->strVal = string((yyvsp[0].str));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 1940 "parser.cpp"
    break;

  case 5:
#line 111 "parser.y++"
                       {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("char");
        (yyval.ptr)->intVal = char_int(string((yyvsp[0].str)));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 1955 "parser.cpp"
    break;

  case 6:
#line 121 "parser.y++"
                    {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("string");
        (yyval.ptr)->strVal = string((yyvsp[0].str));
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 1970 "parser.cpp"
    break;

  case 7:
#line 131 "parser.y++"
                {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("textblock");
        (yyval.ptr)->tbval = (yyvsp[0].str);
        (yyval.ptr)->expType = 4;
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 1984 "parser.cpp"
    break;

  case 8:
#line 140 "parser.y++"
                  {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = string("null");
        (yyval.ptr)->expType = 4;
        (yyval.ptr)->tempName = string((yyvsp[0].str));
		sym_entry* temp = new sym_entry;
		(yyval.ptr)->place = qid((yyvsp[0].str), temp);
		(yyval.ptr)->nextlist.clear();
    }
#line 1998 "parser.cpp"
    break;

  case 9:
#line 153 "parser.y++"
                  {
        type = (yyvsp[0].ptr)->type;
        (yyval.ptr) = (yyvsp[0].ptr);
	}
#line 2007 "parser.cpp"
    break;

  case 10:
#line 157 "parser.y++"
              {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
        type = (yyvsp[0].str);
        (yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2019 "parser.cpp"
    break;

  case 11:
#line 168 "parser.y++"
                   {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2027 "parser.cpp"
    break;

  case 12:
#line 171 "parser.y++"
                        {
        (yyval.ptr) = (yyvsp[0].ptr) ;
    }
#line 2035 "parser.cpp"
    break;

  case 13:
#line 177 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);

    }
#line 2049 "parser.cpp"
    break;

  case 14:
#line 186 "parser.y++"
            {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2062 "parser.cpp"
    break;

  case 15:
#line 194 "parser.y++"
          {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2075 "parser.cpp"
    break;

  case 16:
#line 202 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2088 "parser.cpp"
    break;

  case 17:
#line 210 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2101 "parser.cpp"
    break;

  case 18:
#line 221 "parser.y++"
            {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2114 "parser.cpp"
    break;

  case 19:
#line 229 "parser.y++"
             {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2127 "parser.cpp"
    break;

  case 20:
#line 240 "parser.y++"
           {
        vector<data2>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("Dims", v);

        // Semantics
		(yyval.ptr)->expType = 2;
        (yyval.ptr)->type = "*";

    }
#line 2143 "parser.cpp"
    break;

  case 21:
#line 251 "parser.y++"
                 {
        vector<data2>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("Dims", v);

        // Semantics
        if(!(yyvsp[0].ptr)->is_error){
            (yyval.ptr)->expType = 2;
            (yyval.ptr)->type = (yyvsp[0].ptr)->type + "*";
        }
        else {
            (yyval.ptr)->is_error = 1;
        }
    }
#line 2164 "parser.cpp"
    break;

  case 22:
#line 272 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2170 "parser.cpp"
    break;

  case 23:
#line 273 "parser.y++"
                  {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2176 "parser.cpp"
    break;

  case 24:
#line 276 "parser.y++"
               {
        (yyval.ptr)=makeleaf((yyvsp[0].str));

        // Semantics
		cout << "in Simplename\n";
		string temp = primaryExpression(string((yyvsp[0].str)));  
		// if type is there in the symbol table then this means the variable is already declared
		if(temp == ""){
			yyerror(("Undeclared Identifier " + string((yyvsp[0].str))).c_str());
		}
		else{
			if(temp.substr(0, 5) == "FUNC_"){
				(yyval.ptr)->expType = 3;
			}
			else
			{
				if((*curr_table)[string((yyvsp[0].str))]->init == 0){
					yyerror("Uninitialized variable used ");
				}
				if(temp.back() == '*'){
					(yyval.ptr)->expType = 2; 
				}
				else (yyval.ptr)->expType = 1;
			}

			if(temp.substr(0,5)=="FUNC_" && temp.back() == '#'){
				temp.pop_back();
				(yyval.ptr)->type = temp;
				(yyval.ptr)->tempName = string((yyvsp[0].str)); 

                // --3AC 
				(yyval.ptr)->nextlist.clear();
			}
			else{

				(yyval.ptr)->type = temp;
				(yyval.ptr)->isInit = lookup(string((yyvsp[0].str)))->init;
				(yyval.ptr)->size = getSize(temp);
				(yyval.ptr)->tempName = string((yyvsp[0].str)); 
				
				//--3AC
				(yyval.ptr)->place = qid(string((yyvsp[0].str)), lookup(string((yyvsp[0].str))));
				(yyval.ptr)->nextlist.clear();

			}
		}
    }
#line 2228 "parser.cpp"
    break;

  case 25:
#line 325 "parser.y++"
                        {
        vector<data2>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL,".",0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("Name.id", v);

        //Semantics
		if(!(yyvsp[-2].ptr)->is_error && (yyvsp[-2].ptr)->expType!=4){
			string temp = string((yyvsp[0].ptr)->tempName);
			int ret = findTypeAttr((yyvsp[-2].ptr)->type,temp);
			if(ret == -1){
				yyerror(("Class " + (yyvsp[-2].ptr)->node_name + " not defined").c_str());
				(yyval.ptr)->is_error = 1;
			}
			else if (ret == 0){
				yyerror(("Class " + (yyvsp[-2].ptr)->type.substr(6, (yyvsp[-2].ptr)->type.length()-6) + " has no member " + string((yyvsp[0].ptr)->tempName)).c_str());
				(yyval.ptr)->is_error = 1;
			}
			else{
				(yyval.ptr)->type = StructAttrType((yyvsp[-2].ptr)->type, temp);
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + "." + temp;
				
				qid temp_var = newtemp((yyval.ptr)->type);
				sym_entry* attr_sym = retTypeAttrEntry((yyvsp[-2].ptr)->type, string((yyvsp[0].ptr)->tempName), (yyvsp[-2].ptr)->tempName);
				emit(qid("member_access", NULL), (yyvsp[-2].ptr)->place, qid(string((yyvsp[0].ptr)->tempName), attr_sym), temp_var, -1);
				temp_var.second->array_dims = attr_sym->array_dims;
				(yyval.ptr)->place = temp_var;
			}
		}
		else{
			if((yyvsp[-2].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}
    }
#line 2270 "parser.cpp"
    break;

  case 26:
#line 366 "parser.y++"
                              {
        vector<data2> v;
        insertAttr(v, (yyvsp[0].ptr), "", 1);
        (yyval.ptr) = makenode("CompilationUnit",v);
    }
#line 2280 "parser.cpp"
    break;

  case 27:
#line 374 "parser.y++"
                                           {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2288 "parser.cpp"
    break;

  case 28:
#line 380 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2294 "parser.cpp"
    break;

  case 29:
#line 381 "parser.y++"
                                                                               {
        vector<data2> v;
		insertAttr(v,(yyvsp[-1].ptr),"",1);
		insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("Top_level_class_or_interface_declarations",v);
		cout << "leaving top level\n";
    }
#line 2306 "parser.cpp"
    break;

  case 30:
#line 391 "parser.y++"
                       { (yyval.ptr) = (yyvsp[0].ptr);}
#line 2312 "parser.cpp"
    break;

  case 31:
#line 392 "parser.y++"
         {
        (yyval.ptr) = makeleaf(";");
    }
#line 2320 "parser.cpp"
    break;

  case 32:
#line 400 "parser.y++"
                                    {
		vector<data2>v;
        if((yyvsp[-4].ptr) != NULL) insertAttr(v,(yyvsp[-4].ptr),"",1);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode((yyvsp[-3].str),v);

        // Semantics
		cout << "hiii\n";
		if(!currTypeLookup("class_" + string((yyvsp[-2].ptr)->tempName))){
			cout << "hi\n";
			printStructTable("class_" + string((yyvsp[-2].ptr)->tempName));
			(yyval.ptr)->type = "class_" + string((yyvsp[-2].ptr)->tempName);
		}
		else {
			yyerror(("redefinition of class " + string((yyvsp[-2].ptr)->tempName)).c_str());
		}
		type = "";
    }
#line 2344 "parser.cpp"
    break;

  case 33:
#line 419 "parser.y++"
                          {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode((yyvsp[-3].str),v);

        // Semantics
		cout << "hiii\n";
		if(!currTypeLookup("class_" + string((yyvsp[-2].ptr)->tempName))){
			cout << "hi\n";
			printStructTable("class_" + string((yyvsp[-2].ptr)->tempName));
			cout << "hii\n";
			type = string("class_" + string((yyvsp[-2].ptr)->tempName));
			(yyval.ptr)->type = type;
		}
		else {
			yyerror(("redefinition of class " + string((yyvsp[-2].ptr)->tempName)).c_str());
			(yyval.ptr)->is_error = 1;
		}
		type = "";
    }
#line 2370 "parser.cpp"
    break;

  case 34:
#line 443 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2376 "parser.cpp"
    break;

  case 35:
#line 444 "parser.y++"
                         {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("modifier",v);

        //  Semantics
		if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
        else{
            (yyval.ptr)->type = string((yyvsp[-1].ptr)->type + "_" + (yyvsp[0].ptr)->type);
        }
    }
#line 2395 "parser.cpp"
    break;

  case 36:
#line 461 "parser.y++"
           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "public";
    }
#line 2404 "parser.cpp"
    break;

  case 37:
#line 465 "parser.y++"
            {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "private";
    }
#line 2413 "parser.cpp"
    break;

  case 38:
#line 469 "parser.y++"
           {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "static";
    }
#line 2422 "parser.cpp"
    break;

  case 39:
#line 473 "parser.y++"
          {
        (yyval.ptr)=makeleaf((yyvsp[0].str));
        (yyval.ptr)->type = "final";
    }
#line 2431 "parser.cpp"
    break;

  case 40:
#line 480 "parser.y++"
                                    {
		vector<data2> v;
		cout<<"entered Class body"<<endl;
        insertAttr(v,NULL,"{",0);
        if((yyvsp[-1].ptr) != NULL) insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("classBody",v);
		cout << "leaving class body\n";
    }
#line 2445 "parser.cpp"
    break;

  case 41:
#line 492 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2451 "parser.cpp"
    break;

  case 42:
#line 493 "parser.y++"
                                                {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Class_Body_Declarations",v);

        // Semantics
		cout << "in classbodydeclarations\n";
    }
#line 2465 "parser.cpp"
    break;

  case 43:
#line 505 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2471 "parser.cpp"
    break;

  case 44:
#line 506 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2477 "parser.cpp"
    break;

  case 45:
#line 507 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2483 "parser.cpp"
    break;

  case 46:
#line 508 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2489 "parser.cpp"
    break;

  case 47:
#line 512 "parser.y++"
                                                         {
        vector<data2> v;
        insertAttr(v,(yyvsp[-3].ptr),"",1);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("Field_Declaration",v);

        // Semantics
		type = (yyvsp[-2].ptr)->type ;
		className = classTemp;
		type_delim = 0;

    }
#line 2508 "parser.cpp"
    break;

  case 48:
#line 526 "parser.y++"
                                               {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("Field_Declaration",v);

        // Semantics
        type = (yyvsp[-2].ptr)->type ;
		className = classTemp;
		type_delim = 0;
    }
#line 2525 "parser.cpp"
    break;

  case 49:
#line 542 "parser.y++"
                         {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2533 "parser.cpp"
    break;

  case 50:
#line 545 "parser.y++"
                                                    {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Variable_Declarator_List",v);
    }
#line 2545 "parser.cpp"
    break;

  case 51:
#line 555 "parser.y++"
                 {
        (yyval.ptr) = (yyvsp[0].ptr);

		// Semantics
		if (insertStructAttr((yyvsp[0].ptr)->tempName, (yyvsp[0].ptr)->type, (yyvsp[0].ptr)->size, 0) != 1){
			yyerror(("The Attribute " + string((yyvsp[0].ptr)->tempName) + " is already declared in the same class").c_str());
		} 
		cout << "in Variable declarator\n";
    }
#line 2559 "parser.cpp"
    break;

  case 52:
#line 564 "parser.y++"
                                         {

        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr)=makenode("=",v);

        // Semantics
        if(assignExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,"=") == ""){
            yyerror("Incorrect type assignment");
        }
		if (insertStructAttr((yyvsp[-2].ptr)->tempName, (yyvsp[-2].ptr)->type, (yyvsp[-2].ptr)->size, 1) != 1){
			yyerror(("The Attribute " + string((yyvsp[-2].ptr)->tempName) + " is already declared in the same class").c_str());
		} 
		//3 AC
		(yyval.ptr)->type=(yyvsp[-2].ptr)->type;
		int num = assign_exp((yyvsp[-1].str), (yyval.ptr)->type, (yyvsp[-2].ptr)->type, (yyvsp[0].ptr)->type, (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place);
		(yyval.ptr)->place = (yyvsp[-2].ptr)->place;
		backpatch((yyvsp[0].ptr)->nextlist, num);
    }
#line 2584 "parser.cpp"
    break;

  case 53:
#line 587 "parser.y++"
                 {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

		// Semantics
		cout << "in declartor\n";
        type_delim = 1;
		(yyval.ptr)->expType = 1; // Variable
		if(type != "") (yyval.ptr)->type = type;
		else {
            yyerror("Unspecified type of the identifier\n");
        }
		(yyval.ptr)->tempName = string((yyvsp[0].str));
		(yyval.ptr)->size = getSize(type);

		//3AC
		(yyval.ptr)->place = qid(string((yyvsp[0].str)), lookup(string((yyvsp[0].str))));
    }
#line 2606 "parser.cpp"
    break;

  case 54:
#line 604 "parser.y++"
                         {
        vector<data2> v;
		insertAttr(v, (yyvsp[-2].ptr), "", 1);
		insertAttr(v, NULL, "[ ]", 0);
		(yyval.ptr) = makenode("direct_declarator", v);

		// Semantics
		if((yyvsp[-2].ptr)->expType <=2 ) {
			(yyval.ptr)->expType = 2;
			(yyval.ptr)->type = (yyvsp[-2].ptr)->type + "*";
			(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName;
			(yyval.ptr)->size = 4;	
			(yyval.ptr)->intVal = 8;

			//3AC
			(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
			array_dims.push_back(0);
		}
		else yyerror(( (yyvsp[-2].ptr)->tempName + " declared as function returning an array").c_str());
    }
#line 2631 "parser.cpp"
    break;

  case 55:
#line 627 "parser.y++"
                             {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_declaration",v);

        // Semantics
    }
#line 2644 "parser.cpp"
    break;

  case 56:
#line 637 "parser.y++"
                                                     {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;

    }
#line 2662 "parser.cpp"
    break;

  case 57:
#line 650 "parser.y++"
                                           {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;
    }
#line 2678 "parser.cpp"
    break;

  case 58:
#line 661 "parser.y++"
                                             {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;
    }
#line 2695 "parser.cpp"
    break;

  case 59:
#line 673 "parser.y++"
                                   {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;
    }
#line 2711 "parser.cpp"
    break;

  case 60:
#line 687 "parser.y++"
           {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
		if(type == "") type = string((yyvsp[0].str));
		else if(!type_delim) type += " " + string((yyvsp[0].str));
		(yyval.ptr)->type = (yyvsp[0].str);
    }
#line 2724 "parser.cpp"
    break;

  case 61:
#line 698 "parser.y++"
                                                          {
        vector<data2> v;
        insertAttr(v,(yyvsp[-5].ptr),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        (yyval.ptr) = makenode("Methdod_declarator",v);

		// Semantics
			if((yyvsp[-5].ptr)->expType == 1) {
				(yyval.ptr)->tempName = (yyvsp[-5].ptr)->tempName;
				(yyval.ptr)->expType = 3;
				(yyval.ptr)->type = "FUNC_" + string((yyvsp[-5].ptr)->type);
				(yyval.ptr)->size = getSize((yyval.ptr)->type);

				vector<string> temp = getFuncArgs((yyvsp[-5].ptr)->tempName);
				if(temp.size() >=1 && temp[0] == "#NO_FUNC"){
					insertFuncArg((yyval.ptr)->tempName, funcArgs, (yyval.ptr)->type);
					funcArgs.clear();
					funcName = string((yyvsp[-5].ptr)->tempName);
					funcType = (yyvsp[-5].ptr)->type;

					//3AC
					(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
					backpatch((yyvsp[-2].ptr)->nextlist,(yyvsp[0].ind));
					emit(pair<string,sym_entry*>("FUNC_" + (yyval.ptr)->tempName + " start :",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),-2);
				}
				else{
					// Check if temp is correct
					if(temp == funcArgs){
						funcArgs.clear();
						funcName = string((yyvsp[-5].ptr)->tempName);
						funcType = (yyvsp[-5].ptr)->type;

						//3AC
						(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
						backpatch((yyvsp[-2].ptr)->nextlist,(yyvsp[0].ind));
						emit(pair<string,sym_entry*>("FUNC_" + (yyval.ptr)->tempName + " start :",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),-2);
					}
					else {
						yyerror(("Conflicting types for function " + (yyvsp[-5].ptr)->tempName).c_str());
					}
				}
			}
			else {
				if((yyvsp[-5].ptr)->expType == 2){
					yyerror( ((yyvsp[-5].ptr)->tempName + "declared as array of function").c_str());
				}
				else{
					yyerror( ((yyvsp[-5].ptr)->tempName + "declared as function of function").c_str());
				}
			}
	}
#line 2782 "parser.cpp"
    break;

  case 62:
#line 751 "parser.y++"
                                      {
		vector<data2> v;
		insertAttr(v, (yyvsp[-4].ptr), "", 1);
		insertAttr(v, NULL, "( )", 0);
        if((yyvsp[0].ptr) != NULL) insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("direct_declarator", v);

		// Semantics
			if((yyvsp[-4].ptr)->expType == 1) {
				(yyval.ptr)->tempName = (yyvsp[-4].ptr)->tempName;
				(yyval.ptr)->expType = 3;
				(yyval.ptr)->type = "FUNC_" + string((yyvsp[-4].ptr)->type);
				(yyval.ptr)->size = getSize((yyval.ptr)->type);

				vector<string> temp = getFuncArgs((yyvsp[-4].ptr)->tempName);
				if((temp.size() == 1 && temp[0] == "#NO_FUNC") || funcArgs == temp){
					insertFuncArg((yyval.ptr)->tempName, funcArgs, (yyval.ptr)->type);
					funcArgs.clear();
					funcName = string((yyvsp[-4].ptr)->tempName);
					funcType = (yyvsp[-4].ptr)->type;
				}
				else {
					yyerror(("Conflicting types for function " + (yyvsp[-4].ptr)->tempName).c_str());
				}
				//3AC
				(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
				emit(pair<string,sym_entry*>("FUNC_" + (yyval.ptr)->tempName + " start :",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),pair<string,sym_entry*>("",NULL),-2);
			}
			else {
				if((yyvsp[-4].ptr)->expType == 2){
					yyerror( ((yyvsp[-4].ptr)->tempName + "declared as array of function").c_str());
				}
				else{
					yyerror( ((yyvsp[-4].ptr)->tempName + "declared as function of function").c_str());
				}
			}
	}
#line 2824 "parser.cpp"
    break;

  case 63:
#line 791 "parser.y++"
                 {
        (yyval.ptr) = makeleaf((yyvsp[0].str));

        // Semantics
        type_delim = 1;
		(yyval.ptr)->expType = 1; // Variable
		if(type != "") (yyval.ptr)->type = type;
		else {
            yyerror("Undeclared Type\n");
        }
		(yyval.ptr)->tempName = string((yyvsp[0].str));
		(yyval.ptr)->size = getSize(type);

		//3AC
		(yyval.ptr)->place = qid((yyval.ptr)->tempName, NULL);
    }
#line 2845 "parser.cpp"
    break;

  case 64:
#line 810 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2851 "parser.cpp"
    break;

  case 65:
#line 814 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2857 "parser.cpp"
    break;

  case 66:
#line 815 "parser.y++"
           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2863 "parser.cpp"
    break;

  case 67:
#line 819 "parser.y++"
                      {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2871 "parser.cpp"
    break;

  case 68:
#line 822 "parser.y++"
                                                        {
        vector<data2> v;
        insertAttr(v,(yyvsp[-3].ptr),"",1);
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Formal_Parameter_list",v);

        // Semantics
        // 3AC
		backpatch((yyvsp[-3].ptr)->nextlist, (yyvsp[-1].ind));
		(yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;
    }
#line 2888 "parser.cpp"
    break;

  case 69:
#line 838 "parser.y++"
                                      {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Formal_Parameter",v);

        // Semantics
        if((yyvsp[0].ptr) != NULL){
            (yyvsp[-1].ptr)->type = string((yyvsp[-1].ptr)->type + (yyvsp[0].ptr)->type );
            (yyvsp[-1].ptr)->expType = 2;
        }
		type_delim = 0;
		type = "";
		if((yyvsp[-1].ptr)->expType == 1 || (yyvsp[-1].ptr)->expType == 2) {
			paramInsert(*curr_table, (yyvsp[-1].ptr)->tempName, (yyvsp[-1].ptr)->type, (yyvsp[-1].ptr)->size, 1, NULL);
			funcArgs.push_back((yyvsp[-1].ptr)->type);
		}
		else {
			yyerror("Argument type is not variable or array");
		}
    }
#line 2915 "parser.cpp"
    break;

  case 70:
#line 864 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2921 "parser.cpp"
    break;

  case 71:
#line 865 "parser.y++"
          {
		(yyval.ptr)=makeleaf(";");
		// if(func_flag>=2){
			int bc = block_stack.top();
			block_stack.pop();
			string str = "Block" + to_string(bc);
			string name = funcName+str+".csv";
			printSymbolTable(curr_table, name);
			updSymbolTable(str,0);
		// 	func_flag--;
		// }
	}
#line 2938 "parser.cpp"
    break;

  case 72:
#line 880 "parser.y++"
                   {
        vector<data2> v;
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("StaticInitilizer",v);

        (yyval.ptr)->is_error = (yyvsp[0].ptr)->is_error;
    }
#line 2951 "parser.cpp"
    break;

  case 73:
#line 891 "parser.y++"
                                                         {
        vector<data2> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Constructor_declaration",v);

        // Semantics
		type = "";
		className = classTemp;
		type_delim = 0;
		(yyval.ptr)->is_error = (yyvsp[-2].ptr)->is_error || (yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error;
    }
#line 2969 "parser.cpp"
    break;

  case 74:
#line 907 "parser.y++"
                                                            {
        vector<data2> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Constructor_body",v);
    }
#line 2982 "parser.cpp"
    break;

  case 75:
#line 915 "parser.y++"
                              {
        vector<data2> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Constructor_body",v);
    }
#line 2994 "parser.cpp"
    break;

  case 76:
#line 925 "parser.y++"
                                     {
        vector<data2> v;
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("ExplicitConstructorInvocation",v);


    }
#line 3010 "parser.cpp"
    break;

  case 77:
#line 939 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3016 "parser.cpp"
    break;

  case 78:
#line 940 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3022 "parser.cpp"
    break;

  case 79:
#line 950 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3028 "parser.cpp"
    break;

  case 80:
#line 951 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3034 "parser.cpp"
    break;

  case 81:
#line 971 "parser.y++"
                                        {
        (yyval.ptr) =(yyvsp[-1].ptr);
        cout << "in Block\n";
        // if(func_flag>=2){
			int bc = block_stack.top();
			block_stack.pop();
			string str = "Block" + to_string(bc);
			string name = funcName+str+".csv";
			printSymbolTable(curr_table, name);
			updSymbolTable(str,0);
		// 	func_flag--;
		// }
    }
#line 3052 "parser.cpp"
    break;

  case 82:
#line 987 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3058 "parser.cpp"
    break;

  case 83:
#line 988 "parser.y++"
                                               {
		cout << "in Block statements\n";
        vector<data2>v;
        if((yyvsp[-2].ptr) != NULL) insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("BlockStatements", v);

        // backpatch($1->nextlist, $2);
        // $$->nextlist = $3->nextlist;
		// $1->caselist.insert($1->caselist.end(), $3->caselist.begin(), $3->caselist.end());
        // $$->caselist = $1->caselist;
		// $1->continuelist.insert($1->continuelist.end(), $3->continuelist.begin(), $3->continuelist.end());
		// $1->breaklist.insert($1->breaklist.end(), $3->breaklist.begin(), $3->breaklist.end());
        // $$->continuelist = $1->continuelist;
        // $$->breaklist = $1->breaklist;
		cout << "in Block statements2\n";
    }
#line 3080 "parser.cpp"
    break;

  case 84:
#line 1008 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3086 "parser.cpp"
    break;

  case 85:
#line 1009 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3092 "parser.cpp"
    break;

  case 86:
#line 1013 "parser.y++"
                                   {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 3098 "parser.cpp"
    break;

  case 87:
#line 1014 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3104 "parser.cpp"
    break;

  case 88:
#line 1018 "parser.y++"
                                         {
        vector<data2>v;
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LocalVariableDeclaration", v);

        // Semantics
		cout << "in local variable declaration\n";
		type = (yyvsp[-1].ptr)->type ;
		type_delim = 0;
    }
#line 3120 "parser.cpp"
    break;

  case 89:
#line 1033 "parser.y++"
                                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3126 "parser.cpp"
    break;

  case 90:
#line 1034 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3132 "parser.cpp"
    break;

  case 91:
#line 1035 "parser.y++"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3138 "parser.cpp"
    break;

  case 92:
#line 1036 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3144 "parser.cpp"
    break;

  case 93:
#line 1037 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3150 "parser.cpp"
    break;

  case 94:
#line 1038 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3156 "parser.cpp"
    break;

  case 95:
#line 1042 "parser.y++"
                                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3162 "parser.cpp"
    break;

  case 96:
#line 1043 "parser.y++"
                              {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3168 "parser.cpp"
    break;

  case 97:
#line 1044 "parser.y++"
                                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3174 "parser.cpp"
    break;

  case 98:
#line 1045 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3180 "parser.cpp"
    break;

  case 99:
#line 1046 "parser.y++"
                          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3186 "parser.cpp"
    break;

  case 100:
#line 1050 "parser.y++"
          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3192 "parser.cpp"
    break;

  case 101:
#line 1051 "parser.y++"
        {(yyval.ptr)=makeleaf(";");}
#line 3198 "parser.cpp"
    break;

  case 102:
#line 1052 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3204 "parser.cpp"
    break;

  case 103:
#line 1053 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3210 "parser.cpp"
    break;

  case 104:
#line 1054 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3216 "parser.cpp"
    break;

  case 105:
#line 1055 "parser.y++"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3222 "parser.cpp"
    break;

  case 106:
#line 1056 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3228 "parser.cpp"
    break;

  case 107:
#line 1060 "parser.y++"
                                        {
        vector<data2>v;
        insertAttr(v, (yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LabeledStatement", v);


        //semantic
        if((yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

		if(gotolabel.find((yyvsp[-3].ptr)->tempName) != gotolabel.end()){
			yyerror(string("duplicate label \'" + string((yyvsp[-3].ptr)->tempName) + "\'").c_str());
			(yyval.ptr)->is_error = 1;
		}
		else{
			gotolabel.insert({string((yyvsp[-3].ptr)->tempName), (yyvsp[-1].ind)});
		}
		(yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;
		(yyval.ptr)->caselist = (yyvsp[0].ptr)->caselist;
		(yyval.ptr)->continuelist = (yyvsp[0].ptr)->continuelist;
		(yyval.ptr)->breaklist = (yyvsp[0].ptr)->breaklist;

    }
#line 3259 "parser.cpp"
    break;

  case 108:
#line 1089 "parser.y++"
                                                {
        vector<data2>v;
        insertAttr(v, (yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LabeledStatementNoShortIf", v);

		//semantic
		if((yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

		if(gotolabel.find((yyvsp[-3].ptr)->tempName) != gotolabel.end()){
			yyerror(string("duplicate label \'" + string((yyvsp[-3].ptr)->tempName) + "\'").c_str());
			(yyval.ptr)->is_error = 1;
		}
		else{
			gotolabel.insert({string((yyvsp[-3].ptr)->tempName), (yyvsp[-1].ind)});
		}
		(yyval.ptr)->nextlist = (yyvsp[0].ptr)->nextlist;
		(yyval.ptr)->caselist = (yyvsp[0].ptr)->caselist;
		(yyval.ptr)->continuelist = (yyvsp[0].ptr)->continuelist;
		(yyval.ptr)->breaklist = (yyvsp[0].ptr)->breaklist;

    }
#line 3289 "parser.cpp"
    break;

  case 109:
#line 1117 "parser.y++"
                            {
		(yyval.ptr) = (yyvsp[-1].ptr);
    }
#line 3297 "parser.cpp"
    break;

  case 110:
#line 1123 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3303 "parser.cpp"
    break;

  case 111:
#line 1124 "parser.y++"
                           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3309 "parser.cpp"
    break;

  case 112:
#line 1125 "parser.y++"
                           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3315 "parser.cpp"
    break;

  case 113:
#line 1126 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3321 "parser.cpp"
    break;

  case 114:
#line 1127 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3327 "parser.cpp"
    break;

  case 115:
#line 1128 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3333 "parser.cpp"
    break;

  case 116:
#line 1129 "parser.y++"
                                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3339 "parser.cpp"
    break;

  case 117:
#line 1133 "parser.y++"
         {if_found = 1;}
#line 3345 "parser.cpp"
    break;

  case 118:
#line 1133 "parser.y++"
                                            {
        if((yyvsp[-1].ptr)->truelist.empty() && (yyvsp[-1].ptr)->falselist.empty()) {
            int a = code.size();
			backpatch((yyvsp[-1].ptr)->nextlist, a);
            emit(qid("GOTO", NULL),qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL ),0);
            int b = code.size();
            emit(qid("GOTO", NULL),qid("", NULL), qid("", NULL), qid("", NULL ),0);
            (yyvsp[-1].ptr)->truelist.push_back(a);
            (yyvsp[-1].ptr)->falselist.push_back(b);
        }
        (yyval.ptr) = (yyvsp[-1].ptr);
		if_found = 0;
    }
#line 3363 "parser.cpp"
    break;

  case 119:
#line 1148 "parser.y++"
                                {
        vector<data2> v;
		insertAttr(v, (yyvsp[-2].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("if", v);

        // Semantics
		if((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        // 3AC
        backpatch((yyvsp[-2].ptr)->truelist, (yyvsp[-1].ind));
		(yyvsp[0].ptr)->nextlist.insert((yyvsp[0].ptr)->nextlist.end(), (yyvsp[-2].ptr)->falselist.begin(), (yyvsp[-2].ptr)->falselist.end());
        (yyval.ptr)->nextlist= (yyvsp[0].ptr)->nextlist;
        (yyval.ptr)->continuelist = (yyvsp[0].ptr)->continuelist;
        (yyval.ptr)->breaklist = (yyvsp[0].ptr)->breaklist;
    }
#line 3386 "parser.cpp"
    break;

  case 120:
#line 1169 "parser.y++"
                                                                    {
        vector<data2> v;
		insertAttr(v, (yyvsp[-6].ptr), "", 1);
		insertAttr(v, (yyvsp[-4].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("if-else", v);

		if((yyvsp[-6].ptr)->is_error || (yyvsp[-4].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        backpatch((yyvsp[-6].ptr)->truelist, (yyvsp[-5].ind));
        backpatch((yyvsp[-6].ptr)->falselist, (yyvsp[-1].ind));
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[-3].ptr)->nextlist.begin(), (yyvsp[-3].ptr)->nextlist.end());
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[0].ptr)->nextlist.begin(), (yyvsp[0].ptr)->nextlist.end());
        (yyval.ptr)->nextlist = (yyvsp[-4].ptr)->nextlist;
		(yyvsp[-4].ptr)->breaklist.insert((yyvsp[-4].ptr)->breaklist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
		(yyval.ptr)->breaklist = (yyvsp[-4].ptr)->breaklist;
		(yyvsp[-4].ptr)->continuelist.insert((yyvsp[-4].ptr)->continuelist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
		(yyval.ptr)->continuelist = (yyvsp[-4].ptr)->continuelist;
    }
#line 3412 "parser.cpp"
    break;

  case 121:
#line 1193 "parser.y++"
                                                                              {
        vector<data2> v;
		insertAttr(v, (yyvsp[-6].ptr), "", 1);
		insertAttr(v, (yyvsp[-4].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("if-else", v);

		if((yyvsp[-6].ptr)->is_error || (yyvsp[-4].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        backpatch((yyvsp[-6].ptr)->truelist, (yyvsp[-5].ind));
        backpatch((yyvsp[-6].ptr)->falselist, (yyvsp[-1].ind));
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[-3].ptr)->nextlist.begin(), (yyvsp[-3].ptr)->nextlist.end());
		(yyvsp[-4].ptr)->nextlist.insert((yyvsp[-4].ptr)->nextlist.end(), (yyvsp[0].ptr)->nextlist.begin(), (yyvsp[0].ptr)->nextlist.end());
        (yyval.ptr)->nextlist = (yyvsp[-4].ptr)->nextlist;
		(yyvsp[-4].ptr)->breaklist.insert((yyvsp[-4].ptr)->breaklist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
		(yyval.ptr)->breaklist = (yyvsp[-4].ptr)->breaklist;
		(yyvsp[-4].ptr)->continuelist.insert((yyvsp[-4].ptr)->continuelist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
		(yyval.ptr)->continuelist = (yyvsp[-4].ptr)->continuelist;
    }
#line 3438 "parser.cpp"
    break;

  case 122:
#line 1217 "parser.y++"
                                                           {
        vector<data2> v;
		insertAttr(v, (yyvsp[-3].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("while-loop", v);

        // Semantics
		if((yyvsp[-3].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
	
        // 3AC
        backpatch((yyvsp[-3].ptr)->truelist, (yyvsp[-1].ind));
		(yyvsp[0].ptr)->nextlist.insert((yyvsp[0].ptr)->nextlist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
        backpatch((yyvsp[0].ptr)->nextlist, (yyvsp[-4].ind));
        (yyval.ptr)->nextlist = (yyvsp[-3].ptr)->falselist;
        (yyval.ptr)->nextlist.insert((yyval.ptr)->nextlist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), (yyvsp[-4].ind));
    }
#line 3462 "parser.cpp"
    break;

  case 123:
#line 1239 "parser.y++"
                                                                     {
        vector<data2> v;
		insertAttr(v, (yyvsp[-3].ptr), "", 1);
		insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("while-loop", v);

        // Semantics
		if((yyvsp[-3].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}
	
        // 3AC
        backpatch((yyvsp[-3].ptr)->truelist, (yyvsp[-1].ind));
		(yyvsp[0].ptr)->nextlist.insert((yyvsp[0].ptr)->nextlist.end(), (yyvsp[0].ptr)->continuelist.begin(), (yyvsp[0].ptr)->continuelist.end());
        backpatch((yyvsp[0].ptr)->nextlist, (yyvsp[-4].ind));
        (yyval.ptr)->nextlist = (yyvsp[-3].ptr)->falselist;
        (yyval.ptr)->nextlist.insert((yyval.ptr)->nextlist.end(), (yyvsp[0].ptr)->breaklist.begin(), (yyvsp[0].ptr)->breaklist.end());
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), (yyvsp[-4].ind));
    }
#line 3486 "parser.cpp"
    break;

  case 124:
#line 1261 "parser.y++"
                              {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement", v);

         //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3505 "parser.cpp"
    break;

  case 125:
#line 1275 "parser.y++"
                                 {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement", v);

         //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3524 "parser.cpp"
    break;

  case 126:
#line 1292 "parser.y++"
                                       {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement_no_short_if", v);

        //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac

    }
#line 3544 "parser.cpp"
    break;

  case 127:
#line 1307 "parser.y++"
                                          {
        vector<data2> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement_no_short_if", v);

        //semantic 

        if((yyvsp[-1].ptr)->is_error || (yyvsp[0].ptr)->is_error) {
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3563 "parser.cpp"
    break;

  case 128:
#line 1324 "parser.y++"
                                                          {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-7].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-5].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("Basic_For_Header", v);

        //semantic 

        //3ac

    }
#line 3585 "parser.cpp"
    break;

  case 129:
#line 1343 "parser.y++"
                                                          {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("Enhanced_For_Header", v);

        //semantic 

        if((yyvsp[-3].ptr)->is_error || (yyvsp[-1].ptr)->is_error)	{
			(yyval.ptr)->is_error = 1;
		}

        //3ac
    }
#line 3608 "parser.cpp"
    break;

  case 130:
#line 1363 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3614 "parser.cpp"
    break;

  case 131:
#line 1364 "parser.y++"
              {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3620 "parser.cpp"
    break;

  case 132:
#line 1368 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3626 "parser.cpp"
    break;

  case 133:
#line 1369 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3632 "parser.cpp"
    break;

  case 134:
#line 1373 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3638 "parser.cpp"
    break;

  case 135:
#line 1374 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3644 "parser.cpp"
    break;

  case 136:
#line 1378 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3650 "parser.cpp"
    break;

  case 137:
#line 1379 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3656 "parser.cpp"
    break;

  case 138:
#line 1383 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3662 "parser.cpp"
    break;

  case 139:
#line 1387 "parser.y++"
                        {
		(yyval.ptr) = (yyvsp[0].ptr);
    }
#line 3670 "parser.cpp"
    break;

  case 140:
#line 1390 "parser.y++"
                                                    {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ",", 0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("StatementExpressionList2", v);
    }
#line 3682 "parser.cpp"
    break;

  case 141:
#line 1401 "parser.y++"
                         {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("BreakStatement", v);

        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->breaklist.push_back(a);
    }
#line 3698 "parser.cpp"
    break;

  case 142:
#line 1412 "parser.y++"
              {
        (yyval.ptr) = makeleaf((yyvsp[-1].str));
        
        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->breaklist.push_back(a);
    }
#line 3710 "parser.cpp"
    break;

  case 143:
#line 1422 "parser.y++"
                            {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ContinueStatement", v);

        // Semantics
        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->continuelist.push_back(a);
    }
#line 3727 "parser.cpp"
    break;

  case 144:
#line 1434 "parser.y++"
                 {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ContinueStatement", v);

        // Semantics
        int a = code.size();
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->continuelist.push_back(a);
    }
#line 3743 "parser.cpp"
    break;

  case 145:
#line 1448 "parser.y++"
                          {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ReturnStatement", v);

        // Semantics

		backpatch((yyvsp[-1].ptr)->nextlist,code.size());
        emit(qid("RETURN", NULL), (yyvsp[-1].ptr)->place, qid("", NULL), qid("", NULL), -1);
    }
#line 3760 "parser.cpp"
    break;

  case 146:
#line 1460 "parser.y++"
                 {
        (yyval.ptr) = makeleaf((yyvsp[-1].str));

        // Semantics
        emit(qid("RETURN", NULL), qid("", NULL), qid("", NULL), qid("", NULL), -1);
    }
#line 3771 "parser.cpp"
    break;

  case 147:
#line 1469 "parser.y++"
                         {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ThrowStatement", v);

        // Semantics
        yyerror("Not implemented yet\n");        
    }
#line 3786 "parser.cpp"
    break;

  case 148:
#line 1483 "parser.y++"
      {if_found = 1;}
#line 3792 "parser.cpp"
    break;

  case 149:
#line 1483 "parser.y++"
                                          {
        if((yyvsp[0].ptr)->truelist.empty() && (yyvsp[0].ptr)->falselist.empty()) {
            int a = code.size();
			backpatch((yyvsp[0].ptr)->nextlist, a);
            emit(qid("GOTO", NULL),qid("IF", lookup("if")), (yyvsp[0].ptr)->place, qid("", NULL ),0);
            int b = code.size();
            emit(qid("GOTO", NULL),qid("", NULL), qid("", NULL), qid("", NULL ),0);
            (yyvsp[0].ptr)->truelist.push_back(a);
            (yyvsp[0].ptr)->falselist.push_back(b);
        }
        (yyval.ptr) = (yyvsp[0].ptr);
		if_found = 0;
    }
#line 3810 "parser.cpp"
    break;

  case 150:
#line 1515 "parser.y++"
             {
        int a = code.size();
		(yyval.ptr) = new treeNode;
        emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
        (yyval.ptr)->nextlist.push_back(a);
    }
#line 3821 "parser.cpp"
    break;

  case 151:
#line 1526 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3827 "parser.cpp"
    break;

  case 152:
#line 1527 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3833 "parser.cpp"
    break;

  case 153:
#line 1530 "parser.y++"
            {
		(yyval.ptr)=(yyvsp[0].ptr);
		(yyval.ptr)->isInit=1;
		}
#line 3842 "parser.cpp"
    break;

  case 154:
#line 1534 "parser.y++"
          {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3848 "parser.cpp"
    break;

  case 155:
#line 1535 "parser.y++"
                       {(yyval.ptr)=(yyvsp[-1].ptr);}
#line 3854 "parser.cpp"
    break;

  case 156:
#line 1536 "parser.y++"
                                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3860 "parser.cpp"
    break;

  case 157:
#line 1537 "parser.y++"
                 {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3866 "parser.cpp"
    break;

  case 158:
#line 1538 "parser.y++"
                      {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3872 "parser.cpp"
    break;

  case 159:
#line 1543 "parser.y++"
                                                {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3878 "parser.cpp"
    break;

  case 160:
#line 1544 "parser.y++"
                                                        {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassInstanceCreationExpression", v);
    }
#line 3890 "parser.cpp"
    break;

  case 161:
#line 1551 "parser.y++"
                                                           {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassInstanceCreationExpression", v);
    }
#line 3902 "parser.cpp"
    break;

  case 162:
#line 1561 "parser.y++"
                                                                            {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, (yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, "(", 1);
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnqualifiedClassInstanceCreationExpression", v);
    }
#line 3917 "parser.cpp"
    break;

  case 163:
#line 1574 "parser.y++"
                                                                       {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassOrInterfaceTypeToInstantiate", v);
    }
#line 3929 "parser.cpp"
    break;

  case 164:
#line 1584 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3935 "parser.cpp"
    break;

  case 165:
#line 1585 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3941 "parser.cpp"
    break;

  case 166:
#line 1589 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3947 "parser.cpp"
    break;

  case 167:
#line 1590 "parser.y++"
                                                    {
        vector<data2>v;
        insertAttr(v,NULL,".",0);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassOrInterfaceTypeToInstant", v);
    }
#line 3959 "parser.cpp"
    break;

  case 168:
#line 1600 "parser.y++"
           {
        vector<data2>v;
        insertAttr(v, NULL, "<", 0);
        insertAttr(v, NULL, ">", 0);
		(yyval.ptr) = makenode("TypeArgumentsOrDiamond", v);
    }
#line 3970 "parser.cpp"
    break;

  case 169:
#line 1609 "parser.y++"
                             {
        vector<data2>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("ArrayAccess", v);

		// Semantics
		if((yyvsp[-3].ptr)->expType == 2){
			string tmp = (yyvsp[-3].ptr)->type;
			(yyval.ptr)->type = tmp.substr(0,tmp.length()-1);
			if(((yyval.ptr)->type)[tmp.length()-2]=='*') (yyval.ptr)->expType = 2;
			else (yyval.ptr)->expType = 1;
		}
		yyerror("Accessing field of a non-array construct");
    }
#line 3992 "parser.cpp"
    break;

  case 170:
#line 1626 "parser.y++"
                                   {
        vector<data2>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("ArrayAccess", v);
		// Semantics
		if((yyvsp[-3].ptr)->expType == 2){
			string tmp = (yyvsp[-3].ptr)->type;
			(yyval.ptr)->type = tmp.substr(0,tmp.length()-1);
			if(((yyval.ptr)->type)[tmp.length()-2]=='*') (yyval.ptr)->expType = 2;
			else (yyval.ptr)->expType = 1;
		}
		yyerror("Accessing field of a non-array construct");
    }
#line 4013 "parser.cpp"
    break;

  case 171:
#line 1646 "parser.y++"
                                {
        vector<data2>v;
        insertAttr(v, (yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
    }
#line 4026 "parser.cpp"
    break;

  case 172:
#line 1654 "parser.y++"
                                                  {
        vector<data2>v;
        insertAttr(v, (yyvsp[-5].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
    }
#line 4041 "parser.cpp"
    break;

  case 173:
#line 1667 "parser.y++"
                 {
        (yyval.ptr)=(yyvsp[0].ptr);

        if(!(yyvsp[0].ptr)->is_error){
			//Semantic
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			currArgs.back().push_back((yyvsp[0].ptr)->type);
			(yyval.ptr)->type = "void";

			//--3AC
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4061 "parser.cpp"
    break;

  case 174:
#line 1682 "parser.y++"
                                 {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, ",", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArgumentList", v);

        //semantic
		if((yyvsp[-2].ptr)->isInit && (yyvsp[0].ptr)->isInit) (yyval.ptr)->isInit=1;
		currArgs.back().push_back((yyvsp[0].ptr)->type);
		(yyval.ptr)->type = "void";
    }
#line 4078 "parser.cpp"
    break;

  case 175:
#line 1696 "parser.y++"
                                      {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-3].str)), "", 1);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArrayCreationExpression", v);
    }
#line 4091 "parser.cpp"
    break;

  case 176:
#line 1707 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4097 "parser.cpp"
    break;

  case 177:
#line 1708 "parser.y++"
                     {
        vector<data2>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("DimExprs", v);
    }
#line 4108 "parser.cpp"
    break;

  case 178:
#line 1718 "parser.y++"
                        {
        vector<data2>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("DimExpr", v);
    }
#line 4120 "parser.cpp"
    break;

  case 179:
#line 1728 "parser.y++"
                          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4126 "parser.cpp"
    break;

  case 180:
#line 1733 "parser.y++"
                {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4132 "parser.cpp"
    break;

  case 181:
#line 1734 "parser.y++"
                           {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4138 "parser.cpp"
    break;

  case 182:
#line 1738 "parser.y++"
                                     {if_found = 0;}
#line 4144 "parser.cpp"
    break;

  case 183:
#line 1738 "parser.y++"
                                                                          {
        vector<data2>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode((yyvsp[-2].ptr)->tempName , v);

        //Semantics
		cout << "in Assignment\n";
		string temp = assignExp((yyvsp[-3].ptr)->type,(yyvsp[0].ptr)->type,string((yyvsp[-2].ptr)->tempName));

		if((yyvsp[-3].ptr)->expType!=4){
			if(!temp.empty()){
				(yyval.ptr)->type = (yyvsp[-3].ptr)->type;
				if((yyvsp[-3].ptr)->expType == 3 && (yyvsp[0].ptr)->isInit){
					updInit((yyvsp[-3].ptr)->tempName);
				}
				
				// 3ac 
				int num = assign_exp((yyvsp[-2].ptr)->tempName, (yyval.ptr)->type, (yyvsp[-3].ptr)->type, (yyvsp[0].ptr)->type, (yyvsp[-3].ptr)->place, (yyvsp[0].ptr)->place);
				(yyval.ptr)->place = (yyvsp[-3].ptr)->place;
				backpatch((yyvsp[0].ptr)->nextlist, num);
			}
			else{
				yyerror(("Incompatible types when assigning " + (yyvsp[0].ptr)->type + " type to " + (yyvsp[-3].ptr)->type).c_str());
			}
		}
		else{
			if((yyvsp[-3].ptr)->expType==4){
				yyerror("Left operand in assignment operation cannot be a constant expression");
			}
		}
    }
#line 4181 "parser.cpp"
    break;

  case 184:
#line 1773 "parser.y++"
          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4187 "parser.cpp"
    break;

  case 185:
#line 1774 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4193 "parser.cpp"
    break;

  case 186:
#line 1778 "parser.y++"
        {(yyval.ptr) = makeleaf("=");
    (yyval.ptr)->tempName = "=";}
#line 4200 "parser.cpp"
    break;

  case 187:
#line 1780 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4208 "parser.cpp"
    break;

  case 188:
#line 1783 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4216 "parser.cpp"
    break;

  case 189:
#line 1786 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4224 "parser.cpp"
    break;

  case 190:
#line 1789 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4232 "parser.cpp"
    break;

  case 191:
#line 1792 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4240 "parser.cpp"
    break;

  case 192:
#line 1795 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4248 "parser.cpp"
    break;

  case 193:
#line 1798 "parser.y++"
                 {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4256 "parser.cpp"
    break;

  case 194:
#line 1801 "parser.y++"
                          {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4264 "parser.cpp"
    break;

  case 195:
#line 1804 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4272 "parser.cpp"
    break;

  case 196:
#line 1807 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4280 "parser.cpp"
    break;

  case 197:
#line 1810 "parser.y++"
              {(yyval.ptr) = makeleaf((yyvsp[0].str));
    (yyval.ptr)->tempName = string((yyvsp[0].str));
    }
#line 4288 "parser.cpp"
    break;

  case 198:
#line 1816 "parser.y++"
                                                                                    {
        vector<data2>v;
        insertAttr(v,(yyvsp[-6].ptr), "", 1);
        insertAttr(v,(yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ConditionalExpression2", v);

        // Semantics
		if_found = previous_if_found;
		if((yyvsp[-6].ptr)->isInit == 0) {
			yyerror("Condition is not initialized");
		}
		if((yyvsp[-6].ptr)->intVal) {
			if((yyvsp[-4].ptr)->isInit == 0){
				yyerror("Expression is not initialized");
			}
			(yyval.ptr)->type = (yyvsp[-4].ptr)->type;
			(yyval.ptr)->intVal = (yyvsp[-4].ptr)->intVal;
		}
		else {
			if((yyvsp[0].ptr)->isInit == 0){
				yyerror("Expression is not initialized");
			}
			(yyval.ptr)->type = (yyvsp[0].ptr)->type;
			(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;
		}
		(yyval.ptr)->isInit=1;

		// 3AC
		qid temp1 = newtemp((yyval.ptr)->type);

		backpatch((yyvsp[-6].ptr)->truelist, (yyvsp[-5].ind));
		backpatch((yyvsp[-6].ptr)->falselist, (yyvsp[-1].ind));
		backpatch((yyvsp[-4].ptr)->nextlist, (yyvsp[-3].ind)-1);
		backpatch((yyvsp[-4].ptr)->truelist, (yyvsp[-3].ind)-1);
		backpatch((yyvsp[-4].ptr)->falselist, (yyvsp[-3].ind)-1);

		code[(yyvsp[-3].ind)-1].arg1 = (yyvsp[-4].ptr)->place;
		code[(yyvsp[-3].ind)-1].res = temp1;

		backpatch((yyvsp[0].ptr)->nextlist, code.size());
		backpatch((yyvsp[0].ptr)->falselist, code.size());
		backpatch((yyvsp[0].ptr)->truelist, code.size());

		emit(qid("=", NULL), (yyvsp[0].ptr)->place, qid("", NULL), temp1, -1);
		(yyval.ptr)->nextlist.push_back((yyvsp[-3].ind));
		(yyval.ptr)->place = temp1;
    }
#line 4342 "parser.cpp"
    break;

  case 199:
#line 1865 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 4348 "parser.cpp"
    break;

  case 200:
#line 1869 "parser.y++"
                                      {
		previous_if_found = if_found;
		if_found = 0;
		(yyval.ptr) = (yyvsp[-1].ptr);
		if((yyvsp[-1].ptr)->truelist.empty()){
			backpatch((yyvsp[-1].ptr)->nextlist, code.size());
			emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL), 0);
			(yyvsp[-1].ptr)->truelist.push_back(code.size()-1);
			emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
			(yyvsp[-1].ptr)->falselist.push_back(code.size()-1);
		}
	}
#line 4365 "parser.cpp"
    break;

  case 201:
#line 1884 "parser.y++"
                 {
		emit(qid("=", NULL), qid("", NULL), qid("", NULL), qid("", NULL), -1);
		emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
		(yyval.ind) = code.size()-1;
	}
#line 4375 "parser.cpp"
    break;

  case 202:
#line 1892 "parser.y++"
                                                        {
		vector<data2> attr;
		insertAttr(attr, (yyvsp[-2].ptr), "", 1);
		insertAttr(attr, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("||",attr);

		// Semantics

		if((yyvsp[-2].ptr)->type != "boolean" || (yyvsp[0].ptr)->type != "boolean" ) {
			yyerror("Incorrect types used in conditional OR expression");
		}
		(yyval.ptr)->type = "boolean";
		if((yyvsp[-2].ptr)->isInit == 0 || (yyvsp[0].ptr)->isInit == 0 ) {
			yyerror("Uninitialized expressions used in the conditional OR expression");
		}
		(yyval.ptr)->isInit = (((yyvsp[-2].ptr)->isInit) & ((yyvsp[0].ptr)->isInit));   
		(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal || (yyvsp[0].ptr)->intVal;

		// 3AC
			if((yyvsp[0].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[0].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[0].ptr)->place, qid("", NULL), 0);
				(yyvsp[0].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[0].ptr)->falselist.push_back(code.size()-1);
			}
			else {
				qid tmp = newtemp((yyval.ptr)->type);
				emit(qid("||", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, tmp, -1);
				(yyval.ptr)->place = tmp;
			}
			backpatch((yyvsp[-2].ptr)->falselist, (yyvsp[-1].ind));
			(yyval.ptr)->truelist = (yyvsp[-2].ptr)->truelist;
			(yyval.ptr)->truelist.insert((yyval.ptr)->truelist.end(), (yyvsp[0].ptr)->truelist.begin(), (yyvsp[0].ptr)->truelist.end());
			(yyval.ptr)->falselist = (yyvsp[0].ptr)->falselist;

	}
#line 4417 "parser.cpp"
    break;

  case 203:
#line 1929 "parser.y++"
                              { (yyval.ptr) = (yyvsp[0].ptr) ; }
#line 4423 "parser.cpp"
    break;

  case 204:
#line 1933 "parser.y++"
                                        {
		(yyval.ptr) = (yyvsp[-1].ptr);
		if((yyvsp[-1].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[-1].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL), 0);
				(yyvsp[-1].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[-1].ptr)->falselist.push_back(code.size()-1);
			}
	}
#line 4438 "parser.cpp"
    break;

  case 205:
#line 1946 "parser.y++"
                                              {
		vector<data2> attr;
		insertAttr(attr, (yyvsp[-2].ptr), "", 1);
		insertAttr(attr, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("&&",attr);

		// Semantics
			if((yyvsp[-2].ptr)->type != "boolean" || (yyvsp[0].ptr)->type != "boolean" ) {
				yyerror("Incorrect types used in conditional AND expression");
			}
			(yyval.ptr)->type = "boolean";
			if((yyvsp[-2].ptr)->isInit == 0 || (yyvsp[0].ptr)->isInit == 0 ) {
				yyerror("Uninitialized expressions used in the conditional AND expression");
			}
			(yyval.ptr)->isInit = (((yyvsp[-2].ptr)->isInit) & ((yyvsp[0].ptr)->isInit));   
			(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal || (yyvsp[0].ptr)->intVal;

			// 3AC
			if((yyvsp[0].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[0].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[0].ptr)->place, qid("", NULL), 0);
				(yyvsp[0].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[0].ptr)->falselist.push_back(code.size()-1);
			}
			else {
				qid tmp = newtemp((yyval.ptr)->type);
				emit(qid("&&", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, tmp, -1);
				(yyval.ptr)->place = tmp;
			}
			backpatch((yyvsp[-2].ptr)->truelist, (yyvsp[-1].ind));
			(yyval.ptr)->truelist = (yyvsp[0].ptr)->truelist;
			(yyval.ptr)->falselist = (yyvsp[-2].ptr)->falselist;
			(yyval.ptr)->falselist.insert((yyval.ptr)->falselist.end(), (yyvsp[0].ptr)->falselist.begin(), (yyvsp[0].ptr)->falselist.end());
	}
#line 4478 "parser.cpp"
    break;

  case 206:
#line 1981 "parser.y++"
                           { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 4484 "parser.cpp"
    break;

  case 207:
#line 1985 "parser.y++"
                                          {
		(yyval.ptr) = (yyvsp[-1].ptr);
		
		if((yyvsp[-1].ptr)->truelist.empty() && if_found){
				backpatch((yyvsp[-1].ptr)->nextlist, code.size());
				emit(qid("GOTO", NULL), qid("IF", lookup("if")), (yyvsp[-1].ptr)->place, qid("", NULL), 0);
				(yyvsp[-1].ptr)->truelist.push_back(code.size()-1);
				emit(qid("GOTO", NULL), qid("", NULL), qid("", NULL), qid("", NULL), 0);
				(yyvsp[-1].ptr)->falselist.push_back(code.size()-1);
			}
	}
#line 4500 "parser.cpp"
    break;

  case 208:
#line 1999 "parser.y++"
                                                     {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "|", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("InclusiveOrExpression", v);

        //Semantics
		
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		else {
			yyerror("Unitialized operands with OR operator");
		}
		string temp = bitExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!temp.empty()){
			(yyval.ptr)->type = "boolean";	
			(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal | (yyvsp[0].ptr)->intVal;

			// 3AC
			if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
				(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
				(yyval.ptr)->expType = 4;
			}
			else{
				qid temp1 = newtemp((yyval.ptr)->type);
				emit(qid("|", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
				(yyval.ptr)->place = temp1;
			}
			(yyval.ptr)->nextlist.clear();
		}
		else{
			yyerror(("Invalid operands of types \'" + string((yyvsp[-2].ptr)->type) + "\' and \'" + string((yyvsp[0].ptr)->type) + "\' to boolean").c_str());
		}
    }
#line 4540 "parser.cpp"
    break;

  case 209:
#line 2034 "parser.y++"
                           {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4546 "parser.cpp"
    break;

  case 210:
#line 2037 "parser.y++"
                                             {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "^", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ExclusiveOrExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = bitExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp =="ok"){
					(yyval.ptr)->type = "int";
				}
				else (yyval.ptr)->type = "int";

				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal ^ (yyvsp[0].ptr)->intVal;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("^", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary ^").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4592 "parser.cpp"
    break;

  case 211:
#line 2078 "parser.y++"
                   {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4598 "parser.cpp"
    break;

  case 212:
#line 2082 "parser.y++"
                                          {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "&", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AndExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = bitExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp =="ok"){
					(yyval.ptr)->type = "int";
				}
				else (yyval.ptr)->type = "int";
				
				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal & (yyvsp[0].ptr)->intVal;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("&", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary &").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4644 "parser.cpp"
    break;

  case 213:
#line 2123 "parser.y++"
                        {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4650 "parser.cpp"
    break;

  case 214:
#line 2127 "parser.y++"
                                                   {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("EqualityExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				(yyval.ptr)->type = "int";

				if((yyvsp[-2].ptr)->intVal == (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("==", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary ==").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4694 "parser.cpp"
    break;

  case 215:
#line 2166 "parser.y++"
                                                   {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("EqualityExpression", v);

        //Semantics
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				(yyval.ptr)->type = "int";

				if((yyvsp[-2].ptr)->intVal != (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("!=", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary !=").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

        
    }
#line 4740 "parser.cpp"
    break;

  case 216:
#line 2207 "parser.y++"
                          {(yyval.ptr) = (yyvsp[0].ptr) ;}
#line 4746 "parser.cpp"
    break;

  case 217:
#line 2211 "parser.y++"
                                               {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "<", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);


        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}

				if((yyvsp[-2].ptr)->intVal < (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("<", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
				
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary <").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4797 "parser.cpp"
    break;

  case 218:
#line 2257 "parser.y++"
                                               {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "<", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);

        //semantic

		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}

				if((yyvsp[-2].ptr)->intVal > (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;
				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid(">", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1; 
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary >").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4846 "parser.cpp"
    break;

  case 219:
#line 2301 "parser.y++"
                                                 {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}
				if((yyvsp[-2].ptr)->intVal >= (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;
				// 3AC
				(yyval.ptr)->nextlist.clear();
				 
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary >=").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4885 "parser.cpp"
    break;

  case 220:
#line 2335 "parser.y++"
                                                 {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = relExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "bool"){
					(yyval.ptr)->type = "int";
				}
				else if(temp == "Bool"){
					(yyval.ptr)->type = "int";
				}
				if((yyvsp[-2].ptr)->intVal <= (yyvsp[0].ptr)->intVal) (yyval.ptr)->intVal = 1;
				else (yyval.ptr)->intVal = 0;
				// 3AC
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary <=").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 4923 "parser.cpp"
    break;

  case 221:
#line 2368 "parser.y++"
                     {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4929 "parser.cpp"
    break;

  case 222:
#line 2373 "parser.y++"
                                                {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);

		//Semantic
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			string temp = shiftExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = (yyvsp[-2].ptr)->type;
				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal << (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " << " + (yyvsp[0].ptr)->tempName;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid("<<", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary <<").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

    }
#line 4972 "parser.cpp"
    break;

  case 223:
#line 2411 "parser.y++"
                                                 {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		string temp = shiftExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);

		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				(yyval.ptr)->type = (yyvsp[-2].ptr)->type;
				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal >> (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " >> " + (yyvsp[0].ptr)->tempName;

				// 3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					emit(qid(">>", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
				
			}
			else{
				yyerror(("Invalid operands of types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' to binary >>").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5016 "parser.cpp"
    break;

  case 224:
#line 2450 "parser.y++"
                                                       {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);

        yyerror("Not implemented yet!\n");

    }
#line 5031 "parser.cpp"
    break;

  case 225:
#line 2460 "parser.y++"
                        {(yyval.ptr)= (yyvsp[0].ptr);}
#line 5037 "parser.cpp"
    break;

  case 226:
#line 2464 "parser.y++"
                                                      {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "+", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AdditiveExpression", v);
        
        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
		
		string temp = addExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);
		
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "int")	(yyval.ptr)->type = "int";
				else if(temp == "real")	(yyval.ptr)->type = "float";
				else (yyval.ptr)->type =  temp;

				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal + (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->realVal = (yyvsp[-2].ptr)->realVal + (yyvsp[0].ptr)->realVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " + " + (yyvsp[0].ptr)->tempName;

				// 3AC

				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					int cond1 = (isInt((yyvsp[-2].ptr)->type) && isFloat((yyvsp[0].ptr)->type));
					int cond2 = (isInt((yyvsp[0].ptr)->type) && isFloat((yyvsp[-2].ptr)->type));

					if(cond1){
						qid temp2 = newtemp((yyvsp[0].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("+"+temp, NULL), temp2, (yyvsp[0].ptr)->place, temp1, -1);
					}
					else if(cond2){
						qid temp2 = newtemp((yyvsp[-2].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("+"+temp, NULL), (yyvsp[-2].ptr)->place, temp2, temp1, -1);
					}
					else{
						emit(qid("+"+temp, NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					}
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for + operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5101 "parser.cpp"
    break;

  case 227:
#line 2523 "parser.y++"
                                                      {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "-", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AdditiveExpression", v);

        //Semantic
		if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;

		string temp = addExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type);
		if(!(yyvsp[-2].ptr)->is_error && !(yyvsp[0].ptr)->is_error){
			if(!temp.empty()){
				if(temp == "int")(yyval.ptr)->type = "int";
				else if(temp == "real")(yyval.ptr)->type = "float";
				else (yyval.ptr)->type = temp;

				(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal - (yyvsp[0].ptr)->intVal;
				(yyval.ptr)->realVal = (yyvsp[-2].ptr)->realVal - (yyvsp[0].ptr)->realVal;
				(yyval.ptr)->tempName = (yyvsp[-2].ptr)->tempName + " - " + (yyvsp[0].ptr)->tempName;

				// 3AC

				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid temp1 = newtemp((yyval.ptr)->type);
					int cond1 = (isInt((yyvsp[-2].ptr)->type) && isFloat((yyvsp[0].ptr)->type));
					int cond2 = (isInt((yyvsp[0].ptr)->type) && isFloat((yyvsp[-2].ptr)->type));

					if(cond1){
						qid temp2 = newtemp((yyvsp[0].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("-"+temp, NULL), temp2, (yyvsp[0].ptr)->place, temp1, -1);
					}
					else if(cond2){
						qid temp2 = newtemp((yyvsp[-2].ptr)->type);
						emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), temp2, -1);
						emit(qid("-"+temp, NULL), (yyvsp[-2].ptr)->place, temp2, temp1, -1);
					}
					else{
						emit(qid("-"+temp, NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, temp1, -1);
					}
					(yyval.ptr)->place = temp1;
				}
				(yyval.ptr)->nextlist.clear();
				
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for - operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
	}
#line 5165 "parser.cpp"
    break;

  case 228:
#line 2582 "parser.y++"
                              {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5171 "parser.cpp"
    break;

  case 229:
#line 2587 "parser.y++"
                                                  {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "*", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);

        if(!((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)){

			//Semantic
			(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal * (yyvsp[0].ptr)->intVal; 

			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			string temp = mulExp((yyvsp[-2].ptr)->type, (yyvsp[0].ptr)->type, '*');

			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					if(temp == "int"){
						(yyval.ptr)->type = "int" ;

						//--3AC
						qid q = newtemp("int");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();
						emit(qid("*int", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
					}
					else if(temp == "float"){
						(yyval.ptr)->type = "float";

						//--3AC

						qid q = newtemp("float");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();

						if(isInt((yyvsp[-2].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), q1, -1);

							emit(qid("*real", NULL), q1, (yyvsp[0].ptr)->place, q, -1);
						}
						else if(isInt((yyvsp[0].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q1, -1);
							emit(qid("*real", NULL), (yyvsp[-2].ptr)->place, q1, q, -1);
						}
						else{
							emit(qid("*real", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
						}
					}
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for * operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5243 "parser.cpp"
    break;

  case 230:
#line 2654 "parser.y++"
                                                  {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "/", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);

        if(!((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)){
			//Semantic
			if((yyvsp[0].ptr)->intVal!=0)(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal / (yyvsp[0].ptr)->intVal;
			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			string temp =mulExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,'/');
			if(!temp.empty()){
				(yyval.ptr)->type = temp;

				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					if(temp == "int"){
						(yyval.ptr)->type = "int" ;

						//--3AC
						qid q = newtemp("int");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();
						emit(qid("/int", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
					}
					else if(temp == "float"){
						(yyval.ptr)->type = "float";

						//--3AC
						qid q = newtemp("float");
						(yyval.ptr)->place = q;
						(yyval.ptr)->nextlist.clear();
						if(isInt((yyvsp[-2].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[-2].ptr)->place, qid("", NULL), q1, -1);

							emit(qid("/real", NULL), q1, (yyvsp[0].ptr)->place, q, -1);
						}
						else if(isInt((yyvsp[0].ptr)->type)){
							qid q1 = newtemp((yyval.ptr)->type);
							emit(qid("inttoreal", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q1, -1);

							emit(qid("/real", NULL), (yyvsp[-2].ptr)->place, q1, q, -1);
						}
						else{
							emit(qid("/real", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
						}
					}
				}
				(yyval.ptr)->nextlist.clear();
			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for / operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}

    }
#line 5313 "parser.cpp"
    break;

  case 231:
#line 2719 "parser.y++"
                                                  {
        vector<data2>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "%", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);

        if(!((yyvsp[-2].ptr)->is_error || (yyvsp[0].ptr)->is_error)){
			//Semantic
			if((yyvsp[-2].ptr)->isInit ==1 && (yyvsp[0].ptr)->isInit ==1) (yyval.ptr)->isInit = 1;
			if((yyvsp[0].ptr)->intVal!=0)(yyval.ptr)->intVal = (yyvsp[-2].ptr)->intVal % (yyvsp[0].ptr)->intVal;
			string temp =mulExp((yyvsp[-2].ptr)->type,(yyvsp[0].ptr)->type,'%');
			if(temp == "int"){
				(yyval.ptr)->type = "int" ;

				//--3AC
				if((yyvsp[-2].ptr)->expType == 4 && (yyvsp[0].ptr)->expType == 4){
					(yyval.ptr)->place = qid(to_string((yyval.ptr)->intVal), (yyvsp[-2].ptr)->place.second);
					(yyval.ptr)->expType = 4;
				}
				else{
					qid q = newtemp("int");
					(yyval.ptr)->place = q;
					emit(qid("%", NULL), (yyvsp[-2].ptr)->place, (yyvsp[0].ptr)->place, q, -1);
				}
				(yyval.ptr)->nextlist.clear();

			}
			else{
				yyerror(("Incompatible types \'" + (yyvsp[-2].ptr)->type + "\' and \'" + (yyvsp[0].ptr)->type + "\' for % operator").c_str());
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}


    }
#line 5357 "parser.cpp"
    break;

  case 232:
#line 2758 "parser.y++"
                     {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5363 "parser.cpp"
    break;

  case 233:
#line 2763 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5369 "parser.cpp"
    break;

  case 234:
#line 2764 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5375 "parser.cpp"
    break;

  case 235:
#line 2765 "parser.y++"
                         {
        // $1=makeleaf("+");
        vector<data2>v;
        insertAttr(v, NULL, "+", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpression", v);

        
        //Semantic
        // remember this line
		if(!((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("+",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("unary+", lookup("+")),(yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5413 "parser.cpp"
    break;

  case 236:
#line 2798 "parser.y++"
                         {
        vector<data2>v;
        insertAttr(v, NULL, "-", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpression", v);

        

        //Semantic
		if(!((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("-",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("unary-", lookup("-")),(yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5450 "parser.cpp"
    break;

  case 237:
#line 2830 "parser.y++"
                                 {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5456 "parser.cpp"
    break;

  case 238:
#line 2834 "parser.y++"
                            {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("PreIncrementExpression", v);

        //Semantic
		if(!(yyvsp[0].ptr)->is_error && (yyvsp[0].ptr)->expType!=4){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = postfixExpression((yyvsp[0].ptr)->type,6);
			
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal +1;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("++P", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Increment not defined for this type");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			if((yyvsp[0].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5494 "parser.cpp"
    break;

  case 239:
#line 2870 "parser.y++"
                            {
        vector<data2>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("PreDecrementExpression", v);

        //Semantic
		if(!(yyvsp[0].ptr)->is_error && (yyvsp[0].ptr)->expType!=4){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = postfixExpression((yyvsp[0].ptr)->type,7);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[0].ptr)->intVal -1;

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("--P", NULL), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Decrement not defined for this type");
			}
		}
		else{
			if((yyvsp[0].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5530 "parser.cpp"
    break;

  case 240:
#line 2904 "parser.y++"
                       {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5536 "parser.cpp"
    break;

  case 241:
#line 2906 "parser.y++"
                         {
        vector<data2>v;
        insertAttr(v, NULL, "~", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpressionNotPlusMinus", v);
        

        //semantic
        (yyval.ptr)->place = qid("~", lookup("~"));

        if(!((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("~",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = ~((yyvsp[0].ptr)->intVal);

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("~", lookup("~")), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5574 "parser.cpp"
    break;

  case 242:
#line 2939 "parser.y++"
                         {
        vector<data2>v;
        insertAttr(v, NULL, "!", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpressionNotPlusMinus", v);

        //semantic

        if(! ((yyvsp[0].ptr)->is_error)){
			(yyval.ptr)->isInit = (yyvsp[0].ptr)->isInit;
			string temp = unaryExp("!",(yyvsp[0].ptr)->type);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = !((yyvsp[0].ptr)->intVal);

				//--3AC
				qid q = newtemp(temp);
				(yyval.ptr)->tempName = (yyvsp[0].ptr)->tempName;
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("~", lookup("~")), (yyvsp[0].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Type inconsistent with operator");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			(yyval.ptr)->is_error = 1;
		}
    }
#line 5610 "parser.cpp"
    break;

  case 243:
#line 2970 "parser.y++"
                    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5616 "parser.cpp"
    break;

  case 244:
#line 2974 "parser.y++"
             {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5622 "parser.cpp"
    break;

  case 245:
#line 2975 "parser.y++"
          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 5628 "parser.cpp"
    break;

  case 246:
#line 2976 "parser.y++"
                             { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 5634 "parser.cpp"
    break;

  case 247:
#line 2977 "parser.y++"
                             { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 5640 "parser.cpp"
    break;

  case 248:
#line 2981 "parser.y++"
                              {
        vector<data2>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.ptr) = makenode("PostIncrementExpression", v);

        //Semantics
		(yyval.ptr)->isInit = (yyvsp[-1].ptr)->isInit;
		if(!(yyvsp[-1].ptr)->is_error && (yyvsp[-1].ptr)->expType!=4){
			string temp = postfixExpression((yyvsp[-1].ptr)->type,6);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[-1].ptr)->intVal + 1;

				//--3AC

				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("++S", NULL), (yyvsp[-1].ptr)->place, qid("", NULL), q, -1);
			}
			else{
				yyerror("Increment not defined for this type");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			if((yyvsp[-1].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}

			(yyval.ptr)->is_error = 1;
		}
    }
#line 5679 "parser.cpp"
    break;

  case 249:
#line 3018 "parser.y++"
                              {
        vector<data2>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.ptr) = makenode("PostDecrementExpression", v);

        //Semantics
		if(!(yyvsp[-1].ptr)->is_error && (yyvsp[-1].ptr)->expType!=4){
			(yyval.ptr)->isInit = (yyvsp[-1].ptr)->isInit;
			string temp = postfixExpression((yyvsp[-1].ptr)->type,7);
			if(!temp.empty()){
				(yyval.ptr)->type = temp;
				(yyval.ptr)->intVal = (yyvsp[-1].ptr)->intVal - 1;

				//--3AC

				qid q = newtemp(temp);
				(yyval.ptr)->place = q;
				(yyval.ptr)->nextlist.clear();
				emit(qid("--S", NULL), (yyvsp[-1].ptr)->place, qid("", NULL), q, -1);

			}
			else{
				yyerror("Decrement not defined for this type");
				(yyval.ptr)->is_error = 1;
			}
		}
		else{
			if((yyvsp[-1].ptr)->expType==4){
				yyerror("constant expression cannot be used as lvalue");
			}
			(yyval.ptr)->is_error = 1;
		}

    }
#line 5719 "parser.cpp"
    break;

  case 250:
#line 3056 "parser.y++"
                                             { // 1
        vector<data2>v;
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("CastExpression", v);
    }
#line 5732 "parser.cpp"
    break;

  case 251:
#line 3068 "parser.y++"
                        {
		(yyval.ptr) = makeleaf((yyvsp[0].str));
		(yyval.ptr)->tempName = string((yyvsp[0].str));
		className = (yyvsp[0].str);
		classTemp = className ; 
	}
#line 5743 "parser.cpp"
    break;

  case 252:
#line 3077 "parser.y++"
             {
		createStructTable();
		if(type != "") {
			yyerror(("cannot combine with previous " + type + " declaration specifier").c_str());
		}
	}
#line 5754 "parser.cpp"
    break;

  case 253:
#line 3086 "parser.y++"
                 {
		(yyval.ind) = code.size();
	}
#line 5762 "parser.cpp"
    break;

  case 254:
#line 3092 "parser.y++"
                 {
		(yyval.ptr)=NULL;
		string str = "Block" +to_string(block_count);
		block_stack.push(block_count);
		block_count++;
		// func_flag++;
		makeSymbolTable(str, "",0);
	}
#line 5775 "parser.cpp"
    break;

  case 255:
#line 3103 "parser.y++"
                        {
		(yyval.ptr)=NULL;
		type ="";
		// func_flag = 0;
		funcArgs.clear();
		createParamList();
		gotolablelist.clear();
		gotolabel.clear();
	}
#line 5789 "parser.cpp"
    break;


#line 5793 "parser.cpp"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 3114 "parser.y++"

    
int main(int argc, char* argv[]){

    dotfile=fopen(argv[1],"w");
    if(dotfile == NULL){
		cout<<"cannot open the dot file AST.dot"<<"\nCompilation terminated\n";
		return -1;
	}

    symTable_init();
	beginAST();
    yyparse();
/* 
    for(int i=2; i<argc; i++){
        if(!strcmp(argv[i], "-dump-sym-table")) dump_sym_table = 1;
		else if(!strcmp(argv[i], "-dump-tac")) dump_tac = 1;
		else if(!strcmp(argv[i], "-dump-all")) dump_tac = dump_sym_table = 1;
    } */

    setGlobal();
	print3AC();
	endAST();
	if(dump_sym_table) printSymbolTable(&globalst, "Global_Symbol_Table.csv");
    return 0;
}

void yyerror(char const* s){
    cout << "Error: " << s << " in Line no: " << line << endl;
    exit(-1);
}

// set type as int and read integer value correctly depending on the base
void set_int_type(int t){
	yylval.num = new constants;
	yylval.num->str = strdup(yytext);
	yylval.num->type = string("int");
	switch(t){
		// 3-> hexadecimal, 2-> octal, 1-> decimal, 0-> char
		case 0 : {
			sscanf(yytext, "%", &(yylval.num->intVal));
			yylval.num->intVal = char_int(yylval.num->str);
			yylval.num->type = "char";
			break;
		}
		case 1 : {
			sscanf(yytext, "%lld", &(yylval.num->intVal));
			break;
		}
		case 2 : {
			sscanf(yytext, "%llo", &(yylval.num->intVal));
			break;
		}
		case 3 : {
			sscanf(yytext, "%llx", &(yylval.num->intVal));
			break;
		}
	}
}

// convert character to an integer value
int char_int(string str){
    if(str[1] == '\\'){
        string s = str.substr(1,2);
        if(s == "\\0") return 0;
        if(s == "\\n") return 10;
        if(s == "\\t") return 9;
    } 
    int val = (int)str[1];
    return (val);
}

// set type as float and read the real value
void set_real_type(){
	yylval.num = new constants ;
	yylval.num->str = strdup(yytext);
	yylval.num->type = string("float");
	sscanf(yytext, "%lf", &(yylval.num->realVal));
} 
