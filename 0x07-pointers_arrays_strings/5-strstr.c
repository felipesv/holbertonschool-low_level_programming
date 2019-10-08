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
	int i = 0, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		while (needle[j] != '\0' && haystack[i] != '\0')
		{
			if (haystack[i] != needle[j])
			{
				break;
			}

			j++;
			i++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + (i - j));
		}
		else
		{
			i -= j;
		}
	}

	return (haystack + i);
}
