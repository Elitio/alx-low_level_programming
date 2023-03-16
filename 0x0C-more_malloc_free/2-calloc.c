#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - This is the function that allocate memory fot an array
 *
 * @nmemb: This is the first parameter of length size
 * @size: This is the second parameter of size of data type
 * Return: Will return A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* Declare pointer variable */
	void *ptr;

	/* Checks if nmemb or size is 0 and returns null */

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* Allocate memory with malloc */

	ptr = malloc(nmemb * size);

	/* Checks if malloc failed */

	if (ptr == NULL)
	{
		return (NULL);
	}

	/* Zero out the memory with memset - Still needs explanations */

	memset(ptr, 0, nmemb * size);

	return (ptr);

}

