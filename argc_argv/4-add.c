#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if succesfull
*/

int main(int argc, __attribute__((unused)) char *argv[])
{

	int i, j, result, counter;
	char *temp;

	result = 0;
	i = 0;
	counter = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while(*argv)
	{
		counter++;
	}

	for (i = 1; i < counter; i++)
	{
		temp = argv[i];

		for (j = 0; j < argc; j++)
		{
			if (temp[j] >= 'a' && temp[j] <= 'z')
			{
				printf("Error\n");
				return (1);
			}

		}
		result += atoi(argv[i]);
	}
	printf("%i\n", result);
	return (0);
}
