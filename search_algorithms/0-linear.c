#include "search_algos.h"

/**
 * linear_search - implementing linear search algorithm
 * @array: pointer to first element
 * @size: size of array
 * @value: valued search in array
 * Return: returns -1 if array null or value not present
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d]\n", array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %ld\n", value, i);
			return (i);
		}
	}
	return (-1);
}

