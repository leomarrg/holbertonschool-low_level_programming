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

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
