#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - This is the function to print in reverse
 *
 * @s: This is the parameter of the function
 * Return: Always 0
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
