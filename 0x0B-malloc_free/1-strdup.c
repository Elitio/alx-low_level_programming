#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strdup - This is the function that duplivcate a string
 *
 * @str: This is the paramter
 * Return: Will return a string duplicate
 */


char *_strdup(char *str)
{
	char *dup_str, *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	new_str = malloc(strlen(str) + 1);
	if (new_str == NULL)
	{
		free(dup_str);
		return (NULL);
	}
	strcpy(new_str, dup_str);
	free(dup_str);
	return (new_str);
}
