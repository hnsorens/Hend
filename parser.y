%{
#include <stdio.h>
#include <stdlib.h>

#include "AST/AbstractSyntaxTree.c"

struct decl * code;

%}

%union {
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
}

%token EQUAL GREATER LESS GREATER_EQUAL LESS_EQUAL NOT_EQUAL ELSE POINTER IF FOR WHILE QUOTE TRUE_ FALSE_ CHARACTER BOOLEAN ERROR I1 I2 I4 I8 UI1 UI2 UI4 UI8 F4 F8 STRUCT MODULE RETURN EXTEND REQUIREMENT COMMA CONSTRUCTOR VOID OBJECT INCLUDE NUM IDENTIFIER PLUS MINUS TIMES DIVIDE ASSIGN SEMICOLON FUNCTION LPAREN RPAREN LCBRACKET RCBRACKET PUBLIC PRIVATE LBRACKET RBRACKET STRING_VALUE STRING

%type <decl_ptr> program
%type <decl_ptr> declaration
%type <decl_ptr> function_decl
%type <function_param_ptr> param
%type <expr_ptr> exp
%type <decl_ptr> decl
%type <expr_function_arg_ptr> arguments
%type <type_ptr> type
%type <stmt_ptr> statement
%type <ident_ptr> ident
%type <int_val> NUM
%type <string_val> IDENTIFIER
%type <string_val> STRING_VALUE
%type <array_sub_ptr> array_subscript
%type <type_spec_ptr> type_specifier
%type <stmt_ptr> else_if_statement
%type <stmt_ptr> if_statement

%%

program:
    { $$ = 0; }
    | declaration { code = $1; }
    ;

declaration:
    { $$ = 0; }
    | function_decl declaration { $1->next = $2; $$ = $1; }
    | type ident SEMICOLON declaration { $$ = decl_create_global_variable_value($1, $2, 0, $4); }
    | type ident ASSIGN exp SEMICOLON declaration { $$ = decl_create_global_variable_value($1, $2, $4, $6); }
    ;

function_decl:
    FUNCTION ident LPAREN param RPAREN type LCBRACKET statement RCBRACKET { $$ = decl_create_function($2, $4, $6, $8); }
    ;

param:
    { $$ = 0; }
    | type ident { $$ = function_create_param($2, $1, 0, 0); }
    | type ident ASSIGN exp { $$ = function_create_param($2, $1, $4, 0); }
    | type ident COMMA param { $$ = function_create_param($2, $1, 0, $4); }
    | type ident ASSIGN exp COMMA param { $$ = function_create_param($2, $1, $4, $6); }
    ;

exp:
    | LPAREN exp RPAREN {$$ = $2;}
        | IDENTIFIER LBRACKET NUM RBRACKET { $$ = expr_create_name($1, $3); }
    | IDENTIFIER { $$ = expr_create_name($1, 0); }

    | NUM { $$ = expr_create_integer($1); }
    | STRING_VALUE { $$ = 0; }
    | ident ASSIGN exp { $$ = expr_create_assign($1, $3); }
    | exp PLUS exp { $$ = expr_create_add($1, $3); }
    | exp MINUS exp { $$ = expr_create_sub($1, $3); }
    | exp TIMES exp { $$ = expr_create_mul($1, $3); }
    | exp DIVIDE exp { $$ = expr_create_div($1, $3); }
    | FALSE_ { $$ = expr_create_bool(0); }
    | TRUE_ { $$ = expr_create_bool(1); }
    | ident LPAREN arguments RPAREN { $$ = expr_create_call($1, $3); }
    | exp EQUAL exp { $$ = expr_create_equal($1, $3); }
    | exp NOT_EQUAL exp { $$ = expr_create_not_equal($1, $3); }
    | exp GREATER exp { $$ = expr_create_greater($1, $3); }
    | exp LESS exp { $$ = expr_create_less($1, $3); }
    | exp GREATER_EQUAL exp { $$ = expr_create_greater_equal($1, $3); }
    | exp LESS_EQUAL exp { $$ = expr_create_less_equal($1, $3); }
    ;

decl:
    type ident SEMICOLON { $$ = decl_create_local_variable_value($1, $2, 0, 0); }
    | type ident ASSIGN exp SEMICOLON { $$ = decl_create_local_variable_value($1, $2, $4, 0); }
    ;

arguments:
    { $$ = 0; }
    | exp {$$ = expr_function_create_arg($1, 0); }
    | exp COMMA arguments { $$ = expr_function_create_arg($1, $3); }
    ;

type:
    { $$ = 0;}
    | VOID type_specifier { $$ = type_create_primitive(PRIMITIVE_VOID, $2); }
    | ident type_specifier { $$ = $1; }
    | I1 type_specifier { $$ = type_create_primitive(PRIMITIVE_INTEGER_8, $2); }
    | I2 type_specifier { $$ = type_create_primitive(PRIMITIVE_INTEGER_16, $2); }
    | I4 type_specifier { $$ = type_create_primitive(PRIMITIVE_INTEGER_32, $2); }
    | I8 type_specifier { $$ = type_create_primitive(PRIMITIVE_INTEGER_64, $2); }
    | BOOLEAN type_specifier { $$ = type_create_primitive(PRIMITIVE_BOOL, $2); }
    | CHARACTER type_specifier { $$ = type_create_primitive(PRIMITIVE_CHAR, $2); }
    | STRING type_specifier { $$ = 0; }
    ;

type_specifier:
    { $$ = 0; }
    | LBRACKET array_subscript RBRACKET { $$ = type_spec_create_array($2); }
    | POINTER { $$ = type_spec_create_pointer(); }

array_subscript:
    | NUM { $$ = array_sub_create($1, 0); }
    | NUM COMMA array_subscript { $$ = array_sub_create($1, $3); }

statement:
    { $$ = 0; }
    | RETURN exp SEMICOLON statement { $$ = stmt_create_return($2); }
    | exp SEMICOLON statement { $$ = stmt_create_expr($1, $3); }
    | decl statement { $$ = stmt_create_decl($1, $2); }
    | if_statement { $$ = $1; }
    | WHILE LPAREN exp RPAREN LCBRACKET statement RCBRACKET statement { $$ = stmt_create_while($3, $6, $8); }
    | FOR LPAREN decl exp SEMICOLON exp RPAREN LCBRACKET statement RCBRACKET statement { $$ = stmt_create_for($3, $4, $6, $9, $11); } 
    ;

if_statement:
    IF LPAREN exp RPAREN LCBRACKET statement RCBRACKET else_if_statement statement { $$ = stmt_create_if($3, $6, $8, $9); }
    ;

else_if_statement:
    { $$ = 0; }
    | ELSE IF LPAREN exp RPAREN LCBRACKET statement RCBRACKET else_if_statement { $$ = stmt_create_else_if($4, $7, $9); }
    | ELSE LCBRACKET statement RCBRACKET { $$ = stmt_create_else($3); }
    ;

ident:
    IDENTIFIER { $$ = ident_create($1, 0); }
    | IDENTIFIER LBRACKET NUM RBRACKET { $$ = ident_create($1, $3); }
    ;


%%

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
