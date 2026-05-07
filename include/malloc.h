#ifndef MALLOC_H
#define MALLOC_H

/* Includes */

#include <stddef.h> // size_t

/* Structures */

struct s_chunk {
	int free;
	size_t size;
	struct s_chunk *next, *prev;
} s_chunk;

/* Prototypes */

void *malloc(size_t size);

#endif
