#include "main.h"
#include <stdio.h>

/**
 * print_program_name - Prints the name of the program
 *
 * @program_name: The name of the program
 */

void print_program_name(char *program_name)
{
	printf("%s\n", program_name);
}

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	print_program_name(argv[0]);

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

