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
		_putchar('+');
		_putchar(1);
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		_putchar(1);
		return (-1);
	}
	else
	{
		_putchar(0);
		_putchar(0);
		return (0);
	}
}
