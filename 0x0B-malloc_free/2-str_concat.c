#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * str_concat - This is the prototype functon to concatenate strings
 *
 * @s1: This is the first string
 * @s2: This is the second string
 * Return: Will return a string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len_1;
	int len_2;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_1 = strlen(s1);
	len_2 = strlen(s2);

	concat_str = malloc((len_1 + len_2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j < len_2; j++)
	{
		concat_str[j + len_1] = s2[j];
	}
	return (concat_str);


}
