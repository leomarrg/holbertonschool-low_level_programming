#include <stdio.h>

/**
 * main - will print the size of various types on the computer
 * Description: this program will print the size of all the variables types
 * Return: this program will return 0 if the run was succesfull
*/
int main(void)
{	
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long long int: bytes %zu\n" sizeof(long long int));
	printf("Size of a float: %zu\n" sizeof(float));
	return (0);
}
