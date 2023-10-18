#include "main.h"
#include <stdio.h>

/**
 *print_sign - will check n
 *@(n): the char to be checked
 *Return: 1 if positive, 0 if zero, -1 if negative
*/

 int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (n = 1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (n = 0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (n = -1);
	}

	return (n);
}
