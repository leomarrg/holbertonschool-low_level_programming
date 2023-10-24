#include "main.h"

/**
 * rev_string - prints string and reverse it
 * @s: receives the string
 * Return: doesn't return anything
*/

void rev_string(char *s)
{

	int i, lastChar;
	char *tempPtr = s;
	char tempChar;

	i = 0;

	printf("\n\n");
	while (s[i] != '\0')
	{
		tempChar = s[i];
		tempPtr[i] = tempChar;

		i++;
	}

	lastChar = i - 1;

	i = 0;
	while (i < lastChar)
	{
		tempChar = tempPtr[lastChar];
		tempPtr[lastChar] = s[i];
		s[i] = tempChar;

		lastChar--;
		i++;
	}

}
