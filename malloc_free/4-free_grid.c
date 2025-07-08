#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Function that returns a pointer to a 2D array of integers.
 * @grid: the address of the two dimensional grid.
 * @height: height of the grid.
 *
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
