#include "main.h"

/**
 * _isdigit - This is the function that checks a parameter for a digit
 *
 * @c: This is the parameter to be checked
 *
 * Return: Should return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
