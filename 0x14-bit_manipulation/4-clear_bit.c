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


	if (index > 63)
		return (-1);

	if (*n == 0)
		return (1);

	*n &= ~(1 << index);

	return (1);

}
