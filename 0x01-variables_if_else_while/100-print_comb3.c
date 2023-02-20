#include <stdio.h>
/**
 * main - Print all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48; i <= 57 ; i++)
{
for (j = 48 ; j <= 57 ; j++)
{
if (j == 48 || j <= i)
{
continue;
}
else
{
putchar(i);
putchar(j);
}
if (i <= 55)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
