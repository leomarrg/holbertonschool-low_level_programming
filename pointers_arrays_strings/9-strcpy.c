#include "main.h"

/**
 * _strcpy - function that copies ptr1 str to ptr2 str
 * @dest: will return the str in the ptr
 * @src: receives the string
 * Return: it will return the copied str
*/

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';

	return dest;
}
