#include "list.h"
#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif

struct list *
list_new()
{
    struct list *new_list;
    new_list = (struct list *) malloc(sizeof(*new_list));
    new_list->index = 0;
    new_list->start = 0;
    new_list->size = 1;
    new_list->data = malloc(sizeof(*(new_list->data)));
    return new_list;
}
struct list *
list_new_n(int size)
{
    struct list *new_list;
    new_list = (struct list *) malloc(sizeof(*new_list));
    new_list->index = 0;
    new_list->size = size;
    new_list->data = malloc(sizeof(*(new_list->data) * size));
    return new_list;
}
struct list *
list_append(struct list *current, void *item)
{

    *(current->data + current->index) = item;
    ++(current->index);
    current = list_check_mem(current);
    return current;
}
struct list *
list_copy(struct list *current, int leftPad)
{
    struct list *new_list;
    new_list = list_new_n(current->size + leftPad);
    new_list->start = leftPad;
    for (int i = 0; i < current->size; i++)
        *(new_list->data + leftPad + i) = *(current->data + i);
    
}
struct list *
list_check_mem(struct list *current)
{
    if (current->index == current->maxSize){
        current->size *= 2;
        current->data = malloc(sizeof(*(current->data))*current->size);
    }
    return current;
}

void *
list_get(struct list *current, int index)
{
    if (index > current->index || index < 0)
        return NULL;
    return *(current->data + index);
}
struct list *
list_prepend(struct list *current, void *item)
{
}
