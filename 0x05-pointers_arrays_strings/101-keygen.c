#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - create a password
 * @str: character
 *
 * Return:
 */
int main(void)
{
	srand(time(0));

	int randomLegth = rand() % 24 + 6, counter = 0, randomLetter;

	while (counter <= randomLegth)
	{
		randomLetter = (rand() % 127);

		if (randomLetter >= 32)
		{
			putchar(randomLetter);
			counter++;
		}
	}
	return 0;
}
