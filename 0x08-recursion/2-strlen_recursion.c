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
	int len = 0;

	while(*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
