#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: array integer items
 * @size: size of space to allocate
 *
 * Return: pointer to newly allocated space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = malloc(sizeof(int) * size);
	size_t i;

	if (array == NULL || nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		((int *)array)[i] = 0;

	return (array);
}
