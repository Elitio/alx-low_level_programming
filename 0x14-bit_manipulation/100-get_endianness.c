#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if it is big endian,
 * 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int n;
	char *m;

	n = 1;
	m = (char *) &n;

	return ((int)*m);
}
