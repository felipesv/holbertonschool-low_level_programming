#include "holberton.h"
/**
 * print_binary - convert to binary and print
 * @n: number to convert
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int cntBits = 0, mask = 1, m = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (m != 0)
	{
		m = m >> 1;
		cntBits++;
	}

	mask = mask << (cntBits - 1);

	while (mask != 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');

		mask = mask >> 1;
	}

}
