#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a character is lowercase
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c = 1);
	else
		return (c = 0);

	return (c);
}
