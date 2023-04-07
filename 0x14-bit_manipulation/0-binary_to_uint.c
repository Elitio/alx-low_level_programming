#include "main.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - function to convert a binary string to an unsigned int
 * @b: This is the string argument to be converted
 * Return: Will return the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		conv_num <<= 1;
		if (*b == '1')
		{
			conv_num += 1;
		}
		b++;
	}

	return (conv_num);
}
