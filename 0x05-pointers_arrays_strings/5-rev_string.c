#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: character
 *
 * Return:
 */
void rev_string(char *s)
{

	int length, j;
	char b, c;

	j = 0;
	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	for (j = 0; j < length; j++)
	{
		b = s[length];
		c = s[j];

		s[length] = c;
		s[j] = b;
		length--;
	}
}
