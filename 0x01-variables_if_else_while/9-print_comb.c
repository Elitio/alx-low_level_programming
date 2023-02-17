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

	for (n = 0; n < 10; n++)
	{
		if (n != 9)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
