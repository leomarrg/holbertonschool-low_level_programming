#include "main.h"
#include <stdio.h>
/**
 * main - this main function contains everything
 * Description: this will print _putchar
 * Return: if succesfull will return 0
*/

int main(void)
{
	char string[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');

	return (0);
}
