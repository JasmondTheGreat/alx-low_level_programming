#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array using a size passed in with malloc function
 * @size: size of array
 * @c: character to fill array with
 *
 * Return: array of characters
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *array = malloc(sizeof(char) * size);

	if (array == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
