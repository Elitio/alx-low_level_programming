#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

/**
 * main - This is the code that executes first
 *
 * Return: Returns 1 for success
 */

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, strlen(str));
	return (1);
}
