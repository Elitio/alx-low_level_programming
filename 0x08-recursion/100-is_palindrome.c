#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * is_palindrome - This is the function to compare palindromes
 *
 * @s: This is the parameter
 * Return: Always 0
 */

int is_palindrome(char *s)
{
	int i, j;

	if (s[0] == '\0')
		return (1);
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
