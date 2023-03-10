#include "main.h"
#include <ctype.h>

/**
 * _isupper - This is the function that checks for uppercase letters
 *
 * @c: This is the parameter to be checked
 *
 * Return: This is always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
