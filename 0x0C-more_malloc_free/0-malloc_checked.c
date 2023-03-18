#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *dynMem = malloc(b);


	if (dynMem == NULL)
		exit(98);

	return (dynMem);
}
