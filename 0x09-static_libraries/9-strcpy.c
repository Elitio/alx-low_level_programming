#include "main.h"
#include <stdio.h>


/**
 * *_strcpy - This is the pointer prototype function
 *
 * @dest: This is the destination parameter
 * @src: This is the source parameter
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	char *main_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (main_dest);
}
