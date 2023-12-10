#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * append_text_to_file - this function appends a test at end of file
 * @filename: name of file
 * @text_content: content inside of file
 * Return: returns 1 if success and -1 if it fails
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len;

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
	{
		len++;
	}

	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
