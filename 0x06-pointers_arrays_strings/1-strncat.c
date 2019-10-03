#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * @dest: array
 * @src: array
 * @n: number of characters to copy
 *
 * Return: is a void
 */

char *_strncat(char *dest, char *src, int n)
{
	int lengthDest, lengthSrc, iDest, jSrc;

	lengthDest = lengthArray(dest);
	lengthSrc = lengthArray(src);
	iDest = lengthDest;
	jSrc = 0;

	if (n > lengthSrc)
	{
		n = lengthSrc;
	}

	for (iDest = iDest; iDest < (lengthDest + n); iDest++)
	{
		dest[iDest] = src[jSrc];

		if ((iDest + 1) == (lengthDest + lengthSrc))
		{
			dest[iDest + 1] = '\0';
		}

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
