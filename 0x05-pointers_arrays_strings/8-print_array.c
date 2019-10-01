#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: elements to print
 *
 * Return: is a void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
