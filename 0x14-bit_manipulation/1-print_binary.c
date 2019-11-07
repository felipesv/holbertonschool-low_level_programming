#include "holberton.h"
/**
 * print_binary - convert to binary and print
 * @n: number to convert
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int number = n * 0.5;
	unsigned long int m = (n - (2 * number));

	if (n != 0)
	{
		print_binary(number);

		if (m == 0)
			putchar('0');
		else
			putchar('1');
	}
}
