#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square
 * @a: pointer
 * @size: size
 *
 * Return: is a void
 */
void print_diagsums(int *a, int size)
{
	int i, k, l, sum1, sum2;

	k = 0;
	l = size - 1;
	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[k];
		sum2 += a[l];

		k += size + 1;
		l += size - 1;
	}

	printf("%i, %i\n", sum1, sum2);
}
