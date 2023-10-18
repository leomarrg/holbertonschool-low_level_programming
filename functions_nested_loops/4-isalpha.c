#include "main.h"
#include <stdio.h>

/**
 *_isalpha - checks if a char is lower or upper case
 *@c: the char to be checked
 *Return: 1 if its lower or upper case 0 if not
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c = 1);
	else if (c >= 'A' && c <= 'Z')
		return (c = 1);
	else
		return (c = 0);
}
