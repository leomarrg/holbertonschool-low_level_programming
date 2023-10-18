#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - will find the last digit of the given number
 * @n: the char to be checked
 * Return: will return the last digit of given numbers
*/

int print_last_digit(int n)
{
	int lastDig;
	char lastDigChar;

	lastDig = n % 10;

		if (lastDig < 0)
		lastDig *= -1;

	lastDigChar = '0' + lastDig;
	_putchar(lastDigChar);
	return (lastDig);
}
