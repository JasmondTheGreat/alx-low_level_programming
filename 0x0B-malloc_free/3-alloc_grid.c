#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width param of grid
 * @height: height param of grid
 *
 * Return: 2D array of integers
 */



int **alloc_grid(int width, int height)
{
	int **array, i, j;

	array = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		array[i] = malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		if (array[i] == NULL)
		{
			free(array[i]);
			return (NULL);
		}
	}

	if (width == 0 || width < 0)
	{
		return (NULL);
	}
	if (height == 0 || height < 0)
	{
		return (NULL);
	}

	return (array);
}
