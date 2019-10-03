#include "holberton.h"
/**
 * _strncpy - function that copies a string.
 * @dest: array
 * @src: array
 * @n: number of characters to copy
 *
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int  jSrc;

	jSrc = 0;

	while (jSrc < n && src[jSrc] != '\0')
	{
		dest[jSrc] = src[jSrc];

		jSrc++;
	}

	while (jSrc < n)
	{
		dest[jSrc] = '\0';
		jSrc++;
	}

	return (dest);
}
