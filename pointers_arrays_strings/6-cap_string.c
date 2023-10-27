#include "main.h"
#include <stdio.h>

/**
 * cap_string - this functino capitalizes all words of a string
 * @str: receives the string
 * Return: returns the string with the first letter capitalized
*/

char *cap_string(char *str)
{
	int isInsideWord;
	int i;

	isInsideWord = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' ||
			str[i] == ',' || str[i] == '.' || str[i] == '!' || str[i] == '?')
		{
			isInsideWord = 0;
		}
		else
		{
			if (isInsideWord == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - ('a' - 'A');
				}
			}
			isInsideWord = 1;
		}
	}
	return (str);
}
