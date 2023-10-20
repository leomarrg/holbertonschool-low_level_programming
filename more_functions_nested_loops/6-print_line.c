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

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
}
