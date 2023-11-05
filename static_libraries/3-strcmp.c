#include "main.h"

/**
 * _strcmp - function that compares two string
 * @s1: string to be compared
 * @s2: second string to be compared
 * Return: returns the character number of each string compared
*/

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
