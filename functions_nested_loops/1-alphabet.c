#include "main.h"
#include <stdio.h>

/**
 *print_alphabet - this funciton will print the alphabet
 *it doesnt return nothing
 *
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
