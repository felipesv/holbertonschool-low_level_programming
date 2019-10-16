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
	char *p;
	int ln = 0, i = 0, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, ln++)
		for (j = 0; av[i][j] != '\0'; j++, ln++)

			p = malloc(ln);

	if (p == NULL)
		return (NULL);

	for (i = 0, ln = 0; i < ac; i++, ln++)
	{
		for (j = 0; av[i][j] != '\0'; j++, ln++)
		{
			*(p + ln) = av[i][j];
		}

		*(p + ln) = '\n';
	}

	*(p + ln) = '\0';

	return (p);
}
