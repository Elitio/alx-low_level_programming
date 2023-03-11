#include <stdio.h>
#include <stdlib.h>
/**
 * count_coin - count the minimum number of coins to make change for an t
 * amout
 * @cents: the amount of cents you need to give back
 * Return: the minimum number of coins
 */
int count_coin(int cents)
{
	int coins = 0;

	if (cents <= 0)
		return (0);
	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}
	while (cents >= 1)
	{
		coins++;
		cents -= 1;
	}
	return (coins);
}
