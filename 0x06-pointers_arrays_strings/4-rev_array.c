#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - This is the function that reverses an array
 *
 * @a: This is the pointer parameter
 * @n: This is the number of string to reverse
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
