#include "holberton.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number1
 *
 * Return: number
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = _root(n, n);

	return (sqrt);
}
/**
 * _root - return natural square root
 * @sn: number1
 * @vn: number2
 *
 * Return: number
 */

int _root(int sn, int vn)
{

	int root = -1;

	if (sn < 0)
	{
		return (root);
	}

	if ((vn * vn) == sn)
	{
		root = vn;
		return (root);
	}
	else if (vn != 0)
	{
		root = _root(sn, (vn - 1));
	}

	return (root);
}
