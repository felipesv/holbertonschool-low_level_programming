#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: character
 *
 * Return:
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
		length++;
	}
	_putchar('\n');
}
