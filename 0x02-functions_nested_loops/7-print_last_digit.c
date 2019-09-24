#include "holberton.h"
/**
 * print_last_digit - print the last digit
 * @n:
 *
 * Return: the absolute number of some number
 */
int print_last_digit(int n)
{
int lastDigit;
char digitPrint, digitReturn;
lastDigit = n % 10;
if (lastDigit < 0)
{
lastDigit = lastDigit * -1;
}
digitPrint = '0' + lastDigit;
digitReturn = lastDigit;
_putchar(digitPrint);
return (digitReturn);
}
