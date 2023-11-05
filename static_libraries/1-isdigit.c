#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if c is number
 * @c: parameter to be checked
 * Return: either 1 or 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
