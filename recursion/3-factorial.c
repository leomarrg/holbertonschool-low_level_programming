#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: number received from main
 * Return: it will return depending on the condition
*/

int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	return (n);
}
