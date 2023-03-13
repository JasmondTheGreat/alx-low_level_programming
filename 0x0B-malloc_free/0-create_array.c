#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char
 *
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);

	free(arr);
}

