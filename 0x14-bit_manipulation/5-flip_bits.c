#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number1
 * @m: number2
 *
 * Return: number bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cnt = 0;

	n = n ^ m;

	while (n > 0)
	{
		if (n & 1)
			cnt++;

		n = n >> 1;
	}

	return (cnt);
}
