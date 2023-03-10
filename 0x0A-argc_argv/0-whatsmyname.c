#include "main.h"
#include <stdio.h>


/**
 * print_program_name - This is the function that print program name
 *
 * @program_name: This is the parameter for program name
 * Return: Always void
 */

void print_program_name(char *program_name)
{
	printf("%s\n", program_name);
}

/**
 * main - This is the function that gets to work first
 *
 * @argc: This is the first parameter
 * @argv: This is the second parameter
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	print_program_name(argv[0]);
	return (0);
}
