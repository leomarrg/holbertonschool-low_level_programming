

/**
 * _strncpy - function that copies string
 *@dest: receives a string from src
 *@src: receives string from main
 *@n: max number of characters to copy from src
 *Return: will return a copy of the string from dest
*/

char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
