#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - Sets a bit to one at a given index
 * @n: Pointer of an unsigned long int.
 * @index: Index of the bit.
 *
 * Return: Returns 1 if it works, -1 if it doesn't.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
	{
		return (-1);
	}

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
