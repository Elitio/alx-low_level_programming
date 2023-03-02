#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - This is the function to print uppercase letters
 * @str: Pointer to a string
 * Return: Pointer to the modified string
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		*p = toupper(*p);
		p++;
	}
	return (str);
}
