/*copyright ryan osborne
 * lisenced under gpl v2
 */
#ifndef STDLIB_H
#define STDLIB_H
#include <stdlib.h>
#endif

#include "game.h"
#include "ram.h"
#include "assembly.h"
#include "../libraries/stringlibC/string.h"



void 
(*translate_opcode()) (struct _string *opcode)
{
    switch (opcode->rawString) {
        case "movaa":
            return mov_ram_to_ram;
        case "movae":
            return mov_ram_to_reg;
        case "movea":
            return mov_reg_to_ram;
        case "movee":
            return mov_reg_to_reg;
    }

}
