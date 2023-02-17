#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The first set of code to be executed
 *
 * Return: returns 0 is successful
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'A'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
