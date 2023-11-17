#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 * @n: parameter
 * Return: returns the sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res;
	va_list args;

	i = 0;
	res = 0;
	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		res += va_arg(args, int);
	}

	va_end(args);

	return (res);
}


