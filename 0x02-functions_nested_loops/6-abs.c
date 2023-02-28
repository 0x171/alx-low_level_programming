#include "main.h"
/**
 * _abs - Compute the absolute value of an integer
 * @n: Integer to be computed
 * Return: Absolute of number
 */
int _abs(int n)
{
if (n < 0)
{
int abs_val = n * -1;
return (abs_val);
}
else
{
return (n);
}
}

