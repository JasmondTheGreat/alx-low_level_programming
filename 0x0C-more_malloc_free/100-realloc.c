#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: old memory block pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newBlock;
	size_t i;


	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		newBlock = malloc(new_size);

	newBlock = malloc(new_size);
	if (!newBlock)
		return (NULL);

	for (i = 0; i < old_size; i++)
		newBlock[i] = ((char *)ptr)[i];

	return (newBlock);

}
