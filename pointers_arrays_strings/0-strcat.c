#include "main.h"
#include <stdio.h>

/**
 *_strcat - this function concatenates 2 strings
 *@dest: receives a string
 *@src: receives a string
 *Return: it will return the string concatanated LFMAO
*/

char *_strcat(char *dest, char *src)
{

	char *tmpPtr, tempChar;
	int i, j;

	i = 0;
	j = 0;
	tmpPtr = dest;

	while (tmpPtr[i])
	{
		i++;
	}

	if (j == 0)
	{
		tmpPtr[i + 1] = '\0';

		while (src[j] != '\0')
		{
			tempChar = src[j];
			tmpPtr[i] = tempChar;
			j++;
			i++;
		}
	}
	return (tmpPtr);
}
