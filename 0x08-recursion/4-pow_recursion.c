#include "holberton.h"
/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: number1
 * @y: number2
 *
 * Return: number
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	pow = x;
	pow *= _pow_recursion(x, y - 1);

	return (pow);
}
