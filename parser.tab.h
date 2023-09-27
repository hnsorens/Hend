/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    EQUAL = 258,                   /* EQUAL  */
    GREATER = 259,                 /* GREATER  */
    LESS = 260,                    /* LESS  */
    GREATER_EQUAL = 261,           /* GREATER_EQUAL  */
    LESS_EQUAL = 262,              /* LESS_EQUAL  */
    NOT_EQUAL = 263,               /* NOT_EQUAL  */
    ELSE = 264,                    /* ELSE  */
    POINTER = 265,                 /* POINTER  */
    IF = 266,                      /* IF  */
    FOR = 267,                     /* FOR  */
    WHILE = 268,                   /* WHILE  */
    QUOTE = 269,                   /* QUOTE  */
    TRUE_ = 270,                   /* TRUE_  */
    FALSE_ = 271,                  /* FALSE_  */
    CHARACTER = 272,               /* CHARACTER  */
    BOOLEAN = 273,                 /* BOOLEAN  */
    ERROR = 274,                   /* ERROR  */
    I1 = 275,                      /* I1  */
    I2 = 276,                      /* I2  */
    I4 = 277,                      /* I4  */
    I8 = 278,                      /* I8  */
    UI1 = 279,                     /* UI1  */
    UI2 = 280,                     /* UI2  */
    UI4 = 281,                     /* UI4  */
    UI8 = 282,                     /* UI8  */
    F4 = 283,                      /* F4  */
    F8 = 284,                      /* F8  */
    STRUCT = 285,                  /* STRUCT  */
    MODULE = 286,                  /* MODULE  */
    RETURN = 287,                  /* RETURN  */
    EXTEND = 288,                  /* EXTEND  */
    REQUIREMENT = 289,             /* REQUIREMENT  */
    COMMA = 290,                   /* COMMA  */
    CONSTRUCTOR = 291,             /* CONSTRUCTOR  */
    VOID = 292,                    /* VOID  */
    OBJECT = 293,                  /* OBJECT  */
    INCLUDE = 294,                 /* INCLUDE  */
    NUM = 295,                     /* NUM  */
    IDENTIFIER = 296,              /* IDENTIFIER  */
    PLUS = 297,                    /* PLUS  */
    MINUS = 298,                   /* MINUS  */
    TIMES = 299,                   /* TIMES  */
    DIVIDE = 300,                  /* DIVIDE  */
    ASSIGN = 301,                  /* ASSIGN  */
    SEMICOLON = 302,               /* SEMICOLON  */
    FUNCTION = 303,                /* FUNCTION  */
    LPAREN = 304,                  /* LPAREN  */
    RPAREN = 305,                  /* RPAREN  */
    LCBRACKET = 306,               /* LCBRACKET  */
    RCBRACKET = 307,               /* RCBRACKET  */
    PUBLIC = 308,                  /* PUBLIC  */
    PRIVATE = 309,                 /* PRIVATE  */
    LBRACKET = 310,                /* LBRACKET  */
    RBRACKET = 311,                /* RBRACKET  */
    STRING_VALUE = 312,            /* STRING_VALUE  */
    STRING = 313                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "parser.y"

    int int_val;
    double double_val;
    char* string_val;
    struct ident* ident_ptr;
    struct type* type_ptr;
    struct expr* expr_ptr;
    struct expr_function_arg* expr_function_arg_ptr;
    struct function_param* function_param_ptr;
    struct decl * decl_ptr;
    struct stmt * stmt_ptr;
    struct array_sub * array_sub_ptr;
    struct type_spec * type_spec_ptr;

#line 137 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
