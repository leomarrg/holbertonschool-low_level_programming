#include "main.h"

/**
 * sqrt_recurion - find square root of a given number
 * @n: receives numbers from main
 * Return: returns the square root
*/

int findSqrt(int n, int current)
{
	if (current * current == n)
	{
		return (current);
	}
	if (current * current > n)
	{
		return (-1);
	}
	return findSqrt(n, current + 1);
}


int _sqrt_recursion(int n)
{
	return findSqrt(n, 1);
}
