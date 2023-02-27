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
	int length = strlen(str);
	int half_len = length / 2;
	int start_len;
	int i;

	if (length % 2 == 0)
	{
		start_len = half_len;
	}
	else
	{
		start_len = (length - 1) / 2;
	}
	for (i = start_len; i <= length - 1; i++)
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
