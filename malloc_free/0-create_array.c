#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates arr and init with a spec char
 * @size: size of array
 * @c: specified char
 * Return: returns a char
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;
	arr = (char*)malloc(size * sizeof(char));

	if (size == 0)
		return (0);

	if (arr == NULL)
		return (arr);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
