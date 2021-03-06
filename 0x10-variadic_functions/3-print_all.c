#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments
 * ...: arguments
 *
 * Return: 0 success
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int cnt = 0;
	char *stringR, *separator = "";

	while (format)
	{
		va_start(arguments, format);
		while (*(format + cnt))
		{
			if (validChar(*(format + cnt)))
			{
				switch (*(format + cnt))
				{
				case 'c':
					printf("%s%c", separator, va_arg(arguments, int));
					separator = ", ";
					break;
				case 'i':
					printf("%s%i", separator, va_arg(arguments, int));
					separator = ", ";
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arguments, double));
					separator = ", ";
					break;
				case 's':
					stringR = va_arg(arguments, char*);
					if (stringR == NULL)
						stringR = "(nil)";
					printf("%s%s", separator, stringR);
					separator = ", ";
					break;
				}
			}
			cnt++;
		}
		va_end(arguments);
		break;
	}
	printf("\n");
}
/**
 * validChar - check if is a valid type data
 * @character: character to validate
 *
 * Return: 0 success
 */
int validChar(char character)
{
	switch (character)
	{
	case 'c':
	case 'i':
	case 'f':
	case 's':
		return (1);
	}
	return (0);
}
