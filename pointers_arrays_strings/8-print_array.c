#include "main.h"
#include <stdio.h>

/**
 * print_array - this function prints an array
 * @a: this is the array
 * @n: number of elements in array
 * Return: doesn't return anything
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
		printf("%i", a[i]);
		}
		else
			printf("%i, ", a[i]);
	}

	printf("\n");
}
