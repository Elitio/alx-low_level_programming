#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the ifirst code that runs
 *
 * Return: this returns 0 for no errors
 */

int main(void)
{
	char n;
	char m;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (m = 0; n < 6; n++)
	{
		putchar(m + 'a');
	}
	putchar('\n');
	return (0);
}
