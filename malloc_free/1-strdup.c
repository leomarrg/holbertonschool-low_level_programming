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

	while (*str != '\0')
	{
		charCounter++;
		str++;
	}

	strCpy = (char *)malloc(charCounter + 1 * sizeof(char));

	printf("testing output after allocating space in memory");

	if (strCpy == NULL)
	{
		printf("the string is null");
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		printf("inside for");
		strCpy[i] = str[i];
	}

	strCpy[charCounter + 1] = '\0';

	return (strCpy);
}
