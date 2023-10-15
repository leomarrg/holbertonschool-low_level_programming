#include <stdio.h>

/**
 * main - will print the size of various types on the computer
 * Description: this program will print the size of all the variables types
 * Return: this program will return 0 if the run was succesfull
*/
int main(void)
{
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of char: %zu byt(e)\n", sizeof(char));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	printf("Size of long: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int" %zu byte(s), sizeof(long long int));
	return (0);
}
