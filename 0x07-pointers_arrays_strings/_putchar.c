#include <unistd.h>

/**
 * main - This is the first executed code
 *
 * _putchar - This function will print the _putchar string
 *
 * Return: The return value will be the string
 */

int _putchar(char str)
{
	return(write(1, &str, 1));
}
