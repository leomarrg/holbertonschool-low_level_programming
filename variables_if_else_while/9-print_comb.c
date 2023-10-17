#include <stdio.h>

/**
 * main - this is the main function that it will do something
 * Description: this function will do something with char
 * Return: if 0 it runs succesfully
*/

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; ++c)
	{
		putchar(c);
		if (c < '9')
		putchar(',');
		putchar(' ');
	}
	return (0);
}
