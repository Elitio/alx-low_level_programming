#include "main.h"

/**
 * append_text_to_file - Apppends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Content to be added.
 *
 * Return: 1 if file exists, -1 if does not exist or fails.
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int wrt;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;
	}

	wrt = write(fd, text_content, num_letters);

	if (wrt == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
