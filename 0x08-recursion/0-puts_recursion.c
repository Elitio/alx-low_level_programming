#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - This is the prototype function
 *
 * @s: This is the character parameter
 * Return: Will return a character
 */


void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
