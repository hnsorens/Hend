#include <stdint.h>
#include <stdio.h>

int error = 0;
FILE * file;


// Symbol

typedef enum
{
    SYMBOL_LOCAL,
    SYMBOL_PARAM,
    SYMBOL_GLOBAL
} symbol_t;

struct symbol
{
    symbol_t kind;
    struct type * type;
    struct ident * identifier;
    int which;
    struct symbol * next;
    int position;
    int size;
    int isParam;
};

// Identifier

struct ident
{
    struct symbol * sym;
    struct type * type_;
    const char * name;
    int offset;
};

// Type

typedef enum
{
    PRIMITIVE_VOID,
    PRIMITIVE_INTEGER_8,
    PRIMITIVE_INTEGER_16,
    PRIMITIVE_INTEGER_32,
    PRIMITIVE_INTEGER_64,
    PRIMITIVE_INTEGER,
    PRIMITIVE_BOOL,
    PRIMITIVE_CHAR,

} primitives_t;

typedef enum
{
    TYPE_PRIMITIVE,
    TYPE_NAME
} type_t;

struct type
{

    type_t kind;

    union type_type
    {
        primitives_t kind;
        const char * name;
    };

    union type_type * type_;
    struct type_spec * type_specifier;
};

// Function Call

struct expr_function_arg
{
    struct expr * value;
    struct symbol * sym;

    struct expr_function_arg * next;
};

struct expr_function_call
{
    struct ident * identifier;
    struct type * return_type;
    struct expr_function_arg * arguments;
    // more
};

// Operation

struct expr_operation
{
    struct expr * left;
    struct expr * right;
};

// Expression

typedef enum
{
    EXPR_ADD,
    EXPR_SUB,
    EXPR_MUL,
    EXPR_DIV,
    EXPR_FUNCTION_CALL,
    EXPR_IDENTIFIER,
    EXPR_BOOL,
    EXPR_INTEGER,
    EXPR_ASSIGN
} expr_t;

struct expr
{
    expr_t kind;
    type_t type;

    union expr_type
    {
        struct expr_operation * operation;
        struct expr_function_call * function_call;
        struct ident * identifier;
        struct expr_assign * assign;
        int * integer_value; 
        // more
    };

    union expr_type * expr_;
    int reg;
    int size;

    struct expr * next;
    
};

// Function

struct function_param
{
    struct ident * identifier;
    struct type * type_;
    struct expr * value;
    struct symbol * sym;

    struct function_param * next;
    int size;
};

struct decl_function
{
    struct ident * identifier;
    struct type * return_type;
    struct function_param * param;
    struct stmt * body;
    int variable_count;
    int parameter_count;
    int return_size;
};

// Var


// struct decl_array
// {
//     struct array_sub* subscript;
    
//     struct expr ** array_content;

//     int index_size;
// };

struct array_sub
{
    int i;
    struct array_sub * next;
};

typedef enum
{
    TYPE_SPEC_NONE,
    TYPE_SPEC_POINTER,
    TYPE_SPEC_ARRAY
} type_spec_t;

struct type_spec
{
    type_spec_t kind;

    struct array_sub * sub;
};

// struct array_value
// {
//     struct expr * e;
//     struct array_value * a;

//     int offset;

//     struct array_value* next_array;

// };

struct decl_variable
{
    
    struct ident * name;
    struct type * type_;

    struct expr * value;

    
    struct symbol * sym;

    int size;
};

// Declaration

typedef enum
{
    DECL_FUNCTION,
    DECL_VARIABLE_GLOBAL,
    DECL_VARIABLE_LOCAL
} decl_t;

struct decl
{
    decl_t kind;

    union decl_type
    {
        struct decl_function * function;
        struct decl_variable * variable;
        // more
    };

    union decl_type * decl_;

    struct decl * next;
    
};

// Statement

typedef enum
{
    STMT_EXPR,
    STMT_DECL,
    STMT_RETURN
} stmt_t;

struct stmt
{
    stmt_t kind;

    union stmt_type
    {
        struct expr * expression;
        struct decl * declaration;
    };

    union stmt_type * stmt_;

    struct stmt * next;
    
};

// Assignment

struct expr_assign
{
    struct ident * identifier;
    struct expr * expression;
};

void throw_error()
{
    error = 1;
}

// Functions

struct decl * decl_create(decl_t kind)
{
    struct decl * d = malloc(sizeof(*d));
    d->kind = kind;

    return d;
}

struct decl * decl_create_function(struct ident * name, struct function_param * params, struct type * return_type, struct stmt * body)
{
    struct decl * d = decl_create(DECL_FUNCTION);
    d->decl_ = malloc(sizeof(*d->decl_));

    struct decl_function * f = malloc(sizeof(*f));
    f->identifier = name;
    f->param = params;
    f->return_type = return_type;
    f->body = body;
    f->parameter_count = 0;
    f->variable_count = 0;

    if (return_type->kind == TYPE_PRIMITIVE)
    {
        f->return_size = get_primitive_size(return_type->type_->kind);
    }
    else
    {
        f->return_size = 0;
    }



    d->decl_->function = f;

    return d;
}

struct array_sub * array_sub_create(int i, struct array_sub * next)
{
    struct array_sub * a = malloc(sizeof(*a));
    a->i = i;
    a->next = next;

    return a;
}

struct type_spec * type_spec_create_pointer()
{
    struct type_spec * s = malloc(sizeof(*s));
    s->kind = TYPE_SPEC_POINTER;

    return s;
}

struct type_spec * type_spec_create_array(struct array_sub * sub)
{
    struct type_spec * s = malloc(sizeof(*s));
    s->kind = TYPE_SPEC_ARRAY;
    s->sub = sub;

    return s;
}


struct function_param * function_create_param(struct ident * name, struct type * type_, struct expr * value, struct function_para * next)
{
    struct function_param * p = malloc(sizeof(*p));
    
    p->identifier = name;
    p->type_ = type_;
    p->value = value;
    p->next = next;

    if (type_->kind == TYPE_PRIMITIVE)
    {
        p->size = get_primitive_size(type_->type_->kind);
    }

    return p;
}

struct expr * expr_create_name(const char * name, int offset)
{
    struct expr * e = malloc(sizeof(*e));
    e->kind = EXPR_IDENTIFIER;
    e->expr_ = malloc(sizeof(*e->expr_));

    struct ident * i = malloc(sizeof(*i));
    i->name = name;
    i->offset = offset;

    e->expr_->identifier = i;

    return e;
}

struct expr * expr_create_integer(int i)
{
    struct expr * e = malloc(sizeof(*e));
    e->kind = EXPR_INTEGER;
    e->expr_ = malloc(sizeof(*e->expr_));

    e->expr_->integer_value = i;

    return e;
}

struct expr * expr_create_bool(int b)
{
    struct expr * e = malloc(sizeof(*e));
    e->kind = EXPR_BOOL;
    e->expr_ = malloc(sizeof(*e->expr_));

    e->expr_->integer_value = b;

    return e;
}

struct expr * expr_create_assign(struct ident * identifier, struct expr * R)
{
    struct expr * e = malloc(sizeof(*e));
    e->kind = EXPR_ASSIGN;
    e->expr_ = malloc(sizeof(*e->expr_));

    struct expr_assign * a = malloc(sizeof(*a));

    a->identifier = identifier;
    a->expression = R;

    e->expr_->assign = a;

    return e;
}

struct expr * expr_create_add(struct expr * L, struct expr * R)
{
    struct expr * e = malloc(sizeof(*e));
    e->kind = EXPR_ADD;
    e->expr_ = malloc(sizeof(*e->expr_));

    struct expr_operation * o = malloc(sizeof(*o));
    o->left = L;
    o->right = R;

    e->expr_->operation = o;

    return e;
}

struct expr * expr_create_sub(struct expr * L, struct expr * R)
{
    struct expr * e = malloc(sizeof(*e));
    e->kind = EXPR_SUB;
    e->expr_ = malloc(sizeof(*e->expr_));

    struct expr_operation * o = malloc(sizeof(*o));
    o->left = L;
    o->right = R;

    e->expr_->operation = o;

    return e;
}

struct expr * expr_create_mul(struct expr * L, struct expr * R)
{
    struct expr * e = malloc(sizeof(*e));
    e->kind = EXPR_MUL;
    e->expr_ = malloc(sizeof(*e->expr_));

    struct expr_operation * o = malloc(sizeof(*o));
    o->left = L;
    o->right = R;

    e->expr_->operation = o;

    return e;
}

struct expr * expr_create_div(struct expr * L, struct expr * R)
{
    struct expr * e = malloc(sizeof(*e));
    e->kind = EXPR_DIV;
    e->expr_ = malloc(sizeof(*e->expr_));

    struct expr_operation * o = malloc(sizeof(*o));
    o->left = L;
    o->right = R;

    e->expr_->operation = o;

    return e;
}

struct expr_function_arg * expr_function_create_arg(struct expr * value, struct expr_function_arg * next)
{
    struct expr_function_arg * a = malloc(sizeof(*a));
    a->value = value;
    a->next = next;

    return a;
}

struct expr * expr_create_call(struct ident * name, struct expr_function_arg * args)
{
    struct expr * e = malloc(sizeof(*e));
    e->kind = EXPR_FUNCTION_CALL;
    e->expr_ = malloc(sizeof(*e->expr_));

    struct expr_function_call * c = malloc(sizeof(*c));
    c->identifier = name;
    c->arguments = args;

    e->expr_->function_call = c;

    return e;
}

struct type * type_create_primitive(primitives_t kind, struct type_spec * spec)
{
    struct type * t = malloc(sizeof(*t));
    t->kind = TYPE_PRIMITIVE;

    t->type_ = malloc(sizeof(*t->type_));

    t->type_->kind = kind;
    t->type_specifier = spec;

    return t;
}

struct type * type_create_name(const char * name)
{
    struct type * t = malloc(sizeof(*t));
    t->kind = TYPE_NAME;

    t->type_ = malloc(sizeof(*t->type_));

    t->type_->name = name;

    return t;
}

struct decl * decl_create_global_variable_value(struct type * type_, struct ident * i, struct expr * value, struct decl * next)
{
    struct decl * d = malloc(sizeof(*d));
    d->kind = DECL_VARIABLE_GLOBAL;

    d->decl_ = malloc(sizeof(*d->decl_));

    struct decl_variable * v = malloc(sizeof(*v));

    v->name = i;
    v->value = value;

    d->decl_->variable = v;
    d->next = next;
    v->type_ = type_;

    return d;
}

int get_primitive_size(type_t t)
{
    switch (t)
        {
        case PRIMITIVE_BOOL:
            return 1;
            break;
        case PRIMITIVE_CHAR:
            return 1;
            break;
        case PRIMITIVE_INTEGER_8:
            return 1;
            break;
        case PRIMITIVE_INTEGER_16:
            return 2;
            break;
        case PRIMITIVE_INTEGER_32:
            return 4;
            break;
        case PRIMITIVE_INTEGER_64:
            return 8;
            break;
        
        default:
            break;
        }
}

struct decl * decl_create_local_variable_value(struct type * type_, struct ident * i, struct expr * value, struct decl * next)
{
    struct decl * d = malloc(sizeof(*d));
    d->kind = DECL_VARIABLE_LOCAL;

    d->decl_ = malloc(sizeof(*d->decl_));

    struct decl_variable * v = malloc(sizeof(*v));

    v->name = i;
    v->value = value;
    v->type_ = type_;

    if (type_->kind == TYPE_PRIMITIVE)
    {
        v->size = get_primitive_size(type_->type_->kind);
    }

    d->decl_->variable = v;
    d->next = next;

    return d;
}


struct stmt * stmt_create_return(struct expr * return_value)
{
    struct stmt * s = malloc(sizeof(*s));
    s->kind = STMT_RETURN;
    s->stmt_ = malloc(sizeof(*s->stmt_));

    s->stmt_->expression = return_value;

    return s;
}

struct stmt * stmt_create_expr(struct expr * expression, struct expr * next)
{
    struct stmt * s = malloc(sizeof(*s));
    s->kind = STMT_EXPR;
    s->stmt_ = malloc(sizeof(*s->stmt_));

    s->stmt_->expression = expression;
    s->next = next;

    return s;
}

struct stmt * stmt_create_decl(struct decl * declaration, struct stmt * next)
{
    struct stmt * s = malloc(sizeof(*s));
    s->kind = STMT_DECL;

    s->stmt_ = malloc(sizeof(*s->stmt_));

    s->stmt_->declaration = declaration;
    s->next = next;

    return s;
}

struct ident * ident_create(const char * name, int offset)
{
    struct ident * i = malloc(sizeof(*i));
    i->name = name;
    i->offset = offset;

    return i;
}

// Semantic Analysis

// Scope

struct scopeStack * scope;

struct symbolTableEntry
{
    struct symbol * sym;
    struct symbolTableEntry * next;
};

struct symbolTable
{
    struct symbolTableEntry ** table;
    int size;
};

struct scopeStackElement
{
    struct symbolTable * symbolTable;
    int level;
    struct scopeStackElement * next;
};

struct scopeStack
{
    struct scopeStackElement * top;
};

struct symbol * symbol_create( symbol_t kind, struct type * type, struct ident * name, int position, int size)
{
    struct symbol * s = malloc(sizeof(*s));
    s->identifier = name;
    s->kind = kind;
    s->type = type;
    s->position = position;
    s->size = size;

    return s;
}

struct symbolTable * symbol_table_create(int size)
{
    struct symbolTable * t= malloc(sizeof(*t));
    t->size = size;
    t->table = (struct symbolTableEntry **)malloc(sizeof(struct symbolTableEntry*) * size);

    for (int i = 0; i < size; i++)
    {
        t->table[i] = 0;
    }

    return t;
}

void symbol_insert(struct symbolTable * table, struct ident * identifier, struct symbol * sym)
{  
    if (!table || !identifier || !sym) return;

    if (!identifier->name) return;
    unsigned int hash = 0;
    for (const char * p = identifier->name; *p != '\0'; p++)
    {
        hash = hash * 31 + (unsigned int)*p;
    }
    hash = hash % table->size;

    struct symbolTableEntry * entry = malloc(sizeof(*entry));
    entry->sym = sym;
    entry->next = 0;

    if (table->table[hash] == 0)
    {
        table->table[hash] = entry;
    }
    else
    {
        struct symbolTableEntry * current = table->table[hash];
        while (current->next != 0)
        {
            current = current->next;
        }
        current->next = entry;
    }
}

struct symbol * symbol_find(struct symbolTable * table, struct ident * identifier)
{
    if (!table || !identifier) return 0;

    unsigned int hash = 0;
    for (const char * p = identifier->name; * p != '\0'; p++)
    {
        hash = hash * 31 + (unsigned int)*p;
    }
    hash = hash % table->size;

    struct symbolTableEntry * current = table->table[hash];
    while (current != 0)
    {
        if (strcmp(current->sym->identifier->name, identifier->name) == 0)
        {
            return current->sym;
        }
        current = current->next;
    }

    return 0;
}

struct scopeStack * scope_stack_create()
{
    struct scopeStack * s = malloc(sizeof(*s));
    s->top = 0;

    return s;
}

void scope_enter()
{
    struct scopeStackElement * e = malloc(sizeof(*e));
    e->symbolTable = symbol_table_create(256);
    e->level = (scope->top == 0) ? 0 : (scope->top->level + 1);
    e->next = scope->top;
    scope->top = e;
}

void scope_exit()
{
    if (scope->top != 0)
    {
        struct scopeStackElement * e = scope->top;
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

void scope_bind(struct ident * identifier, struct symbol *sym)
{
    if (scope->top != 0)
    {
        struct symbolTable * s = scope->top->symbolTable;
        symbol_insert(s, identifier, sym);
    }
}

struct symbol * scope_lookup(struct ident * identifier)
{
    struct scopeStackElement * s = scope->top;
    while (s != 0)
    {
        struct symbolTable * t = s->symbolTable;
        struct symbol * sym = symbol_find(t, identifier);
        if (sym != 0)
        {
            return sym;
        }
        s = s->next;
    }
    return 0;
}

struct symbol * scope_lookup_current(struct ident * identifier)
{
    if (scope->top != 0)
    {
        struct symbolTable * t = scope->top->symbolTable;
        return symbol_find(t, identifier);
    }
    return 0;
}

// Resolve

void expr_function_call_arg_resolve(struct expr_function_arg * a, struct decl_function * f)
{
    if (!a || error) return;

    symbol_t kind = scope_level() > 0 ? SYMBOL_LOCAL : SYMBOL_GLOBAL;

    
    expr_resolve(a->value, f);

    expr_function_call_arg_resolve(a->next, f);
}

void expr_function_call_resolve(struct expr_function_call * c, struct decl_function * f)
{
    expr_function_call_arg_resolve(c->arguments, f);
}

void ident_resolve(struct ident * i)
{
    if (!i) return;

    i->sym = scope_lookup(i);
    if (!i->sym)
    {
        printf("error: '%s' is not defined.\n", i->name);
        throw_error();
    }
}

void expr_resolve(struct expr * e, struct decl_function * f)
{
    if (!e || error) return;

    switch (e->kind)
    {
    case EXPR_ADD:
        expr_resolve(e->expr_->operation->left, f);
        expr_resolve(e->expr_->operation->right, f);
        break;
    case EXPR_SUB:
        expr_resolve(e->expr_->operation->left, f);
        expr_resolve(e->expr_->operation->right, f);
        break;
    case EXPR_MUL:
        expr_resolve(e->expr_->operation->left, f);
        expr_resolve(e->expr_->operation->right, f);
        break;
    case EXPR_DIV:
        expr_resolve(e->expr_->operation->left, f);
        expr_resolve(e->expr_->operation->right, f);
        break;
    case EXPR_IDENTIFIER:
        ident_resolve(e->expr_->identifier);
        break;
    case EXPR_INTEGER:
        break;
    case EXPR_BOOL:
        break;
    case EXPR_ASSIGN:
        ident_resolve(e->expr_->assign->identifier);
        expr_resolve(e->expr_->assign->expression, f);
        break;
    case EXPR_FUNCTION_CALL:
        expr_function_call_resolve(e->expr_->function_call, f);
        break;
    
    default:
        break;
    }
}

struct symbol * param_resolve(struct function_param * p, struct decl_function * f)
{
    if (!p || error) return;

    p->sym = symbol_create(SYMBOL_LOCAL, p->type_, p->identifier, f->variable_count, p->size);
    p->sym->isParam = 1;

    expr_resolve(p->value, f);
    scope_bind(p->identifier, p->sym);
    
    p->sym->position = f->parameter_count;

    f->parameter_count += 8;

    p->sym->next = param_resolve(p->next, f);

    return p->sym;
}

int get_array_size(struct array_sub * sub)
{
    if (!sub) return 1;
    return sub->i * get_array_size(sub->next);
}

void decl_resolve(struct decl * d, struct decl_function * f)
{
    if (!d || error) return;

    symbol_t kind = scope_level() > 0 ? SYMBOL_LOCAL : SYMBOL_GLOBAL;

    switch (d->kind)
    {
    case DECL_VARIABLE_GLOBAL:
        if (d->decl_->variable->type_->type_specifier)
        {
            switch (d->decl_->variable->type_->type_specifier->kind)
            {
            case TYPE_SPEC_ARRAY:
                f->variable_count += d->decl_->variable->size * get_array_size(d->decl_->variable->type_->type_specifier->sub);
                d->decl_->variable->sym = symbol_create(kind, d->decl_->variable->type_, d->decl_->variable->name, f ? f->variable_count : 0, d->decl_->variable->size * get_array_size(d->decl_->variable->type_->type_specifier->sub));
                expr_resolve(d->decl_->variable->value, f);
                scope_bind(d->decl_->variable->name, d->decl_->variable->sym);
                break;
            case TYPE_SPEC_POINTER:
                /* code */
                break;
            
            default:
                break;
            }
        }
        else
        {
            d->decl_->variable->sym = symbol_create(kind, d->decl_->variable->type_, d->decl_->variable->name, 0, d->decl_->variable->size);
            expr_resolve(d->decl_->variable->value, 0);
            scope_bind(d->decl_->variable->name, d->decl_->variable->sym);
        }
        break;
    case DECL_VARIABLE_LOCAL:
        if (d->decl_->variable->type_->type_specifier)
        {   
            switch (d->decl_->variable->type_->type_specifier->kind)
            {
            case TYPE_SPEC_ARRAY:
                f->variable_count += d->decl_->variable->size * get_array_size(d->decl_->variable->type_->type_specifier->sub);
                d->decl_->variable->sym = symbol_create(kind, d->decl_->variable->type_, d->decl_->variable->name, f ? f->variable_count : 0, d->decl_->variable->size);
                expr_resolve(d->decl_->variable->value, f);
                scope_bind(d->decl_->variable->name, d->decl_->variable->sym);
                break;
            case TYPE_SPEC_POINTER:
                /* code */
                break;
            
            default:
                break;
            }
        }
        else
        {
            f->variable_count += d->decl_->variable->size;
            d->decl_->variable->sym = symbol_create(kind, d->decl_->variable->type_, d->decl_->variable->name, f ? f->variable_count : 0, d->decl_->variable->size);
            expr_resolve(d->decl_->variable->value, f);
            scope_bind(d->decl_->variable->name, d->decl_->variable->sym);
        }
        break;
    case DECL_FUNCTION:

        symbol_t kind = scope_level() > 0 ? SYMBOL_LOCAL : SYMBOL_GLOBAL;

        d->decl_->function->identifier->sym = symbol_create(kind, d->decl_->function->return_type, d->decl_->function->identifier, 0, 0);

        scope_bind(d->decl_->function->identifier, d->decl_->function->identifier->sym);
        
        if (d->decl_->function->body)
        {
            scope_enter();
            d->decl_->function->identifier->sym->next = param_resolve(d->decl_->function->param, d->decl_->function);
            stmt_resolve(d->decl_->function->body, d->decl_->function);
            scope_exit();
        }

        decl_resolve(d->next, f);
        break;
    
    default:
        break;
    }
}

void stmt_resolve(struct stmt * s, struct decl_function * f)
{
    if (!s || error) return;

    switch (s->kind)
    {
    case STMT_DECL:
        decl_resolve(s->stmt_->declaration, f);
        break;
    case STMT_EXPR:
        expr_resolve(s->stmt_->expression, f);
        break;
    case STMT_RETURN:
        expr_resolve(s->stmt_->expression, f);
        break;
    default:
        break;
    }

    stmt_resolve(s->next, f);
}

// Type Check

int is_num(struct type * t)
{
    if (t->kind == TYPE_PRIMITIVE)
    {
        if (t->type_->kind == PRIMITIVE_INTEGER_8 ||
            t->type_->kind == PRIMITIVE_INTEGER_16 ||
            t->type_->kind == PRIMITIVE_INTEGER_32 ||
            t->type_->kind == PRIMITIVE_INTEGER_64 ||
            t->type_->kind == PRIMITIVE_INTEGER)
        {
            return 1;
        }
    }
    return 0;
}

void type_print(struct type * e)
{
    switch (e->kind)
    {
    case TYPE_NAME:
        printf( e->type_->name);
        break;
    case TYPE_PRIMITIVE:
        switch (e->type_->kind)
        {
        case PRIMITIVE_VOID:
            printf( "void");
            break;
        case PRIMITIVE_BOOL:
            printf("bool");
            break;
        case PRIMITIVE_CHAR:
            printf("char");
            break;
        case PRIMITIVE_INTEGER_8:
            printf("int8");
            break;
        case PRIMITIVE_INTEGER_16:
            printf("int16");
            break;
        case PRIMITIVE_INTEGER_32:
            printf("int32");
            break;
        case PRIMITIVE_INTEGER_64:
            printf("int64");
            break;
        
        default:
            printf("%i", e->type_->kind);
            break;
        }
        
    
    default:
        break;
    }
}

void expr_print(struct expr * e)
{
    switch (e->kind)
    {
    case EXPR_IDENTIFIER:
        printf(e->expr_->identifier->name);
        break;
    case EXPR_INTEGER:
        printf("%i", e->expr_->integer_value);
        break;
    case EXPR_BOOL:
        printf("%s", e->expr_->integer_value ? "true" : "false");
        break;
    
    default:
        printf("%i", e->kind);
        break;
    }
}

struct type * expr_typecheck(struct expr * e)
{
    if (!e || error) return;

    switch (e->kind)
    {
    case EXPR_ADD:
        struct type * a_lt = expr_typecheck(e->expr_->operation->left);
        struct type * a_rt = expr_typecheck(e->expr_->operation->right);
        if (!is_num(a_lt) || !is_num(a_rt))
        {
            printf("error: cannot add ");
            expr_print(e->expr_->operation->left);
            printf(" (");
            type_print(a_lt);
            printf(") to ");
            expr_print(e->expr_->operation->right);
            printf(" (");
            type_print(a_rt);
            printf(")\n");
            throw_error();
        }
        return type_create_primitive(PRIMITIVE_INTEGER, 0);
    case EXPR_SUB:
        struct type * s_lt = expr_typecheck(e->expr_->operation->left);
        struct type * s_rt = expr_typecheck(e->expr_->operation->right);
        if (!is_num(s_lt) || !is_num(s_rt))
        {
            printf("error: cannot subtract ");
            expr_print(e->expr_->operation->right);
            printf(" (");
            type_print(s_rt);
            printf(") from ");
            expr_print(e->expr_->operation->left);
            printf(" (");
            type_print(s_lt);
            printf(")\n");
            throw_error();
        }
        return type_create_primitive(PRIMITIVE_INTEGER, 0);
    case EXPR_MUL:
        struct type * m_lt = expr_typecheck(e->expr_->operation->left);
        struct type * m_rt = expr_typecheck(e->expr_->operation->right);
        if (!is_num(m_lt) || !is_num(m_rt))
        {
            printf("error: cannot multiply ");
            expr_print(e->expr_->operation->left);
            printf(" (");
            type_print(m_lt);
            printf(") by ");
            expr_print(e->expr_->operation->right);
            printf(" (");
            type_print(m_rt);
            printf(")\n");
            throw_error();
        }
        return type_create_primitive(PRIMITIVE_INTEGER, 0);
    case EXPR_DIV:
        struct type * d_lt = expr_typecheck(e->expr_->operation->left);
        struct type * d_rt = expr_typecheck(e->expr_->operation->right);
        if (!is_num(d_lt) || !is_num(d_rt))
        {
            printf("error: cannot divide ");
            expr_print(e->expr_->operation->left);
            printf(" (");
            type_print(d_lt);
            printf(") by ");
            expr_print(e->expr_->operation->right);
            printf(" (");
            type_print(d_rt);
            printf(")\n");
            throw_error();
        }
        return type_create_primitive(PRIMITIVE_INTEGER, 0);
    case EXPR_ASSIGN:
        if (e->expr_->assign->identifier->sym->type != expr_typecheck(e->expr_->assign->expression))
        {
            printf("error: cannot assign ");
            expr_print(e->expr_->assign->expression);
            printf(" (");
            type_print(expr_typecheck(e->expr_->assign->expression));
            printf(") to %s (", e->expr_->assign->identifier->name);
            type_print(e->expr_->assign->identifier->sym->type);
            printf(").\n");
            throw_error();
        }
        return expr_typecheck(e->expr_->assign->expression);
    case EXPR_INTEGER:
        return type_create_primitive(PRIMITIVE_INTEGER, 0);
    case EXPR_BOOL:
        return type_create_primitive(PRIMITIVE_BOOL, 0);
    case EXPR_FUNCTION_CALL:
        return e->expr_->function_call->return_type;
    case EXPR_IDENTIFIER:
        return e->expr_->identifier->sym->type;
    default:
        return 0;
    }
}

void param_typecheck(struct function_param * p)
{
    if (!p || error) return;

    if (!p->value) return;

    if (expr_typecheck(p->value) != p->type_)
    {
        printf("error: cannod assign ");
        expr_print(p->value);
        printf(" of type (");
        type_print(expr_typecheck(p->value));
        printf(") to %s of type (", p->identifier->name);
        type_print(p->type_);
        printf(").\n");
        throw_error();
    }

    param_typecheck(p->next);
}

int type_equal(struct type * L, struct type * R)
{
    if (is_num(L) && is_num(R)) return 1;
    if (L->kind == TYPE_PRIMITIVE && R->kind == TYPE_PRIMITIVE)
    {
        if ((is_num(L) && is_num(R)) ||
             (L->type_->kind == R->type_->kind)) return 1;
    }
    else if (L->kind == TYPE_NAME && R->kind == TYPE_NAME)
    {
        if (L->type_->name == R->type_->name) return 1;
    }
    return 0;
}

void decl_typecheck(struct decl * d)
{
    if (!d || error) return;

    switch (d->kind)
    {
    case DECL_FUNCTION:
        if (!d->decl_->function->return_type) 
        {
            printf("error: you must specify a return type. If there is no return type, specify 'void' for the return type.\n");
            throw_error();
        }
        param_typecheck(d->decl_->function->param);
        stmt_typecheck(d->decl_->function->body);
        break;
    case DECL_VARIABLE_GLOBAL: // FIX THIS
        if (!d->decl_->variable->value) return;
        if (!type_equal(d->decl_->variable->type_, expr_typecheck(d->decl_->variable->value)))
        {
            printf("error: cannot assign ");
            expr_print(d->decl_->variable->value);
            printf(" (");
            type_print(expr_typecheck(d->decl_->variable->value));
            printf(") to %s (", d->decl_->variable->name->name);
            type_print(d->decl_->variable->type_);
            printf(").\n");
            throw_error();
        }
        break;
    case DECL_VARIABLE_LOCAL: // FIX THIS
        if (!d->decl_->variable->value) return;
        if (!type_equal(d->decl_->variable->type_, expr_typecheck(d->decl_->variable->value)))
        {
            printf("error: cannot assign ");
            expr_print(d->decl_->variable->value);
            printf(" (");
            type_print(expr_typecheck(d->decl_->variable->value));
            printf(") to %s (", d->decl_->variable->name->name);
            type_print(d->decl_->variable->type_);
            printf(").\n");
            throw_error();
        }
        break;
    
    default:
        break;
    }
}

void stmt_typecheck(struct stmt * s)
{
    if (!s || error) return;

    switch (s->kind)
    {
    case STMT_DECL:
        decl_typecheck(s->stmt_->declaration);
        break;
    case STMT_EXPR:
        expr_typecheck(s->stmt_->expression);
    case STMT_RETURN:
        expr_typecheck(s->stmt_->expression);
    
    default:
        break;
    }
}

int registers[7];

int label_counter = 0;

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
    fprintf(file, "\tsection\t.text\n");
    fprintf(file, "\tglobal\t_start\n\n");

    

    //print function
    // fprintf(file, "printNum:\n");
    // fprintf(file, "    PUSH rbx\n");
    // fprintf(file, "    LEA print_number_format(rip), rdi\n");
    // fprintf(file, "    XOR eax, eax\n");
    // fprintf(file, "    CALL printf\n");
    // fprintf(file, "    POP rbx\n");
    // fprintf(file, "    RET\n");

    decl_codegen(d);

    fprintf(file, "\n\tsection .data\n\n");
    fprintf(file, "message: db\t\"Hello, World\", 10\n");
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


const char * scratch_name(int r, int size)
{

    switch (size)
    {
    case 1:
        switch (r)
        {
        case 0:
            return "bl";
        case 1:
            return "r10b";
        case 2:
            return "r11b";
        case 3:
            return "r12b";
        case 4:
            return "r13b";
        case 5:
            return "r14b";
        case 6:
            return "r15b";
        
        default:
            break;
        }
        break;
    case 2:
        switch (r)
        {
        case 0:
            return "bx";
        case 1:
            return "r10w";
        case 2:
            return "r11w";
        case 3:
            return "r12w";
        case 4:
            return "r13w";
        case 5:
            return "r14w";
        case 6:
            return "r15w";
        
        default:
            break;
        }
        break;
    case 4:
        switch (r)
        {
        case 0:
            return "ebx";
        case 1:
            return "r10d";
        case 2:
            return "r11d";
        case 3:
            return "r12d";
        case 4:
            return "r13d";
        case 5:
            return "r14d";
        case 6:
            return "r15d";
        
        default:
            break;
        }
        break;
    case 8:
        switch (r)
        {
        case 0:
            return "rbx";
        case 1:
            return "r10";
        case 2:
            return "r11";
        case 3:
            return "r12";
        case 4:
            return "r13";
        case 5:
            return "r14";
        case 6:
            return "r15";
        
        default:
            break;
        }
        break;
    
    default:
        break;
    }

    

    return 0;
}

const char * get_argument_reg(int i)
{
    switch (i)
    {
    case 0:
        return "rdx";
    case 1:
        return "rsi";
    case 2:
        return "rdx";
    case 3:
        return "rcx";
    case 4:
        return "r8";
    case 5:
        return "r9";
    case 6:
        return "rax";
    
    default:
        break;
    }
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

const char * symbol_codegen(struct symbol * s, int offset)
{
    if (!s) return;

    char *code = (char *)malloc(100);

    if (code)
    {
        
        if (!s->isParam)
        {
            if (s->type == SYMBOL_GLOBAL)
            {
                snprintf(code, 100, "%s", s->identifier->name);
            }
            else if (s->position != 0)
            {
                const char * type;
                switch (s->size)
                {
                case 1:
                    type = "byte";
                    break;
                case 2:
                    type = "word";
                    break;
                case 4:
                    type = "dword";
                    break;
                case 8:
                    type = "qword";
                    break;
                
                default:
                    break;
                }
                snprintf(code, 100, "%s [rbp - %i]", type, s->position - (offset * s->size));
            }
            else
            {
                const char * type;
                switch (s->size)
                {
                case 1:
                    type = "byte";
                    break;
                case 2:
                    type = "word";
                    break;
                case 4:
                    type = "dword";
                    break;
                case 8:
                    type = "qword";
                    break;
                
                default:
                    break;
                }
                if (offset != 0)
                {
                    snprintf(code, 100, "%s [rbp + %i]", type, (offset * s->size));
                }
                else
                {
                    snprintf(code, 100, "%s [rbp]", type);
                }
            }
        }
        else
        {
            if (s->position != 0)
            {
                const char * type;
                switch (s->size)
                {
                case 1:
                    type = "byte";
                    break;
                case 2:
                    type = "word";
                    break;
                case 4:
                    type = "dword";
                    break;
                case 8:
                    type = "qword";
                    break;
                
                default:
                    break;
                }
                snprintf(code, 100, "%s [rbp + %i]", type, s->position + 16 + (offset * s->size));
            }
            else
            {
                const char * type;
                switch (s->size)
                {
                case 1:
                    type = "byte";
                    break;
                case 2:
                    type = "word";
                    break;
                case 4:
                    type = "dword";
                    break;
                case 8:
                    type = "qword";
                    break;
                
                default:
                    break;
                }
                snprintf(code, 100, "%s [rbp + %i]", type, 16 + (offset * s->size));
            }
            
        }
        

        return code;
    }
    else
    {
        printf("Memory allocation failed for symbol code.\n");
        return 0;
    }
}

void expr_function_call_arg_codegen(struct expr_function_arg * a)
{
    if (!a) return;

    expr_codegen(a->value);
    fprintf(file, "\tpush\t%s\n", scratch_name(a->value->reg, 8));
    scratch_free(a->value->reg);

    expr_function_call_arg_codegen(a->next);
}

void expr_function_call_codegen(struct expr *e)
{
    if (!e) return;

    const char * name = e->expr_->function_call->identifier->name;

    if (!strcmp(name, "printf"))
    {      
        expr_codegen(e->expr_->function_call->arguments->value);

        fprintf(file, "\tmov\teax,\t4\n"); // 4 is print
        fprintf(file, "\tmov\tebx,\t1\n");
        fprintf(file, "\tmov\tecx,\t%s\n", "message");
        fprintf(file, "\tmov\tedx,\t%i\n", 14);
        fprintf(file, "\tint\t0x80\n");
    }
    else
    {
        expr_function_call_arg_codegen(e->expr_->function_call->arguments);

        fprintf(file, "\tcall\t%s%s\n", "function_", e->expr_->function_call->identifier->name);
    }
}

void expr_codegen(struct expr * e)
{
    if (!e) return;

    switch (e->kind)
    {
    case EXPR_ADD:
        expr_codegen(e->expr_->operation->left);
        expr_codegen(e->expr_->operation->right);
        fprintf(file, "\tadd\t%s,\t%s\n", scratch_name(e->expr_->operation->right->reg, 8), scratch_name(e->expr_->operation->left->reg, 8));
        scratch_free(e->expr_->operation->left->reg);
        e->reg = e->expr_->operation->right->reg;
        break;
    case EXPR_SUB:
        expr_codegen(e->expr_->operation->left);
        expr_codegen(e->expr_->operation->right);
        fprintf(file, "\tsub\t%s,\t%s\n", scratch_name(e->expr_->operation->right->reg, 8), scratch_name(e->expr_->operation->left->reg, 8));
        scratch_free(e->expr_->operation->left->reg);
        e->reg = e->expr_->operation->right->reg;
        break;
    case EXPR_MUL:
        expr_codegen(e->expr_->operation->left);
        expr_codegen(e->expr_->operation->right);
        fprintf(file, "\tmov\trax,\t%s\n", scratch_name(e->expr_->operation->right->reg, 8));
        fprintf(file, "\tmul\t%s\n", scratch_name(e->expr_->operation->left->reg, 8));
        scratch_free(e->expr_->operation->right->reg);
        e->reg = e->expr_->operation->right->reg;
        break;
    case EXPR_DIV:
        expr_codegen(e->expr_->operation->left);
        expr_codegen(e->expr_->operation->right);
        fprintf(file, "\tdiv\t%s,\t%s\n", scratch_name(e->expr_->operation->right->reg, 8), scratch_name(e->expr_->operation->left->reg, 8));
        scratch_free(e->expr_->operation->left->reg);
        e->reg = e->expr_->operation->right->reg;
        break;
    case EXPR_ASSIGN:
        expr_codegen(scratch_name(e->expr_->assign->expression, 8));
        if (e->expr_->assign->expression->kind != EXPR_IDENTIFIER)
        {
            expr_codegen(e->expr_->assign->expression);
            fprintf(file, "\tmov\t%s,\t%s\n", symbol_codegen(e->expr_->assign->identifier->sym, e->expr_->assign->identifier->offset), scratch_name(e->expr_->assign->expression->reg, e->expr_->assign->identifier->sym->size));
            scratch_free(e->expr_->assign->expression->reg);
        }
        else
        {
            fprintf(file, "\tmov\t%s,\t%s\n", symbol_codegen(e->expr_->assign->identifier->sym, e->expr_->assign->identifier->offset), symbol_codegen(e->expr_->assign->expression->expr_->identifier->sym, e->expr_->assign->expression->expr_->identifier->offset));
        }
        break;
    case EXPR_FUNCTION_CALL:
        expr_function_call_codegen(e);
        e->reg = scratch_alloc();
        fprintf(file, "\tmov\t%s,\trax\n", scratch_name(e->reg, 8));
        break;
    case EXPR_IDENTIFIER:
        e->reg = scratch_alloc();
        fprintf(file, "\tmov\t%s,\t%s\n", scratch_name(e->reg, e->expr_->identifier->sym->size), symbol_codegen(e->expr_->identifier->sym, e->expr_->identifier->offset));
        break;
    case EXPR_INTEGER:
        e->reg = scratch_alloc();
        fprintf(file, "\tmov\t%s,\t%i\n", scratch_name(e->reg, 8), e->expr_->integer_value);
        break;
    case EXPR_BOOL:
        e->reg = scratch_alloc();
        fprintf(file, "\tmov\t%s,\t%i\n", scratch_name(e->reg, 8), e->expr_->integer_value);
        break;
    
    default:
        break;
    }
}

void stmt_codegen(struct stmt * s, struct decl_function * f)
{
    if (!s) return;

    switch (s->kind)
    {
    case STMT_DECL:
        decl_codegen(s->stmt_->declaration);
        break;
    case STMT_EXPR:
        expr_codegen(s->stmt_->expression);
        break;
    case STMT_RETURN:
        expr_codegen(s->stmt_->expression);
        fprintf(file, "\tmov\trax,\t%s\n", scratch_name(s->stmt_->expression->reg, 8));
        // fprintf(file, "    JMP .%s_end\n", f->identifier->name);
        scratch_free(s->stmt_->expression->reg);
        break;
    
    default:
        break;
    }

    stmt_codegen(s->next, f);
}

void decl_function_arg_codegen(struct function_param * p)
{
    if (!p) return;

    int reg = scratch_alloc();
    fprintf(file, "\tmov\t%s,\t%s\n", scratch_name(reg, p->size), symbol_codegen(p->sym, 0));
    fprintf(file, "\tmov\t%s,\t%s\n", symbol_codegen(p->sym, 0), scratch_name(reg, p->size));
    decl_function_arg_codegen(p->next);
}

void decl_function_codegen(struct decl_function * f)
{
    if (!f) return;

    const char * start = "main";

    if (strcmp(f->identifier->name, start) == 0)
    {
        fprintf(file, "_start:\n");

        fprintf(file, "\tpush\trbp\n");
        fprintf(file, "\tmov\trbp,\trsp\n");

        int local_var_size = f->variable_count;
        if (local_var_size > 0)
        {
            fprintf(file, "\tsub\trsp,\t%i\n", local_var_size);
        }

        stmt_codegen(f->body, f);

        if (local_var_size > 0)
        {
            fprintf(file, "\tadd\trsp,\t%i\n", local_var_size);
        }

        fprintf(file, "\tpop\trbp\n");
        fprintf(file, "\txor\trbx,\trbx\n"); // return code is 0 for now
        fprintf(file, "\tint\t0x80\n");
    }
    else
    {
        fprintf(file, "%s%s:\n", "function_", f->identifier->name);

        fprintf(file, "\tpush\trbp\n");
        fprintf(file, "\tmov\trbp,\trsp\n");
        
        int local_var_size = f->variable_count;
        if (local_var_size > 0)
        {
            fprintf(file, "\tsub\trsp,\t%i\n", local_var_size);
        }

        stmt_codegen(f->body, f);

        if (local_var_size > 0)
        {
            fprintf(file, "\tadd\trsp,\t%i\n", local_var_size);
        }

        fprintf(file, "\tpop\trbp\n");
        fprintf(file, "\tret\n");
    }


}

void decl_codegen(struct decl * d)
{
    if (!d) return;

    switch (d->kind)
    {
    case DECL_FUNCTION:
        decl_function_codegen(d->decl_->function);
        break;
    case DECL_VARIABLE_GLOBAL:
        if (d->decl_->variable->value)
        {
            expr_codegen(d->decl_->variable->value);
            fprintf(file, "\tMOVQ\t%s,\t%s\n", scratch_name(d->decl_->variable->value->reg, 8), symbol_codegen(d->decl_->variable->sym, 0));
        }
        break;
    case DECL_VARIABLE_LOCAL:
        if (d->decl_->variable->value)
        {   
            expr_codegen(d->decl_->variable->value);
            fprintf(file, "\tmov\t%s,\t%s\n", symbol_codegen(d->decl_->variable->sym, 0), scratch_name(d->decl_->variable->value->reg, d->decl_->variable->sym->size));
        }
        
        break;

    
    default:
        break;
    }

    decl_codegen(d->next);
}