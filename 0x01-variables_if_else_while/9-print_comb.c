#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the main block of code to be executed
 *
 * Return: this returns zero for true
 */

int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		if (n != 57)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
