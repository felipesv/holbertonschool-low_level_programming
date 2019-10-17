#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min:  min value
 * @max: max value
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p, ln, i;

	if (min > max)
		return (NULL);

	ln = max - min + 1;

	p = malloc(sizeof(int) * ln);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ln; i++)
	{
		*(p + i) = min++;
	}

	return (p);
}
