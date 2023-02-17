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
	int j;

	for (num = 0; num <= 9; num++)
	{
		for (j = num; j <= 9; j++)
		{
			if (num != j)
			{
				putchar(num + '0');
				putchar(j + '0');
				if (num != 9 && j != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	return (0);
}
