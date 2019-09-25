#include <stdio.h>
/**
 * main - display sum of multiples of 3,5
 *
 * Return: the absolute number of some number
 */
int main(void)
{
	float i, a = 1, b = 2, c = 0;

	for (i = 0; i < 98; i++)
	{
		if (i < 2)
		{
			printf("%.0f, ", i + 1);
		}
		else
		{
			c = a + b;
			a = b;
			b = c;

			if (i != 97)
			{
				printf("%.0f, ", c);
			}
			else
			{
				printf("%.0f\n", c);
			}
		}
	}

	return (0);
}
