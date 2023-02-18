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
	int n = 0;
	int m = 0;


	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n != m && n < m)
			{
				if (n != 8 && m != 9)
				{
					putchar(n);
					putchar(m);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
