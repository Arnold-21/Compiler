/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lang.y"

#include <stdio.h>
#include <stdlib.h>

#define YYDEBUG 1

#line 78 "lang.tab.c"

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

#include "lang.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ARR = 3,                        /* ARR  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_BOOL = 5,                       /* BOOL  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_PRINT = 11,                     /* PRINT  */
  YYSYMBOL_READINT = 12,                   /* READINT  */
  YYSYMBOL_READSTRING = 13,                /* READSTRING  */
  YYSYMBOL_SET = 14,                       /* SET  */
  YYSYMBOL_GET = 15,                       /* GET  */
  YYSYMBOL_BOOLCONST = 16,                 /* BOOLCONST  */
  YYSYMBOL_CHARCONST = 17,                 /* CHARCONST  */
  YYSYMBOL_STRINGCONST = 18,               /* STRINGCONST  */
  YYSYMBOL_IDENTIFIER = 19,                /* IDENTIFIER  */
  YYSYMBOL_INTCONST = 20,                  /* INTCONST  */
  YYSYMBOL_PLUS = 21,                      /* PLUS  */
  YYSYMBOL_MINUS = 22,                     /* MINUS  */
  YYSYMBOL_TIMES = 23,                     /* TIMES  */
  YYSYMBOL_DIV = 24,                       /* DIV  */
  YYSYMBOL_MOD = 25,                       /* MOD  */
  YYSYMBOL_EQ = 26,                        /* EQ  */
  YYSYMBOL_BIGGER = 27,                    /* BIGGER  */
  YYSYMBOL_BIGGEREQ = 28,                  /* BIGGEREQ  */
  YYSYMBOL_LESS = 29,                      /* LESS  */
  YYSYMBOL_LESSEQ = 30,                    /* LESSEQ  */
  YYSYMBOL_EQQ = 31,                       /* EQQ  */
  YYSYMBOL_NEG = 32,                       /* NEG  */
  YYSYMBOL_AND = 33,                       /* AND  */
  YYSYMBOL_OR = 34,                        /* OR  */
  YYSYMBOL_SEMICOLON = 35,                 /* SEMICOLON  */
  YYSYMBOL_OPEN = 36,                      /* OPEN  */
  YYSYMBOL_CLOSE = 37,                     /* CLOSE  */
  YYSYMBOL_SOPEN = 38,                     /* SOPEN  */
  YYSYMBOL_SCLOSE = 39,                    /* SCLOSE  */
  YYSYMBOL_BRACKETOPEN = 40,               /* BRACKETOPEN  */
  YYSYMBOL_BRACKETCLOSE = 41,              /* BRACKETCLOSE  */
  YYSYMBOL_COMMA = 42,                     /* COMMA  */
  YYSYMBOL_QUOTE = 43,                     /* QUOTE  */
  YYSYMBOL_SIMPLEQUOTE = 44,               /* SIMPLEQUOTE  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_declaration = 47,               /* declaration  */
  YYSYMBOL_simpledeclaration = 48,         /* simpledeclaration  */
  YYSYMBOL_type = 49,                      /* type  */
  YYSYMBOL_identifierlist = 50,            /* identifierlist  */
  YYSYMBOL_expression = 51,                /* expression  */
  YYSYMBOL_simpleintexpression = 52,       /* simpleintexpression  */
  YYSYMBOL_intexpression = 53,             /* intexpression  */
  YYSYMBOL_simpleboolexpression = 54,      /* simpleboolexpression  */
  YYSYMBOL_boolexpression = 55,            /* boolexpression  */
  YYSYMBOL_charexpression = 56,            /* charexpression  */
  YYSYMBOL_simplestringexpression = 57,    /* simplestringexpression  */
  YYSYMBOL_stringexpression = 58,          /* stringexpression  */
  YYSYMBOL_arraydeclaration = 59,          /* arraydeclaration  */
  YYSYMBOL_simpleidentifierlist = 60,      /* simpleidentifierlist  */
  YYSYMBOL_statement = 61,                 /* statement  */
  YYSYMBOL_assignstatement = 62,           /* assignstatement  */
  YYSYMBOL_ifstatement = 63,               /* ifstatement  */
  YYSYMBOL_whilestatement = 64,            /* whilestatement  */
  YYSYMBOL_functionstatement = 65,         /* functionstatement  */
  YYSYMBOL_functionname = 66,              /* functionname  */
  YYSYMBOL_expressionlist = 67             /* expressionlist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ARR", "INT", "BOOL",
  "CHAR", "STRING", "IF", "ELSE", "WHILE", "PRINT", "READINT",
  "READSTRING", "SET", "GET", "BOOLCONST", "CHARCONST", "STRINGCONST",
  "IDENTIFIER", "INTCONST", "PLUS", "MINUS", "TIMES", "DIV", "MOD", "EQ",
  "BIGGER", "BIGGEREQ", "LESS", "LESSEQ", "EQQ", "NEG", "AND", "OR",
  "SEMICOLON", "OPEN", "CLOSE", "SOPEN", "SCLOSE", "BRACKETOPEN",
  "BRACKETCLOSE", "COMMA", "QUOTE", "SIMPLEQUOTE", "$accept", "program",
  "declaration", "simpledeclaration", "type", "identifierlist",
  "expression", "simpleintexpression", "intexpression",
  "simpleboolexpression", "boolexpression", "charexpression",
  "simplestringexpression", "stringexpression", "arraydeclaration",
  "simpleidentifierlist", "statement", "assignstatement", "ifstatement",
  "whilestatement", "functionstatement", "functionname", "expressionlist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-94)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-35)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     152,   -24,   -94,   -94,   -94,   -94,    32,   135,     3,    15,
      30,   183,   -94,    35,    52,   -94,   -94,   -94,   -94,   -94,
      76,   -94,    78,   135,   135,    79,    87,   152,    18,   -94,
     152,    90,   106,   106,    80,   135,   -94,   -94,   135,     4,
     -94,   101,    15,   -94,    77,   -94,    97,   -94,   116,   108,
     141,   140,    36,    99,   104,   -94,   -94,    12,    11,   -94,
     140,   -94,   -94,   130,   -94,   -94,   -94,   -94,   -94,   110,
     123,   111,   -94,   171,   -94,    64,   151,   150,    70,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,   106,
     106,   106,   153,   154,   174,    -1,   101,   -94,    15,   157,
     -94,   161,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,   106,   106,   106,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   135,   135,
      -1,   -94,    71,   -94,   -94,   -94,   173,     6,     6,     6,
       6,     6,   160,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   172,   175,   176,   177,   178,   179,   156,   -94,
     160,   162,   163,   164,   165,   -94,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   199,   -94,
     -94,   173,   180,   -94,   135,   181,   -94
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     7,     8,     9,    10,     0,    65,     0,     0,
       0,     0,     1,     0,     0,    77,    73,    74,    76,    75,
       0,     2,     0,    65,    65,     0,     0,     5,    11,     6,
       5,     0,     0,     0,     0,    65,    62,    63,    65,     0,
       3,     0,     0,     4,     0,    32,    20,    19,     0,     0,
      21,     0,    35,     0,     0,    52,    53,    20,     0,    66,
      15,    16,    17,    55,    18,    67,    61,    64,    72,    78,
       0,    12,    13,     0,    33,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    27,    28,    29,
      50,    51,    48,    49,    47,    46,    44,    45,    65,    65,
       0,    54,     0,    57,    79,    14,     0,     0,     0,     0,
       0,     0,    30,    31,    27,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    58,
       0,     0,     0,     0,     0,    25,    26,    22,    23,    24,
      42,    43,    40,    41,    39,    38,    36,    37,    68,    70,
      56,     0,     0,    60,    65,     0,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -17,   -94,   200,   -39,    27,   -42,   -30,   -10,
     -27,   -94,   -50,   -93,   -94,    29,   -23,   -94,   -94,   -94,
     187,   -94,   118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,     8,     9,    29,    69,    50,    51,    52,
      61,    62,    63,    64,    10,   159,    21,    22,    23,    24,
      25,    26,    70
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    37,   133,    72,    60,    53,    54,    76,    94,    60,
      40,    60,    66,    43,    11,    67,    76,    56,   131,    77,
      45,    55,    56,    57,    47,   100,    47,    45,    77,    56,
      57,    47,    12,   101,    28,   132,    48,   157,    27,    78,
      58,    68,    75,    48,    41,   -34,   -34,    75,    78,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   135,
      42,    59,   125,   126,   127,    30,    60,    89,    71,    90,
      91,    32,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    94,   100,    47,   152,   153,   154,    33,    56,
     131,    15,    16,    17,    18,    19,    45,    55,    56,    57,
      47,   112,    34,   113,   114,   155,   156,   160,   161,   162,
     163,   164,    48,    35,    38,    73,    58,    45,    55,    56,
      57,    47,    45,    39,    45,    46,    47,    46,    47,    44,
     -34,   -34,   -34,    48,   -34,    74,    92,    58,    48,   -34,
      48,    93,    49,    13,    75,    14,    15,    16,    17,    18,
      19,    95,    96,    98,    20,     1,     2,     3,     4,     5,
      97,   185,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   137,   138,   139,   140,   141,     2,     3,     4,
       5,    99,   158,   128,   129,   130,   136,   165,   181,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   182,   175,
     183,    31,   176,   177,   134,     0,   180,     0,   178,   179,
     184,    65,   186
};

static const yytype_int16 yycheck[] =
{
      23,    24,    95,    42,    34,    32,    33,    49,    58,    39,
      27,    41,    35,    30,    38,    38,    58,    18,    19,    49,
      16,    17,    18,    19,    20,    19,    20,    16,    58,    18,
      19,    20,     0,    75,    19,    36,    32,   130,    35,    49,
      36,    37,    36,    32,    26,    33,    34,    36,    58,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    98,
      42,    34,    89,    90,    91,    35,    96,    31,    41,    33,
      34,    36,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   132,    19,    20,   112,   113,   114,    36,    18,
      19,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    31,    26,    33,    34,   128,   129,   137,   138,   139,
     140,   141,    32,    35,    35,    38,    36,    16,    17,    18,
      19,    20,    16,    36,    16,    19,    20,    19,    20,    39,
      33,    34,    35,    32,    37,    19,    37,    36,    32,    42,
      32,    37,    36,     8,    36,    10,    11,    12,    13,    14,
      15,    21,    42,    42,    19,     3,     4,     5,     6,     7,
      37,   184,    21,    22,    23,    24,    25,    27,    28,    29,
      30,    31,    21,    22,    23,    24,    25,    27,    28,    29,
      30,    31,    21,    22,    23,    24,    25,     4,     5,     6,
       7,    20,    19,    40,    40,    21,    39,    37,    42,    37,
      37,    37,    37,    37,    37,    37,    37,    37,     9,    37,
     181,    11,    37,    37,    96,    -1,    37,    -1,    41,    41,
      40,    34,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    46,    47,    48,    49,
      59,    38,     0,     8,    10,    11,    12,    13,    14,    15,
      19,    61,    62,    63,    64,    65,    66,    35,    19,    50,
      35,    49,    36,    36,    26,    35,    61,    61,    35,    36,
      47,    26,    42,    47,    39,    16,    19,    20,    32,    36,
      52,    53,    54,    55,    55,    17,    18,    19,    36,    51,
      53,    55,    56,    57,    58,    65,    61,    61,    37,    51,
      67,    51,    50,    38,    19,    36,    52,    53,    54,    21,
      22,    23,    24,    25,    27,    28,    29,    30,    31,    31,
      33,    34,    37,    37,    57,    21,    42,    37,    42,    20,
      19,    52,    21,    22,    23,    24,    25,    27,    28,    29,
      30,    31,    31,    33,    34,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    55,    55,    55,    40,    40,
      21,    19,    36,    58,    67,    50,    39,    21,    22,    23,
      24,    25,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    55,    55,    55,    61,    61,    58,    19,    60,
      53,    53,    53,    53,    53,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    41,    41,
      37,    42,     9,    60,    40,    61,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    49,    49,    49,
      49,    50,    50,    50,    50,    51,    51,    51,    51,    52,
      52,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    57,    57,    58,    58,    58,    59,    60,
      60,    61,    61,    61,    61,    61,    62,    62,    63,    63,
      64,    65,    65,    66,    66,    66,    66,    66,    67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     3,     0,     2,     1,     1,     1,
       1,     1,     3,     3,     5,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     5,     5,     5,     3,     3,     3,
       3,     3,     1,     2,     1,     1,     5,     5,     5,     5,
       5,     5,     5,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     5,     3,     8,     1,
       3,     3,     2,     2,     3,     0,     3,     3,     7,    11,
       7,     4,     3,     1,     1,     1,     1,     1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: declaration statement  */
#line 58 "lang.y"
                                {printf("program -> declaration statement\n");}
#line 1256 "lang.tab.c"
    break;

  case 3: /* declaration: simpledeclaration SEMICOLON declaration  */
#line 59 "lang.y"
                                                      {printf("declaration -> simpledeclaration ; declaration\n");}
#line 1262 "lang.tab.c"
    break;

  case 4: /* declaration: arraydeclaration SEMICOLON declaration  */
#line 60 "lang.y"
                                                     {printf("declaration -> arraydeclaration ; declaration\n");}
#line 1268 "lang.tab.c"
    break;

  case 5: /* declaration: %empty  */
#line 61 "lang.y"
                {printf("declaration -> epsilon\n");}
#line 1274 "lang.tab.c"
    break;

  case 6: /* simpledeclaration: type identifierlist  */
#line 62 "lang.y"
                                        {printf("simpledeclaration -> type identifierlist\n");}
#line 1280 "lang.tab.c"
    break;

  case 7: /* type: INT  */
#line 63 "lang.y"
           {printf("type -> int\n");}
#line 1286 "lang.tab.c"
    break;

  case 8: /* type: BOOL  */
#line 64 "lang.y"
            {printf("type -> bool\n");}
#line 1292 "lang.tab.c"
    break;

  case 9: /* type: CHAR  */
#line 65 "lang.y"
            {printf("type -> char\n");}
#line 1298 "lang.tab.c"
    break;

  case 10: /* type: STRING  */
#line 66 "lang.y"
              {printf("type -> string\n");}
#line 1304 "lang.tab.c"
    break;

  case 11: /* identifierlist: IDENTIFIER  */
#line 67 "lang.y"
                            {printf("identifierlist -> IDENTIFIER\n");}
#line 1310 "lang.tab.c"
    break;

  case 12: /* identifierlist: IDENTIFIER EQ expression  */
#line 68 "lang.y"
                                           {printf("identifierlist -> IDENTIFIER = expression\n");}
#line 1316 "lang.tab.c"
    break;

  case 13: /* identifierlist: IDENTIFIER COMMA identifierlist  */
#line 69 "lang.y"
                                                  {printf("identifierlist -> IDENTIFIER , identifierlist\n");}
#line 1322 "lang.tab.c"
    break;

  case 14: /* identifierlist: IDENTIFIER EQ expression COMMA identifierlist  */
#line 70 "lang.y"
                                                                {printf("identifierlist -> IDENTIFIER = expression\n");}
#line 1328 "lang.tab.c"
    break;

  case 15: /* expression: intexpression  */
#line 71 "lang.y"
                           {printf("expression -> intexpression\n");}
#line 1334 "lang.tab.c"
    break;

  case 16: /* expression: boolexpression  */
#line 72 "lang.y"
                             {printf("expression -> boolexpression\n");}
#line 1340 "lang.tab.c"
    break;

  case 17: /* expression: charexpression  */
#line 73 "lang.y"
                             {printf("expression -> charexpression\n");}
#line 1346 "lang.tab.c"
    break;

  case 18: /* expression: stringexpression  */
#line 74 "lang.y"
                               {printf("expression -> stringexpression\n");}
#line 1352 "lang.tab.c"
    break;

  case 19: /* simpleintexpression: INTCONST  */
#line 75 "lang.y"
                               {printf("simpleintexpression -> INTCONST\n");}
#line 1358 "lang.tab.c"
    break;

  case 20: /* simpleintexpression: IDENTIFIER  */
#line 76 "lang.y"
                                  {printf("simpleintexpression -> IDENTIFIER\n");}
#line 1364 "lang.tab.c"
    break;

  case 21: /* intexpression: simpleintexpression  */
#line 77 "lang.y"
                                    {printf("intexpression -> simpleintexpression\n");}
#line 1370 "lang.tab.c"
    break;

  case 22: /* intexpression: OPEN simpleintexpression TIMES intexpression CLOSE  */
#line 78 "lang.y"
                                                                     {printf("intexpression -> ( simpleintexpression * intexpression )\n");}
#line 1376 "lang.tab.c"
    break;

  case 23: /* intexpression: OPEN simpleintexpression DIV intexpression CLOSE  */
#line 79 "lang.y"
                                                                   {printf("intexpression -> ( simpleintexpression / intexpression )\n");}
#line 1382 "lang.tab.c"
    break;

  case 24: /* intexpression: OPEN simpleintexpression MOD intexpression CLOSE  */
#line 80 "lang.y"
                                                                   {printf("intexpression -> ( simpleintexpression mod intexpression )\n");}
#line 1388 "lang.tab.c"
    break;

  case 25: /* intexpression: OPEN simpleintexpression PLUS intexpression CLOSE  */
#line 81 "lang.y"
                                                                    {printf("intexpression -> ( simpleintexpression + intexpression )\n");}
#line 1394 "lang.tab.c"
    break;

  case 26: /* intexpression: OPEN simpleintexpression MINUS intexpression CLOSE  */
#line 82 "lang.y"
                                                                     {printf("intexpression -> ( simpleintexpression - intexpression )\n");}
#line 1400 "lang.tab.c"
    break;

  case 27: /* intexpression: simpleintexpression TIMES intexpression  */
#line 83 "lang.y"
                                                          {printf("intexpression -> simpleintexpression * intexpression\n");}
#line 1406 "lang.tab.c"
    break;

  case 28: /* intexpression: simpleintexpression DIV intexpression  */
#line 84 "lang.y"
                                                        {printf("intexpression -> simpleintexpression / intexpression\n");}
#line 1412 "lang.tab.c"
    break;

  case 29: /* intexpression: simpleintexpression MOD intexpression  */
#line 85 "lang.y"
                                                        {printf("intexpression -> simpleintexpression mod intexpression\n");}
#line 1418 "lang.tab.c"
    break;

  case 30: /* intexpression: simpleintexpression PLUS intexpression  */
#line 86 "lang.y"
                                                         {printf("intexpression -> simpleintexpression + intexpression\n");}
#line 1424 "lang.tab.c"
    break;

  case 31: /* intexpression: simpleintexpression MINUS intexpression  */
#line 87 "lang.y"
                                                          {printf("intexpression -> simpleintexpression - intexpression\n");}
#line 1430 "lang.tab.c"
    break;

  case 32: /* simpleboolexpression: BOOLCONST  */
#line 88 "lang.y"
                                 {printf("simpleboolexpression -> BOOLCONST\n");}
#line 1436 "lang.tab.c"
    break;

  case 33: /* simpleboolexpression: NEG IDENTIFIER  */
#line 89 "lang.y"
                                         {printf("simpleboolexpression -> ! IDENTIFIER\n");}
#line 1442 "lang.tab.c"
    break;

  case 34: /* simpleboolexpression: IDENTIFIER  */
#line 90 "lang.y"
                                     {printf("simpleboolexpression -> IDENTIFIER\n");}
#line 1448 "lang.tab.c"
    break;

  case 35: /* boolexpression: simpleboolexpression  */
#line 91 "lang.y"
                                      {printf("boolexpression -> simpleboolexpression\n");}
#line 1454 "lang.tab.c"
    break;

  case 36: /* boolexpression: OPEN simpleboolexpression AND boolexpression CLOSE  */
#line 92 "lang.y"
                                                                     {printf("boolexpression -> ( simpleboolexpression && boolexpression )\n");}
#line 1460 "lang.tab.c"
    break;

  case 37: /* boolexpression: OPEN simpleboolexpression OR boolexpression CLOSE  */
#line 93 "lang.y"
                                                                    {printf("boolexpression -> ( simpleboolexpression || boolexpression )\n");}
#line 1466 "lang.tab.c"
    break;

  case 38: /* boolexpression: OPEN simpleboolexpression EQQ boolexpression CLOSE  */
#line 94 "lang.y"
                                                                     {printf("boolexpression -> ( simpleboolexpression == boolexpression )\n");}
#line 1472 "lang.tab.c"
    break;

  case 39: /* boolexpression: OPEN intexpression EQQ intexpression CLOSE  */
#line 95 "lang.y"
                                                             {printf("boolexpression -> ( intexpression == intexpression )\n");}
#line 1478 "lang.tab.c"
    break;

  case 40: /* boolexpression: OPEN intexpression LESS intexpression CLOSE  */
#line 96 "lang.y"
                                                              {printf("boolexpression -> ( intexpression < intexpression )\n");}
#line 1484 "lang.tab.c"
    break;

  case 41: /* boolexpression: OPEN intexpression LESSEQ intexpression CLOSE  */
#line 97 "lang.y"
                                                                {printf("boolexpression -> ( intexpression <= intexpression )\n");}
#line 1490 "lang.tab.c"
    break;

  case 42: /* boolexpression: OPEN intexpression BIGGER intexpression CLOSE  */
#line 98 "lang.y"
                                                                {printf("boolexpression -> ( intexpression > intexpression )\n");}
#line 1496 "lang.tab.c"
    break;

  case 43: /* boolexpression: OPEN intexpression BIGGEREQ intexpression CLOSE  */
#line 99 "lang.y"
                                                                  {printf("boolexpression -> ( intexpression >= intexpression )\n");}
#line 1502 "lang.tab.c"
    break;

  case 44: /* boolexpression: simpleboolexpression AND boolexpression  */
#line 100 "lang.y"
                                                          {printf("boolexpression -> simpleboolexpression && boolexpression\n");}
#line 1508 "lang.tab.c"
    break;

  case 45: /* boolexpression: simpleboolexpression OR boolexpression  */
#line 101 "lang.y"
                                                         {printf("boolexpression -> simpleboolexpression || boolexpression\n");}
#line 1514 "lang.tab.c"
    break;

  case 46: /* boolexpression: simpleboolexpression EQQ boolexpression  */
#line 102 "lang.y"
                                                          {printf("boolexpression -> simpleboolexpression == boolexpression\n");}
#line 1520 "lang.tab.c"
    break;

  case 47: /* boolexpression: intexpression EQQ intexpression  */
#line 103 "lang.y"
                                                  {printf("boolexpression -> intexpression == intexpression\n");}
#line 1526 "lang.tab.c"
    break;

  case 48: /* boolexpression: intexpression LESS intexpression  */
#line 104 "lang.y"
                                                   {printf("boolexpression -> intexpression < intexpression\n");}
#line 1532 "lang.tab.c"
    break;

  case 49: /* boolexpression: intexpression LESSEQ intexpression  */
#line 105 "lang.y"
                                                     {printf("boolexpression -> intexpression <= intexpression\n");}
#line 1538 "lang.tab.c"
    break;

  case 50: /* boolexpression: intexpression BIGGER intexpression  */
#line 106 "lang.y"
                                                     {printf("boolexpression -> intexpression > intexpression\n");}
#line 1544 "lang.tab.c"
    break;

  case 51: /* boolexpression: intexpression BIGGEREQ intexpression  */
#line 107 "lang.y"
                                                       {printf("boolexpression -> intexpression >= intexpression\n");}
#line 1550 "lang.tab.c"
    break;

  case 52: /* charexpression: CHARCONST  */
#line 108 "lang.y"
                           {printf("charexpression -> CHARCONST\n");}
#line 1556 "lang.tab.c"
    break;

  case 53: /* simplestringexpression: STRINGCONST  */
#line 109 "lang.y"
                                     {printf("simplestringexpression -> STRINGCONST\n");}
#line 1562 "lang.tab.c"
    break;

  case 54: /* simplestringexpression: IDENTIFIER  */
#line 110 "lang.y"
                                      {printf("simplestringexpression -> IDENTIFIER\n");}
#line 1568 "lang.tab.c"
    break;

  case 55: /* stringexpression: simplestringexpression  */
#line 111 "lang.y"
                                          {printf("stringexpression -> simplestringexpression\n");}
#line 1574 "lang.tab.c"
    break;

  case 56: /* stringexpression: OPEN simplestringexpression PLUS stringexpression CLOSE  */
#line 112 "lang.y"
                                                                           {printf("stringexpression -> ( simplestringexpression + stringexpression )\n");}
#line 1580 "lang.tab.c"
    break;

  case 57: /* stringexpression: simplestringexpression PLUS stringexpression  */
#line 113 "lang.y"
                                                                {printf("stringexpression -> simplestringexpression + stringexpression\n");}
#line 1586 "lang.tab.c"
    break;

  case 58: /* arraydeclaration: ARR SOPEN type SCLOSE SOPEN INTCONST SCLOSE simpleidentifierlist  */
#line 114 "lang.y"
                                                                                    {printf("arraydeclaration -> array [ type ] [ INTCONST ] simpleidentifierlist\n");}
#line 1592 "lang.tab.c"
    break;

  case 59: /* simpleidentifierlist: IDENTIFIER  */
#line 115 "lang.y"
                                  {printf("simpleidentifierlist -> IDENTIFIER\n");}
#line 1598 "lang.tab.c"
    break;

  case 60: /* simpleidentifierlist: IDENTIFIER COMMA simpleidentifierlist  */
#line 116 "lang.y"
                                                             {printf("simpleidentifierlist -> IDENTIFIER , simpleidentifierlist\n");}
#line 1604 "lang.tab.c"
    break;

  case 61: /* statement: assignstatement SEMICOLON statement  */
#line 117 "lang.y"
                                                {printf("statement -> assignstatement ; statement\n");}
#line 1610 "lang.tab.c"
    break;

  case 62: /* statement: ifstatement statement  */
#line 118 "lang.y"
                                    {printf("statement -> ifstatement statement\n");}
#line 1616 "lang.tab.c"
    break;

  case 63: /* statement: whilestatement statement  */
#line 119 "lang.y"
                                       {printf("statement -> whilestatement statement\n");}
#line 1622 "lang.tab.c"
    break;

  case 64: /* statement: functionstatement SEMICOLON statement  */
#line 120 "lang.y"
                                                    {printf("statement -> functionstatement ; statement\n");}
#line 1628 "lang.tab.c"
    break;

  case 65: /* statement: %empty  */
#line 121 "lang.y"
                {printf("statement -> epsilon\n");}
#line 1634 "lang.tab.c"
    break;

  case 66: /* assignstatement: IDENTIFIER EQ expression  */
#line 122 "lang.y"
                                           {printf("assignstatement -> IDENTIFIER = expression\n");}
#line 1640 "lang.tab.c"
    break;

  case 67: /* assignstatement: IDENTIFIER EQ functionstatement  */
#line 123 "lang.y"
                                                   {printf("assignstatement -> IDENTIFIER = functionstatement\n");}
#line 1646 "lang.tab.c"
    break;

  case 68: /* ifstatement: IF OPEN boolexpression CLOSE BRACKETOPEN statement BRACKETCLOSE  */
#line 124 "lang.y"
                                                                              {printf("ifstatement -> if ( boolexpression ) { statement }\n");}
#line 1652 "lang.tab.c"
    break;

  case 69: /* ifstatement: IF OPEN boolexpression CLOSE BRACKETOPEN statement BRACKETCLOSE ELSE BRACKETOPEN statement BRACKETCLOSE  */
#line 125 "lang.y"
                                                                                                                       {printf("ifstatement -> if ( boolexpression ) { statement } else { statement }\n");}
#line 1658 "lang.tab.c"
    break;

  case 70: /* whilestatement: WHILE OPEN boolexpression CLOSE BRACKETOPEN statement BRACKETCLOSE  */
#line 126 "lang.y"
                                                                                    {printf("whilestatement -> while ( boolexpression ) { statement }\n");}
#line 1664 "lang.tab.c"
    break;

  case 71: /* functionstatement: functionname OPEN expressionlist CLOSE  */
#line 127 "lang.y"
                                                           {printf("functionstatement -> functionname ( expressionlist )\n");}
#line 1670 "lang.tab.c"
    break;

  case 72: /* functionstatement: functionname OPEN CLOSE  */
#line 128 "lang.y"
                                              {printf("functionstatement -> functionname (  )\n");}
#line 1676 "lang.tab.c"
    break;

  case 73: /* functionname: READINT  */
#line 129 "lang.y"
                       {printf("functionname -> readInt\n");}
#line 1682 "lang.tab.c"
    break;

  case 74: /* functionname: READSTRING  */
#line 130 "lang.y"
                         {printf("functionname -> readString\n");}
#line 1688 "lang.tab.c"
    break;

  case 75: /* functionname: GET  */
#line 131 "lang.y"
                  {printf("functionname -> get\n");}
#line 1694 "lang.tab.c"
    break;

  case 76: /* functionname: SET  */
#line 132 "lang.y"
                  {printf("functionname -> set\n");}
#line 1700 "lang.tab.c"
    break;

  case 77: /* functionname: PRINT  */
#line 133 "lang.y"
                    {printf("functionname -> print\n");}
#line 1706 "lang.tab.c"
    break;

  case 78: /* expressionlist: expression  */
#line 134 "lang.y"
                            {printf("expressionlist -> expression\n");}
#line 1712 "lang.tab.c"
    break;

  case 79: /* expressionlist: expression COMMA expressionlist  */
#line 135 "lang.y"
                                                   {printf("expressionlist -> expression , expressionlist\n");}
#line 1718 "lang.tab.c"
    break;


#line 1722 "lang.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 137 "lang.y"

yyerror(char *s)
{	
	printf("%s\n",s);
}

extern FILE *yyin;

main(int argc, char **argv)
{
	if(argc>1) yyin =  fopen(argv[1],"r");
	if(!yyparse()) fprintf(stderr, "\tOK\n");
} 
