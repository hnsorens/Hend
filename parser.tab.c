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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>

#include "AST/AbstractSyntaxTree.c"

struct decl * code;


#line 81 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_EQUAL = 3,                      /* EQUAL  */
  YYSYMBOL_GREATER = 4,                    /* GREATER  */
  YYSYMBOL_LESS = 5,                       /* LESS  */
  YYSYMBOL_GREATER_EQUAL = 6,              /* GREATER_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 7,                 /* LESS_EQUAL  */
  YYSYMBOL_NOT_EQUAL = 8,                  /* NOT_EQUAL  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_POINTER = 10,                   /* POINTER  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_QUOTE = 14,                     /* QUOTE  */
  YYSYMBOL_TRUE_ = 15,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 16,                    /* FALSE_  */
  YYSYMBOL_CHARACTER = 17,                 /* CHARACTER  */
  YYSYMBOL_BOOLEAN = 18,                   /* BOOLEAN  */
  YYSYMBOL_ERROR = 19,                     /* ERROR  */
  YYSYMBOL_I1 = 20,                        /* I1  */
  YYSYMBOL_I2 = 21,                        /* I2  */
  YYSYMBOL_I4 = 22,                        /* I4  */
  YYSYMBOL_I8 = 23,                        /* I8  */
  YYSYMBOL_UI1 = 24,                       /* UI1  */
  YYSYMBOL_UI2 = 25,                       /* UI2  */
  YYSYMBOL_UI4 = 26,                       /* UI4  */
  YYSYMBOL_UI8 = 27,                       /* UI8  */
  YYSYMBOL_F4 = 28,                        /* F4  */
  YYSYMBOL_F8 = 29,                        /* F8  */
  YYSYMBOL_STRUCT = 30,                    /* STRUCT  */
  YYSYMBOL_MODULE = 31,                    /* MODULE  */
  YYSYMBOL_RETURN = 32,                    /* RETURN  */
  YYSYMBOL_EXTEND = 33,                    /* EXTEND  */
  YYSYMBOL_REQUIREMENT = 34,               /* REQUIREMENT  */
  YYSYMBOL_COMMA = 35,                     /* COMMA  */
  YYSYMBOL_CONSTRUCTOR = 36,               /* CONSTRUCTOR  */
  YYSYMBOL_VOID = 37,                      /* VOID  */
  YYSYMBOL_OBJECT = 38,                    /* OBJECT  */
  YYSYMBOL_INCLUDE = 39,                   /* INCLUDE  */
  YYSYMBOL_NUM = 40,                       /* NUM  */
  YYSYMBOL_IDENTIFIER = 41,                /* IDENTIFIER  */
  YYSYMBOL_PLUS = 42,                      /* PLUS  */
  YYSYMBOL_MINUS = 43,                     /* MINUS  */
  YYSYMBOL_TIMES = 44,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 45,                    /* DIVIDE  */
  YYSYMBOL_ASSIGN = 46,                    /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 47,                 /* SEMICOLON  */
  YYSYMBOL_FUNCTION = 48,                  /* FUNCTION  */
  YYSYMBOL_LPAREN = 49,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 50,                    /* RPAREN  */
  YYSYMBOL_LCBRACKET = 51,                 /* LCBRACKET  */
  YYSYMBOL_RCBRACKET = 52,                 /* RCBRACKET  */
  YYSYMBOL_PUBLIC = 53,                    /* PUBLIC  */
  YYSYMBOL_PRIVATE = 54,                   /* PRIVATE  */
  YYSYMBOL_LBRACKET = 55,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 56,                  /* RBRACKET  */
  YYSYMBOL_STRING_VALUE = 57,              /* STRING_VALUE  */
  YYSYMBOL_STRING = 58,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_declaration = 61,               /* declaration  */
  YYSYMBOL_function_decl = 62,             /* function_decl  */
  YYSYMBOL_param = 63,                     /* param  */
  YYSYMBOL_exp = 64,                       /* exp  */
  YYSYMBOL_decl = 65,                      /* decl  */
  YYSYMBOL_arguments = 66,                 /* arguments  */
  YYSYMBOL_type = 67,                      /* type  */
  YYSYMBOL_type_specifier = 68,            /* type_specifier  */
  YYSYMBOL_array_subscript = 69,           /* array_subscript  */
  YYSYMBOL_statement = 70,                 /* statement  */
  YYSYMBOL_if_statement = 71,              /* if_statement  */
  YYSYMBOL_else_if_statement = 72,         /* else_if_statement  */
  YYSYMBOL_ident = 73                      /* ident  */
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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   443

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    50,    54,    55,    56,    57,    61,    65,
      66,    67,    68,    69,    72,    73,    74,    75,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    96,    97,   101,   102,   103,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   120,
     121,   122,   124,   125,   126,   129,   130,   131,   132,   133,
     134,   135,   139,   143,   144,   145,   149,   150
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
  "\"end of file\"", "error", "\"invalid token\"", "EQUAL", "GREATER",
  "LESS", "GREATER_EQUAL", "LESS_EQUAL", "NOT_EQUAL", "ELSE", "POINTER",
  "IF", "FOR", "WHILE", "QUOTE", "TRUE_", "FALSE_", "CHARACTER", "BOOLEAN",
  "ERROR", "I1", "I2", "I4", "I8", "UI1", "UI2", "UI4", "UI8", "F4", "F8",
  "STRUCT", "MODULE", "RETURN", "EXTEND", "REQUIREMENT", "COMMA",
  "CONSTRUCTOR", "VOID", "OBJECT", "INCLUDE", "NUM", "IDENTIFIER", "PLUS",
  "MINUS", "TIMES", "DIVIDE", "ASSIGN", "SEMICOLON", "FUNCTION", "LPAREN",
  "RPAREN", "LCBRACKET", "RCBRACKET", "PUBLIC", "PRIVATE", "LBRACKET",
  "RBRACKET", "STRING_VALUE", "STRING", "$accept", "program",
  "declaration", "function_decl", "param", "exp", "decl", "arguments",
  "type", "type_specifier", "array_subscript", "statement", "if_statement",
  "else_if_statement", "ident", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-68)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     363,     2,     2,     2,     2,     2,     2,     2,   -54,   -26,
       2,    17,   -69,   363,   -26,     2,   -69,   -22,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -20,   -28,   -69,   -69,   -69,
     -39,   -69,   -12,   -32,   -31,   385,    57,   363,   -22,   -69,
     -69,   -23,   -26,   -69,   -69,   -69,    19,    57,   -69,   274,
     -43,   -69,   -69,   385,   -30,    -9,   118,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,   363,    57,    57,
     -19,   385,    57,   -17,   -69,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   -69,   370,   347,   -16,   161,
     -69,   353,    20,    57,   -69,   -21,   -13,    13,    57,   280,
     161,   -26,    11,   -69,    31,   385,   -69,    57,   385,    57,
     296,   161,   -69,   -36,   -69,   -69,   200,    57,   217,   161,
     -69,    57,   -69,    25,   302,    30,   -69,   325,   161,    57,
     161,   -69,    12,   226,    18,    69,    34,   161,     8,   161,
     161,   -69,    33,   161,   -69,    35,    57,    36,   161,   248,
     -69,   -69,    39,   161,    40,    69,   -69
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    49,    49,    49,    49,    49,    49,    49,    66,     0,
      49,     0,     3,     4,     0,    49,    51,    52,    47,    46,
      42,    43,    44,    45,    40,     0,     0,    48,     1,     5,
       0,    41,    53,     0,     0,     9,    14,     4,    52,    50,
      67,     0,     0,    26,    25,    18,    17,    14,    19,     0,
       0,     6,    54,    39,    10,     0,     0,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,     4,    14,    14,
       0,     9,    14,     0,    15,    28,    30,    31,    32,    33,
      29,    21,    22,    23,    24,     7,    20,    37,     0,    14,
      12,    11,    16,    14,    27,     0,     0,     0,    14,     0,
      14,     0,     0,    59,    49,     9,    38,    14,     0,    14,
       0,    14,    58,     0,     8,    13,     0,    14,     0,    14,
      57,    14,    34,     0,     0,     0,    56,     0,    14,    14,
      14,    35,     0,     0,     0,    63,     0,    14,     0,    14,
      14,    60,     0,    14,    62,     0,    14,     0,    14,     0,
      65,    61,     0,    14,     0,    63,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -11,   -69,   -67,   -14,   -68,    -2,    83,   426,
      56,    27,   -69,   -56,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    13,    41,    99,   100,    88,   101,    31,
      33,   102,   103,   139,    50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    25,    29,    68,    90,    71,    69,    36,    37,    26,
     121,   122,    16,    15,    30,     8,    72,    28,    32,   142,
      34,    35,    49,    38,    39,    40,    51,    53,   107,   -66,
     -67,    73,    89,    56,    94,    15,   108,    15,   115,    92,
     117,    16,    54,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    15,    86,    87,    85,    17,    91,   143,
     -66,   -67,   109,   114,   135,   -66,   -67,    15,   -66,   -67,
     137,    15,    43,    44,    55,   -67,   128,    68,   138,    87,
      69,   130,   146,    14,   110,   140,    17,   148,   150,   104,
     153,   106,   155,   116,    52,   118,    14,    45,    46,   156,
     104,   113,     0,   124,     0,    15,    47,   127,    15,     0,
       0,   104,     0,     0,    48,   133,     0,     0,    42,   104,
      14,    57,    58,    59,    60,    61,    62,   112,   104,     0,
     104,     0,   149,     0,     0,     0,    70,   104,   120,   104,
     104,     0,     0,   104,     0,     0,   126,     0,   104,     0,
      14,     0,     0,   104,    42,   132,     0,   134,     0,     0,
      63,    64,    65,    66,   141,     0,   144,   145,    74,     0,
     147,     0,    95,    96,    97,   151,    43,    44,     1,     2,
     154,     3,     4,     5,     6,     0,     0,     0,    42,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     7,     0,
       0,    45,    46,    57,    58,    59,    60,    61,    62,     0,
      47,     0,     0,   -55,     0,     0,     0,     0,    48,    10,
      57,    58,    59,    60,    61,    62,     0,     0,     0,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,    66,     0,     0,     0,     0,
     123,    57,    58,    59,    60,    61,    62,     0,     0,    63,
      64,    65,    66,     0,     0,     0,     0,   125,    63,    64,
      65,    66,     0,     0,     0,     0,   136,    57,    58,    59,
      60,    61,    62,    57,    58,    59,    60,    61,    62,     0,
      63,    64,    65,    66,     0,     0,     0,     0,   152,    57,
      58,    59,    60,    61,    62,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,    63,    64,    65,    66,
       0,    67,    63,    64,    65,    66,     0,   111,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,    63,    64,
      65,    66,     0,   119,    63,    64,    65,    66,     0,   129,
      57,    58,    59,    60,    61,    62,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,     0,   131,    57,    58,    59,    60,    61,    62,     0,
       1,     2,    93,     3,     4,     5,     6,     0,   105,    63,
      64,    65,    66,     0,     0,    63,    64,    65,    66,     0,
       7,     0,     1,     2,     8,     3,     4,     5,     6,     0,
       0,     9,    63,    64,    65,    66,     0,     0,     0,     0,
       0,    10,     7,     0,     0,     0,     8,    18,    19,    20,
      21,    22,    23,    24,     0,     0,    27,     0,     0,     0,
       0,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
       0,    55,    13,    46,    71,    35,    49,    46,    47,     9,
      46,    47,    10,    13,    14,    41,    46,     0,    40,    11,
      40,    49,    36,    35,    56,    56,    37,    50,    49,    10,
      10,    40,    51,    47,    50,    35,    49,    37,   105,    56,
     108,    10,    42,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    53,    68,    69,    67,    55,    72,    51,
      41,    41,    49,    52,    52,    46,    46,    67,    49,    49,
      52,    71,    15,    16,    55,    55,    51,    46,     9,    93,
      49,    51,    49,     0,    98,    51,    55,    52,    52,    89,
      51,    93,    52,   107,    38,   109,    13,    40,    41,   155,
     100,   101,    -1,   117,    -1,   105,    49,   121,   108,    -1,
      -1,   111,    -1,    -1,    57,   129,    -1,    -1,    35,   119,
      37,     3,     4,     5,     6,     7,     8,   100,   128,    -1,
     130,    -1,   146,    -1,    -1,    -1,    53,   137,   111,   139,
     140,    -1,    -1,   143,    -1,    -1,   119,    -1,   148,    -1,
      67,    -1,    -1,   153,    71,   128,    -1,   130,    -1,    -1,
      42,    43,    44,    45,   137,    -1,   139,   140,    50,    -1,
     143,    -1,    11,    12,    13,   148,    15,    16,    17,    18,
     153,    20,    21,    22,    23,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    40,    41,     3,     4,     5,     6,     7,     8,    -1,
      49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    58,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      50,     3,     4,     5,     6,     7,     8,    -1,    -1,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    50,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    50,     3,     4,     5,
       6,     7,     8,     3,     4,     5,     6,     7,     8,    -1,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    50,     3,
       4,     5,     6,     7,     8,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      -1,    47,    42,    43,    44,    45,    -1,    47,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    -1,    47,    42,    43,    44,    45,    -1,    47,
       3,     4,     5,     6,     7,     8,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    -1,    47,     3,     4,     5,     6,     7,     8,    -1,
      17,    18,    35,    20,    21,    22,    23,    -1,    35,    42,
      43,    44,    45,    -1,    -1,    42,    43,    44,    45,    -1,
      37,    -1,    17,    18,    41,    20,    21,    22,    23,    -1,
      -1,    48,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    58,    37,    -1,    -1,    -1,    41,     1,     2,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    58
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    18,    20,    21,    22,    23,    37,    41,    48,
      58,    60,    61,    62,    67,    73,    10,    55,    68,    68,
      68,    68,    68,    68,    68,    55,    73,    68,     0,    61,
      73,    68,    40,    69,    40,    49,    46,    47,    35,    56,
      56,    63,    67,    15,    16,    40,    41,    49,    57,    64,
      73,    61,    69,    50,    73,    55,    64,     3,     4,     5,
       6,     7,     8,    42,    43,    44,    45,    47,    46,    49,
      67,    35,    46,    40,    50,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    61,    64,    64,    66,    51,
      63,    64,    56,    35,    50,    11,    12,    13,    32,    64,
      65,    67,    70,    71,    73,    35,    66,    49,    49,    49,
      64,    47,    70,    73,    52,    63,    64,    65,    64,    47,
      70,    46,    47,    50,    64,    50,    70,    64,    51,    47,
      51,    47,    70,    64,    70,    52,    50,    52,     9,    72,
      51,    70,    11,    51,    70,    70,    49,    70,    52,    64,
      52,    70,    50,    51,    70,    52,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    61,    61,    62,    63,
      63,    63,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    66,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      68,    68,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    71,    72,    72,    72,    73,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     0,     2,     4,     6,     9,     0,
       2,     4,     4,     6,     0,     3,     4,     1,     1,     1,
       3,     3,     3,     3,     3,     1,     1,     4,     3,     3,
       3,     3,     3,     3,     3,     5,     0,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       3,     1,     0,     1,     3,     0,     4,     3,     2,     1,
       8,    11,     9,     0,     9,     4,     1,     4
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
  case 2: /* program: %empty  */
#line 49 "parser.y"
    { (yyval.decl_ptr) = 0; }
#line 1296 "parser.tab.c"
    break;

  case 3: /* program: declaration  */
#line 50 "parser.y"
                  { code = (yyvsp[0].decl_ptr); }
#line 1302 "parser.tab.c"
    break;

  case 4: /* declaration: %empty  */
#line 54 "parser.y"
    { (yyval.decl_ptr) = 0; }
#line 1308 "parser.tab.c"
    break;

  case 5: /* declaration: function_decl declaration  */
#line 55 "parser.y"
                                { (yyvsp[-1].decl_ptr)->next = (yyvsp[0].decl_ptr); (yyval.decl_ptr) = (yyvsp[-1].decl_ptr); }
#line 1314 "parser.tab.c"
    break;

  case 6: /* declaration: type ident SEMICOLON declaration  */
#line 56 "parser.y"
                                       { (yyval.decl_ptr) = decl_create_global_variable_value((yyvsp[-3].type_ptr), (yyvsp[-2].ident_ptr), 0, (yyvsp[0].decl_ptr)); }
#line 1320 "parser.tab.c"
    break;

  case 7: /* declaration: type ident ASSIGN exp SEMICOLON declaration  */
#line 57 "parser.y"
                                                  { (yyval.decl_ptr) = decl_create_global_variable_value((yyvsp[-5].type_ptr), (yyvsp[-4].ident_ptr), (yyvsp[-2].expr_ptr), (yyvsp[0].decl_ptr)); }
#line 1326 "parser.tab.c"
    break;

  case 8: /* function_decl: FUNCTION ident LPAREN param RPAREN type LCBRACKET statement RCBRACKET  */
#line 61 "parser.y"
                                                                          { (yyval.decl_ptr) = decl_create_function((yyvsp[-7].ident_ptr), (yyvsp[-5].function_param_ptr), (yyvsp[-3].type_ptr), (yyvsp[-1].stmt_ptr)); }
#line 1332 "parser.tab.c"
    break;

  case 9: /* param: %empty  */
#line 65 "parser.y"
    { (yyval.function_param_ptr) = 0; }
#line 1338 "parser.tab.c"
    break;

  case 10: /* param: type ident  */
#line 66 "parser.y"
                 { (yyval.function_param_ptr) = function_create_param((yyvsp[0].ident_ptr), (yyvsp[-1].type_ptr), 0, 0); }
#line 1344 "parser.tab.c"
    break;

  case 11: /* param: type ident ASSIGN exp  */
#line 67 "parser.y"
                            { (yyval.function_param_ptr) = function_create_param((yyvsp[-2].ident_ptr), (yyvsp[-3].type_ptr), (yyvsp[0].expr_ptr), 0); }
#line 1350 "parser.tab.c"
    break;

  case 12: /* param: type ident COMMA param  */
#line 68 "parser.y"
                             { (yyval.function_param_ptr) = function_create_param((yyvsp[-2].ident_ptr), (yyvsp[-3].type_ptr), 0, (yyvsp[0].function_param_ptr)); }
#line 1356 "parser.tab.c"
    break;

  case 13: /* param: type ident ASSIGN exp COMMA param  */
#line 69 "parser.y"
                                        { (yyval.function_param_ptr) = function_create_param((yyvsp[-4].ident_ptr), (yyvsp[-5].type_ptr), (yyvsp[-2].expr_ptr), (yyvsp[0].function_param_ptr)); }
#line 1362 "parser.tab.c"
    break;

  case 15: /* exp: LPAREN exp RPAREN  */
#line 73 "parser.y"
                        {(yyval.expr_ptr) = (yyvsp[-1].expr_ptr);}
#line 1368 "parser.tab.c"
    break;

  case 16: /* exp: IDENTIFIER LBRACKET NUM RBRACKET  */
#line 74 "parser.y"
                                           { (yyval.expr_ptr) = expr_create_name((yyvsp[-3].string_val), (yyvsp[-1].int_val)); }
#line 1374 "parser.tab.c"
    break;

  case 17: /* exp: IDENTIFIER  */
#line 75 "parser.y"
                 { (yyval.expr_ptr) = expr_create_name((yyvsp[0].string_val), 0); }
#line 1380 "parser.tab.c"
    break;

  case 18: /* exp: NUM  */
#line 77 "parser.y"
          { (yyval.expr_ptr) = expr_create_integer((yyvsp[0].int_val)); }
#line 1386 "parser.tab.c"
    break;

  case 19: /* exp: STRING_VALUE  */
#line 78 "parser.y"
                   { (yyval.expr_ptr) = 0; }
#line 1392 "parser.tab.c"
    break;

  case 20: /* exp: ident ASSIGN exp  */
#line 79 "parser.y"
                       { (yyval.expr_ptr) = expr_create_assign((yyvsp[-2].ident_ptr), (yyvsp[0].expr_ptr)); }
#line 1398 "parser.tab.c"
    break;

  case 21: /* exp: exp PLUS exp  */
#line 80 "parser.y"
                   { (yyval.expr_ptr) = expr_create_add((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1404 "parser.tab.c"
    break;

  case 22: /* exp: exp MINUS exp  */
#line 81 "parser.y"
                    { (yyval.expr_ptr) = expr_create_sub((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1410 "parser.tab.c"
    break;

  case 23: /* exp: exp TIMES exp  */
#line 82 "parser.y"
                    { (yyval.expr_ptr) = expr_create_mul((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1416 "parser.tab.c"
    break;

  case 24: /* exp: exp DIVIDE exp  */
#line 83 "parser.y"
                     { (yyval.expr_ptr) = expr_create_div((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1422 "parser.tab.c"
    break;

  case 25: /* exp: FALSE_  */
#line 84 "parser.y"
             { (yyval.expr_ptr) = expr_create_bool(0); }
#line 1428 "parser.tab.c"
    break;

  case 26: /* exp: TRUE_  */
#line 85 "parser.y"
            { (yyval.expr_ptr) = expr_create_bool(1); }
#line 1434 "parser.tab.c"
    break;

  case 27: /* exp: ident LPAREN arguments RPAREN  */
#line 86 "parser.y"
                                    { (yyval.expr_ptr) = expr_create_call((yyvsp[-3].ident_ptr), (yyvsp[-1].expr_function_arg_ptr)); }
#line 1440 "parser.tab.c"
    break;

  case 28: /* exp: exp EQUAL exp  */
#line 87 "parser.y"
                    { (yyval.expr_ptr) = expr_create_equal((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1446 "parser.tab.c"
    break;

  case 29: /* exp: exp NOT_EQUAL exp  */
#line 88 "parser.y"
                        { (yyval.expr_ptr) = expr_create_not_equal((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1452 "parser.tab.c"
    break;

  case 30: /* exp: exp GREATER exp  */
#line 89 "parser.y"
                      { (yyval.expr_ptr) = expr_create_greater((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1458 "parser.tab.c"
    break;

  case 31: /* exp: exp LESS exp  */
#line 90 "parser.y"
                   { (yyval.expr_ptr) = expr_create_less((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1464 "parser.tab.c"
    break;

  case 32: /* exp: exp GREATER_EQUAL exp  */
#line 91 "parser.y"
                            { (yyval.expr_ptr) = expr_create_greater_equal((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1470 "parser.tab.c"
    break;

  case 33: /* exp: exp LESS_EQUAL exp  */
#line 92 "parser.y"
                         { (yyval.expr_ptr) = expr_create_less_equal((yyvsp[-2].expr_ptr), (yyvsp[0].expr_ptr)); }
#line 1476 "parser.tab.c"
    break;

  case 34: /* decl: type ident SEMICOLON  */
#line 96 "parser.y"
                         { (yyval.decl_ptr) = decl_create_local_variable_value((yyvsp[-2].type_ptr), (yyvsp[-1].ident_ptr), 0, 0); }
#line 1482 "parser.tab.c"
    break;

  case 35: /* decl: type ident ASSIGN exp SEMICOLON  */
#line 97 "parser.y"
                                      { (yyval.decl_ptr) = decl_create_local_variable_value((yyvsp[-4].type_ptr), (yyvsp[-3].ident_ptr), (yyvsp[-1].expr_ptr), 0); }
#line 1488 "parser.tab.c"
    break;

  case 36: /* arguments: %empty  */
#line 101 "parser.y"
    { (yyval.expr_function_arg_ptr) = 0; }
#line 1494 "parser.tab.c"
    break;

  case 37: /* arguments: exp  */
#line 102 "parser.y"
          {(yyval.expr_function_arg_ptr) = expr_function_create_arg((yyvsp[0].expr_ptr), 0); }
#line 1500 "parser.tab.c"
    break;

  case 38: /* arguments: exp COMMA arguments  */
#line 103 "parser.y"
                          { (yyval.expr_function_arg_ptr) = expr_function_create_arg((yyvsp[-2].expr_ptr), (yyvsp[0].expr_function_arg_ptr)); }
#line 1506 "parser.tab.c"
    break;

  case 39: /* type: %empty  */
#line 107 "parser.y"
    { (yyval.type_ptr) = 0;}
#line 1512 "parser.tab.c"
    break;

  case 40: /* type: VOID type_specifier  */
#line 108 "parser.y"
                          { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_VOID, (yyvsp[0].type_spec_ptr)); }
#line 1518 "parser.tab.c"
    break;

  case 41: /* type: ident type_specifier  */
#line 109 "parser.y"
                           { (yyval.type_ptr) = (yyvsp[-1].ident_ptr); }
#line 1524 "parser.tab.c"
    break;

  case 42: /* type: I1 type_specifier  */
#line 110 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_8, (yyvsp[0].type_spec_ptr)); }
#line 1530 "parser.tab.c"
    break;

  case 43: /* type: I2 type_specifier  */
#line 111 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_16, (yyvsp[0].type_spec_ptr)); }
#line 1536 "parser.tab.c"
    break;

  case 44: /* type: I4 type_specifier  */
#line 112 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_32, (yyvsp[0].type_spec_ptr)); }
#line 1542 "parser.tab.c"
    break;

  case 45: /* type: I8 type_specifier  */
#line 113 "parser.y"
                        { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_INTEGER_64, (yyvsp[0].type_spec_ptr)); }
#line 1548 "parser.tab.c"
    break;

  case 46: /* type: BOOLEAN type_specifier  */
#line 114 "parser.y"
                             { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_BOOL, (yyvsp[0].type_spec_ptr)); }
#line 1554 "parser.tab.c"
    break;

  case 47: /* type: CHARACTER type_specifier  */
#line 115 "parser.y"
                               { (yyval.type_ptr) = type_create_primitive(PRIMITIVE_CHAR, (yyvsp[0].type_spec_ptr)); }
#line 1560 "parser.tab.c"
    break;

  case 48: /* type: STRING type_specifier  */
#line 116 "parser.y"
                            { (yyval.type_ptr) = 0; }
#line 1566 "parser.tab.c"
    break;

  case 49: /* type_specifier: %empty  */
#line 120 "parser.y"
    { (yyval.type_spec_ptr) = 0; }
#line 1572 "parser.tab.c"
    break;

  case 50: /* type_specifier: LBRACKET array_subscript RBRACKET  */
#line 121 "parser.y"
                                        { (yyval.type_spec_ptr) = type_spec_create_array((yyvsp[-1].array_sub_ptr)); }
#line 1578 "parser.tab.c"
    break;

  case 51: /* type_specifier: POINTER  */
#line 122 "parser.y"
              { (yyval.type_spec_ptr) = type_spec_create_pointer(); }
#line 1584 "parser.tab.c"
    break;

  case 53: /* array_subscript: NUM  */
#line 125 "parser.y"
          { (yyval.array_sub_ptr) = array_sub_create((yyvsp[0].int_val), 0); }
#line 1590 "parser.tab.c"
    break;

  case 54: /* array_subscript: NUM COMMA array_subscript  */
#line 126 "parser.y"
                                { (yyval.array_sub_ptr) = array_sub_create((yyvsp[-2].int_val), (yyvsp[0].array_sub_ptr)); }
#line 1596 "parser.tab.c"
    break;

  case 55: /* statement: %empty  */
#line 129 "parser.y"
    { (yyval.stmt_ptr) = 0; }
#line 1602 "parser.tab.c"
    break;

  case 56: /* statement: RETURN exp SEMICOLON statement  */
#line 130 "parser.y"
                                     { (yyval.stmt_ptr) = stmt_create_return((yyvsp[-2].expr_ptr)); }
#line 1608 "parser.tab.c"
    break;

  case 57: /* statement: exp SEMICOLON statement  */
#line 131 "parser.y"
                              { (yyval.stmt_ptr) = stmt_create_expr((yyvsp[-2].expr_ptr), (yyvsp[0].stmt_ptr)); }
#line 1614 "parser.tab.c"
    break;

  case 58: /* statement: decl statement  */
#line 132 "parser.y"
                     { (yyval.stmt_ptr) = stmt_create_decl((yyvsp[-1].decl_ptr), (yyvsp[0].stmt_ptr)); }
#line 1620 "parser.tab.c"
    break;

  case 59: /* statement: if_statement  */
#line 133 "parser.y"
                   { (yyval.stmt_ptr) = (yyvsp[0].stmt_ptr); }
#line 1626 "parser.tab.c"
    break;

  case 60: /* statement: WHILE LPAREN exp RPAREN LCBRACKET statement RCBRACKET statement  */
#line 134 "parser.y"
                                                                      { (yyval.stmt_ptr) = stmt_create_while((yyvsp[-5].expr_ptr), (yyvsp[-2].stmt_ptr), (yyvsp[0].stmt_ptr)); }
#line 1632 "parser.tab.c"
    break;

  case 61: /* statement: FOR LPAREN decl exp SEMICOLON exp RPAREN LCBRACKET statement RCBRACKET statement  */
#line 135 "parser.y"
                                                                                       { (yyval.stmt_ptr) = stmt_create_for((yyvsp[-8].decl_ptr), (yyvsp[-7].expr_ptr), (yyvsp[-5].expr_ptr), (yyvsp[-2].stmt_ptr), (yyvsp[0].stmt_ptr)); }
#line 1638 "parser.tab.c"
    break;

  case 62: /* if_statement: IF LPAREN exp RPAREN LCBRACKET statement RCBRACKET else_if_statement statement  */
#line 139 "parser.y"
                                                                                   { (yyval.stmt_ptr) = stmt_create_if((yyvsp[-6].expr_ptr), (yyvsp[-3].stmt_ptr), (yyvsp[-1].stmt_ptr), (yyvsp[0].stmt_ptr)); }
#line 1644 "parser.tab.c"
    break;

  case 63: /* else_if_statement: %empty  */
#line 143 "parser.y"
    { (yyval.stmt_ptr) = 0; }
#line 1650 "parser.tab.c"
    break;

  case 64: /* else_if_statement: ELSE IF LPAREN exp RPAREN LCBRACKET statement RCBRACKET else_if_statement  */
#line 144 "parser.y"
                                                                                { (yyval.stmt_ptr) = stmt_create_else_if((yyvsp[-5].expr_ptr), (yyvsp[-2].stmt_ptr), (yyvsp[0].stmt_ptr)); }
#line 1656 "parser.tab.c"
    break;

  case 65: /* else_if_statement: ELSE LCBRACKET statement RCBRACKET  */
#line 145 "parser.y"
                                         { (yyval.stmt_ptr) = stmt_create_else((yyvsp[-1].stmt_ptr)); }
#line 1662 "parser.tab.c"
    break;

  case 66: /* ident: IDENTIFIER  */
#line 149 "parser.y"
               { (yyval.ident_ptr) = ident_create((yyvsp[0].string_val), 0); }
#line 1668 "parser.tab.c"
    break;

  case 67: /* ident: IDENTIFIER LBRACKET NUM RBRACKET  */
#line 150 "parser.y"
                                       { (yyval.ident_ptr) = ident_create((yyvsp[-3].string_val), (yyvsp[-1].int_val)); }
#line 1674 "parser.tab.c"
    break;


#line 1678 "parser.tab.c"

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

#line 154 "parser.y"


void yyerror(const char* msg) {
    fprintf(stderr, "Parser error: %s\n", msg);
}

int main() {


    code = malloc(sizeof(*code));
    scope = malloc(sizeof(*scope));
    scope->top = 0;

    scope_enter();

    yyrestart(stdin);

    int build = yyparse();

    if (!error)
    decl_resolve(code, 0);
    if (!error)
    decl_typecheck(code);

    file = fopen("assembly.asm", "w+");

    code_gen(code);

    fclose(file);

    

    if (build || error)
    {
        printf("********************Build Succesfull!***********************\n");
    }
    else
    {
        printf("*********************Build Succesfull!***********************\n");
    }

    return 0;
}
