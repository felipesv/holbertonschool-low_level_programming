#include "holberton.h"
/**
 * print_number - print number
 * @n: number
 *
 * Return: is a void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	if (n < 10)
	{
		_putchar('0' + n);
	}
	else if (n <= 99)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n <= 999)
	{
		_putchar('0' + ((n / 10) / 10));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n <= 9999)
	{
		_putchar('0' + ((n / 10) / 10) / 10);
		_putchar('0' + ((n / 10) / 10) % 10);
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
}
