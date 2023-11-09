#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width of array
 * @height: of array
 * Return: returns a 2d array
*/

int **alloc_grid(int width, int height)
{

	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(width * sizeof(int*));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		grid[i] = (int *) malloc(height * sizeof(int));

		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j ++)
		{
			grid[i][j] = 0;
		}
	}

	for (i = 0; i < width; i++)
	{
		free(grid[i]);
	}
	return (grid);
}


