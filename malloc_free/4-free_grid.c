#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function frees the 2d array
 * @height: size of grid to be freed
 * @grid: 2d array received by main
 * Return:it will return nothing func is void
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
