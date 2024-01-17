#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid passed in
 *
 * @grid: double pointer grid parameter
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	free(grid);


	for (i = 0; i < height; i++)
		free(grid[i]);
}
