#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: where i seach for the substring
 * @needle: string to be searched
 * Return: returns substring if found
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, needLen, strLen;
	char *tmpPtr;

	needLen = 0;
	strLen = 0;
	i = 0;
	j = 0;
	tmpPtr = NULL;

	while (needle[i] != '\0')
	{
		needLen++;
		i++;
	}

	i = 0;

	while (haystack[i] != '\0')
	{
		strLen++;
		i++;
	}

	for (i = 0; i <= strLen - needLen; i++)
	{
		for (j = 0; j < needLen; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			if (j == needLen - 1)
			{
			tmpPtr = &haystack[i];
			}
		}
	}
	return (tmpPtr);
}
