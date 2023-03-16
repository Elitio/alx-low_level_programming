#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * array_range - This is teh function that creates an arrays of range
 *
 * @min: This is the minimum number for the range
 * @max: This is the maximum number for the range
 * Return: This wil return a pointer to the newy created array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	/* Checks for invalid inputs */
	if (min > max)
	{
		return (NULL);
	}
	/* Allocate memory for the array */

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Fill the array with values from min to max */

	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
