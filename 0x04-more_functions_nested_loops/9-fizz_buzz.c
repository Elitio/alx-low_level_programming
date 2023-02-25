#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is the funvtion that gets executed first
 *
 * Return: Will return 0 if succesful
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n == 100)
		{
			printf("%d\n", n);
			break;
		}
		else
		{
			printf("%d", n);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
