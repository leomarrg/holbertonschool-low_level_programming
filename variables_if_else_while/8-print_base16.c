#include <stdio.h>

/**
 * main - this is the main function that it will do something
 * Description: this function will do something with char
 * Return: if 0 it runs succesfully
*/

int main(void)
{
	char c;	

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for(c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
