#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - This is the function to create memory space with malloc
 *
 * @b: This is the parameter
 * Return: Will return a pointer
 */


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
