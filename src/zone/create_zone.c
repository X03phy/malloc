#include "malloc.h"

#include <stddef.h> // size_t

t_zone *create_zone(size_t size)
{
	t_zone *zone;
	t_chunk *chunk;

	zone = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
	if (zone == MAP_FAILED) {
		perror("mmap()");
		return (NULL);
	}

	zone->size = size;
	zone->next = NULL;

	chunk = (s_chunk *)(zone + 1);
	
}
