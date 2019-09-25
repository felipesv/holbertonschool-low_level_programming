#include <stdio.h>
/**
 * main - display sum of multiples of 3,5
 *
 * Return: the absolute number of some number
 */
int main(void)
{
	long int a = 1, b = 2, c = 0, d = 2;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0)
		{
			d += c;
		}

	}

	printf("%lu\n", d);

	return (0);
}
