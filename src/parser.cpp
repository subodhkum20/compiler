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

    #include<iostream>
    #include<stdio.h>
    #include "ast.h"
    #include <fstream>
    using namespace std;
    extern char* yytext;
    extern int line;
    extern void yyerror(char const*);
    int yylex (void); /* type of yylex() */
    #define YYDEBUG 1
    #define YYERROR_VERBOSE

    FILE* dotfile;

#line 86 "parser.cpp"

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
    INSTANCEOF = 278,
    PTR_OP = 279,
    METHOD_REFERENCE = 280,
    ELLIPSIS = 281,
    integerLiteral = 282,
    stringLiteral = 283,
    nullLiteral = 284,
    characterLiteral = 285,
    textBlock = 286,
    booleanLiteral = 287,
    FloatingPointLiteral = 288,
    Identifier = 289,
    ABSTRACT = 290,
    CONTINUE = 291,
    FOR = 292,
    NEW = 293,
    ASSERT = 294,
    DEFAULT = 295,
    IF = 296,
    PACKAGE = 297,
    SYNCHRONIZED = 298,
    BOOLEAN = 299,
    PRIVATE = 300,
    THIS = 301,
    BREAK = 302,
    DOUBLE = 303,
    THROW = 304,
    BYTE = 305,
    ELSE = 306,
    PUBLIC = 307,
    ENUM = 308,
    RETURN = 309,
    TRANSIENT = 310,
    INT = 311,
    SHORT = 312,
    CHAR = 313,
    FINAL = 314,
    INTERFACE = 315,
    STATIC = 316,
    VOID = 317,
    CLASS = 318,
    LONG = 319,
    STRICTFP = 320,
    VOLATILE = 321,
    FLOAT = 322,
    NATIVE = 323,
    SUPER = 324,
    WHILE = 325,
    _ = 326,
    EXPORTS = 327,
    OPENS = 328,
    REQUIRES = 329,
    USES = 330,
    MODULE = 331,
    PERMITS = 332,
    SEALED = 333,
    VAR = 334,
    NON_SEALED = 335,
    PROVIDES = 336,
    TO = 337,
    WITH = 338,
    OPEN = 339,
    RECORD = 340,
    TRANSITIVE = 341,
    YIELD = 342,
    eof = 343,
    INC_OP = 344,
    DEC_OP = 345
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "parser.y++"
 
    char* str;
    treeNode* ptr;
    int ind;

#line 235 "parser.cpp"

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1353

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  116
/* YYNRULES -- Number of rules.  */
#define YYNRULES  259
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  430

#define YYUNDEFTOK  2
#define YYMAXUTOK   345


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
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    41,    41,    42,    43,    44,    45,    46,    47,    51,
      52,    57,    60,    66,    67,    68,    69,    70,    74,    75,
      81,    87,   100,   101,   104,   107,   118,   128,   134,   140,
     141,   151,   152,   156,   170,   180,   192,   193,   202,   203,
     204,   205,   209,   220,   221,   230,   231,   232,   236,   237,
     241,   251,   264,   271,   283,   284,   292,   300,   307,   313,
     320,   330,   342,   345,   356,   357,   362,   363,   367,   368,
     372,   375,   386,   396,   397,   401,   410,   420,   431,   439,
     449,   458,   470,   471,   476,   477,   481,   482,   488,   496,
     506,   507,   520,   530,   531,   540,   546,   547,   552,   562,
     563,   564,   565,   566,   567,   571,   572,   573,   574,   575,
     579,   580,   581,   582,   583,   584,   585,   586,   587,   591,
     601,   611,   620,   621,   622,   623,   624,   625,   626,   630,
     642,   656,   689,   701,   713,   719,   728,   734,   743,   757,
     769,   770,   774,   775,   779,   780,   784,   785,   789,   793,
     796,   807,   814,   823,   833,   840,   849,   859,   869,   892,
     893,   896,   897,   898,   905,   906,   907,   908,   913,   914,
     921,   930,   943,   953,   954,   958,   959,   969,   978,   985,
     995,  1003,  1015,  1023,  1033,  1046,  1047,  1056,  1064,  1075,
    1076,  1086,  1096,  1101,  1102,  1106,  1116,  1117,  1118,  1122,
    1123,  1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,
    1133,  1137,  1146,  1151,  1158,  1161,  1168,  1172,  1179,  1182,
    1189,  1193,  1200,  1204,  1211,  1218,  1222,  1229,  1236,  1243,
    1250,  1255,  1262,  1269,  1276,  1280,  1287,  1294,  1299,  1306,
    1313,  1320,  1325,  1326,  1327,  1333,  1339,  1343,  1352,  1361,
    1362,  1368,  1374,  1378,  1379,  1380,  1381,  1385,  1394,  1403
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
  "UNSIGNED_RIGHT", "UNSIGNED_RIGHT_ASSIGN", "INSTANCEOF", "PTR_OP",
  "METHOD_REFERENCE", "ELLIPSIS", "integerLiteral", "stringLiteral",
  "nullLiteral", "characterLiteral", "textBlock", "booleanLiteral",
  "FloatingPointLiteral", "Identifier", "ABSTRACT", "CONTINUE", "FOR",
  "NEW", "ASSERT", "DEFAULT", "IF", "PACKAGE", "SYNCHRONIZED", "BOOLEAN",
  "PRIVATE", "THIS", "BREAK", "DOUBLE", "THROW", "BYTE", "ELSE", "PUBLIC",
  "ENUM", "RETURN", "TRANSIENT", "INT", "SHORT", "CHAR", "FINAL",
  "INTERFACE", "STATIC", "VOID", "CLASS", "LONG", "STRICTFP", "VOLATILE",
  "FLOAT", "NATIVE", "SUPER", "WHILE", "_", "EXPORTS", "OPENS", "REQUIRES",
  "USES", "MODULE", "PERMITS", "SEALED", "VAR", "NON_SEALED", "PROVIDES",
  "TO", "WITH", "OPEN", "RECORD", "TRANSITIVE", "YIELD", "eof", "INC_OP",
  "DEC_OP", "$accept", "Literal", "PrimitiveType", "NumericType",
  "IntegralType", "FloatingPointType", "Dims", "Name", "SimpleName",
  "QualifiedName", "CompilationUnit", "OrdinaryCompilationUnit",
  "TopLevelClassOrInterfaceDeclarations",
  "TopLevelClassOrInterfaceDeclaration", "PackageDeclaration",
  "ClassDeclaration", "Modifiers", "Modifier", "ClassBody",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclaratorList",
  "VariableDeclaratory", "MethodDeclaration", "MethodHeader",
  "MethodDeclarator", "VariableDeclaratorId", "VariableInitializer",
  "FormalParameterListy", "Dimsy", "FormalParameterList",
  "FormalParameter", "MethodBody", "StaticInitializer",
  "ConstructorDeclaration", "ConstructorDeclarator", "ConstructorBody",
  "ExplicitConstructorInvocation", "ArgumentListy", "comay", "ClassBodyy",
  "ArrayInitializer", "VariableInitializerList", "Block",
  "BlockStatements", "BlockStatement", "LocalVariableDeclaration",
  "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "LabeledStatement",
  "LabeledStatementNoShortIf", "ExpressionStatement",
  "StatementExpression", "IfThenStatement", "IfThenElseStatement",
  "IfThenElseStatementNoShortIf", "WhileStatement",
  "WhileStatementNoShortIf", "ForStatement", "ForStatementNoShortIf",
  "BasicForHeader", "EnhancedForHeader", "ForInity", "Expressiony",
  "ForUpdatey", "ForInit", "ForUpdate", "StatementExpressionList",
  "BreakStatement", "YieldStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "SynchronizedStatement", "Primary",
  "PrimaryNoNewArray", "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression",
  "ClassOrInterfaceTypeToInstantiate", "TypeArgumentsOrDiamondy",
  "ClassOrInterfaceTypeToInstant", "TypeArgumentsOrDiamond", "FieldAccess",
  "ArrayAccess", "MethodInvocation", "ArgumentList",
  "ArrayCreationExpression", "DimExprs", "DimExpr", "Expression",
  "AssignmentExpression", "Assignment", "LeftHandSide",
  "AssignmentOperator", "ConditionalExpression", "ConditionalOrExpression",
  "ConditionalAndExpression", "InclusiveOrExpression",
  "ExclusiveOrExpression", "AndExpression", "EqualityExpression",
  "RelationalExpression", "ShiftExpression", "AdditiveExpression",
  "MultiplicativeExpression", "UnaryExpression", "PreIncrementExpression",
  "PreDecrementExpression", "UnaryExpressionNotPlusMinus",
  "PostfixExpression", "PostIncrementExpression",
  "PostDecrementExpression", "CastExpression", YY_NULLPTR
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
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345
};
# endif

#define YYPACT_NINF (-343)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-257)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -56,   -16,    45,   -55,    18,  -343,  -343,    17,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,  -343,  -343,   -16,  -343,  -343,
     -33,    51,    18,   -16,  -343,    75,   -16,  -343,  -343,  -343,
    -343,    75,   698,  -343,  -343,  -343,  -343,  -343,  -343,  -343,
    -343,    80,   -16,  -343,  -343,   -16,  -343,  -343,  -343,   644,
    -343,  -343,  -343,  -343,    99,  -343,  -343,   758,  -343,    67,
    -343,   158,   140,  -343,   -16,   -16,    87,   101,  -343,  -343,
    -343,  1239,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,
       1,   116,   796,   128,   167,  -343,     8,  1239,  1239,   171,
     180,  1239,  1239,  1239,  -343,   -16,  1276,   174,  -343,  -343,
     195,   758,   189,  -343,  -343,  -343,  -343,   192,  -343,  -343,
    -343,  -343,   970,   970,  -343,  -343,  -343,  -343,  -343,  -343,
     216,   220,    20,  -343,   919,  1036,    98,  -343,  -343,  1234,
    -343,  -343,    65,    93,   104,   239,   205,  -343,   207,   -16,
    -343,  -343,   204,  -343,   239,   839,  -343,   925,  1239,  1239,
    1239,  1239,  -343,  -343,   233,  -343,  -343,  -343,    91,   210,
     235,   238,   241,   206,   148,    85,   229,   126,  -343,  -343,
    -343,  -343,    65,  -343,  -343,  -343,  -343,   249,  1067,   250,
     260,   255,  1239,  1239,  -343,   251,   253,   256,  -343,   -16,
    1239,   258,   193,  -343,  -343,  -343,  -343,   274,   268,  1239,
    1239,   113,   970,  -343,  -343,  -343,  -343,  -343,  -343,   113,
    1239,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  1239,  -343,  -343,   -16,   283,  -343,   271,
     274,  1151,  -343,   274,  -343,   287,   292,    70,   758,   290,
     274,  -343,  -343,  -343,  -343,  -343,  1239,  1239,  1239,  1239,
    1239,  1239,  1239,  1239,  1239,  1239,  1239,  1239,  1239,  1239,
    1239,  1239,  1239,  1239,  1239,  1239,  -343,   273,   281,   284,
    -343,  -343,  1175,   295,   250,  -343,   -16,   285,  1239,   302,
     305,  -343,  -343,  -343,   309,   310,  -343,   312,   300,  -343,
     316,   -16,  -343,  -343,   322,  -343,   318,  -343,  -343,   321,
     274,   239,  -343,   479,  -343,  -343,  -343,   207,  -343,  1239,
    1239,   329,  -343,   333,   323,   210,   235,   238,   241,   206,
     148,   148,    85,    85,    85,    85,   229,   229,   229,   126,
     126,  -343,  -343,  -343,  1239,   209,  1239,   330,  -343,  -343,
    -343,   260,   331,  -343,  -343,   339,  1039,    80,  1239,   970,
    -343,  1239,  -343,  1239,  -343,   343,  -343,  -343,  -343,  -343,
     347,   341,  -343,   356,   360,  -343,  1239,  1239,   361,  -343,
     348,  -343,  -343,  -343,    75,   363,   368,   353,  -343,   311,
     317,  -343,  -343,  -343,  -343,  1039,  1039,  -343,   380,  -343,
    -343,   383,  -343,  -343,  1151,   387,   375,   376,  -343,  -343,
    -343,   209,  -343,  -343,  1239,  1239,  1039,   970,  -343,  -343,
    -343,  -343,  -343,  -343,  -343,  -343,   394,  -343,  -343,   396,
     397,  -343,  -343,  -343,  1039,  1039,   334,  -343,  1039,  -343
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      29,     0,     0,     0,    28,    29,    24,     0,    22,    23,
       1,    26,    32,    39,    38,    41,    40,     0,    30,    31,
       0,    36,    27,     0,    33,     0,     0,    37,    25,    43,
      35,     0,     0,    34,    42,    10,    19,    13,    15,    14,
      17,    40,     0,    16,    18,     0,     9,    11,    12,     0,
      44,    45,    48,    49,     0,    46,    47,    93,    75,     0,
      60,    68,     0,    58,     0,     0,     0,     0,    74,    56,
      73,     0,   111,     2,     6,     8,     5,     7,     4,     3,
       0,     0,     0,     0,     0,   162,     0,     0,   142,     0,
       0,     0,     0,     0,   161,     0,   254,    22,    96,   110,
       0,    93,     0,    97,    99,   100,   112,     0,   101,   102,
     103,   104,     0,     0,   113,   118,   114,   115,   117,   116,
     253,   159,   164,   168,   165,   166,   167,   160,   122,     0,
     123,   124,     0,   125,   126,    66,     0,    69,    54,     0,
      51,    59,     0,    57,    66,    93,    76,     0,     0,     0,
       0,     0,   164,   167,     0,   192,   193,   194,   212,   214,
     216,   218,   220,   222,   225,   230,   234,   237,   241,   242,
     243,   246,   249,   255,   256,   252,   155,     0,   140,     0,
     175,     0,     0,     0,   152,     0,     0,     0,   143,     0,
       0,     0,   254,   165,   166,   247,   248,    68,    98,    82,
       0,     0,     0,    92,    94,    95,   121,   134,   135,     0,
       0,   199,   203,   204,   200,   201,   202,   205,   206,   208,
     209,   210,   207,     0,   257,   258,     0,     0,    67,    70,
      20,     0,    52,    68,    50,     0,   162,     0,    93,     0,
      68,   244,   245,   250,   251,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   154,   147,   149,     0,
     141,   146,     0,     0,    68,   189,     0,   173,    82,     0,
       0,   151,   157,   156,   179,     0,   153,     0,    83,   185,
       0,     0,   169,   119,   178,   170,     0,   195,    62,    72,
      68,     0,    21,    84,    55,    65,    64,    54,    77,    82,
      82,     0,    79,     0,     0,   213,   215,   217,   219,   221,
     223,   224,   226,   227,   229,   228,   232,   231,   233,   235,
     236,   238,   239,   240,     0,     0,   142,     0,   188,   187,
     190,   175,     0,   172,   174,     0,     0,     0,    82,     0,
     182,     0,   180,    82,   181,     0,    61,    71,    85,    90,
       0,    84,    53,     0,     0,    78,     0,     0,     0,   150,
       0,   191,   176,   177,    86,     0,     0,    22,   129,     0,
      99,   106,   107,   108,   109,     0,     0,   158,     0,   132,
     186,     0,    63,    89,    85,     0,     0,     0,   259,   211,
     139,   144,    87,   171,     0,     0,     0,     0,   136,   137,
     184,   183,    91,    88,    80,    81,     0,   145,   148,     0,
       0,   120,   130,   138,     0,     0,     0,   133,     0,   131
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -343,  -343,     9,  -343,  -343,  -343,  -168,   362,   -17,  -343,
    -343,  -343,   399,  -343,  -343,    13,     2,  -343,   -30,  -343,
    -343,  -343,  -343,   -49,   105,  -343,  -343,   -14,  -343,  -296,
     261,  -219,   112,  -343,  -343,  -343,  -343,  -343,  -343,  -343,
    -143,    54,  -343,   133,  -343,   -39,   -93,  -343,   240,   245,
    -314,  -342,  -343,  -343,  -343,  -175,  -343,  -343,  -343,  -343,
    -343,  -343,  -343,  -209,  -182,  -343,    81,  -343,  -343,  -343,
    -313,  -343,  -343,  -343,  -343,  -343,  -343,  -343,  -343,   -52,
     -80,  -343,  -343,    78,  -343,   432,   495,   -45,  -343,  -343,
    -343,   142,   -58,   199,    -4,  -343,  -343,    56,  -343,   182,
     183,   181,   184,   186,    -5,  -108,   -28,    -8,   -74,    42,
      50,  -343,   137,   172,   313,  -343
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    94,    95,    46,    47,    48,   137,    96,     8,     9,
       2,     3,     4,    18,     5,    98,    20,    21,    30,    32,
      50,    51,    52,    62,   232,    53,    54,    60,   299,   304,
     227,   138,   228,   229,    69,    55,    56,    67,   146,   238,
     287,   360,   403,   305,   361,    99,   100,   101,   102,   103,
     379,   104,   105,   381,   106,   107,   108,   109,   382,   110,
     383,   111,   384,   112,   113,   269,   187,   416,   270,   417,
     271,   114,   115,   116,   117,   118,   119,   120,   121,   152,
     123,   181,   343,   277,   344,   124,   125,   153,   288,   127,
     274,   275,   289,   155,   156,   129,   223,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    33,    58,   268,   380,   122,    28,   359,   204,    31,
       1,   273,   126,   154,   307,    70,   142,    19,   195,   196,
     176,   313,   369,    27,  -128,    59,    23,   184,    61,   186,
     188,    63,    66,   191,    49,    19,    24,    12,  -128,  -128,
      97,    45,     6,   380,   380,    10,   198,    59,    61,   122,
     141,   143,   239,   128,    26,   339,   126,    11,    65,     6,
     122,   122,   302,   177,   380,   180,     6,   126,   126,   185,
     135,   408,   409,   310,   241,   242,   243,   244,   197,   189,
      29,   356,   380,   380,    97,    57,   380,    13,   418,   154,
     144,   179,   421,   122,    14,    97,    97,   128,   412,   130,
     126,    15,  -127,    16,    57,    17,   145,   131,   128,   128,
     426,   427,   258,   259,   429,   246,  -127,  -127,    68,   178,
      13,   292,   233,   247,   279,   280,   122,    14,    97,   295,
     260,   182,   285,   126,    15,   345,    16,   385,   263,   264,
     265,   128,   290,   130,   226,   311,   322,   323,   324,   325,
     122,   131,   296,   226,   130,   130,   240,   126,   139,   140,
     268,   135,   131,   131,   386,   136,   363,   364,   254,   255,
     183,     6,   284,   306,   128,   291,   385,   385,   224,   225,
     189,   256,   257,   190,    28,    97,   122,   130,   314,   331,
     332,   333,   294,   126,   132,   131,   199,   385,   128,   202,
     200,   203,   201,   386,   386,   388,  -255,  -255,   205,   298,
     391,   206,    71,   230,   337,   385,   385,  -256,  -256,   385,
     130,    97,   139,   234,   386,   209,   268,   210,   131,   133,
     326,   327,   328,   231,   128,   252,   253,   245,   132,   261,
     262,   248,   386,   386,   130,   306,   386,   320,   321,   132,
     132,   249,   131,   329,   330,   250,   251,   272,   278,   341,
      73,    74,    75,    76,    77,    78,    79,     6,   266,   276,
     281,    82,   282,   133,   180,   283,   368,   286,   188,    85,
     130,   136,   132,   122,   133,   133,   139,   300,   131,   301,
     126,   308,   398,   390,   122,   309,   312,   122,   334,   335,
     303,   126,    89,   336,   126,   342,   346,    35,   387,   347,
     226,    36,   348,    37,   349,   132,   350,   133,   351,    38,
      39,    40,    92,    93,   352,   353,   354,    43,   355,   377,
      44,   128,    97,   122,   122,   365,   306,   366,   371,   132,
     126,   126,   128,   374,   402,   128,   419,   420,   367,   122,
     133,   392,   373,   393,   122,   122,   126,   207,   208,   394,
     396,   126,   126,     7,   397,   400,   404,   401,   377,   377,
     134,   405,   122,   122,   133,   132,   122,   130,   406,   126,
     126,   128,   128,   126,   410,   131,   407,   411,   130,   377,
      97,   130,  -105,   413,   414,   415,   131,   128,   423,   131,
     424,   425,   128,   128,    22,   235,   338,   377,   377,   428,
     133,   377,   362,   357,   134,   395,   340,   370,   267,   372,
     128,   128,   297,   399,   128,   134,   134,   130,   130,   315,
     317,   316,     0,     0,   318,   131,   131,   319,     0,     0,
       0,     0,     0,   130,     0,     0,     0,   293,   130,   130,
       0,   131,     0,     0,   192,   192,   131,   131,   134,     0,
       0,     0,     0,     0,     0,     0,   130,   130,     0,     0,
     130,     0,   132,     0,   131,   131,     0,     0,   131,     0,
       0,     0,   147,   132,   303,     0,   132,     0,     0,   148,
     149,   134,     0,     0,     0,     0,     0,   358,     0,     0,
       0,   150,   151,     0,     0,     0,     0,   133,     0,     0,
     192,   192,   192,   192,     0,   134,     0,     0,   133,     0,
       0,   133,   132,   132,   193,   193,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     6,   132,     0,
       0,    82,     0,   132,   132,     0,     0,     0,     0,    85,
       0,   134,     0,     0,     0,     0,     0,   133,   133,     0,
       0,   132,   132,     0,     0,   132,     0,     0,     0,     0,
       0,     0,    89,   133,     0,     0,     0,     0,   133,   133,
     193,   193,   193,   193,     0,     0,     0,   194,   194,     0,
       0,   378,    92,    93,   389,     0,   133,   133,     0,     0,
     133,     0,     0,     0,     0,     0,     0,     0,     0,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,     0,     0,
     207,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   194,   194,   194,   194,     0,   134,     0,
       0,   293,   422,     0,     0,     0,     0,     0,     0,   134,
       0,     0,   134,     0,     0,     0,     0,     0,     0,   378,
     389,     0,     0,   422,     0,     0,     0,     0,     0,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   134,   134,
       0,     0,     6,     0,    34,     0,     0,     0,     0,     0,
       0,     0,    35,     0,   134,     0,    36,     0,    37,   134,
     134,     0,     0,     0,    38,    39,    40,     0,   192,   192,
      64,     0,    43,     0,     0,    44,     0,   134,   134,     0,
       0,   134,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,    71,     0,    57,     0,     0,    35,    13,     0,     0,
      36,     0,    37,     0,    14,     0,     0,    72,    38,    39,
      40,    15,     0,    41,    42,     0,    43,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,   193,   193,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     6,     0,    80,    81,
      82,     0,     0,    83,     0,    84,    35,    13,    85,    86,
      36,    87,    37,     0,    14,     0,    88,     0,    38,    39,
      40,    15,    71,    16,    57,    17,    43,     0,     0,    44,
       0,    89,    90,     0,     6,     0,     0,     0,    72,     0,
       0,   194,   194,     0,    35,     0,     0,     0,    36,    91,
      37,    92,    93,     0,     0,     0,    38,    39,    40,     0,
       0,     0,     0,     0,    43,     0,     0,    44,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     6,     0,    80,
      81,    82,     0,     0,    83,     0,    84,    35,    13,   236,
      86,    36,    87,    37,     0,    14,     0,    88,     0,    38,
      39,    40,    15,     0,    16,     0,    17,    43,   147,     0,
      44,     0,   237,    90,     0,   148,   149,     0,     0,     0,
       0,     0,     0,     0,     0,  -197,     0,   150,   151,     0,
      91,     0,    92,    93,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,     0,  -197,     0,     0,     0,     0,
       0,     0,     0,    71,     0,    57,    73,    74,    75,    76,
      77,    78,    79,     6,     0,     0,     0,    82,     0,    72,
       0,     0,     0,    35,     0,    85,     0,    36,     0,    37,
       0,     0,     0,     0,     0,    38,    39,    40,     0,     0,
       0,     0,     0,    43,     0,     0,    44,     0,    89,     0,
       0,    73,    74,    75,    76,    77,    78,    79,     6,     0,
      80,    81,    82,     0,     0,    83,     0,    84,    92,    93,
      85,    86,    71,    87,    57,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,  -198,    89,    90,     0,     0,     0,     0,     0,
      71,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,    91,  -198,    92,    93,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     6,     0,    80,
      81,    82,     0,     0,   375,     0,    84,     0,     0,    85,
      86,     0,    87,     0,     0,     0,     0,    88,    73,    74,
      75,    76,    77,    78,    79,     6,     0,     0,     0,    82,
       0,     0,    89,   376,     0,    35,     0,    85,     0,    36,
       0,    37,     0,     0,     0,     0,     0,    38,    39,    40,
      91,     0,    92,    93,   147,    43,   303,     0,    44,     0,
      89,   148,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   150,   151,     0,     0,     0,   147,     0,
      92,    93,     0,   230,     0,   148,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,   151,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     6,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     6,     0,     0,     0,    82,     0,     0,
       0,     0,   147,     0,    89,    85,     0,     0,     0,   148,
     149,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     211,   150,   151,     0,    92,    93,     0,     0,    89,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   199,
     222,     0,     0,   200,     0,   201,     0,     0,    92,    93,
      73,    74,    75,    76,    77,    78,    79,     6,     0,     0,
       0,    82,  -196,     0,     0,     0,     0,     0,     0,    85,
       0,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,     0,  -196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    93
};

static const yytype_int16 yycheck[] =
{
      17,    31,    41,   178,   346,    57,    23,   303,   101,    26,
      66,   179,    57,    71,   233,    54,    65,     4,    92,    93,
      19,   240,   335,    21,     4,    42,     9,    19,    45,    87,
      88,    45,    49,    91,    32,    22,    19,    19,    18,    19,
      57,    32,    58,   385,   386,     0,    95,    64,    65,   101,
      64,    65,   145,    57,    87,   274,   101,   112,    49,    58,
     112,   113,   230,    80,   406,    82,    58,   112,   113,    86,
       3,   385,   386,     3,   148,   149,   150,   151,    95,     9,
       5,   300,   424,   425,   101,     5,   428,    69,   401,   147,
       3,    82,   406,   145,    76,   112,   113,   101,   394,    57,
     145,    83,     4,    85,     5,    87,     5,    57,   112,   113,
     424,   425,    27,    28,   428,    24,    18,    19,    19,     3,
      69,   201,   139,    32,   182,   183,   178,    76,   145,   209,
      45,     3,   190,   178,    83,   278,    85,   346,    12,    13,
      14,   145,   200,   101,   135,   238,   254,   255,   256,   257,
     202,   101,   210,   144,   112,   113,   147,   202,    18,    19,
     335,     3,   112,   113,   346,     7,   309,   310,    20,    21,
       3,    58,   189,   231,   178,    62,   385,   386,   113,   114,
       9,    33,    34,     3,   201,   202,   238,   145,   246,   263,
     264,   265,   209,   238,    57,   145,     3,   406,   202,    25,
       7,     6,     9,   385,   386,   348,   113,   114,    19,   226,
     353,    19,     3,     8,   272,   424,   425,   113,   114,   428,
     178,   238,    18,    19,   406,     9,   401,     7,   178,    57,
     258,   259,   260,    26,   238,    29,    30,     4,   101,    10,
      11,    31,   424,   425,   202,   303,   428,   252,   253,   112,
     113,    16,   202,   261,   262,    17,    15,     7,     3,   276,
      51,    52,    53,    54,    55,    56,    57,    58,    19,     9,
      19,    62,    19,   101,   291,    19,   334,    19,   336,    70,
     238,     7,   145,   335,   112,   113,    18,     4,   238,    18,
     335,     4,   366,   351,   346,     3,     6,   349,    25,    18,
       5,   346,    93,    19,   349,    20,     4,    68,   347,     4,
     301,    72,     3,    74,     4,   178,     4,   145,    18,    80,
      81,    82,   113,   114,     8,     3,     8,    88,     7,   346,
      91,   335,   349,   385,   386,     6,   394,     4,     8,   202,
     385,   386,   346,     4,   374,   349,   404,   405,    25,   401,
     178,     8,    21,     6,   406,   407,   401,   112,   113,    18,
       4,   406,   407,     1,     4,     4,     3,    19,   385,   386,
      57,     3,   424,   425,   202,   238,   428,   335,    25,   424,
     425,   385,   386,   428,     4,   335,    75,     4,   346,   406,
     407,   349,    75,     6,    19,    19,   346,   401,     4,   349,
       4,     4,   406,   407,     5,   144,   273,   424,   425,    75,
     238,   428,   307,   301,   101,   361,   274,   336,   178,   341,
     424,   425,   223,   367,   428,   112,   113,   385,   386,   247,
     249,   248,    -1,    -1,   250,   385,   386,   251,    -1,    -1,
      -1,    -1,    -1,   401,    -1,    -1,    -1,   202,   406,   407,
      -1,   401,    -1,    -1,    92,    93,   406,   407,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   424,   425,    -1,    -1,
     428,    -1,   335,    -1,   424,   425,    -1,    -1,   428,    -1,
      -1,    -1,     3,   346,     5,    -1,   349,    -1,    -1,    10,
      11,   178,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    22,    23,    -1,    -1,    -1,    -1,   335,    -1,    -1,
     148,   149,   150,   151,    -1,   202,    -1,    -1,   346,    -1,
      -1,   349,   385,   386,    92,    93,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,   401,    -1,
      -1,    62,    -1,   406,   407,    -1,    -1,    -1,    -1,    70,
      -1,   238,    -1,    -1,    -1,    -1,    -1,   385,   386,    -1,
      -1,   424,   425,    -1,    -1,   428,    -1,    -1,    -1,    -1,
      -1,    -1,    93,   401,    -1,    -1,    -1,    -1,   406,   407,
     148,   149,   150,   151,    -1,    -1,    -1,    92,    93,    -1,
      -1,   346,   113,   114,   349,    -1,   424,   425,    -1,    -1,
     428,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,    -1,    -1,
     385,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,   150,   151,    -1,   335,    -1,
      -1,   406,   407,    -1,    -1,    -1,    -1,    -1,    -1,   346,
      -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,   424,
     425,    -1,    -1,   428,    -1,    -1,    -1,    -1,    -1,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   385,   386,
      -1,    -1,    58,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,   401,    -1,    72,    -1,    74,   406,
     407,    -1,    -1,    -1,    80,    81,    82,    -1,   366,   367,
      86,    -1,    88,    -1,    -1,    91,    -1,   424,   425,    -1,
      -1,   428,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,     3,    -1,     5,    -1,    -1,    68,    69,    -1,    -1,
      72,    -1,    74,    -1,    76,    -1,    -1,    19,    80,    81,
      82,    83,    -1,    85,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,   367,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    -1,    65,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    -1,    80,    81,
      82,    83,     3,    85,     5,    87,    88,    -1,    -1,    91,
      -1,    93,    94,    -1,    58,    -1,    -1,    -1,    19,    -1,
      -1,   366,   367,    -1,    68,    -1,    -1,    -1,    72,   111,
      74,   113,   114,    -1,    -1,    -1,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    60,
      61,    62,    -1,    -1,    65,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    78,    -1,    80,
      81,    82,    83,    -1,    85,    -1,    87,    88,     3,    -1,
      91,    -1,    93,    94,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    22,    23,    -1,
     111,    -1,   113,   114,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    62,    -1,    19,
      -1,    -1,    -1,    68,    -1,    70,    -1,    72,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    -1,    93,    -1,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    -1,    -1,    65,    -1,    67,   113,   114,
      70,    71,     3,    73,     5,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    26,    93,    94,    -1,    -1,    -1,    -1,    -1,
       3,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   111,    46,   113,   114,    -1,    -1,    -1,    -1,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    60,
      61,    62,    -1,    -1,    65,    -1,    67,    -1,    -1,    70,
      71,    -1,    73,    -1,    -1,    -1,    -1,    78,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    62,
      -1,    -1,    93,    94,    -1,    68,    -1,    70,    -1,    72,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
     111,    -1,   113,   114,     3,    88,     5,    -1,    91,    -1,
      93,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    -1,    -1,    -1,     3,    -1,
     113,   114,    -1,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,     3,    -1,    93,    70,    -1,    -1,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    22,    23,    -1,   113,   114,    -1,    -1,    93,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,     3,
      46,    -1,    -1,     7,    -1,     9,    -1,    -1,   113,   114,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    62,    26,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    66,   125,   126,   127,   129,    58,   122,   123,   124,
       0,   112,    19,    69,    76,    83,    85,    87,   128,   130,
     131,   132,   127,     9,    19,   123,    87,   131,   123,     5,
     133,   123,   134,   133,     6,    68,    72,    74,    80,    81,
      82,    85,    86,    88,    91,   117,   118,   119,   120,   131,
     135,   136,   137,   140,   141,   150,   151,     5,   160,   123,
     142,   123,   138,   142,    86,   117,   123,   152,    19,   149,
     160,     3,    19,    51,    52,    53,    54,    55,    56,    57,
      60,    61,    62,    65,    67,    70,    71,    73,    78,    93,
      94,   111,   113,   114,   116,   117,   122,   123,   130,   160,
     161,   162,   163,   164,   166,   167,   169,   170,   171,   172,
     174,   176,   178,   179,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   200,   201,   202,   204,   209,   210,
     224,   225,   227,   228,   229,     3,     7,   121,   146,    18,
      19,   142,   138,   142,     3,     5,   153,     3,    10,    11,
      22,    23,   194,   202,   207,   208,   209,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,    19,   123,     3,   117,
     123,   196,     3,     3,    19,   123,   207,   181,   207,     9,
       3,   207,   122,   200,   201,   223,   223,   123,   138,     3,
       7,     9,    25,     6,   161,    19,    19,   164,   164,     9,
       7,    26,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    46,   211,   113,   114,   117,   145,   147,   148,
       8,    26,   139,   123,    19,   145,    70,    93,   154,   161,
     117,   223,   223,   223,   223,     4,    24,    32,    31,    16,
      17,    15,    29,    30,    20,    21,    33,    34,    27,    28,
      45,    10,    11,    12,    13,    14,    19,   163,   170,   180,
     183,   185,     7,   121,   205,   206,     9,   198,     3,   207,
     207,    19,    19,    19,   123,   207,    19,   155,   203,   207,
     207,    62,   195,   164,   123,   195,   207,   208,   123,   143,
       4,    18,   121,     5,   144,   158,   207,   146,     4,     3,
       3,   161,     6,   146,   207,   214,   215,   216,   217,   218,
     219,   219,   220,   220,   220,   220,   221,   221,   221,   222,
     222,   223,   223,   223,    25,    18,    19,   207,   158,   146,
     206,   123,    20,   197,   199,   155,     4,     4,     3,     4,
       4,    18,     8,     3,     8,     7,   146,   147,    18,   144,
     156,   159,   139,   155,   155,     6,     4,    25,   207,   185,
     181,     8,   198,    21,     4,    65,    94,   123,   164,   165,
     166,   168,   173,   175,   177,   178,   179,   160,   155,   164,
     207,   155,     8,     6,    18,   156,     4,     4,   223,   212,
       4,    19,   133,   157,     3,     3,    25,    75,   165,   165,
       4,     4,   144,     6,    19,    19,   182,   184,   185,   207,
     207,   165,   164,     4,     4,     4,   165,   165,    75,   165
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   118,   118,   119,   119,   119,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   124,   125,   126,   126,   127,
     127,   128,   128,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   133,   134,   134,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   141,   141,   141,
     141,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   149,   149,   150,   151,   152,   153,   153,
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   161,   161,   162,   162,   162,   163,   164,
     164,   164,   164,   164,   164,   165,   165,   165,   165,   165,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   167,
     168,   169,   170,   170,   170,   170,   170,   170,   170,   171,
     172,   173,   174,   175,   176,   176,   177,   177,   178,   179,
     180,   180,   181,   181,   182,   182,   183,   183,   184,   185,
     185,   186,   186,   187,   188,   188,   189,   190,   191,   192,
     192,   193,   193,   193,   193,   193,   193,   193,   194,   194,
     194,   195,   196,   197,   197,   198,   198,   199,   200,   200,
     201,   201,   202,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   207,   208,   208,   209,   210,   210,   210,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   212,   212,   213,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   218,   218,   218,   219,   219,   219,   219,
     219,   220,   220,   220,   220,   221,   221,   221,   222,   222,
     222,   222,   223,   223,   223,   223,   223,   224,   225,   226,
     226,   226,   226,   227,   227,   227,   227,   228,   229,   230
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     3,     2,     2,     1,     0,
       2,     1,     1,     3,     4,     3,     1,     2,     1,     1,
       1,     1,     3,     0,     2,     1,     1,     1,     1,     1,
       4,     3,     3,     5,     0,     2,     2,     3,     2,     3,
       2,     5,     1,     3,     1,     1,     0,     1,     0,     1,
       1,     3,     2,     1,     1,     2,     3,     4,     4,     3,
       5,     5,     0,     1,     0,     1,     0,     1,     4,     3,
       1,     3,     3,     0,     2,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     7,     5,     5,     2,     2,     2,     2,     8,     6,
       0,     1,     0,     1,     0,     1,     1,     1,     1,     1,
       3,     3,     2,     3,     3,     2,     3,     3,     5,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     3,
       3,     6,     3,     0,     1,     0,     3,     2,     3,     3,
       4,     4,     4,     6,     6,     1,     3,     4,     4,     1,
       2,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     1,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     2,     2,     5
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
#line 41 "parser.y++"
                     {cout << "Hello\n"; (yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 1966 "parser.cpp"
    break;

  case 3:
#line 42 "parser.y++"
                           {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 1972 "parser.cpp"
    break;

  case 4:
#line 43 "parser.y++"
                     {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 1978 "parser.cpp"
    break;

  case 5:
#line 44 "parser.y++"
                       {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 1984 "parser.cpp"
    break;

  case 6:
#line 45 "parser.y++"
                    {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 1990 "parser.cpp"
    break;

  case 7:
#line 46 "parser.y++"
                {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 1996 "parser.cpp"
    break;

  case 8:
#line 47 "parser.y++"
                  {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 2002 "parser.cpp"
    break;

  case 9:
#line 51 "parser.y++"
                  {(yyval.ptr) = (yyvsp[0].ptr);}
#line 2008 "parser.cpp"
    break;

  case 10:
#line 52 "parser.y++"
              {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 2014 "parser.cpp"
    break;

  case 11:
#line 57 "parser.y++"
                   {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2022 "parser.cpp"
    break;

  case 12:
#line 60 "parser.y++"
                        {
        (yyval.ptr) = (yyvsp[0].ptr) ;
    }
#line 2030 "parser.cpp"
    break;

  case 13:
#line 66 "parser.y++"
           {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 2036 "parser.cpp"
    break;

  case 14:
#line 67 "parser.y++"
            {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 2042 "parser.cpp"
    break;

  case 15:
#line 68 "parser.y++"
          {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 2048 "parser.cpp"
    break;

  case 16:
#line 69 "parser.y++"
           {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 2054 "parser.cpp"
    break;

  case 17:
#line 70 "parser.y++"
           {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 2060 "parser.cpp"
    break;

  case 18:
#line 74 "parser.y++"
            {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 2066 "parser.cpp"
    break;

  case 19:
#line 75 "parser.y++"
             {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 2072 "parser.cpp"
    break;

  case 20:
#line 81 "parser.y++"
           {
        vector<data>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("Dims", v);
    }
#line 2083 "parser.cpp"
    break;

  case 21:
#line 87 "parser.y++"
                 {
        vector<data>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v, NULL, "]", 0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("Dims", v);
    }
#line 2095 "parser.cpp"
    break;

  case 22:
#line 100 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2101 "parser.cpp"
    break;

  case 23:
#line 101 "parser.y++"
                  {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2107 "parser.cpp"
    break;

  case 24:
#line 104 "parser.y++"
               {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 2113 "parser.cpp"
    break;

  case 25:
#line 107 "parser.y++"
                        {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL,".",0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("Module_name", v);
    }
#line 2125 "parser.cpp"
    break;

  case 26:
#line 118 "parser.y++"
                                  {
        cout << "in compile unit\n";
        vector<data> v;
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
        (yyval.ptr) = makenode("CompilationUnit",v);
    }
#line 2137 "parser.cpp"
    break;

  case 27:
#line 128 "parser.y++"
                                                              {
        vector<data> v;
		insertAttr(v,(yyvsp[-1].ptr),"",1);
		insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("Ordinary_Compilation_Unit",v);
    }
#line 2148 "parser.cpp"
    break;

  case 28:
#line 134 "parser.y++"
                                           {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2156 "parser.cpp"
    break;

  case 29:
#line 140 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2162 "parser.cpp"
    break;

  case 30:
#line 141 "parser.y++"
                                                                               {
        cout << "TopLevelClassOrInterfaceDeclarations\n";
        vector<data> v;
		insertAttr(v,(yyvsp[-1].ptr),"",1);
		insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("Top_level_class_or_interface_declarations",v);
    }
#line 2174 "parser.cpp"
    break;

  case 31:
#line 151 "parser.y++"
                       {cout << "TopLevelClassOrInterfaceDeclaration\n"; (yyval.ptr) = (yyvsp[0].ptr);}
#line 2180 "parser.cpp"
    break;

  case 32:
#line 152 "parser.y++"
         {(yyval.ptr) = makeleaf(";");}
#line 2186 "parser.cpp"
    break;

  case 33:
#line 156 "parser.y++"
                       {
        vector<data> v;
		insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,";",0);
		(yyval.ptr) = makenode("Package_declaration",v);
    }
#line 2198 "parser.cpp"
    break;

  case 34:
#line 170 "parser.y++"
                                           {
        cout<<"normLclass\n";
        vector<data> v;
        insertAttr(v,(yyvsp[-3].ptr),"",1);
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        cout << "normal class after class and id\n";
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Normal_Class_Declaration",v);
    }
#line 2213 "parser.cpp"
    break;

  case 35:
#line 180 "parser.y++"
                                 {
        cout<<"normLclass\n";
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-2].str)),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        cout << "normal class after class and id\n";
        (yyval.ptr) = makenode("Normal_Class_Declaration",v);
    }
#line 2227 "parser.cpp"
    break;

  case 36:
#line 192 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2233 "parser.cpp"
    break;

  case 37:
#line 193 "parser.y++"
                         {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("modifier",v);
    }
#line 2244 "parser.cpp"
    break;

  case 38:
#line 202 "parser.y++"
           {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 2250 "parser.cpp"
    break;

  case 39:
#line 203 "parser.y++"
            {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 2256 "parser.cpp"
    break;

  case 40:
#line 204 "parser.y++"
           {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 2262 "parser.cpp"
    break;

  case 41:
#line 205 "parser.y++"
          {(yyval.ptr)=makeleaf((yyvsp[0].str));}
#line 2268 "parser.cpp"
    break;

  case 42:
#line 209 "parser.y++"
                                  {
        cout<<"enter into class body\n";
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Class_Body",v);
    }
#line 2281 "parser.cpp"
    break;

  case 43:
#line 220 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2287 "parser.cpp"
    break;

  case 44:
#line 221 "parser.y++"
                                                {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Class_Body_Declarations",v);
    }
#line 2298 "parser.cpp"
    break;

  case 45:
#line 230 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2304 "parser.cpp"
    break;

  case 46:
#line 231 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2310 "parser.cpp"
    break;

  case 47:
#line 232 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2316 "parser.cpp"
    break;

  case 48:
#line 236 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2322 "parser.cpp"
    break;

  case 49:
#line 237 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2328 "parser.cpp"
    break;

  case 50:
#line 241 "parser.y++"
                                                         {
        vector<data> v;
        cout << "fielddeclaration\n";
        insertAttr(v,(yyvsp[-3].ptr),"",1);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,";",0);
        cout << "fielddeclaration2\n";
        (yyval.ptr) = makenode("Field_Declaration",v);
    }
#line 2343 "parser.cpp"
    break;

  case 51:
#line 251 "parser.y++"
                                               {
        vector<data> v;
        cout << "fielddeclaration\n";
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,";",0);
        cout << "fielddeclaration2\n";
        (yyval.ptr) = makenode("Field_Declaration",v);
    }
#line 2357 "parser.cpp"
    break;

  case 52:
#line 264 "parser.y++"
                                           {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr)=makenode("variable_declarator_list",v);
        }
#line 2369 "parser.cpp"
    break;

  case 53:
#line 271 "parser.y++"
                                                                      {
        vector<data> v;
        insertAttr(v,(yyvsp[-4].ptr),"",1);
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Variable_Declarator_List",v);
    }
#line 2383 "parser.cpp"
    break;

  case 54:
#line 283 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2389 "parser.cpp"
    break;

  case 55:
#line 284 "parser.y++"
                              {
        vector<data> v;
        insertAttr(v,NULL,"=",0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Variable_Declarator",v);
    }
#line 2400 "parser.cpp"
    break;

  case 56:
#line 292 "parser.y++"
                             {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_declaration",v);
    }
#line 2411 "parser.cpp"
    break;

  case 57:
#line 300 "parser.y++"
                                             {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);
    }
#line 2423 "parser.cpp"
    break;

  case 58:
#line 307 "parser.y++"
                                   {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Header",v);
    }
#line 2434 "parser.cpp"
    break;

  case 59:
#line 313 "parser.y++"
                                    {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Headery",v);
    }
#line 2446 "parser.cpp"
    break;

  case 60:
#line 320 "parser.y++"
                          {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Method_Headery",v);
    }
#line 2457 "parser.cpp"
    break;

  case 61:
#line 330 "parser.y++"
                                                   {
        vector<data> v;
        insertAttr(v,(yyvsp[-4].ptr),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Methdod_declarator",v);
    }
#line 2471 "parser.cpp"
    break;

  case 62:
#line 342 "parser.y++"
                {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2479 "parser.cpp"
    break;

  case 63:
#line 345 "parser.y++"
                                 {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,"[",0);
        insertAttr(v,NULL,"]",0);
        (yyval.ptr) = makenode("variableDeclaratorID",v);
    }
#line 2491 "parser.cpp"
    break;

  case 64:
#line 356 "parser.y++"
                 {cout << "variableinti\n"; (yyval.ptr)=(yyvsp[0].ptr);}
#line 2497 "parser.cpp"
    break;

  case 65:
#line 357 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2503 "parser.cpp"
    break;

  case 66:
#line 362 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2509 "parser.cpp"
    break;

  case 67:
#line 363 "parser.y++"
                          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2515 "parser.cpp"
    break;

  case 68:
#line 367 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2521 "parser.cpp"
    break;

  case 69:
#line 368 "parser.y++"
           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2527 "parser.cpp"
    break;

  case 70:
#line 372 "parser.y++"
                      {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2535 "parser.cpp"
    break;

  case 71:
#line 375 "parser.y++"
                                              {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,",",0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Formal_Parameter_list",v);
    }
#line 2547 "parser.cpp"
    break;

  case 72:
#line 386 "parser.y++"
                                         {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Formal_Parameter",v);
    }
#line 2558 "parser.cpp"
    break;

  case 73:
#line 396 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2564 "parser.cpp"
    break;

  case 74:
#line 397 "parser.y++"
          {(yyval.ptr)=makeleaf(";");}
#line 2570 "parser.cpp"
    break;

  case 75:
#line 401 "parser.y++"
                   {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-1].str)),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("StaticInitilizer",v);
    }
#line 2581 "parser.cpp"
    break;

  case 76:
#line 410 "parser.y++"
                                                      {
        vector<data> v;
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
        (yyval.ptr) = makenode("Constructor_declaration",v);
    }
#line 2593 "parser.cpp"
    break;

  case 77:
#line 420 "parser.y++"
                                              {
        vector<data> v;
        insertAttr(v,(yyvsp[-3].ptr),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,")",0);
        (yyval.ptr) = makenode("Constructor_declarator",v);
    }
#line 2606 "parser.cpp"
    break;

  case 78:
#line 431 "parser.y++"
                                                            {
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Constructor_body",v);
    }
#line 2619 "parser.cpp"
    break;

  case 79:
#line 439 "parser.y++"
                              {
        vector<data> v;
        insertAttr(v,NULL,"{",0);
        insertAttr(v,(yyvsp[-1].ptr),"",1);
        insertAttr(v,NULL,"}",0);
        (yyval.ptr) = makenode("Constructor_body",v);
    }
#line 2631 "parser.cpp"
    break;

  case 80:
#line 449 "parser.y++"
                                     {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("ExplicitConstructorInvocation",v);
    }
#line 2645 "parser.cpp"
    break;

  case 81:
#line 458 "parser.y++"
                                      {
        vector<data> v;
        insertAttr(v,makeleaf((yyvsp[-4].str)),"",1);
        insertAttr(v,NULL,"(",0);
        insertAttr(v,(yyvsp[-2].ptr),"",1);
        insertAttr(v,NULL,")",0);
        insertAttr(v,NULL,";",0);
        (yyval.ptr) = makenode("ExplicitConstructorInvocation",v);
    }
#line 2659 "parser.cpp"
    break;

  case 82:
#line 470 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2665 "parser.cpp"
    break;

  case 83:
#line 471 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2671 "parser.cpp"
    break;

  case 84:
#line 476 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2677 "parser.cpp"
    break;

  case 85:
#line 477 "parser.y++"
          {(yyval.ptr)=makeleaf(",");}
#line 2683 "parser.cpp"
    break;

  case 86:
#line 481 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2689 "parser.cpp"
    break;

  case 87:
#line 482 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2695 "parser.cpp"
    break;

  case 88:
#line 488 "parser.y++"
                                          {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "}", 0);
		(yyval.ptr) = makenode("ArrayInitializer", v);
    }
#line 2708 "parser.cpp"
    break;

  case 89:
#line 496 "parser.y++"
                  {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "}", 0);
		(yyval.ptr) = makenode("ArrayInitializer", v);
    }
#line 2720 "parser.cpp"
    break;

  case 90:
#line 506 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2726 "parser.cpp"
    break;

  case 91:
#line 507 "parser.y++"
                                                      {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ",", 0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("VariableInitializerList", v);
    }
#line 2738 "parser.cpp"
    break;

  case 92:
#line 520 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v, NULL, "{", 0);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "}", 0);
		(yyval.ptr) = makenode("Block", v);
    }
#line 2750 "parser.cpp"
    break;

  case 93:
#line 530 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 2756 "parser.cpp"
    break;

  case 94:
#line 531 "parser.y++"
                                    {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("BlockStatements", v);
    }
#line 2767 "parser.cpp"
    break;

  case 95:
#line 540 "parser.y++"
                                  {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("BlockStatement", v);
    }
#line 2778 "parser.cpp"
    break;

  case 96:
#line 546 "parser.y++"
                       {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2784 "parser.cpp"
    break;

  case 97:
#line 547 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2790 "parser.cpp"
    break;

  case 98:
#line 552 "parser.y++"
                                         {
        vector<data>v;
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LocalVariableDeclaration", v);
    }
#line 2801 "parser.cpp"
    break;

  case 99:
#line 562 "parser.y++"
                                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2807 "parser.cpp"
    break;

  case 100:
#line 563 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2813 "parser.cpp"
    break;

  case 101:
#line 564 "parser.y++"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2819 "parser.cpp"
    break;

  case 102:
#line 565 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2825 "parser.cpp"
    break;

  case 103:
#line 566 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2831 "parser.cpp"
    break;

  case 104:
#line 567 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2837 "parser.cpp"
    break;

  case 105:
#line 571 "parser.y++"
                                         {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2843 "parser.cpp"
    break;

  case 106:
#line 572 "parser.y++"
                              {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2849 "parser.cpp"
    break;

  case 107:
#line 573 "parser.y++"
                                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2855 "parser.cpp"
    break;

  case 108:
#line 574 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2861 "parser.cpp"
    break;

  case 109:
#line 575 "parser.y++"
                          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2867 "parser.cpp"
    break;

  case 110:
#line 579 "parser.y++"
          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2873 "parser.cpp"
    break;

  case 111:
#line 580 "parser.y++"
        {(yyval.ptr)=makeleaf(";");}
#line 2879 "parser.cpp"
    break;

  case 112:
#line 581 "parser.y++"
                        {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2885 "parser.cpp"
    break;

  case 113:
#line 582 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2891 "parser.cpp"
    break;

  case 114:
#line 583 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2897 "parser.cpp"
    break;

  case 115:
#line 584 "parser.y++"
                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2903 "parser.cpp"
    break;

  case 116:
#line 585 "parser.y++"
                          {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2909 "parser.cpp"
    break;

  case 117:
#line 586 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2915 "parser.cpp"
    break;

  case 118:
#line 587 "parser.y++"
                   {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2921 "parser.cpp"
    break;

  case 119:
#line 591 "parser.y++"
                             {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LabeledStatement", v);
    }
#line 2933 "parser.cpp"
    break;

  case 120:
#line 601 "parser.y++"
                                      {
        vector<data>v;
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("LabeledStatementNoShortIf", v);
    }
#line 2945 "parser.cpp"
    break;

  case 121:
#line 611 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ExpressionStatement", v);
    }
#line 2956 "parser.cpp"
    break;

  case 122:
#line 620 "parser.y++"
               {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2962 "parser.cpp"
    break;

  case 123:
#line 621 "parser.y++"
                           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2968 "parser.cpp"
    break;

  case 124:
#line 622 "parser.y++"
                           {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2974 "parser.cpp"
    break;

  case 125:
#line 623 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2980 "parser.cpp"
    break;

  case 126:
#line 624 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2986 "parser.cpp"
    break;

  case 127:
#line 625 "parser.y++"
                     {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2992 "parser.cpp"
    break;

  case 128:
#line 626 "parser.y++"
                                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 2998 "parser.cpp"
    break;

  case 129:
#line 630 "parser.y++"
                                    {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-4].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("IfThenStatement", v);
    }
#line 3012 "parser.cpp"
    break;

  case 130:
#line 642 "parser.y++"
                                                            {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-6].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("IfThenElseStatement", v);
    }
#line 3028 "parser.cpp"
    break;

  case 131:
#line 656 "parser.y++"
                                                                     {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-6].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("IfThenElseStatementNoShortIf", v);
    }
#line 3044 "parser.cpp"
    break;

  case 132:
#line 689 "parser.y++"
                                        {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-4].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("WhileStatement", v);
    }
#line 3058 "parser.cpp"
    break;

  case 133:
#line 701 "parser.y++"
                                                {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-4].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("WhileStatementNoShortIf", v);
    }
#line 3072 "parser.cpp"
    break;

  case 134:
#line 713 "parser.y++"
                              {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement", v);
    }
#line 3083 "parser.cpp"
    break;

  case 135:
#line 719 "parser.y++"
                                 {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement", v);
    }
#line 3094 "parser.cpp"
    break;

  case 136:
#line 728 "parser.y++"
                                       {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement_no_short_if", v);
    }
#line 3105 "parser.cpp"
    break;

  case 137:
#line 734 "parser.y++"
                                          {
        vector<data> v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("For_statement_no_short_if", v);
    }
#line 3116 "parser.cpp"
    break;

  case 138:
#line 743 "parser.y++"
                                                          {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-7].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-5].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("Basic_For_Header", v);
    }
#line 3133 "parser.cpp"
    break;

  case 139:
#line 757 "parser.y++"
                                                          {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("Enhanced_For_Header", v);
    }
#line 3148 "parser.cpp"
    break;

  case 140:
#line 769 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3154 "parser.cpp"
    break;

  case 141:
#line 770 "parser.y++"
              {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3160 "parser.cpp"
    break;

  case 142:
#line 774 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3166 "parser.cpp"
    break;

  case 143:
#line 775 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3172 "parser.cpp"
    break;

  case 144:
#line 779 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3178 "parser.cpp"
    break;

  case 145:
#line 780 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3184 "parser.cpp"
    break;

  case 146:
#line 784 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3190 "parser.cpp"
    break;

  case 147:
#line 785 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3196 "parser.cpp"
    break;

  case 148:
#line 789 "parser.y++"
                            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3202 "parser.cpp"
    break;

  case 149:
#line 793 "parser.y++"
                        {
		(yyval.ptr) = (yyvsp[0].ptr);
    }
#line 3210 "parser.cpp"
    break;

  case 150:
#line 796 "parser.y++"
                                                    {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ",", 0);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("StatementExpressionList2", v);
    }
#line 3222 "parser.cpp"
    break;

  case 151:
#line 807 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("BreakStatement", v);
    }
#line 3234 "parser.cpp"
    break;

  case 152:
#line 814 "parser.y++"
              {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("BreakStatement", v);
    }
#line 3245 "parser.cpp"
    break;

  case 153:
#line 823 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("YieldStatement", v);
    }
#line 3257 "parser.cpp"
    break;

  case 154:
#line 833 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ContinueStatement", v);
    }
#line 3269 "parser.cpp"
    break;

  case 155:
#line 840 "parser.y++"
                 {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ContinueStatement", v);
    }
#line 3280 "parser.cpp"
    break;

  case 156:
#line 849 "parser.y++"
                           {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ReturnStatement", v);
    }
#line 3292 "parser.cpp"
    break;

  case 157:
#line 859 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ";", 0);
		(yyval.ptr) = makenode("ThrowStatement", v);
    }
#line 3304 "parser.cpp"
    break;

  case 158:
#line 869 "parser.y++"
                                          {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-4].str)), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("SynchronizedStatement", v);
    }
#line 3318 "parser.cpp"
    break;

  case 159:
#line 892 "parser.y++"
                      {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3324 "parser.cpp"
    break;

  case 160:
#line 893 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3330 "parser.cpp"
    break;

  case 161:
#line 896 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3336 "parser.cpp"
    break;

  case 162:
#line 897 "parser.y++"
          {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3342 "parser.cpp"
    break;

  case 163:
#line 898 "parser.y++"
                       {
        vector<data>v;
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("PrimaryNoNewArray", v);
    }
#line 3354 "parser.cpp"
    break;

  case 164:
#line 905 "parser.y++"
                                    {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3360 "parser.cpp"
    break;

  case 165:
#line 906 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr) ;}
#line 3366 "parser.cpp"
    break;

  case 166:
#line 907 "parser.y++"
                 {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3372 "parser.cpp"
    break;

  case 167:
#line 908 "parser.y++"
                      {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3378 "parser.cpp"
    break;

  case 168:
#line 913 "parser.y++"
                                                {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3384 "parser.cpp"
    break;

  case 169:
#line 914 "parser.y++"
                                                        {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassInstanceCreationExpression", v);
    }
#line 3396 "parser.cpp"
    break;

  case 170:
#line 921 "parser.y++"
                                                           {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassInstanceCreationExpression", v);
    }
#line 3408 "parser.cpp"
    break;

  case 171:
#line 930 "parser.y++"
                                                                            {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, (yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, "(", 1);
        insertAttr(v, (yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 1);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnqualifiedClassInstanceCreationExpression", v);
    }
#line 3423 "parser.cpp"
    break;

  case 172:
#line 943 "parser.y++"
                                                                       {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassOrInterfaceTypeToInstantiate", v);
    }
#line 3435 "parser.cpp"
    break;

  case 173:
#line 953 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3441 "parser.cpp"
    break;

  case 174:
#line 954 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3447 "parser.cpp"
    break;

  case 175:
#line 958 "parser.y++"
             {(yyval.ptr)=NULL;}
#line 3453 "parser.cpp"
    break;

  case 176:
#line 959 "parser.y++"
                                                    {
        vector<data>v;
        insertAttr(v,NULL,".",0);
        insertAttr(v, (yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ClassOrInterfaceTypeToInstant", v);
    }
#line 3465 "parser.cpp"
    break;

  case 177:
#line 969 "parser.y++"
           {
        vector<data>v;
        insertAttr(v, NULL, "<", 0);
        insertAttr(v, NULL, ">", 0);
		(yyval.ptr) = makenode("TypeArgumentsOrDiamond", v);
    }
#line 3476 "parser.cpp"
    break;

  case 178:
#line 978 "parser.y++"
                           {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v, (yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("FieldAccess", v);
    }
#line 3488 "parser.cpp"
    break;

  case 179:
#line 985 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-2].str)), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("FieldAccess", v);
    }
#line 3500 "parser.cpp"
    break;

  case 180:
#line 995 "parser.y++"
                             {
        vector<data>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("ArrayAccess", v);
    }
#line 3513 "parser.cpp"
    break;

  case 181:
#line 1003 "parser.y++"
                                         {
        vector<data>v;
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("ArrayAccess", v);
    }
#line 3526 "parser.cpp"
    break;

  case 182:
#line 1015 "parser.y++"
                                {
        vector<data>v;
        insertAttr(v, (yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
    }
#line 3539 "parser.cpp"
    break;

  case 183:
#line 1023 "parser.y++"
                                                  {
        vector<data>v;
        insertAttr(v, (yyvsp[-5].ptr), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
    }
#line 3554 "parser.cpp"
    break;

  case 184:
#line 1033 "parser.y++"
                                                {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-5].str)), "", 1);
        insertAttr(v, NULL, ".", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
		(yyval.ptr) = makenode("MethodInvocation", v);
    }
#line 3569 "parser.cpp"
    break;

  case 185:
#line 1046 "parser.y++"
                 {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3575 "parser.cpp"
    break;

  case 186:
#line 1047 "parser.y++"
                                 {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, ",", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArgumentList", v);
    }
#line 3587 "parser.cpp"
    break;

  case 187:
#line 1056 "parser.y++"
                                      {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-3].str)), "", 1);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArrayCreationExpression", v);
    }
#line 3600 "parser.cpp"
    break;

  case 188:
#line 1064 "parser.y++"
                                             {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-3].str)), "", 1);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ArrayCreationExpression", v);
    }
#line 3613 "parser.cpp"
    break;

  case 189:
#line 1075 "parser.y++"
            {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3619 "parser.cpp"
    break;

  case 190:
#line 1076 "parser.y++"
                     {
        vector<data>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("DimExprs", v);
    }
#line 3630 "parser.cpp"
    break;

  case 191:
#line 1086 "parser.y++"
                        {
        vector<data>v;
        insertAttr(v, NULL, "[", 0);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, NULL, "]", 0);
		(yyval.ptr) = makenode("DimExpr", v);
    }
#line 3642 "parser.cpp"
    break;

  case 192:
#line 1096 "parser.y++"
                          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3648 "parser.cpp"
    break;

  case 193:
#line 1101 "parser.y++"
                {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3654 "parser.cpp"
    break;

  case 194:
#line 1102 "parser.y++"
                           {cout << "cond_expr\n"; (yyval.ptr) = (yyvsp[0].ptr);}
#line 3660 "parser.cpp"
    break;

  case 195:
#line 1106 "parser.y++"
                                                          {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("Assignment", v);
    }
#line 3672 "parser.cpp"
    break;

  case 196:
#line 1116 "parser.y++"
          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3678 "parser.cpp"
    break;

  case 197:
#line 1117 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3684 "parser.cpp"
    break;

  case 198:
#line 1118 "parser.y++"
                {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3690 "parser.cpp"
    break;

  case 199:
#line 1122 "parser.y++"
        {(yyval.ptr) = makeleaf("=");}
#line 3696 "parser.cpp"
    break;

  case 200:
#line 1123 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3702 "parser.cpp"
    break;

  case 201:
#line 1124 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3708 "parser.cpp"
    break;

  case 202:
#line 1125 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3714 "parser.cpp"
    break;

  case 203:
#line 1126 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3720 "parser.cpp"
    break;

  case 204:
#line 1127 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3726 "parser.cpp"
    break;

  case 205:
#line 1128 "parser.y++"
                {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3732 "parser.cpp"
    break;

  case 206:
#line 1129 "parser.y++"
                 {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3738 "parser.cpp"
    break;

  case 207:
#line 1130 "parser.y++"
                          {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3744 "parser.cpp"
    break;

  case 208:
#line 1131 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3750 "parser.cpp"
    break;

  case 209:
#line 1132 "parser.y++"
               {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3756 "parser.cpp"
    break;

  case 210:
#line 1133 "parser.y++"
              {(yyval.ptr) = makeleaf((yyvsp[0].str));}
#line 3762 "parser.cpp"
    break;

  case 211:
#line 1137 "parser.y++"
                                                                      {
        vector<data>v;
        insertAttr(v,(yyvsp[-4].ptr), "", 1);
        insertAttr(v, NULL, "?", 0);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ":", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ConditionalExpression2", v);
    }
#line 3776 "parser.cpp"
    break;

  case 212:
#line 1146 "parser.y++"
                             {(yyval.ptr)=(yyvsp[0].ptr);}
#line 3782 "parser.cpp"
    break;

  case 213:
#line 1151 "parser.y++"
                                                            {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ConditionalOrExpression", v);
    }
#line 3794 "parser.cpp"
    break;

  case 214:
#line 1158 "parser.y++"
                              { (yyval.ptr) = (yyvsp[0].ptr) ; }
#line 3800 "parser.cpp"
    break;

  case 215:
#line 1161 "parser.y++"
                                                           {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ConditionalAndExpression", v);
    }
#line 3812 "parser.cpp"
    break;

  case 216:
#line 1168 "parser.y++"
                           { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 3818 "parser.cpp"
    break;

  case 217:
#line 1172 "parser.y++"
                                                     {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "|", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("InclusiveOrExpression", v);
    }
#line 3830 "parser.cpp"
    break;

  case 218:
#line 1179 "parser.y++"
                           {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3836 "parser.cpp"
    break;

  case 219:
#line 1182 "parser.y++"
                                             {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "^", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ExclusiveOrExpression", v);
    }
#line 3848 "parser.cpp"
    break;

  case 220:
#line 1189 "parser.y++"
                   {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3854 "parser.cpp"
    break;

  case 221:
#line 1193 "parser.y++"
                                          {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, "&", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AndExpression", v);
    }
#line 3866 "parser.cpp"
    break;

  case 222:
#line 1200 "parser.y++"
                        {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3872 "parser.cpp"
    break;

  case 223:
#line 1204 "parser.y++"
                                                   {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("EqualityExpression", v);
    }
#line 3884 "parser.cpp"
    break;

  case 224:
#line 1211 "parser.y++"
                                                   {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("EqualityExpression", v);
    }
#line 3896 "parser.cpp"
    break;

  case 225:
#line 1218 "parser.y++"
                          {(yyval.ptr) = (yyvsp[0].ptr) ;}
#line 3902 "parser.cpp"
    break;

  case 226:
#line 1222 "parser.y++"
                                               {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "<", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);
    }
#line 3914 "parser.cpp"
    break;

  case 227:
#line 1229 "parser.y++"
                                               {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "<", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);
    }
#line 3926 "parser.cpp"
    break;

  case 228:
#line 1236 "parser.y++"
                                                 {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);
    }
#line 3938 "parser.cpp"
    break;

  case 229:
#line 1243 "parser.y++"
                                                 {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("RelationalExpression", v);
    }
#line 3950 "parser.cpp"
    break;

  case 230:
#line 1250 "parser.y++"
                     {(yyval.ptr) = (yyvsp[0].ptr);}
#line 3956 "parser.cpp"
    break;

  case 231:
#line 1255 "parser.y++"
                                                {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);
    }
#line 3968 "parser.cpp"
    break;

  case 232:
#line 1262 "parser.y++"
                                                 {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);
    }
#line 3980 "parser.cpp"
    break;

  case 233:
#line 1269 "parser.y++"
                                                       {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("ShiftExpression", v);
    }
#line 3992 "parser.cpp"
    break;

  case 234:
#line 1276 "parser.y++"
                        {(yyval.ptr)= (yyvsp[0].ptr);}
#line 3998 "parser.cpp"
    break;

  case 235:
#line 1280 "parser.y++"
                                                      {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "+", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AdditiveExpression", v);
    }
#line 4010 "parser.cpp"
    break;

  case 236:
#line 1287 "parser.y++"
                                                      {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "-", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("AdditiveExpression", v);
    }
#line 4022 "parser.cpp"
    break;

  case 237:
#line 1294 "parser.y++"
                              {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4028 "parser.cpp"
    break;

  case 238:
#line 1299 "parser.y++"
                                                  {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "*", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);
    }
#line 4040 "parser.cpp"
    break;

  case 239:
#line 1306 "parser.y++"
                                                  {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "/", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);
    }
#line 4052 "parser.cpp"
    break;

  case 240:
#line 1313 "parser.y++"
                                                  {
        vector<data>v;
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v,NULL, "%", 1);
        insertAttr(v,(yyvsp[0].ptr),"",1);
		(yyval.ptr) = makenode("MultiplicativeExpression", v);
    }
#line 4064 "parser.cpp"
    break;

  case 241:
#line 1320 "parser.y++"
                     {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4070 "parser.cpp"
    break;

  case 242:
#line 1325 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4076 "parser.cpp"
    break;

  case 243:
#line 1326 "parser.y++"
                            {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4082 "parser.cpp"
    break;

  case 244:
#line 1327 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, "+", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpression", v);
    }
#line 4093 "parser.cpp"
    break;

  case 245:
#line 1333 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, "-", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpression", v);
    }
#line 4104 "parser.cpp"
    break;

  case 246:
#line 1339 "parser.y++"
                                 {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4110 "parser.cpp"
    break;

  case 247:
#line 1343 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("PreIncrementExpression", v);
    }
#line 4121 "parser.cpp"
    break;

  case 248:
#line 1352 "parser.y++"
                            {
        vector<data>v;
        insertAttr(v, makeleaf((yyvsp[-1].str)), "", 1);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("PreDecrementExpression", v);
    }
#line 4132 "parser.cpp"
    break;

  case 249:
#line 1361 "parser.y++"
                       {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4138 "parser.cpp"
    break;

  case 250:
#line 1362 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, "~", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpressionNotPlusMinus", v);
    }
#line 4149 "parser.cpp"
    break;

  case 251:
#line 1368 "parser.y++"
                         {
        vector<data>v;
        insertAttr(v, NULL, "!", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("UnaryExpressionNotPlusMinus", v);
    }
#line 4160 "parser.cpp"
    break;

  case 252:
#line 1374 "parser.y++"
                    {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4166 "parser.cpp"
    break;

  case 253:
#line 1378 "parser.y++"
             {cout<<"postfix\n"; (yyval.ptr) = (yyvsp[0].ptr);}
#line 4172 "parser.cpp"
    break;

  case 254:
#line 1379 "parser.y++"
          {(yyval.ptr) = (yyvsp[0].ptr);}
#line 4178 "parser.cpp"
    break;

  case 255:
#line 1380 "parser.y++"
                             { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 4184 "parser.cpp"
    break;

  case 256:
#line 1381 "parser.y++"
                             { (yyval.ptr) = (yyvsp[0].ptr) ;}
#line 4190 "parser.cpp"
    break;

  case 257:
#line 1385 "parser.y++"
                              {
        vector<data>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.ptr) = makenode("PostIncrementExpression", v);
    }
#line 4201 "parser.cpp"
    break;

  case 258:
#line 1394 "parser.y++"
                              {
        vector<data>v;
        insertAttr(v,(yyvsp[-1].ptr), "", 1);
        insertAttr(v, makeleaf((yyvsp[0].str)), "", 1);
		(yyval.ptr) = makenode("PostDecrementExpression", v);
    }
#line 4212 "parser.cpp"
    break;

  case 259:
#line 1403 "parser.y++"
                                                   {
        vector<data>v;
        insertAttr(v, NULL, "(", 0);
        insertAttr(v,(yyvsp[-3].ptr), "", 1);
        insertAttr(v,(yyvsp[-2].ptr), "", 1);
        insertAttr(v, NULL, ")", 0);
        insertAttr(v,(yyvsp[0].ptr), "", 1);
		(yyval.ptr) = makenode("CastExpression", v);
    }
#line 4226 "parser.cpp"
    break;


#line 4230 "parser.cpp"

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
#line 1414 "parser.y++"




int main(){
    dotfile = fopen("AST.dot", "w");
	
	if(dotfile == NULL){
		cout<<"cannot open the dot file AST.dot"<<"\nCompilation terminated\n";
		return -1;
	}

	beginAST();
    yyparse();
	endAST();

    return 0;
}

void yyerror(char const* s){
    cout << "Error: " << s << " in Line no: " << line << endl;
    return;
}
