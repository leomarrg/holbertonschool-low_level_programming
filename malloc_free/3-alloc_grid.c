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

	grid = malloc(height * sizeof(grid));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] =  malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(grid[j]);
			}
			free(grid);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}


