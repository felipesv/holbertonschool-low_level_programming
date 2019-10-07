#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer
 * @accept: characters
 *
 * Return: dest
 */
char *_strpbrk(char *s, char *accept)
{
	char c;
	char *copy = s;

	while (s != '\0' && accept != '\0')
	{
		if (*s == *accept)
		{
			c = *s;
			break;
		}
		s++;
		accept++;
	}

	return (_strchr(copy, c));
}
/**
 * _strchr - locates a character in a string.
 * @s1: pointer
 * @c: character
 *
 * Return: dest
 */
char *_strchr(char *s1, char c)
{
	while (s1 != '\0')
	{
		if (*s1 == c)
		{
			return (s1);
		}

		s1++;
	}

	return ('\0');
}
