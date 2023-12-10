#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - funciton that appends a text at the end of file
 * @filename: name of the file
 * @text_content: contents of the file
 * Return: returns 1 or -1;
*/

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, len, w_stus;

	len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		
		w_stus = write(fd, text_content, len);

		if (w_stus == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);

}
