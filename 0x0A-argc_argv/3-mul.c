#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 * Return: The product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments passed to the program
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 3)
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
	}
	printf("Error\n");
	return (1);
}
