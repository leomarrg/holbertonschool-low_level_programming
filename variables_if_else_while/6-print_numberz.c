#include <stdio.h>

/**
 * main - this is the main function that it will do something
 * Description: this function will do something with char
 * Return: if 0 it runs succesfully
*/

int main(void)
{
	int c, x;	

	for (c = 0; c < 16; c++)
	{
		x =c % 10 + '0';
		putchar(x);
	}
	putchar('\n');
	return (0);
}
