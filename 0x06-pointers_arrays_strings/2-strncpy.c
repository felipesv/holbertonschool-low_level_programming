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

	while (jSrc < n && dest[jSrc] != '\0')
	{
		dest[jSrc] = src[jSrc];

		jSrc++;
	}

	return (dest);
}
/**
 * lengthArray - length array
 * @array: array
 *
 * Return: return string cocatenated
 */
int lengthArray(char *array)
{
	int length = 0;

	while (array[length] != '\0')
	{
		length++;
	}

	return (length);
}
