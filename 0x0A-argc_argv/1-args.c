#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num = argc - 1;

	print_program_number(num);
	return (0);
}

/**
 * print_program_number - Prints the number of the program
 *
 * @num: The program number to print
 */

void print_program_number(int num)
{
	printf("%d\n", num);
}

