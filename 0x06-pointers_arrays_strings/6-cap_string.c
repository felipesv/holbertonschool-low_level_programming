#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: array
 *
 * Return: return string cocatenated
 */
char *cap_string(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		if (specialCharact(s[length]) && !specialCharact(s[length + 1]))
		{
			length++;

			if (s[length] >= 'a' && s[length + 1] <= 'z')
			{
				s[length] = s[length] - 32;
			}
		}

		length++;
	}

	return (s);
}
/**
 * specialCharact - especial character
 * @a: char
 *
 * Return: 0 no especial, 1 especial
 */
int specialCharact(char a)
{
	switch (a)
	{
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
	case ' ':
	case '\n':
	case '\t':
		return (1);
	}

	return (0);
}
