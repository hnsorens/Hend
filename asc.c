

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ScopeStack * scope;

typedef enum
{
    TYPE_FUNCTION,
    TYPE_MODULE,
    TYPE_OBJECT,
    TYPE_EXTEND,
    TYPE_REQUIREMENT,
    TYPE_INCLUDE,
    TYPE_CONSTRUCTOR,
    TYPE_INTEGER_8,
    TYPE_INTEGER_16,
    TYPE_INTEGER_32,
    TYPE_INTEGER_64,
    TYPE_UNSIGNED_INTEGER_8,
    TYPE_UNSIGNED_INTEGER_16,
    TYPE_UNSIGNED_INTEGER_32,
    TYPE_UNSIGNED_INTEGER_64,
    TYPE_INTEGER,
    TYPE_BOOLEAN,
    TYPE_CHARACTER,
    TYPE_STRING,
    TYPE_ARRAY
} Type_t;

typedef enum
{
    MODIFIER_PUBLIC,
    MODIFIER_PRIVATE,
    MODIFIER_STATIC
} Modifier_t;

typedef enum
{
    STMT_DECL,
    STMT_IF,
    STMT_FOR,
    STMT_WHILE,
    STMT_BLOCK,
    STMT_EXPR,
    STMT_RETURN,
    STMT_CALL
} Stmt_t;

typedef enum
{
    EXPR_ASSIGN,
    EXPR_NAME,
    EXPR_INTEGER,
    EXPR_BOOLEAN,
    EXPR_CHAR,
    EXPR_STRING,
    EXPR_LT,
    EXPR_INC,
    EXPR_CALL,
    EXPR_ARG,
    
    EXPR_ADD,
    EXPR_SUB,
    EXPR_MUL,
    EXPR_DIV
} Expr_t;

struct Decl
{
    const char * name;
    struct Type * type;
    struct Expr * value;
    struct Stmt * code;
    struct Decl * next;
    struct Symbol * symbol;
    int local_variable_count;
    int parameter_count;
};

struct Type
{
    Type_t kind;
    struct Type * subtype;
    struct Param * params;
};

struct Param
{
    const char * name;
    struct Type * type;
    struct Expr * value;
    struct Param * next;
    struct Symbol * symbol;
};

struct Stmt
{
    Stmt_t kind;
    struct Decl * decl;
    struct Expr * init_expr;
    struct Expr * expr;
    struct Expr * next_expr;
    struct Stmt * body;
    struct Stmt * else_body;
    struct Stmt * next;
};

struct Expr
{
    Expr_t kind;
    struct Expr *left;
    struct Expr *right;

    struct Symbol * symbol;

    const char *name;
    int integer_value;
    char char_literal;
    const char* string_literal;

    int reg;
};

struct Modifier
{
    Modifier_t kind;
    struct Modifier * next;
};

struct Stmt * stmt_create( Stmt_t kind,
                           struct Decl *decl, struct Expr *init_expr,
                           struct Expr *expr, struct Expr *next_expr,
                           struct Stmt *body, struct Stmt *else_body,
                           struct Stmt *next )
{
    struct Stmt * s = malloc(sizeof(*s));
    s->kind = kind;
    s->decl = decl;
    s->init_expr = init_expr;
    s->expr = expr;
    s->next_expr = next_expr;
    s->body = body;
    s->else_body = else_body;
    s->next = next;

    return s;
}

struct Stmt * stmt_create_decl(struct Decl * decl, struct Stmt * next)
{
    struct Stmt * s = stmt_create(STMT_DECL, decl, 0, 0, 0, 0, 0, next);

    return s;
}

struct Stmt * stmt_create_block(struct Stmt * block)
{
    struct Stmt * s = stmt_create(STMT_BLOCK, 0, 0, 0, 0, block, 0, 0);

    return s;
}

struct Stmt * stmt_create_for(struct Expr * init_expr, struct Expr * expr, struct Expr * next_expr, struct Stmt * body, struct Stmt * next)
{
    struct Stmt * s = stmt_create(STMT_FOR, 0, init_expr, expr, next_expr, stmt_create_block(body), 0, next);

    return s;
}

struct Stmt * stmt_create_call(struct Expr * call, struct Expr * next)
{
    struct Stmt * s = stmt_create(STMT_CALL, 0, 0, call, 0, 0, 0, next);
}

struct Stmt * stmt_create_expr(struct Expr * expr, struct Stmt * next)
{
    struct Stmt * s = stmt_create(STMT_EXPR, 0, 0, expr, 0, 0, 0, next);

    return s;
}

struct Stmt * stmt_create_return(struct Expr * expr)
{
    struct Stmt * s = stmt_create(STMT_RETURN, 0, 0, expr, 0, 0, 0, 0);

    return s;
}

struct Stmt * stmt_create_if(struct Expr * expr, struct Stmt * body, struct Stmt * next)
{
    struct Stmt * s = stmt_create(STMT_IF, 0, 0, expr, 0, stmt_create_block(body), 0, next);

    return s;
}

struct Stmt * stmt_create_while(struct Expr * expr, struct Stmt * body, struct Stmt * next)
{
    struct Stmt * s = stmt_create(STMT_WHILE, 0, 0, expr, 0, stmt_create_block(body), 0, next);

    return s;
}

struct Decl * decl_create( char *name,
                        struct Type *type,
                        struct Expr *value,
                        struct Stmt *code,
                        struct Decl *next )
{
    struct Decl *d = malloc(sizeof(*d));
    d->name = name;
    d->type = type;
    d->value = value;
    d->code = code;
    d->next = next;

    return d;
}

struct Expr * expr_create( Expr_t kind,
                           struct Expr *L,
                           struct Expr *R )
{
    struct Expr * e = malloc(sizeof(*e));
    e->kind = kind;
    e->left = L;
    e->right = R;

    return e;
}

struct Expr * expr_create_call( struct Expr *name, struct Expr * args)
{
    struct Expr * e = expr_create(EXPR_CALL, name, args);

    return e;
}

struct Expr * expr_create_arg( struct Expr * obj, struct Expr * next)
{
    struct Expr * e = expr_create(EXPR_ARG, obj, next);

    return e;
}

struct Expr * expr_create_name( const char *name )
{
    struct Expr * e = expr_create( EXPR_NAME ,0 ,0);
    e->name = name;

    return e;
}

struct Expr * expr_create_integer_literal( int i )
{
    struct Expr * e = expr_create( EXPR_INTEGER ,0 ,0);
    e->integer_value = i;

    return e;
}

struct Expr * expr_create_boolean_literal( int b )
{
    struct Expr * e = expr_create( EXPR_BOOLEAN ,0 ,0);
    e->integer_value = b;

    return e;
}

struct Expr * expr_create_char_literal( char c )
{
    struct Expr * e = expr_create( EXPR_CHAR ,0 ,0);
    e->char_literal = c;

    return e;
}

struct Expr * expr_create_string_literal( const char *str )
{
    struct Expr * e = expr_create( EXPR_STRING ,0 ,0);
    e->string_literal = str;

    return e;
}

struct Expr * expr_create_assign(struct Expr * L, struct Expr * R)
{
    struct Expr * e = expr_create( EXPR_ASSIGN ,expr_create_name(L->name) ,R);

    return e;
}

struct Expr * expr_create_add(struct Expr * L, struct Expr * R)
{
    struct Expr * e = expr_create( EXPR_ADD, L, R);

    return e;
}

struct Expr * expr_create_sub(struct Expr * L, struct Expr * R)
{
    struct Expr * e = expr_create( EXPR_SUB, L, R);

    return e;
}

struct Expr * expr_create_mul(struct Expr * L, struct Expr * R)
{
    struct Expr * e = expr_create( EXPR_MUL, L, R);

    return e;
}

struct Expr * expr_create_div(struct Expr * L, struct Expr * R)
{
    struct Expr * e = expr_create( EXPR_DIV, L, R);

    return e;
}

struct Expr * expr_create_lt(struct Expr * L, struct Expr * R)
{
    struct Expr * e = expr_create( EXPR_LT, L, R);

    return e;
}

struct Expr * expr_create_inc(struct Expr * L, struct Expr * R)
{
    struct Expr * e = expr_create( EXPR_INC, L, R);

    return e;
}

struct Type * type_create(Type_t kind, struct Type * subtype, struct Param * param)
{
    struct Type * t = malloc(sizeof(*t));
    t->kind = kind;
    t->subtype = subtype;
    t->params = param;

    return t;
}

struct Type * type_create_function(struct Type * subtype, struct Param * param)
{
    struct Type * t = type_create(TYPE_FUNCTION, subtype, param);

    return t;
}

struct Type * type_create_extend()
{
    struct Type * t = type_create(TYPE_EXTEND, 0, 0);

    return t;
}

struct Type * type_create_requirement()
{
    struct Type * t = type_create(TYPE_REQUIREMENT, 0, 0);

    return t;
}

struct Type * type_create_include()
{
    struct Type * t = type_create(TYPE_INCLUDE, 0, 0);

    return t;
}

struct Type * type_create_constructor()
{
    struct Type * t = type_create(TYPE_CONSTRUCTOR, 0, 0);

    return t;
}

struct Type * type_create_object()
{
    struct Type * t = type_create(TYPE_OBJECT, 0, 0);

    return t;
}

struct Type * type_create_module()
{
    struct Type * t = type_create(TYPE_MODULE, 0, 0);

    return t;
}

struct Type * type_create_integer_8()
{
    struct Type * t = type_create(TYPE_INTEGER_8, 0, 0);

    return t;
}

struct Type * type_create_integer_16()
{
    struct Type * t = type_create(TYPE_INTEGER_16, 0, 0);

    return t;
}

struct Type * type_create_integer_32()
{
    struct Type * t = type_create(TYPE_INTEGER_32, 0, 0);

    return t;
}

struct Type * type_create_integer_64()
{
    struct Type * t = type_create(TYPE_INTEGER_64, 0, 0);

    return t;
}

struct Type * type_create_unsigned_integer_8()
{
    struct Type * t = type_create(TYPE_UNSIGNED_INTEGER_8, 0, 0);

    return t;
}

struct Type * type_create_unsigned_integer_16()
{
    struct Type * t = type_create(TYPE_UNSIGNED_INTEGER_16, 0, 0);

    return t;
}

struct Type * type_create_unsigned_integer_32()
{
    struct Type * t = type_create(TYPE_UNSIGNED_INTEGER_32, 0, 0);

    return t;
}

struct Type * type_create_unsigned_integer_64()
{
    struct Type * t = type_create(TYPE_UNSIGNED_INTEGER_64, 0, 0);

    return t;
}

struct Type * type_create_bool()
{
    struct Type * t = type_create(TYPE_BOOLEAN, 0, 0);

    return t;
}

struct Type * type_create_char()
{
    struct Type * t = type_create(TYPE_CHARACTER, 0, 0);

    return t;
}

struct Type * type_create_array(struct Type * subtype, struct Param * param)
{
    struct Type * t = type_create(TYPE_ARRAY, subtype, param);

    return t;
}

struct Param * param_create( const char* name, struct Type * type, struct Expr * value, struct Param * param)
{
    struct Param * p = malloc(sizeof(*p));
    p->name = name;
    p->type = type;
    p->value = value;
    p->next = param;

    return p;
}

struct Modifier * modifier_create( Modifier_t kind, struct Modifier * next)
{
    struct Modifier * m = malloc(sizeof(*m));
    m->kind = kind;
    m->next = next;

    return m;
}





// Semantic Analysis

int parameterPosition = 0;
int localVariablePosition = 0;

typedef enum
{
    SYMBOL_LOCAL,
    SYMBOL_PARAM,
    SYMBOL_GLOBAL
} Symbol_t;

struct Symbol
{
    Symbol_t kind;
    struct Type * type;
    char * name;
    int which;
    int position;
    int isParameter;
};

struct SymbolTableEntry
{
    struct Symbol * symbol;
    struct SymbolTableEntry * next;
};

struct SymbolTable
{
    struct SymbolTableEntry ** table;
    int size;
};

struct ScopeStackElement
{
    struct SymbolTable * symbolTable;
    int level;
    struct ScopeStackElement * next;
};

struct ScopeStack
{
    struct ScopeStackElement * top;
};

int param_resolve(struct Param *p);
void decl_resolve(struct Decl *d);
int stmt_resolve(struct Stmt *s);
void expr_resolve(struct Expr *e);
//void param_typecheck(struct Param *p);
//void decl_typecheck(struct Decl *d);
//void stmt_typecheck(struct Stmt *s);
//struct Type *expr_typecheck(struct Expr *e);
void type_delete( struct Type * t);
struct Type * type_copy(struct Type * t);
bool type_equals( struct Type * a, struct Type * b);
struct Symbol * scope_lookup_current( const char * name );
struct Symbol * scope_lookup( const char * name );
void scope_bind( const char* name, struct Symbol *sym);
int scope_level();
void scope_exit();
void scope_enter();
struct ScopeStack * scope_stack_create();
struct Symbol * symbol_find();
struct SymbolTable * symbol_table_create(int size);
struct Symbol * symbol_create( Symbol_t kind, struct Type * type, char * name, int position, int isParam);
struct Param * param_copy(struct Param * p);
void type_print(struct Type * type);
void expr_print(struct Expr * e);

void expr_print(struct Expr * e)
{
    switch (e->kind)
    {
    case EXPR_NAME: 
        printf(e->name);
        break;
    case EXPR_BOOLEAN:
        printf(e->integer_value==1 ? "True" : "False");
        break;
    case EXPR_CHAR:
        printf("'%c'", e->char_literal);
        break;
    case EXPR_INTEGER:
        printf("%i", e->integer_value);
        break;
    
    default:
        break;
    }
}

int is_num(struct Type * t)
{
    Type_t k = t->kind;
    if (k == TYPE_INTEGER_8 ||
        k == TYPE_INTEGER_16 ||
        k == TYPE_INTEGER_32 ||
        k == TYPE_INTEGER_64 ||
        k == TYPE_UNSIGNED_INTEGER_8 ||
        k == TYPE_UNSIGNED_INTEGER_16 ||
        k == TYPE_UNSIGNED_INTEGER_32 ||
        k == TYPE_UNSIGNED_INTEGER_64 ||
        k == TYPE_INTEGER)
    {
        return 1;
    }

    return 0;
}

void type_print(struct Type * type)
{
    if (!type) return;

    switch (type->kind)
    {
    case TYPE_INTEGER_8:
        printf("int8");
        break;
    case TYPE_INTEGER_16:
        printf("int16");
        break;
    case TYPE_INTEGER_32:
        printf("int32");
        break;
    case TYPE_INTEGER_64:
        printf("int64");
        break;
    case TYPE_UNSIGNED_INTEGER_8:
        printf("uint8");
        break;
    case TYPE_UNSIGNED_INTEGER_16:
        printf("uint16");
        break;
    case TYPE_UNSIGNED_INTEGER_32:
        printf("uint32");
        break;
    case TYPE_UNSIGNED_INTEGER_64:
        printf("uint64");
        break;
    case TYPE_ARRAY:
        printf("array");
        break;
    case TYPE_BOOLEAN:
        printf("boolean");
        break;
    case TYPE_CHARACTER:
        printf("char");
        break;
    case TYPE_STRING:
        printf("string");
        break;
    case TYPE_INTEGER:
        printf("int");
    
    default:
        break;
    }
}

struct Symbol * symbol_create( Symbol_t kind, struct Type * type, char * name, int position, int isParam)
{
    struct Symbol * s = malloc(sizeof(*s));
    s->kind = kind;
    s->type = type;
    s->name = name;
    s->position = position;
    s->isParameter = isParam;

    return s;
}

struct SymbolTable * symbol_table_create(int size)
{
    struct SymbolTable * t = malloc(sizeof(*t));
    t->size = size;
    t->table = (struct SymbolTableEntry **)malloc(sizeof(struct SymbolTableEntry*) * size);

    for (int i = 0; i < size; i++)
    {
        t->table[i] = 0;
    }

    return t;
}

void symbol_insert(struct SymbolTable * table, const char* name, struct Symbol * symbol)
{
    if (!table || !name || !symbol) return;

    unsigned int hash = 0;
    for (const char *p = name; *p != '\0'; p++) {
        hash = hash * 31 + (unsigned int)*p;
    }
    hash = hash % table->size;

    struct SymbolTableEntry * entry = malloc(sizeof(*entry));
    entry->symbol = symbol;
    entry->next = 0;

    if (table->table[hash] == 0)
    {
        table->table[hash] = entry;
    }
    else
    {
        struct SymbolTableEntry * current = table->table[hash];
        while (current->next != 0)
        {
            current = current->next;
        }
        current->next = entry;
    }
}

struct Symbol * symbol_find(struct SymbolTable * table, const char * name)
{
    if (!table || !name) return 0;

    unsigned int hash = 0;
    for (const char *p = name; *p != '\0'; p++) {
        hash = hash * 31 + (unsigned int)*p;
    }
    hash = hash % table->size;

    struct SymbolTableEntry * current = table->table[hash];
    while (current != 0)
    {
        if (strcmp(current->symbol->name, name) == 0)
        {
            return current->symbol;
        }
        current = current->next;
    }

    return 0;
    

}

struct ScopeStack * scope_stack_create()
{
    struct ScopeStack * s = malloc(sizeof(*s));
    s->top = 0;

    return s;
} 

void scope_enter()
{
    struct ScopeStackElement * e = malloc(sizeof(*e));
    e->symbolTable = symbol_table_create(100);
    e->level = (scope->top == 0) ? 0 : (scope->top->level + 1);
    e->next = scope->top;
    scope->top = e;
}

void scope_exit()
{
    if (scope->top != 0)
    {
        struct ScopeStackElement * e = scope->top;
        scope->top = e->next;
        free(e);
    }
}

int scope_level()
{
    if (scope->top != 0)
    {
        return scope->top->level;
    }
    return -1;
}

void scope_bind( const char* name, struct Symbol *sym)
{
    if (scope->top != 0)
    {
        struct SymbolTable * s = scope->top->symbolTable;
        symbol_insert(s, name, sym);
    }
}

struct Symbol * scope_lookup( const char * name )
{
    struct ScopeStackElement * s = scope->top;
    while (s != 0)
    {
        struct SymbolTable * t = s->symbolTable;
        struct Symbol * sym = symbol_find(t, name);
        if (sym != 0)
        {
            return sym;
        }
        s = s->next;
    }
    return 0;
}

struct Symbol * scope_lookup_current( const char * name )
{
    if (scope->top != 0)
    {
        struct SymbolTable * t = scope->top->symbolTable;
        return symbol_find(t, name);
    }
    return 0;
}

bool type_equals( struct Type * a, struct Type * b)
{
    if (!a || !b) return false;

    if (is_num(a) && is_num(b)) return true;

    if (a->kind != b->kind) return false;

    if (a->kind == TYPE_FUNCTION)
    {
        return type_equals(a->subtype, b->subtype);
    }
    else if (a->kind == TYPE_ARRAY)
    {
        return type_equals(a->subtype, b->subtype);
    }
    else
    {
        return true;
    }
}

struct Param * param_copy(struct Param * p)
{
    if (!p) return 0;

    struct Param *copy = malloc(sizeof(*copy));
    copy->name = p->name;
    copy->next = p->next;
    copy->type = p->type;
    copy->value = p->value;

    return copy;
}


struct Type * type_copy(struct Type * t)
{
    if (!t)
        return 0;

    struct Type *copy = malloc(sizeof(*copy));
    copy->kind = t->kind;
    copy->subtype = type_copy(t->subtype);
    copy->params = param_copy(t->params); // Assuming you have a param_copy function

    return copy;
}

void type_delete( struct Type * t)
{
    if (!t) return;

    type_delete(t->subtype);
    type_delete(t->params);

    free(t);
}

// resolve

void expr_resolve(struct Expr *e) {
    if (!e)
        return;

    if (e->kind == EXPR_NAME) {
        e->symbol = scope_lookup(e->name);
        if (!e->symbol)
        {
            printf("ERROR: `%s` is not defined.\n", e->name);

        }
    } else {
        expr_resolve(e->left);
        expr_resolve(e->right);
    }
}

int stmt_resolve(struct Stmt *s) {
    if (!s)
        return 0;

    int local_vars_count = 0;

    switch (s->kind) {
        case STMT_DECL:
            decl_resolve(s->decl);
            if (s->decl->type->kind != TYPE_FUNCTION)
            {
                local_vars_count++;
            }
            break;
        case STMT_BLOCK:
            scope_enter(); // Enter a new scope for the block
            stmt_resolve(s->body);
            scope_exit(); // Exit the block scope
            break;
        case STMT_IF:
            expr_resolve(s->expr);
            stmt_resolve(s->body);
            stmt_resolve(s->else_body);
            break;
        case STMT_FOR:
            expr_resolve(s->init_expr);
            expr_resolve(s->expr);
            expr_resolve(s->next_expr);
            stmt_resolve(s->body);
            break;
        case STMT_EXPR:
            expr_resolve(s->expr);
            break;
        // Handle other statement types
        default:
            // You should add handling for other statement kinds
            break;
    }

    return stmt_resolve(s->next) + local_vars_count;
}

void decl_resolve(struct Decl *d) {
    if (!d)
        return;

    Symbol_t kind = scope_level() > 0 ? SYMBOL_LOCAL : SYMBOL_GLOBAL;

    d->symbol = symbol_create(kind, d->type, d->name, localVariablePosition, 0);
    if (kind == SYMBOL_LOCAL)localVariablePosition++;
    

    expr_resolve(d->value);
    scope_bind(d->name, d->symbol);

    if (d->code) {
        scope_enter();
        localVariablePosition = 0;
        parameterPosition = 0;
        d->parameter_count = param_resolve(d->type->params);
        d->local_variable_count = stmt_resolve(d->code);
        scope_exit();
    }

    decl_resolve(d->next);
}

int param_resolve(struct Param *p) {
    if (!p)
        return 0;

    Symbol_t kind = scope_level() > 1 ? SYMBOL_LOCAL : SYMBOL_GLOBAL;

    p->symbol = symbol_create(kind, p->type, p->name, parameterPosition, 1);
    parameterPosition++;

    expr_resolve(p->value);
    scope_bind(p->name, p->symbol);

    return param_resolve(p->next) + 1;
}

// typecheck

struct Type *expr_typecheck(struct Expr *e) {
    if (!e)
        return 0;

    struct Type * lt = expr_typecheck(e->left);
    struct Type * rt = expr_typecheck(e->right);

    switch (e->kind) {
        case EXPR_ASSIGN:
            if ((lt->kind != rt->kind) && (is_num(lt) != is_num(rt)))
            {
                printf("Error: cannot assign type ");
                type_print(rt);
                printf(" (");
                expr_print(e->right);
                printf(") to type ");
                type_print(lt);
                printf(" (");
                expr_print(e->left);
                printf(")\n");
            }
            return type_create(TYPE_BOOLEAN, 0, 0);
        case EXPR_NAME:
            return e->symbol->type;
        case EXPR_INTEGER:
            return type_create(TYPE_INTEGER, 0, 0);
        case EXPR_STRING:
            return type_create(TYPE_STRING, 0, 0);
        case EXPR_BOOLEAN:
            return type_create(TYPE_BOOLEAN, 0, 0);
        case EXPR_ADD:
            if (!is_num(lt) || !is_num(rt))
            {
                printf("error: cannot add a ");
                type_print(lt);
                printf(" (");
                expr_print(e->left);
                printf(") to a ");
                type_print(rt);
                printf(" (");
                expr_print(e->right);
                printf(")\n");
            }
            return type_create(TYPE_INTEGER_32, 0, 0);
        case EXPR_SUB:
            if (lt->kind != TYPE_INTEGER_32 || lt->kind != TYPE_INTEGER_32)
            {
                printf("error: cannot subtract a ");
                type_print(lt);
                printf(" (");
                expr_print(e->left);
                printf(") to a ");
                type_print(rt);
                printf(" (");
                expr_print(e->right);
                printf(")\n");
            }
            return type_create(TYPE_INTEGER_32, 0, 0);
        case EXPR_MUL:
            if (lt->kind != TYPE_INTEGER_32 || lt->kind != TYPE_INTEGER_32)
            {
                printf("error: cannot multiply a ");
                type_print(lt);
                printf(" (");
                expr_print(e->left);
                printf(") to a ");
                type_print(rt);
                printf(" (");
                expr_print(e->right);
                printf(")\n");
            }
            return type_create(TYPE_INTEGER_32, 0, 0);
        case EXPR_DIV:
            if (lt->kind != TYPE_INTEGER_32 || lt->kind != TYPE_INTEGER_32)
            {
                printf("error: cannot divide a ");
                type_print(lt);
                printf(" (");
                expr_print(e->left);
                printf(") to a ");
                type_print(rt);
                printf(" (");
                expr_print(e->right);
                printf(")\n");
            }
            return type_create(TYPE_INTEGER_32, 0, 0);
        // Handle other expression types
        default:
            // You should add handling for other expression kinds
            return 0;
    }

    free(lt);
    free(rt);
}

void stmt_typecheck(struct Stmt *s) {
    if (!s)
        return;

    struct Type * t;

    switch (s->kind) {
        case STMT_DECL:
            decl_typecheck(s->decl);
            break;
        case STMT_EXPR:
            expr_typecheck(s->expr);
            break;
        case STMT_BLOCK:
            stmt_resolve(s->body); // Resolve symbols in a block
            stmt_typecheck(s->body); // Typecheck statements in a block
            break;
        case STMT_IF:
            t = expr_typecheck(s->expr);
            if (t->kind != TYPE_BOOLEAN && t->kind != TYPE_INTEGER_32)
            {
                printf("Error: Cannot perform an if statement on a ");
                type_print(t);
                printf(" (");
                expr_print(s->expr);
                printf(")\n");
            }
            free(t);
            stmt_typecheck(s->body);
            stmt_typecheck(s->else_body);
            break;
        case STMT_FOR:
            expr_typecheck(s->init_expr);
            expr_typecheck(s->expr);
            expr_typecheck(s->next_expr);
            stmt_typecheck(s->body);
            break;
        // Handle other statement types
        default:
            // You should add handling for other statement kinds
            break;
    }

    stmt_typecheck(s->next);
}

void decl_typecheck(struct Decl *d) {
    if (!d)
        return;

    struct Type * valueType = expr_typecheck(d->value); // Typecheck the value expression

    if (valueType != 0)
    {
         if (!type_equals( d->type->kind == TYPE_FUNCTION ? d->type->subtype : d->type, valueType))
        {
            printf("Error: Type mismatched in delaration of `%s`. Expected type: ", d->name);
            type_print(d->type->kind == TYPE_FUNCTION ? d->type->subtype : d->type);
            printf(", Actual type: ");
            type_print(valueType);
            printf("\n");
        }
    }

   

    if (d->code) {
        scope_enter(); // Enter a new scope for function code
        param_resolve(d->type->params); // Resolve parameters
        stmt_typecheck(d->code); // Typecheck function body
        scope_exit(); // Exit the function scope
    }

    decl_typecheck(d->next);
}

void param_typecheck(struct Param *p) {
    if (!p)
        return;

    p->type = expr_typecheck(p->value);

    param_typecheck(p->next);
}

// Codegen

const char* expr_codegen(struct Expr * e);
void decl_function_codegen(struct Decl * d, int num_parameters, int num_locals);
void decl_codegen(struct Decl * d);
void stmt_codegen(struct Stmt * s);

bool registers[7];

int label_counter = 0;
char * function_name[100];


void code_gen(struct Decl * d)
{
    registers[0] = 0;
    registers[1] = 0;
    registers[2] = 0;
    registers[3] = 0;
    registers[4] = 0;
    registers[5] = 0;
    registers[6] = 0;

    //test();
    printf(".global Main\n");
    decl_codegen(d);
}

int scratch_alloc()
{
    for (int i = 0; i < 7; i++)
    {
        if (!registers[i])
        {
            registers[i] = 1;
            return i;
        }
    }
    printf("Error: ran out of registers");
    return -1;
}


const char * scratch_name(int r)
{
    switch (r)
    {
    case 0:
        return "\%rbx";
    case 1:
        return "\%r10";
    case 2:
        return "\%r11";
    case 3:
        return "\%r12";
    case 4:
        return "\%r13";
    case 5:
        return "\%r14";
    case 6:
        return "\%r15";
    
    default:
        break;
    }

    return 0;
}

void scratch_free(int r)
{
    registers[r] = 0;
}
int label_create()
{
    return label_counter++;
}

const char * label_name(int label)
{
    const char* text;
    sprintf(text, 8, ".L%i", label);

    return text;
}

const char * symbol_codegen(struct Symbol *s)
{
    if (!s) return;

    char *code = (char *)malloc(100);

    if (code)
    {
        if (s->position < 0)
        {
            snprintf(code, 100, "%s", s->name);
        }
        else
        {
            if (s->isParameter)
            {
                int stackOffset = -((s->position) * 8) - 8;
                printf("%i\n", stackOffset);
                snprintf(code, 100, "%d(%%rbp)", stackOffset);
            }
            else
            {
                int stackOffset = -((s->position) * 8) - 24;
                snprintf(code, 100, "%d(%%rbp)", stackOffset);
            }
            
        }

        return code;
    }
    else
    {
        fprintf(stderr, "Memory allocation failed for symbol code.\n");
        return 0;
    }
    
}

const char* expr_to_char(struct Expr * e)
{

}

const char * char_combine(const char * l, const char * r)
{
    size_t len = strlen(l) + strlen(r) + 1;
    char *result = malloc(len);
    strcpy(result, l);
    return strcat(result, r);
}

int param_get_index(const char * name, struct Param * p)
{
    if (!p) return;
    int i = 0;

    while (p)
    {
        if (p->name == name)
        {
            return i;
        }
        i++;
        p = p->next;
    }
    return -1;
}

int get_param_count(struct Param * p)
{
    if (!p) return;
    int i = 0;

    while (p)
    {
        i++;
        p = p->next;
    }
    return i;
}

const char * get_argument_reg(int i)
{
    switch (i)
    {
    case 0:
        return "%rdx";
    case 1:
        return "%rsi";
    case 2:
        return "%rdx";
    case 3:
        return "%rcx";
    case 4:
        return "%r8";
    case 5:
        return "%r9";
    case 6:
        return "%rax";
    
    default:
        break;
    }
}

void call_codegen(struct Expr * e)
{
    if (!e) return;

    

    struct Symbol * s = symbol_find(scope, e->name);
    

    int param_num = 2;//get_param_count(s->type->params);
    
    

    struct Expr * arg = e->right;

    int arg_i = 0;
    while(arg)
    {
        printf(expr_codegen(arg->left));
        printf("   MOVQ %s, %s\n", scratch_name(arg->left->reg), get_argument_reg(arg_i));
        arg = arg->right;
        arg_i++;
    }

    printf("   PUSHQ %%r10\n");
    printf("   PUSHQ %%r11\n");

    printf("   CALL %s\n", e->left->name);

    printf("   POPQ %%r11\n");
    printf("   POPQ %%r10\n");

    e->reg = 6;
}

const char* expr_codegen(struct Expr * e)
{
    if (!e) return 0;

    char * left_code = expr_codegen(e->left);
    char * right_code = expr_codegen(e->right);

    int left_register = -1;
    int right_register = -1;

    int size = 1;

    if (left_code)
    {
        size += strlen(left_code);
    }
    if (right_code)
    {
        size += strlen(right_code);
    }

    char * code = malloc((size) * sizeof(char));

    if (right_code)
    {// more
        right_register = e->right->reg;
        code = strcat(right_code, code);
    }

    if (left_code)
    {
        left_register = e->left->reg;
        code = strcat(left_code, code);
    }

    char * result;
    char * buffer = malloc(100 * sizeof(char));
    int reg;

    switch (e->kind)
    {
    case EXPR_ADD:
        sprintf(buffer,
        "   ADDQ %s, %s\n",
        scratch_name(right_register), scratch_name(left_register));
        result = strdup(buffer);
        e->reg = left_register;
        scratch_free(right_register);
        return char_combine(code, result);
    case EXPR_SUB:
        sprintf(buffer,
        "   SUBQ %s, %s\n",
        scratch_name(right_register), scratch_name(left_register));
        result = strdup(buffer);
        e->reg = left_register;
        scratch_free(right_register);
        return char_combine(code, result);
    case EXPR_MUL:
        sprintf(buffer,
        "   MULQ %s, %s\n",
        scratch_name(right_register), scratch_name(left_register));
        result = strdup(buffer);
        e->reg = left_register;
        scratch_free(right_register);
        return char_combine(code, result);
    case EXPR_DIV:
        sprintf(buffer,
        "   DIVQ %s, %s\n",
        scratch_name(right_register), scratch_name(left_register));
        result = strdup(buffer);
        e->reg = left_register;
        scratch_free(right_register);
        return char_combine(code, result);
    case EXPR_CALL:
        call_codegen(e);
        return 0;
        break;
    case EXPR_INTEGER:
        reg = scratch_alloc();
        sprintf(buffer,
        "   MOVQ $%i, %s\n",
        e->integer_value, scratch_name(reg));
        result = strdup(buffer);
        e->reg = reg;
        return result;
    case EXPR_NAME:
        reg = scratch_alloc();
        sprintf(buffer,
        "   MOVQ %s, %s\n",
        symbol_codegen(e->symbol), scratch_name(reg));
        result = strdup(buffer);
        e->reg = reg;
        return result;
    case EXPR_ASSIGN:
        sprintf(buffer,
        "   MOVQ %s, %s\n",
        scratch_name(right_register), e->left->name);
        result = strdup(buffer);
        return char_combine(code, result);
    case EXPR_ARG:
        break;
    
    default:
        break;
    }

    return 0;
}

void decl_codegen(struct Decl * d)
{
    if (!d) return;

    switch (d->type->kind)
    {
    case TYPE_FUNCTION:
        decl_function_codegen(d, d->parameter_count, d->local_variable_count); // need to know
        break;

    default:
        printf(expr_codegen(d->value));
        printf("   MOVQ %s, %s\n",scratch_name(d->value->reg) , symbol_codegen(d->symbol));
        break;
    }

    decl_codegen(d->next);
}

void decl_function_codegen(struct Decl * d, int num_parameters, int num_locals)
{
    if (!d) return;

    strcpy(function_name, d->name);
    printf("%s:\n", function_name);

    printf("   PUSHQ %%rbp\n");
    printf("   MOVQ %%rsp, %%rbp\n");

    int local_var_size = num_locals * 8;
    if (local_var_size > 0)
    {
        printf("   SUBQ $%d, %%rsp\n", local_var_size);
    }

    // function body
    stmt_codegen(d->code);

    // function epilogue
    printf(".%s_end: \n", function_name);
    printf("   MOVQ %%rbp, %%rsp\n");
    printf("   POPQ %%rbp\n");
    printf("   RET\n");
}

void stmt_codegen(struct Stmt * s)
{
    if (!s) return;

    switch (s->kind)
    {
    case STMT_EXPR:
        printf(expr_codegen(s->expr));
        scratch_free(s->expr->reg);
        break;
    case STMT_DECL:
        decl_codegen(s->decl);
        break;
    case STMT_RETURN:
        printf(expr_codegen(s->expr));
        printf("   MOV %s, %%rax\n", scratch_name(s->expr->reg));
        printf("   JMP .%s_end\n", function_name);
        scratch_free(s->expr->reg);
        break;
    case STMT_IF:
        int if_else_label = label_create();
        int if_done_label = label_create();
        printf(expr_codegen(s->expr));
        printf("CMP $0, %s\n", scratch_name(s->expr->reg));
        scratch_free(s->expr->reg);
        printf("JE %s\n", label_name(if_else_label));
        stmt_codegen(s->body);
        printf("JMP %s\n", label_name(if_done_label));
        printf("%s:\n", label_name(if_else_label));
        stmt_codegen(s->else_body);
        printf("%s:\n", label_name(if_done_label));
        break;
    case STMT_WHILE:
        int while_top_label = label_create();
        int while_done_label = label_create();
        printf("%s:\n", while_top_label);
        printf(expr_codegen(s->expr));
        printf("CMP $0, %s\n", scratch_name(s->expr->reg));
        scratch_free(s->expr->reg);
        printf("JE %s\n", label_name(while_done_label));
        stmt_codegen(s->body);
        printf("JE %s\n", label_name(while_top_label));
        printf("%s:\n", label_name(while_done_label));
        break;
    case STMT_FOR:
        break;
    case STMT_CALL:
        expr_codegen(s->expr);
        break;
    
    default:
        break;
    }
    
    //printf("asdasd\n");
    stmt_codegen(s->next);
}

void test()
{
    struct Expr * e2 = expr_create_sub(expr_create_add(expr_create_integer_literal(3), expr_create_name("a")), expr_create_name("b"));
    struct Expr * e = expr_create_assign(expr_create_name("c"), e2);
    //struct Expr * e = expr_create_add(expr_create_integer_literal(10), expr_create_integer_literal(2));
    const char * text = expr_codegen(e);
    printf(text);
}