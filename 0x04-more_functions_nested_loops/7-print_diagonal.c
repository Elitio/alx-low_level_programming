#include "main.h"

/**
 * print_diagonal - This is the prototype function to print diagonal lines
 *
 * @n: This is the parameter
 *
 * Return: Will return 0
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (n <= 0)
			{
				_putchar('\n');
				break;
			}
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
