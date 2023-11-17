#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two ints
 * @a: num1
 * @b: num2
 * Return: returns the result of the op required
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two ints
 * @a: num1
 * @b: num2
 * Return: returns the result of the op
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two ints
 * @a: num1
 * @b: num2
 * Return: returns the result of the op
*/

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two ints
 * @a: num1
 * @b: num2
 * Return: returns the result of the op
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - gets remainder of two ints
 * @a: num1
 * @b: num2
 * Return: returns the result of the op
*/
int op_mod(int a, int b)
{
	return (a % b);
}
