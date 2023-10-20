#include "main.h"
#include <stdio.h>

/**
 * print_numbers - will print numbers 0 - 9
 * Return: will return nothing
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
