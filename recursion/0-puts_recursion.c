#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: receives the string
 * Return: void function doesn't return
*/

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
