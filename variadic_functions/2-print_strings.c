#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a string
 * @separator: separator char
 * @n: number of parameters accepted
 * Return: returns nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;

	va_list(args);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str != NULL)
		{
			printf("%s", str);

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		else
			printf("(nil)");
	}
	va_end(args);
	printf("\n");
}
