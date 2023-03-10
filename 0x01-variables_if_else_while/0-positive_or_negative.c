#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The starting point of the code
 *
 * n - the variable that will print out a random number each time called
 *
 * Return: Should return 0 if successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
