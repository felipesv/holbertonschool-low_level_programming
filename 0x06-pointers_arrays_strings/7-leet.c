#include "holberton.h"
/**
 * leet - encodes a string into 1337.
 * @s1: array
 *
 * Return: return string cocatenated
 */
char *leet(char *s1)
{
	int i, j, lengthInt;
	char s2[] = "aeotlAEOTL";
	int s3[] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};

	i = 0;
	lengthInt = sizeof(s3) / sizeof(s3[0]);

	while (s1[i] != '\0')
	{
		j = 0;
		while (j  < lengthInt)
		{
			if (s1[i] == s2[j])
			{
				s1[i] = s3[j];
				break;
			}

			j++;
		}

		i++;
	}

	return (s1);
}
