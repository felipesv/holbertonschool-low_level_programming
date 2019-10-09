#include "holberton.h"
/**
 * factorial -  factorial of a given number.
 * @n: number
 *
 * Return: is a void
 */
int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	result = n;
	result *= factorial((n - 1));

	return (result);
}
