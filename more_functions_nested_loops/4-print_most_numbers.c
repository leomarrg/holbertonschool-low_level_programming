#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - this function will print every num except 2 4
 * Return: doesn't return anything
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
