#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * Return: is a void
 */
void _print_rev_recursion(char *s)
{
	char *p = s + 1;

	if (*s != '\0')
	{
		_print_rev_recursion(p);
		_putchar(*s);
	}
}
