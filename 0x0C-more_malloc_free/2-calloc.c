#include <stdlib.h>
#include <stddef.h>
#include <string.h>

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
	void *array = malloc(nmemb * size);

	if (array == NULL || nmemb == 0 || size == 0)
		return (NULL);

	if (array != NULL)
		memset(array, 0, size);

	return (array);
}
