#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1 aka dest string
 * @s2: string 2 aka source string
 * Return: returns the concatenate string
*/

char *str_concat(char *s1, char *s2)
{

	char *tmpPtr;
	int i, j, charCounter, charCounter2;

	j = 0;
	i = 0;
	charCounter = 0;
	charCounter2 = 0;

	while (s1[charCounter])
	{
		charCounter++;
	}

	while (s2[charCounter2])
	{
		charCounter2++;
	}

	tmpPtr = (char *)malloc((charCounter + charCounter2 + 1) * sizeof(char));

	if (tmpPtr == NULL)
		return (NULL);

	tmpPtr[charCounter + charCounter2] = '\0';

	for (i = 0; i < charCounter; i++)
	{
		tmpPtr[i] = s1[i];
	}

	for (j = 0; j < charCounter2; j++)
	{
		tmpPtr[i + j] = s2[j];
	}

	return (tmpPtr);
}
