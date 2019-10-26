#include "variadic_functions.h"
/**
 * print_numbers -  prints numbers
 * @separator: string to be printed between numbers
 * @n: how many numbers
 * ...: arguments
 *
 * Return: 0 success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	if (separator != NULL && n != 0)
	{
		va_start(arguments, n);

		for (i = 0; i < n; i++)
		{
			if ((i + 1) != n)
				printf("%d%s", va_arg(arguments, int), separator);
			else
				printf("%d\n", va_arg(arguments, int));
		}

		va_end(arguments);
	}
}
