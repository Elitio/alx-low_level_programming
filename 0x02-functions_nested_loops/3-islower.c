#include "main.h"

/**
 * _islower - This function will print 1 if c is lowercase
 * c - This is the parameter of function _islower.
 *
 * Return: will return 0 if successful
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
