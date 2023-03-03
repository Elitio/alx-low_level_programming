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

	for (int i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		for (size_t j = 0; j < strlen(leet_chars); j++)
		{
			if (c == leet_chars[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}
	return (str);
}
