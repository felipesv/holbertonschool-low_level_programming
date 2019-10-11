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

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		r = 1;

		for (i = 1; i < argc; i++)
		{
			r *= atoi(*(argv + i));
		}

		printf("%i\n", r);
	}
	return (0);
}
