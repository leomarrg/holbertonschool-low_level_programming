#include "main.h"
#include <stdio.h>

/**
 *print_alphabet_x10 - this will print alphabet 10 times in lowercase
 *this function does not return nothing
*/

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}




}
