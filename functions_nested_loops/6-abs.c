#include "main.h"
#include <stdio.h>

/**
 *_abs - this function gives the absolute value of an int
 *@n: char to be checked
 *Return: this returns the absolute value of an int
*/

int _abs(int n)
{
	if (n < 0)
		n = n * -1;

	return (n);
}
