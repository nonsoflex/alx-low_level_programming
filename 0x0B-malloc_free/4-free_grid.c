#include "main.h"

/**
 * free_grid - allocates a grid, make space and free space
 * @grid: takes in width of grid
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
