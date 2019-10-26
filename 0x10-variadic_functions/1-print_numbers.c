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

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, int));

		if ((i + 1) != n && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arguments);
}
