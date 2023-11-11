#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this function allocates memory
 * @b: receives the size from main
 * Return: returns a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *tmpPtr = malloc(b);

	if (tmpPtr == NULL)
	{
		exit(98);
	}

	return (tmpPtr);
}
