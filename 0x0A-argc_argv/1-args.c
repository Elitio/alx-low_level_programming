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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

