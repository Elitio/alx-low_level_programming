#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The block of code that will be executed first
 *
 * Return: returns 0 if successful
 */

int main(void)
{
	char first_letter = 'a';
	char last_letter = 'z';

	while (first_letter <= last_letter)
	{
		putchar(first_letter);
		first_letter++;
	}
	putchar('\n');
	return (0);
}
