#include "holberton.h"
/**
 * times_table - display tables 0 -9
 *
 * Return: the absolute number of some number
 */
void times_table(void)
{
int i, j, multi;
char a;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
multi = i * j;
if (j != 0 && multi < 10)
{
_putchar(' ');
}
if (multi < 10)
{
a = '0' + multi;
_putchar(a);
}
else
{
_putchar('0' + (multi / 10));
_putchar('0' + (multi % 10));
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
