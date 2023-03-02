#include "main.h"
#include <stdio.h>

#define MAX 1000

/**
 * cap_string - This is the function pointer
 *
 * @str: This is the parameter
 * Return: Will return 0 when true
 */

char *cap_string(char *)
{
	int i;
	char str[MAX] = {0};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
			if(str[i] == ' ' || str[i] == ';' || str)
			{
				i++;
			}
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
			else
			{
				if(str[i] >= 'A' && str[i] <= 'Z')
				{
					str[i] = str[i] + 32;
				}
			}
		}
	}
	return (str[i]);
}
