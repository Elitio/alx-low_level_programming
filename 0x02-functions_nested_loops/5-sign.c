#include "main.h"

/**
 * print_sign - This will print the sign attached to a number
 *
 * @n: This is the parameter to be checked
 *
 * Return: always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (0);
		_putchar(0);
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
