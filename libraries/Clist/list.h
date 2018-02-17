#ifndef LIST_H
#define LIST_H
struct list {
    int index;
    int start;
    int nextSize;
    int size;
    void **data;
};

struct list *
list_new();
struct list *
list_new_n(int size);
struct list *
list_append(struct list *current, void *item);
void *
list_get(struct list *current, int index);
struct list *
list_check_mem(struct list *current);
void *
list_get(struct list *current, int index);
struct list *
list_prepend(struct list *current, void *item);
struct list *
list_copy(struct list *current, int leftPad);
#endif
