#include <stdlib.h>

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
	char *array;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
