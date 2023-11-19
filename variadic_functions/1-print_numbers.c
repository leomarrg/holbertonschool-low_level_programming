#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string between numbers
 * @n: number of ints in function
 * Return: returns nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	int nums;

	va_list(args);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, int);
		printf("%i", nums);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
