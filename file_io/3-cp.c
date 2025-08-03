#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: content of the text.
 * Return: 1 if success -1 if fail.
 */

int main(int argc, char *argv[])
{
    int fd;
	ssize_t bytes_written;
    char *buff;

    if (argc != 3)
    {
        exit(98);
    }
     fd = open(file_from )
     fd = open(file_to )

}