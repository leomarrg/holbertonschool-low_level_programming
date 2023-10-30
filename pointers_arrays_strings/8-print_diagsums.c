#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_diagsums - will add all diagonal lines in 2d array
 * @a: will receive the 2d array
 * @size: size of array
 * Return: will return the added numbers that are in a diagonal line
*/

void print_diagsums(int *a, int size)
{
	int i;
	int temp1 = 0;
	int temp2 = 0;

	for (i = 0; i < size; i++)
	{
		temp1 += a[i * size + i];
		temp2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", temp1, temp2);
}
