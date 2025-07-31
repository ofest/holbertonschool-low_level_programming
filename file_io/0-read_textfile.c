#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 *read_textfile - fuction that read a text file and print it, 'Requiescat'.
 *  @filename: body of text to print.
 * @letters: max char to print.
 * Return: number of chars printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buff;
ssize_t bytes_read, bytes_written;

if (filename == NULL)
{
	return (0);
}
fd = open(filename, O_RDONLY);
if (fd == (-1))
{
	return (0);
}
buff = malloc(letters);
if (buff == NULL)
{
	close(fd);
	return (0);
}
bytes_read = read(fd, buff, letters);
if (bytes_read == -1)
	{
	free(buff);
	close(fd);
	return (0);
	}
bytes_written = write(STDOUT_FILENO, buff, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
	{
	close(fd);
	return (0);
	}
return (bytes_read);

}
