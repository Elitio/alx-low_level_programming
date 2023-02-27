#include "main.h"

/**
 * main - This is the code to be executed first
 *
 * Return: This code returns 0 when successful
 */

int main(void)
{
	char *str = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (0);
}
