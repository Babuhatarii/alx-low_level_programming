#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: Pointer to the 2D grid.
 * @height: The height dimension of the grid.
 *
 * Description: This function frees the memory allocated for a 2D grid.
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

