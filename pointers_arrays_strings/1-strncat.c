#include "main.h"

/**
 * _strncat - this function will concatenate 2 strings
 * @dest: this will receive a string from main
 * @src: this will receive a string from main
 * @n: this will receive an int from main
 * Return: this will return the concatenate string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *tmpPtr, tempChar;
	int j;

	j = 0;
	tmpPtr = dest;


	if (j == 0)
	{

		while (src[j] != '\0')
		{
			tempChar = src[j];
			tmpPtr[n] = tempChar;
			j++;
		}
	return (tmpPtr);
}
