#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * clear_bit - Function to set a bit at an index to 0
 *
 * @n: This is the number from which the bit will be set
 * @index: This is the index of the binary to set to 0
 * Return: Return 1 if it works
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	if ((*n & mask) != 0)
	{
		*n &= ~mask;
		return (1);
	}
	else
	{
		return (1);
	}
}
