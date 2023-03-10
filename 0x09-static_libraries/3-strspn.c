#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 * _strspn - This is the funcion
 *
 * @s: This is the first parameter
 * @accept: This is the second parameter
 * Return: Will return an unsigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
