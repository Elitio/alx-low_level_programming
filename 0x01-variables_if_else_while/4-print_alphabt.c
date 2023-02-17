#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the main code to be executed first
 *
 * Return: successful if it returns 0
 */


int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
