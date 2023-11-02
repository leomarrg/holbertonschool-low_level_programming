#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: size of arguments received
 * @argv: receives all strings
 * Return: 0 if succesful
*/

int main (int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

