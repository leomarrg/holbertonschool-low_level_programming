#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: has the size of arguments
 * @argv: array of args
 * Return: returns 0 if successful
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	operation = get_op_func(operator);

	if (operation == NULL)
	{
	    printf("Error\n");
	    return (99);
	}

	if ((*operation == op_div || *operation == op_mod) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = (*operation)(num1, num2);
	printf("%d\n", result);

	return (0);
}

