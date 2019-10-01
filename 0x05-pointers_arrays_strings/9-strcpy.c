#include <stdio.h>
#include "holberton.h"
/**
 * _strcpy - strcpy
 * @dest: array
 * @src: elements to print
 *
 * Return: is a void
 */

char *_strcpy(char *dest, char *src)
{
	int length;

	length = 0;

	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}

	return (dest);

}
