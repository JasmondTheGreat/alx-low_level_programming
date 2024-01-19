#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: starting value
 * @max: ending value
 *
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	size_t size = max - min + 1;
	int i, *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);

	if (!array)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		array[i] = i + min;

	return (array);
}
