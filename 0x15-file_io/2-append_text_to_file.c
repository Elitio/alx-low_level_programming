#include "main.h"

/**
 * append_text_to_file - This function will write text in append mode
 *
 * @filename: This is the name of the file the text will be written in
 * @text_content: This is the text to be appended
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_len;
	ssize_t length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
		write_len = write(fd, text_content, length);
		if (write_len == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

}
