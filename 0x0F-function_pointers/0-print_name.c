#include "function_pointers.h"

/**
 * print_name - This function will print a name
 *
 * @name: name parameter to be printed
 * @f: Pointer to function
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
