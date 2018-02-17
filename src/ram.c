#include "game.h"
#include "ram.h"
#include "assembly.h"

#ifndef STDLIB_H   
#define STDLIB_H   
#include <stdlib.h>
#endif             

struct ram *
ram_initBloc()
{
    struct ram *newBlock;
    newBlock = malloc(sizeof(*newBlock));
    newBlock->data = malloc(sizeof(*(newBlock->data)) * RAM_SIZE);
    for (int i = 0; i < RAM_SIZE; i++)
        (*(newBlock->ramdata))->owner = 0;
    newBlock->RAM_SIZE = RAM_SIZE;
}

unsigned 
ram_get(struct ram *ramblock, unsigned loc){
    return (ramblock->ramdata + loc)->data;
}

unsigned 
ram_get_owner(struct ram *ramblock, unsigned loc)
{
    return (ramblock->ramdata + loc)->owner;
}

void 
ram_set(struct ram *ramblock, unsigned loc, unsigned data)
{
    (ramblock->ramdata + loc)->data = data; 
}


int
ram_check(unsigned loc)
{
    return (loc >= RAM_SIZE);
}

int
reg_check(unsigned loc)
{
    return (loc >= REG_SIZE);
}
