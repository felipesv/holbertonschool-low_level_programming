#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: how many numbers
 * ...: arguments
 *
 * Return: 0 success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list arguments;

	if (n == 0)
	{
		return (0);
	}

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(arguments, int);
	}

	va_end(arguments);

	return (result);
}
