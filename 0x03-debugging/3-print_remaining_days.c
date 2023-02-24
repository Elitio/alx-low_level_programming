#include "main.h"

/**
 * print_remaining_days - This will print the remaining days of the year
 *
 * @month: This is the first parameter
 * @day: This is the second parameter
 * @year: This is the third parameter
 *
 * Return: Will return 0
 */


void print_remaining_days(int month, int day, int year)
{

	if ((year % 100 == 0 && year % 400 == 0) || year % 4 == 0)
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid month:%02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

