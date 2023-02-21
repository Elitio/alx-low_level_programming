#include <unistd.h>

/**
 * main - This is the first executed code
 *
 * _putchar - This function will print the _putchar string
 *
 * Return: The return value will be the string
 */

int _putchar()
{
	char str[] = "_putchar";
	return(write(1, &str, sizeof(str) - 1));
}
