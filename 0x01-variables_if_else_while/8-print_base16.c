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
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	for (n = 0; n < 6; n++)
	{
		putchar(n + 'a');
	}
	putchar('\n');
	return (0);
}
