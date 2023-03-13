#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * create_array - This is the prototype pointer function
 *
 * @size: This is the integer parameter
 * @c: This is the character parameter
 * Return: Returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(c));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
