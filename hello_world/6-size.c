#include <stdio.h>
#include <bits/libc-header-start.h>

/**
 * main - will print the size of various types on the computer
 * Description: this program will print the size of all the variables types
 * Return: this program will return 0 if the run was succesfull
*/
int main(void)
{
	printf("Size of a char: %1d byte(s)\n", sizeof(char));
	printf("Size of an int: %1d byte(s)\n", sizeof(int));
	printf("Size of a long int: %1d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %1d bytes(s)\n", sizeof(float));
	return (0);
}
