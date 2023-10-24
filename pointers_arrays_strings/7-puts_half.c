#include "main.h"
#include <stdio.h>

/**
 * puts_half - this function prints the second half
 * @str: receives the string
 * Return: doesn't return anything
*/

void puts_half(char *str)
{
	int i, half, j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	half = (i - 1) / 2;

	if (half % 2 == 0)
		half++;

	for (j = half; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
