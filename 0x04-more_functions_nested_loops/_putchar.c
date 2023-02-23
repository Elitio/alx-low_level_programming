#include <unistd.h>

/**
 * _putchar -  This function will print the _putchar string
 *
 * @str: This is the parameter
 *
 * Return: The return value will be the string
 */

int _putchar(char str)
{
	return (write(1, &str, 1));
}
