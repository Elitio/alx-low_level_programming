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
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = mul(num1, num2);
	printf("%d\n", product);
	return (0);
}
