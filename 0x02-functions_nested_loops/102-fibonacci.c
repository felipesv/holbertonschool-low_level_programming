#include <stdio.h>
/**
 * main - display sum of multiples of 3,5
 *
 * Return: the absolute number of some number
 */
int main(void)
{
	long int i, a = 1, b = 2, c = 0;

	for (i = 0; i < 50; i++)
	{
		if (i < 2)
		{
			printf("%lu, ", i + 1);
		}
		else
		{
			c = a + b;
			a = b;
			b = c;
			if (i != 49)
			{
				printf("%lu, ", c);
			}
			else
			{
				printf("%lu\n", c);
			}
		}
	}

	return (0);
}
