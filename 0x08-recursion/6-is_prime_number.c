#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - This is the function
 *
 * @n: This is the parameter
 * Return: Always 0
 */



int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	else
		return (1);
}
