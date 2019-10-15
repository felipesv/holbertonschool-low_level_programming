#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer
 * @str: pointer to copy
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int counter, sizeStr = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (*(str + sizeStr))
	{
		sizeStr++;
	}

	p = malloc(sizeStr * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (counter = 0; counter < sizeStr; counter++)
	{
		*(p + counter) = *(str + counter);
	}

	return (p);
}
