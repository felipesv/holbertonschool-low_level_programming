#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coins to make change
 * @argc: number of command line arguments
 * @argv: array containing the line arguments
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, back, numCoins, acum;
	int coins[] = { 25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	i = 0, numCoins = 0, acum = 0;
	back  = atoi(*(argv + 1));

	while (i <= 4 && acum != back)
	{
		int div = (back - acum) / coins[i];

		if (div > 0)
		{
			numCoins += div;
			acum += (div * coins[i]);
		}

		i++;
	}

	printf("%i\n", numCoins);
	return (0);
}
