#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: number of command line arguments
 * @argv: array containing the line arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, c;

	c = 0;

	for (i = 1; i <= argc && *argv; i++)
	{
		c++;
	}

	printf("%i\n", (c - 1));
	return (0);
}
