#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: number
 *
 * Return: no return is a void
 */
void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}

	_putchar('\n');
}
