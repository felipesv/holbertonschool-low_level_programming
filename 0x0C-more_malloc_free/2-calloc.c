
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: size element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *p2;
	unsigned int cnt = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	p2 = p;
	for (cnt = 0; cnt < size; cnt++)
	{
		*(p2 + cnt) = 0;
	}

	p = (void *)p2;

	return (p);
}
