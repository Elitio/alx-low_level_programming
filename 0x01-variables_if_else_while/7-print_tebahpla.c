#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the main block that will be executed
 *
 * Return: returns 0 for good execution
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
