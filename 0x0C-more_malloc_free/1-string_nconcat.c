
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer
 * @s2: pointer
 * @n: size
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int ln1, ln2, cnt = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ln1 = fn_lengthOfString(s1);
	ln2 = fn_lengthOfString(s2);

	if (n < ln2)
		ln2 = n;

	p = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (p == NULL)
		return (NULL);

	while ((*s1 || *s2) && (cnt != (ln1 + ln2 + 1)))
	{
		if (*s1)
			*(p + cnt) = *(s1++);
		else
			*(p + cnt) = *(s2++);

		cnt++;
	}

	return (p);

}
/**
 * fn_lengthOfString - length of a string.
 * @p: string
 *
 * Return: length
 */
int fn_lengthOfString(char *p)
{
	int length = 0;

	while (*(p +  length))
	{
		length++;
	}

	return (length);
}
