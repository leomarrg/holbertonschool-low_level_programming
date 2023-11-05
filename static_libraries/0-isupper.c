#include "main.h"
#include <stdio.h>

/**
 * _isupper - this function checks if is upper case or lower case
 * @c: char that is verified
 * Return: returns 0 if lower case 1 is uppercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
