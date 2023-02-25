#include "main.h"

/**
 * print_square - This is the prototype function to print a square with "#"
 *
 * @size: This is the parameter
 *
 * Return: Will return 0 if successful
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
