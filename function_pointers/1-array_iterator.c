#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of arr
 * @array: array
 * @size: size of array
 * @action: action of function
 * Return: returns nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
