#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: the 2-D array.
 * @height: its dimention.
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
