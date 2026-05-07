#include "malloc.h"

#include <sys/mman.h> // mmap()

#include <stddef.h> // size_t, NULL

void *malloc(size_t n)
{
	s_chunk *chunk;
	void *zone;

	if (n < 0)
		return (0);

	zone = mmap();
	chunk = (t_chunk *)zone;

	munmap(zone, n);

	return (NULL);
}
