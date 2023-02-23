#include "main.h"

/**
 * _isalpha - This checked if a character is an alphabet
 *
 * @c: This is the parameter to checked
 *
 * Return: always 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) && (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
