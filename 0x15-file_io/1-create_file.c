#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * creat_file - This function creates a file
 * @filename: The name of the file to be created
 * @text_content: The content to be written to the file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t length;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = strlen(text_content);
		write_bytes = write(fd, text_content, length);
		if (write_bytes == -1 || (size_t) write_bytes != length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
