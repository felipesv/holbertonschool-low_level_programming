#include "holberton.h"
/**
 * string_toupper - all lowercase letters of a string to uppercase.
 * @*: array
 *
 * Return: pointer
 */

char *string_toupper(char *s)
{
	int ascii, counter;

	while (*s != '\0')
	{
		ascii = *s;

		if (ascii >= 97 && ascii <= 122)
		{
			*s = ascii - 32;
		}
		s++;
		counter++;
	}

	s = s - counter;

	return (s);
}
