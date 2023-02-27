#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - This is the prototype function that reverses string
 *
 * @s: This is the parameter
 * Return: This will return 0 when successful
 */

void rev_string(char *s)
{
	int len = strlen(s) - 1;
	int i;

	for (i = len; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
