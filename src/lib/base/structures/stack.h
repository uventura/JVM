#ifndef JVM_STACK_STRUCT
#define JVM_STACK_STRUCT

#include "lib/base/defines.h"

typedef struct Node
{
    void *data;
    struct Node *next;
} Node;

typedef struct
{
    Node *top;
    u4 size;
} Stack;

void stack_initialize(Stack *stack);
int stack_is_empty(Stack *stack);
struct Node *stack_create_node(void *data);
void stack_push(Stack *stack, void *data);
void stack_pop(Stack *stack);
void *stack_top(Stack *stack);
void free_stack(Stack *stack);

#endif
