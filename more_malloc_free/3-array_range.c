#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: receives min num from main
 * @max: receives max num from main
 * Return: returns pointer to newly created array
*/

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = (int *) malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
