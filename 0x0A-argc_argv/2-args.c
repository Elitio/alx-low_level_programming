#include "main.h"
#include <stdio.h>

/**
 * main - This is the main function
 *
 * @argc: This is will print the number of arguments
 * @argv: THis will print the names of the arguments
 * Return: ALways 0
 */

int main(int argc, char *argv[])
{
	print_args(argc, argv);
	return (0);
}

/**
 * print_args - This is the prototype function
 *
 * @argc: This is the first parameter
 * @argv: This is the second parameter
 * Return: Will return void
 */


void print_args(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
