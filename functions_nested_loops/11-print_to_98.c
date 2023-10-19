#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this function will print natural numbers from n to 98
 * @n: will be checked
 * Return: doesn't return anything"
*/
void print_to_98(int n)
{
	int i;

	if (n < 0)
		n = -n;

	for (i = n; i <= 98; i++)
	{
		printf("%i", i);

		if (i != 98)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");
}
