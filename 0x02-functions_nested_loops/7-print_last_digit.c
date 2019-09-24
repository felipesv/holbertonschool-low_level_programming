#include "holberton.h"
/**
 * print_last_digit -  
 * @n:
 *
 * Return: the absolute number of some number
 */
int print_last_digit(int n)
{
  int lastDigit;
  char digitPrint, digitReturn;
  lastDigit = n % 10;
  digitPrint = '0' + lastDigit;
  digitReturn = lastDigit;
  _putchar(digitPrint);

  return (digitReturn);
}
