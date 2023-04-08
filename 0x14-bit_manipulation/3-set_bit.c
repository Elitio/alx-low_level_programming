#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/**
 * set_bit - Function to set a bit at an index to 1
 *
 * @n: This is the number parameter
 * @index: This is the index of the binary to set to 1
 * Return: Will return 1 if it worked
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask;;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	if (*n & mask)
	{
		return (1);
	}
	*n |= mask;
	return (1);
}
