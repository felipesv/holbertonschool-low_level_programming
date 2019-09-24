#include "holberton.h"
/**
 * print_times_table - display tables n - n
 * @n: table
 *
 * Return: the absolute number of some number
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('0' + (i * j));
				if ((i * j) < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (i * j));
				}
				else if ((i * j) <= 99 && j != 0)
				{
					_putchar(' ');
					_putchar('0' + ((i * j) / 10));
					_putchar('0' + ((i * j) % 10));
				}
				else if ((i * j) <= 999 && j != 0)
				{
					_putchar('0' + (((i * j) / 10) / 10));
					_putchar('0' + (((i * j) / 10) % 10));
					_putchar('0' + ((i * j) % 10));
				}
				if (j == n)
				{
					_putchar('\n');
				}
			}
		}
	}
}
