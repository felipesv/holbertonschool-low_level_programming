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

	s = copy;

	while (s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}
	
	return (s);
}
