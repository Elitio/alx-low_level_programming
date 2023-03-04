#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * _strpbrk - This is the prototype function
 *
 * @s: This is the first parameter
 * @accept: This is second parameter
 * Return: This will return a string
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
