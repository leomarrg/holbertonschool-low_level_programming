#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

	for (i = 0; str[i]; i++)
	{
		charCounter++;
	}

	strCpy = malloc(sizeof(char) * (charCounter + 1));

	if (strCpy == NULL)
	{
		printf("the string is null");
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		strCpy[i] = str[i];
	}

	strCpy[charCounter] = '\0';

	return (strCpy);
}
