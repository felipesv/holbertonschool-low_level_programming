#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - natural numbers
 * @n: number 1
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
while (1)
{
if (n == 98)
{
printf("%d\n", n);
break;
}
else
{
printf("%d, ", n);
}
if (n < 98)
{
n++;
}
else
{
n--;
}
}
}
