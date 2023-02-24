void print_remaining_days(int month, int day, int year)
{
	int day_of_year = convert_day(month, day);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month > 2)
		{
			day_of_year++;
		}

		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", 366 - day_of_year);
	}
	else
	{
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", 365 - day_of_year);
	}
}

