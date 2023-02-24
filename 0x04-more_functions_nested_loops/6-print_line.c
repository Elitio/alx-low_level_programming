#include "main.h"

/**
 * print_line - This is the prototype function to print a straight line
 * @n: This is the parameter
 *
 * Return: This will ereturn 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
