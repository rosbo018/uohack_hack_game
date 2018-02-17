#include "tuple.h"
#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif
void 
Tuple_free(struct Tuple *current)
{
    if (current == NULL)
        return;
    if (current->A != NULL)
        free(current->A);
    if (current->B != NULL)
        free(current->B);
    free(current);
}

struct Tuple *
Tuple_new(void *a, void*b){
    struct Tuple *t;
    t = malloc(sizeof(*t));
    t->A = a;
    t->B = b;
    return t;
}
void *
Tuple_first(struct Tuple *t)
{
    return (t->A);
}

void *
Tuple_second(struct Tuple *t)
{
    return (t->B);
}
