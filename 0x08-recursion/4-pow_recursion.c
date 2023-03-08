#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - This is the function
 *
 * @x: This is the numner
 * @y: This is the raised to the power number
 * Return: Always 0
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
