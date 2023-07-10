#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: Pointer to the 2D grid.
 * @height: The number of rows in the grid.
 *
 * Description: This function frees the memory allocated for a 2D grid
 *              created by the alloc_grid function.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

