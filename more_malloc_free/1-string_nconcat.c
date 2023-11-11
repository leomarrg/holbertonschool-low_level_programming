#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concanates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: returns a pointer to the allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int i, charCounter;
	unsigned int j;
	char *tmpPtr;

	charCounter = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[charCounter])
	{
		charCounter++;
	}

	tmpPtr = (char *) malloc((charCounter + n + 1) * sizeof(char));

	if (tmpPtr == NULL)
		return (NULL);

	tmpPtr[charCounter + n] = '\0';

	for (i = 0; i < charCounter; i++)
	{
		tmpPtr[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		tmpPtr[i + j] = s2[j];
	}

	return (tmpPtr);
}
