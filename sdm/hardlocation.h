#ifndef SDM_HARDLOCATION_H_
#define SDM_HARDLOCATION_H_

#include <stdint.h>

#include "bitstring.h"

typedef struct {
	bitstring* address;
	uint8_t* adder;
} hardlocation;

int hl_initialize();

hardlocation* hl_alloc();
void hl_free(hardlocation* hl);
hardlocation* hl_init_random(hardlocation* hl);

void hl_write(hardlocation* hl, bitstring* data);
bitstring* hl_read(hardlocation* hl);

#endif
