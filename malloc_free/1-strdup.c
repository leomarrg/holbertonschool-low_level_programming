#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of a string
 * @str: receives string from main
 * Return: returns a copy of the string
*/

char *_strdup(char *str)
{

	int i, charCounter;
	char *strCpy;

	charCounter = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		charCounter++;
		str++;
	}

	strCpy = (char *)malloc(charCounter + 1 * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		strCpy[i] = str[i];
	}
	return (strCpy);
}
