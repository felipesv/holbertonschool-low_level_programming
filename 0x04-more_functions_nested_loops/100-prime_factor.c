#include <stdio.h>
/**
 * main - prints a triangle
 * @number: number
 *
 * Return: is a void
 */
long int countDivisible(long int number);

int main(void)
{
	long int i = 2, number = 1092, numPrime = number, numAnte = 1, divisible = 1;

	while (numAnte != number)
	{
		if (countDivisible(i) == 2)
		{
			while (numPrime % i == 0)
			{
				divisible = i;
				numAnte *= divisible;
				numPrime = numPrime / i;

				printf("%ld", i);
				if (numAnte != number)
				{
					printf(",");
				}
				else
				{
					printf("\n");
					break;
				}
			}
		}

		i = (i + 1) % 2 == 0 ? i + 2 : i + 1;
	}

	return (0);
}
/**
 * countDivisible - prime number
 * @number: number
 *
 * Return: counter
 */
long int countDivisible(long int number)
{
	long int i, counter = 0;

	for (i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			counter++;

			if (counter > 2)
			{
				break;
			}
		}
	}

	return (counter);
}
