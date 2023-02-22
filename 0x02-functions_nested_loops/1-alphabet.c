#include "main.h"

/**
 * print_alphabet - This is the function of the prototype
 *
 * Return: will return 0 if successful;
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
