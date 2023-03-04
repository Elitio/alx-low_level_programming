#include "main.h"
#include <stdio.h>
#include <string.h>
#include<ctype.h>

/**
 * _strstr - This is the function
 *
 * @haystack: This is the first parameter
 * @needle: This is the second parameter
 * Return: Will return a string
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
