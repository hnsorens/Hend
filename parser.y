%{
#include <stdio.h>
#include <stdlib.h>

#include "asc.c"

struct Decl * code;

%}

%union {
    int int_val;
    double double_val;
    char* string_val;
    struct Decl* decl_ptr;
    struct Type* type_ptr;
    struct Param* param_ptr;
    struct Stmt* stmt_ptr;
    struct Expr* expr_ptr;
    struct Modifier * modifier_ptr;
}

%token IF FOR WHILE QUOTE TRUE_ FALSE_ CHARACTER BOOLEAN ERROR I1 I2 I4 I8 UI1 UI2 UI4 UI8 F4 F8 STRUCT MODULE RETURN EXTEND REQUIREMENT COMMA CONSTRUCTOR VOID OBJECT INCLUDE NUM IDENTIFIER PLUS MINUS TIMES DIVIDE ASSIGN SEMICOLON FUNCTION LPAREN RPAREN LCBRACKET RCBRACKET PUBLIC PRIVATE LBRACKET RBRACKET

%type <decl_ptr> program
%type <decl_ptr> declaration
%type <param_ptr> param
%type <expr_ptr> exp
%type <stmt_ptr> statement
%type <type_ptr> type
%type <string_val> IDENTIFIER
%type <int_val> NUM
%type <modifier_ptr> access_modifier
%type <expr_ptr> arguments
%type <decl_ptr> function_decl
%type <decl_ptr> module_decl
%type <decl_ptr> object_decl
%type <decl_ptr> constructor_decl
%type <decl_ptr> includes_decl
%type <decl_ptr> requirements_decl
%type <decl_ptr> extend_decl
%type <stmt_ptr> function_statement
%type <stmt_ptr> object_statement
%type <stmt_ptr> module_statement
%type <stmt_ptr> requirements_statement
%type <stmt_ptr> extend_statement
%type <stmt_ptr> include_statement
%type <decl_ptr> decl

%%

program:
    { $$ = NULL; }
    | declaration { code = $1; }
    ;

declaration:
    { $$ = NULL; }
    | function_decl declaration { $1->next = $2; $$ = $1; }
    | object_decl declaration { $1->next = $2, $$ = $1; }
    | module_decl declaration { $1->next = $2, $$ = $1; }
    ;

function_decl:
    access_modifier FUNCTION IDENTIFIER LPAREN param RPAREN errors type errors LCBRACKET function_statement RCBRACKET { $$ = decl_create($3, type_create_function($8, $5), 0, $11, 0); }
    ;

module_decl:
    access_modifier MODULE IDENTIFIER LCBRACKET module_statement RCBRACKET SEMICOLON { $$ = decl_create($3, type_create_module(), 0, $5, 0); }
    ;

object_decl:
    access_modifier OBJECT IDENTIFIER LCBRACKET object_statement RCBRACKET SEMICOLON { $$ = decl_create($3, type_create_object(), 0, $5, 0); }
    ;

extend_decl:
    EXTEND LCBRACKET extend_statement RCBRACKET SEMICOLON { $$ = decl_create("", type_create_extend(), 0, $3, 0); }
    ;

requirements_decl:
    REQUIREMENT LCBRACKET requirements_statement RCBRACKET SEMICOLON { $$ = decl_create("", type_create_requirement(), 0, $3, 0); }
    ;

includes_decl:
    INCLUDE LCBRACKET include_statement RCBRACKET SEMICOLON { $$ = decl_create("", type_create_include(), 0, $3, 0); }
    ;

constructor_decl:
    CONSTRUCTOR LCBRACKET function_decl RCBRACKET { $$ = decl_create("", type_create_constructor(), 0, $3, 0); }
    ;

function_statement:
    statement { $$ = $1; }
    ;

module_statement:
    {$$ = 0; }
    ;

object_statement:
    { $$ = 0; }
    | decl object_decl { $$ = stmt_create_decl($1, $2); }
    | function_statement object_decl { $$ = stmt_create_decl($1, $2); }
    | constructor_decl object_decl { $$ = stmt_create_decl($1, $2); }
    ;

extend_statement:
    { $$ = 0; }
    | IDENTIFIER LPAREN arguments RPAREN { $$ = stmt_create_expr(expr_create_call($1, $3), 0); }
    | IDENTIFIER LPAREN arguments RPAREN COMMA extend_statement { $$ = stmt_create_expr(expr_create_call($1, $3), $6); }
    ;

requirements_statement:
    { $$ = 0; }
    | IDENTIFIER IDENTIFIER LPAREN arguments RPAREN { $$ = 0; }
    | IDENTIFIER IDENTIFIER LPAREN arguments RPAREN COMMA requirements_statement { $$ = 0; }
    ;

include_statement:
    { $$ = 0; }
    | IDENTIFIER LPAREN arguments RPAREN { $$ = stmt_create_expr(expr_create_call($1, $3), 0); }
    | IDENTIFIER LPAREN arguments RPAREN COMMA extend_statement { $$ = stmt_create_expr(expr_create_call($1, $3), $6); }
    ;

param:
    { $$ = NULL; }
    | type IDENTIFIER { $$ = param_create($2, $1, 0, 0); }
    | type IDENTIFIER ASSIGN exp { $$ = param_create($2, $1, $4, 0); }
    | type IDENTIFIER COMMA param { $$ = param_create($2, $1, 0, $4); }
    | param COMMA type IDENTIFIER ASSIGN exp { $$ = param_create($3, $1, $4, $6); }
    ;

arguments:
    { $$ = 0; }
    | IDENTIFIER ASSIGN exp {$$ = expr_create_arg($3, 0); }
    | IDENTIFIER ASSIGN exp COMMA arguments { $$ = expr_create_arg($3, $5); }
    ;

errors:
    | ERROR
    | ERROR IDENTIFIER
    | errors ERROR
    | errors ERROR IDENTIFIER
    ;

access_modifier:
    { $$ = 0; }
    | PUBLIC { $$ = MODIFIER_PUBLIC; }
    | PRIVATE { $$ = MODIFIER_PRIVATE; }
    ;

    

exp:
    { $$ = NULL; }
    | IDENTIFIER { $$ = expr_create_name($1); }
    | NUM { $$ = expr_create_integer_literal($1); }
    | TRUE_ { $$ = expr_create_boolean_literal(1); }
    | FALSE_ { $$ = expr_create_boolean_literal(0); }
    | exp ASSIGN exp { $$ = expr_create_assign($1, $3); }
    | exp PLUS exp { $$ = expr_create_add($1, $3); }
    | exp MINUS exp { $$ = expr_create_sub($1, $3); }
    | exp TIMES exp { $$ = expr_create_mul($1, $3); }
    | exp DIVIDE exp { $$ = expr_create_div($1, $3); }
    | IDENTIFIER LPAREN arguments RPAREN { $$ = expr_create_call(expr_create_name($1), $3); }
    ;

decl:
    { $$ = 0; }
    | type IDENTIFIER SEMICOLON decl { $$ = decl_create($2, $1, 0, 0, $4); }
    | type IDENTIFIER ASSIGN exp SEMICOLON decl { $$ = decl_create($2, $1, $4, 0, $6); }
    ;

statement:
    { $$ = NULL; }
    | IF LPAREN exp RPAREN LCBRACKET statement RCBRACKET statement { $$ = stmt_create_if($3, $6, 0); }
    | FOR LPAREN exp COMMA exp COMMA exp RPAREN LCBRACKET statement RCBRACKET statement { $$ = stmt_create_for($3, $5, $7, $10, 0); }
    | WHILE LPAREN exp RPAREN LCBRACKET statement RCBRACKET statement { $$ = stmt_create_while($3, $6, 0); }
    | RETURN exp SEMICOLON statement { $$ = stmt_create_return($2); }
    | exp SEMICOLON statement { $$ = stmt_create_expr($1, $3); }
    | type IDENTIFIER SEMICOLON statement { $$ = stmt_create_decl(decl_create($2, $1, 0, 0, 0), $4); }
    | type IDENTIFIER ASSIGN exp SEMICOLON statement { $$ = stmt_create_decl(decl_create($2, $1, $4, 0, 0), $6); }
    ;

type:
    { $$ = 0;}
    | IDENTIFIER { $$ = 0; }
    | I1 { $$ = type_create_integer_8(); }
    | I2 { $$ = type_create_integer_16(); }
    | I4 { $$ = type_create_integer_32(); }
    | I8 { $$ = type_create_integer_64(); }
    | UI1 { $$ = type_create_unsigned_integer_8(); }
    | UI2 { $$ = type_create_unsigned_integer_16(); }
    | UI4 { $$ = type_create_unsigned_integer_32(); }
    | UI8 { $$ = type_create_unsigned_integer_64(); }
    | BOOLEAN { $$ = type_create_bool(); }
    | CHARACTER { $$ = type_create_char(); }
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

    bool build = yyparse();

    decl_resolve(code);
    decl_typecheck(code);

    // struct dag_node * dag = malloc(sizeof(*dag));
    // dag = dag_node_create_decl(code);
    code_gen(code);
    

    if (build)
    {
        printf("********************Build Failed!***********************\n");
    }
    else
    {
        printf("*********************Build Succesfull!***********************\n");
    }

    return 0;
}
