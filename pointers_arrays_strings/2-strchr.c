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

		while (*s != '\0')
		{
			if (*s == c)
			{
				return (s);
			}
				s++;
		}
	return (NULL);
}
