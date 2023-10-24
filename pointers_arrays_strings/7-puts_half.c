#include "main.h"
#include <stdio.h>

/**
 * puts_half - this function prints the second half
 * @str: receives the string
 * Return: doesn't return anything
*/

void puts_half(char *str)
{
	int i, half;	

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	
	half = (i - 1) / 2;

	while(half < i)
	{
		half++;
		_putchar(str[half]);
	}

}
