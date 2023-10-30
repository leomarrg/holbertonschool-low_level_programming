#include "main.h"

/**
 * _strspn - function that returns lenght of prefix string
 * @s: receives a string
 * @accept: string to be compared to s
 * Return: returns the lenght of the prefix of s
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int length;

	char charToCheck;

	i = 0;
	j = 0;
	length = 0;

	while (s[i] != '\0')
	{
		charToCheck = s[i];
		j = 0;

		if (charToCheck >= 'a' && charToCheck <= 'z')
		{
			while (accept[j])
			{
				if (charToCheck == accept[j])
				{
					length++;
					break;
				}
				else if (accept[j + 1] == '\0')
					return (length);
				j++;
			}
		}
	i++;
	}
	return (length);
}
