#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function locates first string in accept
 * @s: string received by main to be checked
 * @accept: string that has chars to compared to s
 * Return: returns the pointer of the first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char charToCheck, *tmpPtr;

	tmpPtr = NULL;
	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		charToCheck = s[i];
		j = 0;

		while (accept[j] != '\0')
		{
			if (charToCheck == accept[j])
			{
				if (tmpPtr == NULL)
				tmpPtr = &s[i];
			}
			j++;
		}
	i++;
	}
	return (tmpPtr);
}
