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
	char b[] = {'0', '1'};

	j = 0;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		b[0] = s[length - 1];
		b[1] = s[j];

		s[length - 1] = b[1];
		s[j] = b[0];
		length--;
	}
}
