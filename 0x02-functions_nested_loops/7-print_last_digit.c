#include "main.h"

/**
 * print_last_digit - This function will print the last digit of a number
 *
 * @n: This is the variable of type int
 *
 * Return: always 0
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
		m = -m;
	return (m);
}
