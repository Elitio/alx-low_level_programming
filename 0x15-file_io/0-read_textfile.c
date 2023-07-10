#include "main.h"

/**
 * read_textfile - Read a text from file and prints the letters.
 * @filename: The pointer to the filename.
 * @letters: The number of letters printed.
 *
 * Return: Number of letters printed. 0 if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_write;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		return (0);
	}

	num_read = read(fd, buf, letters);
	num_write = write(STDOUT_FILENO, buf, num_read);
	close(fd);
	free(buf);

	return (num_write);
}
