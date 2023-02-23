#include "main.h"

/**
 * jack_bauer - This will print 24 hours just like the clock
 *
 * Return: Will always be 0
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 +'0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
