#include "holberton.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: digit
 * Return: 1 digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
