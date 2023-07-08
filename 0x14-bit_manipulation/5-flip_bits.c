#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits -  returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return : Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numb_of_bits;

	for (numb_of_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			numb_of_bits++;
		}
	}
	return (numb_of_bits);
}
