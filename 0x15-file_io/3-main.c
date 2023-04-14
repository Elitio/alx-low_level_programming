#include "cp.h"

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed to the program.
 * @argv: array of pointers to the arguments.
 * Return: 0 on success, or an exit code on failure.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (EXIT_FAILURE);
	}

	if (cp(argv[1], argv[2]) == -1)
		return (EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
