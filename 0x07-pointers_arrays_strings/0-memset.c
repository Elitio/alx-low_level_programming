#include "main.h"
#include <string.h>

/**
 * _memset - This is the prototype function
 * @s: This is the first parameter
 * @b: This is the second parameter
 * @n: This is the third parameter
 * Return: Will return char
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
