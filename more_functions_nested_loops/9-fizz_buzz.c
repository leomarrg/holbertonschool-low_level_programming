#include <stdio.h>
/**
 * main - function to print fizz buzz
 * Return: 0 if succesful
*/

int main(void)
{
	int i;
	int mult3 = 3;
	int mult5 = 5;

	for (i = 1; i <= 100; i++)
	{
		if (i % mult3 == 0 && i % mult5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % mult5 == 0)
		{
			printf("Buzz");
		}
		else if (i % mult3 == 0)
		{
			printf("Fizz");
		}
			else
			printf("%i ", i);

		printf(" ");
	}
	printf("\n");

	return (0);
}
