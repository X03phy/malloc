#ifndef MALLOC_H
#define MALLOC_H

/* Includes */

#include <stddef.h> // size_t

/* Structures */

struct s_chunk {
	int free;
	size_t size;
	struct s_chunk *prev, *next;
} s_chunk;

typedef struct s_zone {
	size_t size;
	t_chunk *first;
	struct s_zone *prev, *next;
} s_zone;

/* Prototypes */

void *malloc(size_t size);

#endif
