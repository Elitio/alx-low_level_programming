#include "main.h"
#include <stdio.h>

/**
 * _strncat - This is the parameter function
 *
 * @dest: This is the destination parameter
 * @src: This is the source parameter
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];

		dest[dest_len + i] = '\0';

	}
	return dest;
}
