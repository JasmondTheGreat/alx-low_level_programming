#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array of integers
 *
 * @width: width param
 * @height: height param
 *
 * Return: 2-D array
 */

int **alloc_grid(int width, int height)
{
	int val = 0, i, j;
	int **grid = (int **)malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			grid[i][j] = val;
	}

	return (grid);
}
