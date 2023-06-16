#include "main.h"
#include <stdlib.h>

/**
 * free_grid - to free memory allocation
 * @grid: the grid to be freed
 * @height: the height
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
