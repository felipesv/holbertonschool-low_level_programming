#include "holberton.h"
/**
 * is_prime_number - know if number is a prime number,
 * @n: number1
 *
 * Return: number
 */
int is_prime_number(int n)
{
	int prime;

	if (n <= 1)
		return (0);

	prime = prime_loop(n, 1, 0);

	if (prime > 2)
		return (0);


	return (1);
}
/**
 * prime_loop - prime number
 * @sn: number1
 * @vn: number2
 * @acum: counter
 *
 * Return: counter
 */
int prime_loop(int sn, int vn, int acum)
{
	int counter = acum;

	if (counter > 2)
	{
		return (1);
	}

	if (sn % vn == 0 && vn <= sn)
	{
		counter = 1;
		counter = prime_loop(sn, (vn + 1), (acum + counter));
	}
	else if (vn <= sn)
	{
		counter = 0;
		counter = prime_loop(sn, (vn + 1), (acum + counter));
	}

	return (counter);
}
