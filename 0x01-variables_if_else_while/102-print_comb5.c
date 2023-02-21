#include <stdio.h>
/**
 * main - Print all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (success)
**/
int main(void)
{
int i, j, k, p;
for (i = 48 ; i <= 57 ; i++)
{
for (j = 48 ; j <= 56 ; j++)
{
for (k = 48 ; k <= 57 ; k++)
{
for (p = j + 1 ; p <= 57 ; p++)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(k);
putchar(p);
if (i != 57 || j != 56 || k != 57 || p != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

