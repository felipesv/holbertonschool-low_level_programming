#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 *
 * Return: returns the number
 */
unsigned int binary_to_uint(const char *b)
{
	int ln, cnt = 0;
	unsigned int number = 0;

	if (b == NULL)
		return (0);

	ln = validCounterBinary(b);

	if (ln == 0)
		return (0);

	ln--;

	while (*(b + cnt) != '\0')
	{
		if (*(b + cnt) == 49)
			number += (unsigned int)_pow_recursion(2, ln);

		cnt++;
		ln--;
	}

	return (number);
}
/**
 * validCounterBinary - valid and length of binary
 * @p: binary
 *
 * Return: returns the leng
 */
int validCounterBinary(const char *p)
{
	int cnt = 0;

	while (*(p + cnt) != '\0')
	{
		if (*(p + cnt) != 48 && *(p + cnt) != 49)
			return (0);

		cnt++;
	}

	return (cnt);
}
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
