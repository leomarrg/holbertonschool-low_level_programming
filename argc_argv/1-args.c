#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of args passed
 * @argc: number of cmd lines arguments passed
 * @argv: array of strings that hold cmd lines args
 * Return: returns 0 if succesful
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

