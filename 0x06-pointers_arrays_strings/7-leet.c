#include "main.h"
#include <string.h>

/**
 * leet - This is the function
 * @str: This is the parameter
 *
 * Return: Return a cahracter
 */

char *leet(char *str)
{
	char *leet_chars = "eElLoOaAtT";
	char *leet_replacements = "3311004477";
	size_t len = strlen(str);

	for (size_t i = 0; i < len; i++)
	{
		for (size_t j = 0; j < strlen(leet_chars); j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[i];
				break;
			}
		}
	}
	return (str);
}
