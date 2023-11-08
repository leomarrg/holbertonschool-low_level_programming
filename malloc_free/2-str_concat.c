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

	char *tmpPtr, tmpChar;
	int j, charCounter;

	j = 0;
	charCounter = 0;

	while (s1[charCounter])
	{
		charCounter++;
	}

	tmpPtr = (char *)malloc((charCounter) * sizeof(char));

	if (tmpPtr == NULL)
		return (NULL);

	tmpPtr[charCounter + 1] = '\0';

		while (s2[j] != '\0')
		{
			tmpChar = s2[j];
			tmpPtr[charCounter] = tmpChar;
			j++;
			charCounter++;
		}
	return (tmpPtr);
}
