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
	long int i = 2, number = 612852475143;
	long int numPrime = number, numAnte = 1, divisible = 1;

	while (numAnte != number)
	{
		if (countDivisible(i) == 2)
		{
			while (numPrime % i == 0)
			{
				divisible = i;
				numAnte *= divisible;

				if (countDivisible(number / numAnte) == 2)
				{
					printf("%ld\n", number / numAnte);
					numAnte = number;
					break;
				}
				numPrime = numPrime / i;
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
