#include <stdio.h>
/**
 * main - Show the number 0 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = 48; c <= 57; c++)
{
if (a != b && a != c && c != b)
{
if (b > a && c > b)
{
putchar(a);
putchar(b);
putchar(c);
if (a != 55 || b != 56 || c != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}

