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

	int i, result;
	char *temp;

	result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		temp = argv[i];

		while (*temp)
		{
			if (*temp >= 'a' && *temp <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			temp++;
		}
		result += atoi(argv[i]);
	}
	printf("%i\n", result);
	return (0);
}
