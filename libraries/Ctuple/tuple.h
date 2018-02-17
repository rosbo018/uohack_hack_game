#ifndef TUPLE_H
#define TUPLE_H
struct Tuple{
    void *A;
    void *B;
};
struct Tuple *
Tuple_new(void *a, void*b);
void
Tuple_free(struct Tuple *t);
void *
Tuple_first(struct Tuple *t);
void *
Tuple_second(struct Tuple *t);
#endif
