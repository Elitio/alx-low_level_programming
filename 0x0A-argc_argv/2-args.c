#include <stdio.h>

/**
 * main - This is the main function
 *
 * @argc: This is will print the number of arguments
 * @argv: THis will print the names of the arguments
 * Return: ALways 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}

