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
    POINTER = 258,                 /* POINTER  */
    IF = 259,                      /* IF  */
    FOR = 260,                     /* FOR  */
    WHILE = 261,                   /* WHILE  */
    QUOTE = 262,                   /* QUOTE  */
    TRUE_ = 263,                   /* TRUE_  */
    FALSE_ = 264,                  /* FALSE_  */
    CHARACTER = 265,               /* CHARACTER  */
    BOOLEAN = 266,                 /* BOOLEAN  */
    ERROR = 267,                   /* ERROR  */
    I1 = 268,                      /* I1  */
    I2 = 269,                      /* I2  */
    I4 = 270,                      /* I4  */
    I8 = 271,                      /* I8  */
    UI1 = 272,                     /* UI1  */
    UI2 = 273,                     /* UI2  */
    UI4 = 274,                     /* UI4  */
    UI8 = 275,                     /* UI8  */
    F4 = 276,                      /* F4  */
    F8 = 277,                      /* F8  */
    STRUCT = 278,                  /* STRUCT  */
    MODULE = 279,                  /* MODULE  */
    RETURN = 280,                  /* RETURN  */
    EXTEND = 281,                  /* EXTEND  */
    REQUIREMENT = 282,             /* REQUIREMENT  */
    COMMA = 283,                   /* COMMA  */
    CONSTRUCTOR = 284,             /* CONSTRUCTOR  */
    VOID = 285,                    /* VOID  */
    OBJECT = 286,                  /* OBJECT  */
    INCLUDE = 287,                 /* INCLUDE  */
    NUM = 288,                     /* NUM  */
    IDENTIFIER = 289,              /* IDENTIFIER  */
    PLUS = 290,                    /* PLUS  */
    MINUS = 291,                   /* MINUS  */
    TIMES = 292,                   /* TIMES  */
    DIVIDE = 293,                  /* DIVIDE  */
    ASSIGN = 294,                  /* ASSIGN  */
    SEMICOLON = 295,               /* SEMICOLON  */
    FUNCTION = 296,                /* FUNCTION  */
    LPAREN = 297,                  /* LPAREN  */
    RPAREN = 298,                  /* RPAREN  */
    LCBRACKET = 299,               /* LCBRACKET  */
    RCBRACKET = 300,               /* RCBRACKET  */
    PUBLIC = 301,                  /* PUBLIC  */
    PRIVATE = 302,                 /* PRIVATE  */
    LBRACKET = 303,                /* LBRACKET  */
    RBRACKET = 304,                /* RBRACKET  */
    STRING_VALUE = 305,            /* STRING_VALUE  */
    STRING = 306                   /* STRING  */
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

#line 130 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
