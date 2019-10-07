#include "holberton.h"
#include <stdio.h>
/**
 * _strstr -   locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Return: dest
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (posEquals(haystack, needle, i))
				{
					return (haystack + i);
				}
				else
				{
					break;
				}
			}
			else
			{
				break;
			}
		}
	}

	return (NULL);
}
/**
 * posEquals - compare s1 with s2
 * @s1: pointer
 * @s2: pointer
 * @posIni: position
 *
 * Return: return 1 success
 */
int posEquals(char *s1, char *s2, int posIni)
{
	int i, counter, sizes2;

	i = 0;
	sizes2 = lengthArray(s2);
	counter = 0;

	while (s1[posIni] != '\0' && s2[i] != '\0')
	{
		if (s1[posIni] == s2[i])
		{
			counter++;
			posIni++;
			i++;
		}
		else
		{
			break;
		}
	}

	if (counter == sizes2)
	{
		return (1);
	}

	return (0);
}
/**
 * lengthArray - length array
 * @array: array
 *
 * Return: return size
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
