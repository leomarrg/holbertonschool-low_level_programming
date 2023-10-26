#include "main.h"
#include <stdio.h>

/**
 * _strncat - this function will concatenate 2 strings
 * @dest: this will receive a string from main
 * @src: this will receive a string from main
 * @n: this will receive an int from main
 * Return: this will return the concatenate string
*/

char *_strncat(char *dest, char *src, int n)
{

	char *tmpPtr = dest;

	while (*tmpPtr != '\0')
	{
		tmpPtr++;
	}

	while (*src != '\0' && n > 0)
	{
		*tmpPtr = *src;
		tmpPtr++;
		src++;
		n--;
	}
	*tmpPtr = '\0';
	return (dest);
}
