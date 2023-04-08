#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/**
 * get_bit - Function to print the value of a bit at an index
 * @n: decimal to be converted to binary
 * @index: The index of the converted binary to print
 * Return: Will return the value of the binary indicated by the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_index_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	n >>= index;
	bit_index_value = n & 1;
	return (bit_index_value);
}
