#include "main.h"
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - Function to prnt binary of a base ten number
 * @n: The number to be converted to binary
 * Return: Will return the bnary of n
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
