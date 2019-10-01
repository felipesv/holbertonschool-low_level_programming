#include "holberton.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: number 1
 * @b: number 2
 *
 * Return: is a void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
