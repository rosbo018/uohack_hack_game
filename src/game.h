#ifndef GAME_H
#define GAME_H

#define RAM_SIZE 256
#define REG_SIZE 12
#define true 1
#define false 0
#define OWNER_P1 1 
#define OWNER_P2 2 
struct ram *RAM;
static unsigned reg[2][REG_SIZE];
static unsigned returnreg;
static unsigned paramreg;
static unsigned flag;
static unsigned err:1;
static unsigned ramsize;
static unsigned PC;


unsigned
translate_opcode(struct _string *opcode);
#endif
