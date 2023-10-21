#include "main.h"
#include <stdio.h>

/**
 * print_square - will print # into a square n times
 * @size: receives data from main
*/

void print_square(int size)
{
	int i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
