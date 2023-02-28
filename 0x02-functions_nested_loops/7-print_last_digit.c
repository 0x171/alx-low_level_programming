#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: the number to be given
 * Return: Value of the last digit on n
 */
int print_last_digit(int n)
{
if (n % 10 < 0)
{
_putchar((n % 10) * -1 + '0');
return ((n % 10) * -1);
}
else
{
_putchar((n % 10) + '0');
return (n % 10);
}
}

