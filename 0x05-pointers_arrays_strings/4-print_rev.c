#include "holberton.h"
/**
 * print_rev - prints a string
 * @s: character
 *
 * Return:
 */
void print_rev(char *s)
{

	int i, size;

	size = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		size++;
	}

	for (i = size - 1; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
