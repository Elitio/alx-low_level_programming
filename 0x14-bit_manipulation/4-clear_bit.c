#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - clears a bit to 0 at a given index.
 * @n: Pointer of an unsigned long int.
 * @index: Index of the bit.
 *
 * Return: Returns 1 if it works, -1 if it doesn't.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
	{
		return (-1);
	}

	x = 1 << index;

	if (*n & x)
	{
		*n ^= x;
	}

	return (1);
}
