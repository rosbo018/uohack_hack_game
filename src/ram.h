#ifndef RAM_H
#define RAM_H

struct ramblock {
    unsigned data;
    unsigned owner;
};

struct ram {
    struct ramblock *ramdata;
    int size;
};

// ram specific functions
struct ram *
ram_initBloc(int size);

void 
ram_set(struct ram *ramblock, unsigned loc, unsigned data);

void 
ram_set_owner(struct ram *ramblock, unsigned loc, unsigned data);

unsigned 
ram_get(struct ram *ramblock, unsigned loc);

unsigned 
ram_get_owner(struct ram *ramblock, unsigned loc);

#endif //RAM_H
