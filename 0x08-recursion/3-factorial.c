#include "main.h"
#include <stdio.h>

/**
 * factorial - This is the function to get the factors
 *
 * @n: This is the Parameter
 * Return: Always 0
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
