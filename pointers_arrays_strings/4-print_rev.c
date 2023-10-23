#include "main.h"

/**
 * print_rev - this function prints the string in reverse
 * @s: receives the string from main
 * Return: doesn't return anything
*/

void print_rev(char *s)
{
	int i, lastChar;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	lastChar = i - 1;

	while (s[lastChar] != 0)
	{
		_putchar(s[lastChar]);
		lastChar--;
	}
	_putchar('\n');
}
