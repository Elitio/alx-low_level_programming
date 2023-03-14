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
	int length = 0;
	int i;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}
	/* calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}
	/* allocate memory for the duplicate string */

	dup_str = malloc((length + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	/* Copy the string to the newly allocated memory */

	for (i = 0; i <= length; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
}
