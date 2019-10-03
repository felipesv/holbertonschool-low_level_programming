#include "holberton.h"
/**
 * reverse_array - function that copies a string.
 * @a: array
 * @n: number of elements
 * @n: number of characters to copy
 *
 * Return: pointer
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
