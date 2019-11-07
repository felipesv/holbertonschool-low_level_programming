#include "holberton.h"
/**
 * get_bit - get the bit
 * @n: number
 * @index: bit to get
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	mask = mask << index;

	if (mask & n)
		return (1);
	else
		return (0);

}
