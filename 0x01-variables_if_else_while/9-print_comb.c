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
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
