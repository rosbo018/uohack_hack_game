#ifndef ASSEMBLY_H
#define ASSEMBLY_H

#define GT 0
#define LT 1
#define EQ 2
//assembly specific (not game specific)

void
mov (unsigned dest, unsigned source, unsigned owner);

void
mov_ram_to_reg (unsigned dest, unsigned source, int owner);

void
mov_reg_to_ram (unsigned dest, unsigned source, int owner);

void
bun (unsigned dest, unsigned source);

void 
store (unsigned dest, unsigned source);

void
cmp (unsigned cmp1, unsigned cmp2);

void 
blt(unsigned dest);

void 
bgt(unsigned dest);

void 
beq(unsigned dest);

void
jmp(unsigned dest);

void
add_reg_to_reg(unsigned reg1, unsigned reg2);

void
add_ram_to_reg(unsigned ram, unsigned reg);

void
add_reg_to_ram(unsigned reg, unsigned ram);

//game sepcific

unsigned
get_owner(struct ram *ramblock, unsigned loc);

#endif // ASSEMBLY_H
