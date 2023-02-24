#include "main.h"

/**
 * more_numbers - This is the prototype function to print numbers ten times
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
