#include <stdio.h>

/**
 * main - will print the size of various types on the computer
 * Description: this program will print the size of all the variables types
 * Return: this program will return 0 if the run was succesfull
*/
int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of char: %zu byte\n", sizeof(char));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of long: %zu bytes\n", sizeof(long));
	return (0);
}
