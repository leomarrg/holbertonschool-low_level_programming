#include <stdio.h>

/**
 * main - this is the main function that it will do something
 * Description: this function will do something with char
 * Return: if 0 it runs succesfully
*/

int main(void)
{
	char c;

	for (c = 'a'; c < 'Z'; ++c)
	{
		putchar(c);
	}
	return (0);
}
