
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

	if (separator != NULL && n != 0)
	{
		va_start(arguments, n);

		for (i = 0; i < n; i++)
		{
			char *arg = va_arg(arguments, char*);

			if (arg == NULL)
				arg = "(nil)";

			if ((i + 1) != n)
				printf("%s%s", arg, separator);
			else
				printf("%s\n", arg);
		}

		va_end(arguments);
	}
}
