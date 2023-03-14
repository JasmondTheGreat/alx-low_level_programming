#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by the 'alloc_grid'
 * function.
 *
 * @grid: an array of arrays (a pointer to a pointer)
 * @height: height of the 2D array
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
