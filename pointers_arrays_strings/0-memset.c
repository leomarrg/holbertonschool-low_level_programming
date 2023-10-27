#include "main.h"

/**
 * _memset - this function will fill a memory with a cons byte
 * @s: pointer to the memory block to set
 * @b: byte value to set in the memory
 * @n specifies the number of bytes to set to the given byte
 * Return: returns the pointer
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}


	return (s);
}
