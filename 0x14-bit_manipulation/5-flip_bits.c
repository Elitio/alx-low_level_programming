#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * flip_bits - The function to flip and count the number of bits flipped
 *
 * @n: Initial number to be flipped
 * @m: The flipped number
 * Return: Will return the number of times the n was flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result != 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
