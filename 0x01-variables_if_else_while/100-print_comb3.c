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
				if (n == 8 && m == 9)
				{
					break;
				}
				putchar(n);
				putchar(m);
			}
		}
	}
	putchar('\n');
	return (0);
}
