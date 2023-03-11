#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * mul - This is the prototype function
 *
 * @n: This is the first parameter
 * @m: This is the second parameter
 * Return: Will return 0 if successful
 */

unsigned int mul(size_t n, size_t m)
{
	unsigned int mul_num;

	if (!n || !m)
	{
		printf("Error\n");
		return (1);
	}
	mul_num = n * m;
	printf("%u\n", mul_num);
	return (0);
}

/**
 * main - This is the main function where everything starts
 *
 * Return: Always 0;
 */


int main(void)
{
	mul(4, 5);
	return (0);
}
