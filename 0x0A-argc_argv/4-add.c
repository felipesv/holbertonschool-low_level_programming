#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments
 * @argv: array containing the line arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, r;

	if (argc == 1)
	{
		printf("%i\n", 0);
	}
	else
	{
		r = 0;

		for (i = 1; i < argc; i++)
		{
			if (searchChar(*(argv + i)))
			{
				r += atoi(*(argv + i));
			}
			else
			{
				printf("Error\n");
				return (0);
			}
		}

		printf("%i\n", r);
	}
	return (0);
}
/**
 * searchChar - know if there are only digits
 * @p: pointer
 *
 * Return: 1 success
 */
int searchChar(char *p)
{
	int ascii;

	while (*p)
	{
		ascii = *p;

		if (ascii >= 48 && ascii <= 57)
			p++;
		else
			return (0);
	}
	return (1);
}
