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

	n = 48;
	m = 97;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (m < 103)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
