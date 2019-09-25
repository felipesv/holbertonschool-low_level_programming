#include <stdio.h>
/**
 * main - display sum of multiples of 3,5
 *
 * Return: the absolute number of some number
 */
int main(void)
{
	float i, start = 0, end = 1, start2;

	for (i = 0; i < 50; i++)
	{
		start2 = start;
		if (i > 2)
		{
			end = start2;
		}
		start += end;

		if (i != 49)
		{
			printf("%.0f, ", start);
		}
		else
		{
			printf("%.0f ", start);
		}

	}

	return (0);
}
