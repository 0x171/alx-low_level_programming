#include <stdio.h>
/**
 * main - Print all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
*/
int main(void)
{
char alpha;

for (alpha = 48 ; alpha <= 57 ; alpha++)
{
putchar(alpha);
}
for (alpha = 97 ; alpha <= 102 ; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
