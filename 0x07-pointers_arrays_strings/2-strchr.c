#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - This is the parameter
 *
 * @s: This is the pointer string
 * @c: This is the character to be looked for in s
 * Return: Will return a string
 */



char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (strchr(s, c));
		}
		s++;
	}
	return (NULL);
}
