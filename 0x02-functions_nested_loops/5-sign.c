#include "holberton.h"
/**
 * print_sign -  display if it is positive or negativo or zero
 * @n: lette in ascii doe
 *
 * Return: 1 if the number is postive, 0 if is zero and -1 if is negative
 */
int print_sign(int n)
{
if (n > 1)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
