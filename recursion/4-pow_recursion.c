#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: a number received by main
 * @y: value to raise to the power
 * Return: returns the calculation of the values received
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
