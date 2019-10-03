#include "holberton.h"
/**
 * string_toupper - all lowercase letters of a string to uppercase.
 * @s: array
 *
 * Return: pointer
 */

char *string_toupper(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
		if (s[length] >= 97 && s[length] <= 122)
		{
			s[length] = s[length] - 32;
		}
	}

	return (s);
}
