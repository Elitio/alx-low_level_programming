#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - This is the function to print the length of string
 *
 * @s: This is the parameter
 * Return: Will return 0 when successful
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
