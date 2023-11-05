#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - function that locates a char in a string
 * @s: destination pointer
 * @c: source pointer
 * Return: returns the char located in the string
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
