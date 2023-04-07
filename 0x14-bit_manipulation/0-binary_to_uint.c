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
	int i;
	int len = strlen(b);
	unsigned int conv_num = 0;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[0] == '1' && b[1] == '\0')
		{
			conv_num = 1;
			return (conv_num);
		}
		conv_num += pow(2, len - 1 - 1);
	}
	return (conv_num);
}
