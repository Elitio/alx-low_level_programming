#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * main - This is the first executed function
 *
 * Return: This will return 0 for success
 */

int main(void)
{
	int n;
	int m;


	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			if (n != m && n < m)
			{
				putchar(n);
				putchar(m);
				if (n == 56 && m == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
