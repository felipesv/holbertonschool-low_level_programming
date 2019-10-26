#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: scharacter to separate the data
 * @n: how many numbers
 * ...: arguments
 *
 * Return: 0 success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;


	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		char *arg = va_arg(arguments, char*);

		if (arg == NULL)
			arg = "(nil)";

		printf("%s", arg);

		if ((i + 1) != n && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arguments);
}
