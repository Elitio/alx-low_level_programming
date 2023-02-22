#include "main.h"

/**
 * print_alphabet_x10 - This is the prototype that prints a to z x10
 *
 * Return: This returns 0 for success
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
