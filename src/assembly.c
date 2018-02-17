
#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif
#include "game.h"
#include "ram.h"
#include "assembly.h"
void
mov_reg_to_reg (unsigned dest, unsigned source, unsigned owner)
{
    if(reg_check(dest) || reg_check(source)){
        err = 1;
        return
    }
    reg[owner][dest] = reg[owner][source];

}

void
mov_ram_to_ram (unsigned dest, unsigned source, unsigned owner)
{
    if(ram_check(dest) || ram_check(source)){
        err = 1;
        return
    }
    ram_set(RAM, dest, ram_get(RAM, source));
    ram_set_owner(RAM, dest, owner);
}

void
mov_ram_to_reg (unsigned dest, unsigned source, int owner)
{
    if(reg_check(dest) || ram_check(source)){
        err = 1;
        return
    }
    reg[owner][dest] = ram_get(RAM, source);
}

void
mov_reg_to_ram (unsigned dest, unsigned source, int owner)
{
    if(ram_check(dest) || reg_check(source)){
        err = 1;
        return
    }
    ram_set(RAM, dest, reg[owner][source]);
    ram_set_owner(RAM, dest, owner);
}

void
bun (unsigned dest, unsigned source)
{
    if(dest >= RAM_SIZE || source ){
        err = 1;
        return;
    }
    returnreg = source;

}

void
cmp (unsigned cmp1, unsigned cmp2)
{
    if(cmp1 > cmp2)
        flag = GT;
    if (cmp1 < cmp2)
        flag = LT;
    else
        flag = EQ;
}

void 
blt(unsigned dest)
{
    if(ram_check(dest)){
        err = 1;
        return;
    }
    if(flag == LT){
        returnreg = PC;
        PC = dest;
    }
}

void 
bgt(unsigned dest)
{
    if(ram_check(dest)){
        err = 1;
        return;
    }
    if(flag == GT){
        returnreg = PC;
        PC = dest;
    }
}

void 
beq(unsigned dest)
    if(ram_check(dest){
        err = 1;
        return;
    }

    if(flag == EQ){
        returnreg = PC;
        PC = dest;
    }

void
jmp(unsigned dest)
{
    if(ram_check(dest)){
        err = 1;
        return;
    }
    PC = dest;
}
void
add_reg_to_reg(unsigned reg1, unsigned reg2)
{
    if(reg_check(reg1) || reg_check(reg2)){
        err = 1;
        return;
    }
    reg1 += reg2;

}

void
add_ram_to_reg(unsigned ram, unsigned reg)
{
    if(ram_check(ram) || reg_check(reg)){
        err = 1;
        return;
    }
    ram_set(RAM,ram,ram_get(RAM) += reg);
}


void
add_reg_to_ram(unsigned reg, unsigned ram)
{
    if(ram_check(ram) || reg_check(reg)){
        err = 1;
        return;
    }
    reg += ram_get(RAM, ram);
}

unsigned
get_owner(stuct ram *ramblock, unsigned loc){
    if(ram_check(loc)){
        err = 1;
        return;
    }
    return ram_get_owner(rambloc, loc);
}
