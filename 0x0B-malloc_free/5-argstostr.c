#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr -  concatenates all the arguments
 * @ac: no arguments
 * @av: arguments
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *p, ln = 0, cnt = 0, i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (*(av + cnt))
	{
		ln += fn_lengthOfString(*(av + cnt));
		cnt++;
	}

	p = malloc(ln + ac + 1);

	if (p == NULL)
		return (NULL);

	cnt = 0;

	while (*av)
	{
		char *c = *av;

		cnt = 0;
		ln += fn_lengthOfString(c);

		while (*(c + cnt))
		{
			*(p + (i++)) = *c;
			c++;
		}

		*(p + (i++)) = '\n';
		av++;
	}

	*(p + i) = '\0';

	return (p);
}
/**
 * fn_lengthOfString - length of a string.
 * @p: string
 *
 * Return: length
 */
int fn_lengthOfString(char *p)
{
	int length = 0;

	while (*(p +  length))
	{
		length++;
	}

	return (length);
}
