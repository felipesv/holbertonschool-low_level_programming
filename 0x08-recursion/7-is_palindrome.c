#include "holberton.h"
/**
 * is_palindrome - if a string is a palindrome
 * @s: string
 *
 * Return: length
 */
int is_palindrome(char *s)
{
	int length, result;

	if (!s)
		return (0);

	if (*(s + 1) == '\0')
		return (1);

	length = lengthArray(s);

	length -= 2;
	result = palind(s, 0, length);

	return (result);
}
/**
 * palind - if a string is a palindrome
 * @s: string
 * @i: left position
 * @j: rigth position
 *
 * Return: palindrome
 */
int palind(char *s, int i, int j)
{
	if (i > j)
		return (1);

	if (*(s + i) == *(s + j))
	{
		palind(s, ++i, --j);
		return (1);
	}
	else
		return (0);
}
/**
 * lengthArray - legnth string
 * @array: string
 *
 * Return: length
 */
int lengthArray(char *array)
{
	int length = 1;

	if (*array)
	{
		length += lengthArray(++array);
	}

	return (length);
}
