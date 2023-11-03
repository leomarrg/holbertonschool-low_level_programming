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

	int i, j, num;
	char *temp;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		temp = argv[i];

		for (j = 0; j < argc; j++)
		{
			if (temp[j] >= 'a' && temp[j] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
			num += atoi(argv[j]);
		}
	}
	return (0);
}
