#include <stdio.h>
/**
 * main - display sum of multiples of 3,5
 *
 * Return: the absolute number of some number
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5) == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
