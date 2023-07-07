#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - Returns the value of bit at
 * a given index.
 * @n: Unsigned long int value
 * @index: Index of bit.
 *
 * Return: Will return the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	return (-1);
}
