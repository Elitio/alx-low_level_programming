#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - This is the parameter function
 *
 * @dest: This is the destination parameter
 * @src: This is the source parameter
 * @n: This is n bytes of src to copy to dest
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
