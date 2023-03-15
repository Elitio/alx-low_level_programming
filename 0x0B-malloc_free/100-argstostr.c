#include <stdlib.h>
#include <string.h>

/**
 * argstostr - This is the prototype function
 *
 * @ac: This is the integer parameter
 * @av: Thi is  pointer to a pointer parameter
 * Return: Will return a string
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	char *result;
	int index;
	int i;
	size_t j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1; /* +1 for the newline character */
	}

	result = malloc(total_length * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			result[index++] = av[i][j];
		}
		result[index++] = '\n';
	}

	return (result);
}

