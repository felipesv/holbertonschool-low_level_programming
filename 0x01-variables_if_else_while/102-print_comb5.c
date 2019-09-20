#include <stdio.h>
/**
 * main - Show the number 0 - 9
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, d, display = 0;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = 48; c <= 57; c++)
{
for (d = 48; d <= 57; d++)
{
if (((c + d) > (a + b)) && (a <= c))
{
display = 1;
}
else if (a <= c && a != c && b != d)
{
display = 1;
}
if (display)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a != 57 || b != 56 || c != 57 || c != 57)
{
putchar(',');
putchar(' ');
}
}
display = 0;
}
}
}
}
putchar('\n');
return (0);
}
