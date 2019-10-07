#include "holberton.h"
/**
 * _strspn -  gets the length of a prefix substring
 * @s: pointer
 * @accept: characters
 *
 * Return: dest
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s != '\0')
	{
		if (counterFind(s, accept) > 0)
		{
			i++;
		}
		else
		{
			break;
		}
		s++;
	}

	return (i);
}
/**
 * counterFind - counter repetitions
 * @p: pointer
 * * @c: character
 * *
 * Return: dest
 */
int counterFind(char *p, char *c)
{
	int counter = 0, i = 0;

	while (c[i] != '\0')
	{
		if (*p == c[i])
		{
			counter++;
		}

		i++;
	}

	return (counter);
}
