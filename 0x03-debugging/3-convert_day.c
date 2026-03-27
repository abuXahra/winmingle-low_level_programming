#include "main.h"

/**
 * convert_day - converts date to day of year
 * */

int convert_day(int month, int day)
{    int days_in_month[] = {
	0, 31,28,31,30,31,
	30, 31, 31, 30, 30, 31
    };
    int i;
    for (i = 1; i < month; i++)
	    day += days_in_month[i];

    return day;
}

