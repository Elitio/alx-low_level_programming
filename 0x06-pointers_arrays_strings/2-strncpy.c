#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - This is the prototype to copy a string to dest
 *
 * @dest: This is the destination parameter
 * @src: This is the source parameter
 * @n: This is the number of bytes to copy
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
