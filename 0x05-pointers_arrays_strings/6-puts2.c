#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - This is the prototype function
 *
 * @str: This is the parameter
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i <= len - 1; i += 2)
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
