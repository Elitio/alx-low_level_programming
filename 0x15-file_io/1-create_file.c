#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Pointer to a filename.
 * @text_content: Pointer to content written to the file.
 *
 * Return: 1 if success, -1 if fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int wrt;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	wrt = write(fd, text_content, num_letters);

	if (wrt == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);

}
