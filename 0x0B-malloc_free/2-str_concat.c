#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int lns1, lns2, cnt = 0, cnts2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lns1 = fn_lengthOfString(s1);
	lns2 = fn_lengthOfString(s2);

	p = malloc((lns1 + lns2 + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	while (cnt != (lns1 + lns2))
	{
		if (cnt < lns1)
			*(p + cnt) = *(s1 + cnt);
		else
			*(p + cnt) = *(s2 + (cnts2++));

		cnt++;
	}

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
