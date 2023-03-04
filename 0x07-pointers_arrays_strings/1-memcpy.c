#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * _memcpy - This is the pointer function
 *
 * @dest: This is the destination parameter
 * @src: This is the source parameter
 * @: This is the number of bytes to copy from source
 * @n: This is the number of bytes to copy from src to dest
 * Return: Returns a character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
