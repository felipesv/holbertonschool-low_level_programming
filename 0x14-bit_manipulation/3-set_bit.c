#include "holberton.h"
/**
 * set_bit - sets the value of a bit
 * @n: pointer
 * @index: index
 *
 * Return: returns the number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	mask = mask << index;

	*n = mask + *n;

	return (1);

}
