#include "main.h"
#include <stdio.h>

/**
 * reverse_array - this function will reverse the content of an array
 * @a: pointer that has the content of the array
 * @n: receives the number of elements in the array
 * Return: will not return anything
*/

void reverse_array(int *a, int n)
{
	int i, tempF, tempL, lastN;
	
	i = 0;
	lastN = n - 1;

	for(i = 0; i < n / 2; i++)
	{
		tempF = a[i];
		tempL = a[lastN];
		a[i] = tempL;
		a[lastN] = tempF;
		lastN--;
	}
}

