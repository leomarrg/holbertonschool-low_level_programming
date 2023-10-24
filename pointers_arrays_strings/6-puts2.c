#include "main.h"

/**
 * puts2 - this function prints every other char
 * @str: receives the string
 * Return: doesn't return anything
*/

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
}
