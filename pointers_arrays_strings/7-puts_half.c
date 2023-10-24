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

	for(j = half; j < i; j++)
	{
		if (half < i)
			_putchar(str[j]);
	}

}
