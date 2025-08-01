#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: content of the text.
 * Return: 1 if success -1 if fail.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written < 0)
		{   close(fd);
			return (-1);
		}
	}

close(fd);
return (1);
}
