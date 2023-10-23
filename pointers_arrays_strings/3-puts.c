#include "main.h"

/**
 * void _puts - this function prints the string
 * @str: receives the string
 * Return: doesn't return anything
*/

void _puts(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

}
