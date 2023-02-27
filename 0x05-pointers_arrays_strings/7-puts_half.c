#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - This is the prototype function
 *
 * @str: This is the parameter
 * Return: Always 0
 */

void puts_half(char *str)
{
	int half_len = strlen(str);
	int i;

	for (i = half_len / 2; i < half_len; i++)
	{
		if (half_len % 2 != 0)
		{
			for (i = (half_len - 1) / 2; i < half_len; i++)
			{
				printf("%c", str[i]);
			}
		}
		printf("%c", str[i]);
	}
	putchar('\n');
}
