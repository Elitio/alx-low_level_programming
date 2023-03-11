#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * mul - Multiplies two integers
 * @a: The first integer to multiply
 * @b: The second integer to multiply
 * Return: The product of the multiplication
 */
int mul(int a, int b)
{
	int multiply;

	if (a && b)
	{
		multiply = a * b;
		printf("%d\n", multiply);
	}
	printf("Error\n");
	return (1);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mul(int a, int b);
	return (0);
}

