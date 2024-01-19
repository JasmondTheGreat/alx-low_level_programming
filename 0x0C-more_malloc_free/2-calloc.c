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
	char *array = malloc(nmemb * size);
	size_t i;

	if (array == NULL || nmemb == 0 || size == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
