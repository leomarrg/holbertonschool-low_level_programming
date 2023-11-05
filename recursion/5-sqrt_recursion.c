#include "main.h"

/**
 * findSqrt - Recursively finds the square root of a number.
 * @n: The number for which to find the square root.
 * @current: The current value for checking square roots.
 *
 * Return: The square root if found, or -1 if not found.
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
	return (findSqrt(n, current + 1));
}

/**
 * _sqrt_recursion - Receives a number and gives it to findSqrt function.
 * @n: The number for which to find the square root.
 *
 * Return: The square root if found, or -1 if not found.
 */

int _sqrt_recursion(int n)
{
	return (findSqrt(n, 1));
}
