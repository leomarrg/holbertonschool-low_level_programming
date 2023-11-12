#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: size of array
 * @size: size of bytes
 * Return: returns a pointer allocated to memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int *arr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}

	return (arr);
}


