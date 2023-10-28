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

	i = 0;

	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s + i);
		}
		s++;
		i++;
	}

	return (NULL);
}
/*
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
*/
