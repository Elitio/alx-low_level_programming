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
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 9)
		{
			putchar(num + '0');
			putchar(';');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
