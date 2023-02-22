#include "main.h"

/**
 * main - This is the executed function at initt
 *
 * Return: will return 0 if successful;
 */

int main(void)
{
	int *alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
