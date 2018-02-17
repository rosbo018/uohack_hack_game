/*copyright ryan osborne
 * lisenced under gpl v2
 */
#ifndef RAM_H
#define RAM_H

//ram block that contains the owner and the data
struct ramblock {
    unsigned data;
    unsigned owner;
};

//the ram itself, contains a series of ramblocks
//size is defined by RAM_SIZE
//->size is not strictly necessary
struct ram {
    struct ramblock *ramdata;
    int size;
};

// ram specific functions
struct ram *
ram_initBloc(int size);

//sets the data for the ram
void 
ram_set(struct ram *ramblock, unsigned loc, unsigned data);

//sets the owner of the ram block
//only should be used by internal mechanism as part of mov
void 
ram_set_owner(struct ram *ramblock, unsigned loc, unsigned data);

//gets the contents of the ram bloc
unsigned 
ram_get(struct ram *ramblock, unsigned loc);

//gets the owner of the ram bloc
unsigned 
ram_get_owner(struct ram *ramblock, unsigned loc);

// checks the reg location for errors 
int
reg_check(unsigned loc);


// checks the ram location for errors 
int
ram_check(unsigned loc);
#endif //RAM_H
