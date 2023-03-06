#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * set_string - This is the function prototype to set a pointer to char
 *
 * @s: This is a pointer to a pointer
 * @to: This is a pointe, the second prameter
 * Return: Void will return no data set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
