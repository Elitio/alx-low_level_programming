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

	for (n = 48; n <= 47; n++)
	{
		if (n != 47)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
