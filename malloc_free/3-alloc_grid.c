#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2D array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Null or grid.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;
	int i;

	if (height <= 0)
		return (NULL);

	if (width <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	{
		if (grid == NULL)
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)
				free(grid[i]);
		free(grid);
		return (NULL);
		}
		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}
	return (grid);
}
