#include "main.h"
/**
 * jack_bauer - Print every minute of the day, starting from 00:00 to 23:59
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int hour1, hour2, min1, min2;
for (hour1 = 0 ; hour1 <= 2 ; hour1++)
{
for (hour2 = 0 ; hour2 <= 9 ; hour2++)
{
if ((hour1 <= 1 && hour2 <= 9) || (hour1 <= 2 && hour2 <= 3))
{
for (min1 = 0 ; min1 <= 5 ; min1++)
{
for (min2 = 0 ; min2 <= 9 ; min2++)
{
_putchar(hour1 + '0');
_putchar(hour2 + '0');
_putchar(':');
_putchar(min1 + '0');
_putchar(min2 + '0');
_putchar('\n');
}
}
}
}
}
}

