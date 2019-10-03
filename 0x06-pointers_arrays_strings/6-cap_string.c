#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @dest: string 1
 * @src: string 2
 *
 * Return: return string cocatenated
 */
char *cap_string(char *s)
{
	int length = 0;

	while(s[length] != '\0')
	{
		if(specialCharact(s[length]) && !specialCharact(s[length + 1]))
		{
			length++;

			if(s[length] >= 'a' && s[length + 1] <= 'z')
			{
				s[length] = s[length] - 32;
			}
		}

		length++;
	}

	return (s);
}

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
		return 1;
		break;
	}

	return 0;
}
