#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer
 * @index: index to change
 *
 * Return: returns the number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	if (*n == 0)
		return (1);

	mask = mask << index;

	if (*n < mask)
		return (-1);

	*n = *n - mask;

	return (1);

}
