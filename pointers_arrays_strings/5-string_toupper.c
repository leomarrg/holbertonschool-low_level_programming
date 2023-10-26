#include "main.h"

/**
 * string_toupper - this function changes all lowercases of a str to uppercase
 * @str: string received by main
 * Return: will return the char with all upper cases
*/

char *string_toupper(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] = str[j] - ('a' - 'A');

	}

	return (str);
}
