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
        case "mov":
            return mov;
        case "movr":
            return mov_ram_to_reg;
        case "movl":
            return mov_reg_to_ram;
        case "movl":
            return mov;
    }

}
