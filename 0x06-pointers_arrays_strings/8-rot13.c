#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @s1: array
 *
 * Return: return string cocatenated
 */
char *rot13(char *s1)
{
	int i, j;
	char s2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s3[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		j = 0;

		while (s2[j] != '\0')
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
