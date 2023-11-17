#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 * @f: function pointer
 * @name: receives the name
 * Return: returns nothing
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
