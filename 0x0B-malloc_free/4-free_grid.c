#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: 2D grid
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	for (i = 0; i < height; i++)
	{
		free(row[i]);
	}
	free(grid);
}
