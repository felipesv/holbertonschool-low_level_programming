#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: char as string
 *
 * Return: is a void
 */
int _strlen(char *s)
{
	int i, size;

	size = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		size++;
	}

	return (size);
}
