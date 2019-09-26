#include "holberton.h"
/**
 * print_number - print number
 * @n: number
 *
 * Return: is a void
 */

void print_number(int n)
{

	int numdigit = 0, numN = n,  i, modulo;
	int a[4];

	if (n < 0)
	{
		n = n * -1;
		numN = n;
		_putchar('-');
	}

	do {
		modulo = numN % 10;
		numN = numN / 10;
		a[numdigit] = modulo;
		numdigit++;
	} while (numN > 0);

	for (i = numdigit - 1; i >= 0; i--)
	{
		_putchar('0' + a[i]);
	}
}
