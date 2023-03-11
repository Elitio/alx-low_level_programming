#include "main.h"
#include <stdio.h>

/**
 * mul - This is the prototype function
 *
 * @n: This is the first parameter
 * @m: This is the second parameter
 * Return: Will return 0 if successful
 */

int mul(int n, int m)
{
	int mul_num;

	if (!n || !m)
	{
		printf("Error\n");
		return (1);
	}
	mul_num = n * m;
	printf("%d\n", mul_num);
	return (0);
}

/**
 * main - This is the main function where everything starts
 *
 * Return: Always 0;
 */


int main(void)
{
	int mul(int n, int m);
	mul(4, 5);
	mul(5, 0);
	return (0);
}
