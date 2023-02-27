#include "main.h"

/**
 * swap_int - This is the prototype function that swaps two integers
 *
 * @a: This is the first parameter involved in the swapping
 * @b: This is the second parameter
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int sw = *a;

	*a = *b;
	*b = sw;
}
