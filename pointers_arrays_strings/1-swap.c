#include "main.h"

/**
 * swap_int - this functions swaps values of 2 ints
 * @a: parameter a
 * @b: parameter b
 * Return: doesn't return anything
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
