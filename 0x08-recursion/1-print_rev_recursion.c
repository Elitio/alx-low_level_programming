#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - This is the function
 *
 * @s: This is the parameter
 * Return: Will return the reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
