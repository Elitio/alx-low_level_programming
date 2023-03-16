#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - This is the pointer function
 *
 * @s1: This is the first pointer parameter
 * @s2: This is the second pointer parameter
 * @n: This is the number of bytes to copy from s2
 * Return: Will return a pointer to a newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *outcome;
	size_t s1_len;
	size_t s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	outcome = (char *)malloc((s1_len + n + 1) * sizeof(char));
	if (outcome == NULL)
	{
		return (NULL);
	}

	memcpy(outcome, s1, s1_len);
	memcpy(outcome + s1_len, s2, n);
	outcome[s1_len + n] = '\0';
	return (outcome);
}
