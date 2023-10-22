#include "main.h"
#include <stdio.h>
/**
 * print_fizzbuzz - function to print fizz buzz 
 * Return: doesn't return anything
*/

void print_fizzbuzz()
{
	int i;
	int mult3 = 3;
	int mult5 = 5;

	for (i = 1; i <= 100; i++)
	{
		if (i % mult3 == 0)
		{	
			printf("Fizz");
			printf(" ");
		}
		else if (i % mult5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (i % mult3 == 0 && i % mult5 == 0)
		{
			printf("Fizz Buzz");
			printf(" ");
		}
			else
			printf("%i ", i);
	}
	printf("\n");
}
