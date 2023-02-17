#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the code that runs first
 *
 * Return: the return value is 0 for success
 */

int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
