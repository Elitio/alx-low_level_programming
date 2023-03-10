#include "main.h"

/**
 * _abs - This is the function to produce absolute value
 *
 * @a: This is the variable type a
 *
 * Return: returns the value of a
 */

int _abs(int a)
{
	if (a >= 0)
	{
		a = a;
	}
	else if (a < 0)
	{
		a = -(a);
	}
	return (a);
}
