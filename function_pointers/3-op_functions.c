#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two ints
 * op_sub - substracts two ints
 * op_mul - multiplies two ints
 * op_div - divides two ints
 * op_mod - gets the remainder of a div
 * @a: num1
 * @b: num2
 * Returns: returns the result of the op required
*/

int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
