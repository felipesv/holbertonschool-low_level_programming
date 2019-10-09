#include "holberton.h"
/**
 * _strlen_recursion -  length of a string.
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s)
	{
		length += _strlen_recursion(++s);
	}
	else
	{
		length -= 1;
	}

	return (length);
}
