#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - This codes prints natural numbers up to 98
 *
 * @n: This is the parameter to start the counting from
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int m = n;

	if (m < 98)
	{
		_putchar(m);
		_putchar(',');
		_putchar(' ');
	}
	n++;
	else if (m > 98)
	{
		_putchar(m);
		_putchar(',');
		_putchar(' ');
	}
	n--;
	else
	{
		_putchar(98);
	}
	_putchar('\n');
}
