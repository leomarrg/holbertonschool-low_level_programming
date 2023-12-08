#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - function that reads a txtfile
 * @filename: name of file
 * @letters: number of chars the files has
 * Return: returns the nums of letters in file
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buff;

	count = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, 0);

	if (fd < 0)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		close(fd);

	count = read(fd, buff, letters);

	if (count < 0)
	{
		free(buff);
		close(fd);
		return (0);
	}

	buff[count] = '\0';

	write(STDOUT_FILENO, buff, count);

	free(buff);
	close(fd);

	return (count);
}
