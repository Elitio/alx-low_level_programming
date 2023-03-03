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
	char *p;

	while ((p = strchr(str, 'o')) != NULL)
	{
		*p = '0';
	}
	while ((p = strchr(str, 'O')) != NULL)
	{
		*p = '0';
	}
	while ((p = strchr(str, 'e')) != NULL)
	{
		*p = '3';
	}
	while ((p = strchr(str, 'E')) != NULL)
	{
		*p = '3';
	}
	while ((p = strchr(str, 'l')) != NULL)
	{
		*p = '1';
	}
	while ((p = strchr(str, 'L')) != NULL)
	{
		*p = '1';
	}
	while ((p = strchr(str, 't')) != NULL)
	{
		*p = '7';
	}
	while ((p = strchr(str, 'T')) != NULL)
	{
		*p = '7';
	}
	return (str);
}
