#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Will convert a binary to unsigned int.
 * @b: the binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_numb;
	int len;
	int base_two_num;

	if (!b)
	{
		return (0);
	}

	unsigned_numb = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_two_num = 1; len >= 0; len--, base_two_num *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			unsigned_numb += base_two_num;
		}
	}
	return (unsigned_numb);
}
