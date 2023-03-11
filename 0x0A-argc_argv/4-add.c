#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_num - Checksstrings to see if there are digits
 *
 * @str: an array string
 * Return: Will return 0 when successful
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Print the sum of the program
 * @argc: Counts the number of arguments
 * @argv: The arguments themselves
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int count = 1, str_to_int, sum = 0;

	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
		return (0);

}
