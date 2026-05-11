#include "malloc.h"

#include <sys/mman.h> // MAP_ANONYMOUS, MAP_PRIVATE, PROT_READ, PROT_WRITE, mmap()

#include <stddef.h> // size_t, NULL
#include <stdio.h> // perror()
#include <unistd.h> // getpagesize()

void *malloc(size_t n)
{
	static t_zone *zones = NULL;
	size_t size;

	if (n == 0 || n > 4096)
		return (NULL);

	size = getpagesize();
	if (n > size)
		size = n;

	zone = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
	if (zone == MAP_FAILED) {
		perror("mmap()");
		return (NULL);
	}
	//chunk = (s_chunk *)zone;

	printf("Address %p, size %zu\n", zone, size);
	munmap(zone, size);

	return (zone);
}
