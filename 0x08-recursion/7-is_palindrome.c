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

	length = lengthArray(s) - 2;
	if (length == 1)
		return (1);

	result = palind(s, 0, (length - 2));

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
	if (*(s + i) == *(s + j) && i < j)
		palind(s, (i + 1), (j - 1));
	else
		return (0);

	if (i <= j)
		return (1);

	return (1);
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
