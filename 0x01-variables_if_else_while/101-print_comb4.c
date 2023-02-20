#include <stdio.h>
/**
 * main - Print all possible different combinations of three digits.
 *
 * Return: Always 0 (success)
**/
int main(void)
{
int i, j, k;
for (i = 48 ; i <= 55 ; i++)
{
for (j = 49 ; j <= 56 ; j++)
{
for (k = 50 ; k <= 57 ; k++)
{
if (j <= i || k <= j || i == j || i == k || j == k)
{
continue;
}
else
{
putchar(i);
putchar(j);
putchar(k);
}
if (i <= 54 || j <= 55 || k <= 56)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
