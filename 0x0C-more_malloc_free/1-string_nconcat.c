
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
	unsigned int ln1, ln2, i, cnt = 0;

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

	for (i = 0; i < ln1; i++, cnt++)
		*(p + cnt) = *(s1 + i);

	for (i = 0; i < ln2; i++, cnt++)
		*(p + cnt) = *(s2 + i);

	*(p + cnt) = '\0';

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
