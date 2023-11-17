#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - searches for an int
 * @array: array of ints
 * @size: size of array
 * @cmp: function to compare values
 * Return: returns -1 if no ele matches or size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
