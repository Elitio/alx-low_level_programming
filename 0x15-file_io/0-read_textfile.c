#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - This function will print text
 * @filename: The name of the file it will read text from
 * @letters: The text letters to print
 * Return: Return the text read to standard output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_bytes;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = (malloc(sizeof(char) * letters));
	read_bytes = read(fd, buffer, letters);

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	free(buffer);
	close(fd);
	return (write_bytes);
}
