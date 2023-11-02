#include <stdio.h>

/**
 * main - main function that prints name of file
 * @argc: size of arguments in main
 * @argv: vector that takes all arguments
 * Return: returns 0 if it was succesful
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
