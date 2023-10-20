#include "main.h"
#include <stdio.h>

/**
 * print_line - this function prints line n times
 * @n: receives the times to print the line
 * Return: doesn't return a value
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}

	if (n < 0 || n == 0)
	{
		continue;
	}
	_putchar('\n');
}
