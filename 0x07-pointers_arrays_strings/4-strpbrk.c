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

	while (copy != '\0')
	{
		if (*copy == c)
		{
			return (copy);
		}

		copy++;
	}

	return (copy);
}
