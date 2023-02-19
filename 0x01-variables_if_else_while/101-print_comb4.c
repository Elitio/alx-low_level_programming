#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * main - This gets executec first
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	int n;
	int m;
	int o;

	n = 48;
	m = 48;
	o = 48;
	while (n < 58)
	{
		m = 48;
		while (m < 58)
		{
			o = 48;
			while (0 < 58)
			{
				if (n < m && m < 0)
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (n == 55 && m == 56 && o == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
