#include "main.h"

/**
 * print_triangle - This is the prototype function that will print a triangle
 *
 * @size: This is the parameter to be checked
 * Return: Awlways 0
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
