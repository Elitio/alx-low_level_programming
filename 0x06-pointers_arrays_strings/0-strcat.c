#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - This is the prototype function
 *
 * @dest: This is the first parameter
 * @src: This is the second parameter
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	for (; *dest; dest++)
		;
	for (; (*dest = *src); dest++, src++)
		;

	return (ptr);
}
