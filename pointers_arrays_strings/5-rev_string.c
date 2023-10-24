#include "main.h"

/**
 * rev_string - prints string and reverse it
 * @s: receives the string
 * Return: doesn't return anything
*/

void rev_string(char *s)
{

	int i, lastChar;
	char *temp = s;

	i = 0;

	while (s[i] != '\0')
	{
		temp[i] = s[i];
		i++;
	}

	lastChar = i - 1;

	while (s[i] != 0)
	{
		s[lastChar] = temp[i];
		lastChar--;
	}
}
