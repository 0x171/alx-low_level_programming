#include <stdio.h>
/**
 * main - Print the lowercase alphabet in reverse.
 *
 * Return: Always 0.
*/
int main(void)
{
char alpha;

for (alpha = 122 ; alpha >= 97 ; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
