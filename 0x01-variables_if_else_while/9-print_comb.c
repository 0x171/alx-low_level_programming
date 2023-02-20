#include <stdio.h>
/**
 * main - Print all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
*/
int main(void)
{
int trick;

for (trick = 48 ; trick <= 57 ; trick++)
{
if (trick != 48)
{
putchar(',');
putchar(' ');
}
putchar(trick);
}
putchar('\n');
return (0);
}
