#include "main.h"

/**
 * _strlen_recursion - returns the length of a sting
 * @s: receives the string
 * Return: returns the length of the string
*/

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s)
	{
		i++;
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
