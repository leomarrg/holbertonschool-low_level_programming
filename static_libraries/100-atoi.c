#include "main.h"

/**
 * _atoi - this function converts a string to int
 * @s: this parameter receives the string to be converted
 * Return: will return the string received converted to int
*/

int _atoi(char *s)
{
	unsigned int result;
	unsigned int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
			i++;
	}
	return (result * sign);
}

