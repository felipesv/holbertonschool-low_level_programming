#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - create a password
 *
 * Return: 0 success
 */
int main(void)
{
	int character, lengthPass = character = rand() % 100;
	int counter = 0;

	srand(time(NULL));

	while (counter < 2440)
	{
		character = rand() % 127;

		if (character >= 65 && character <= 90)
		{
			putchar(character);
			counter += character;
		}
		else if (character >= 97 && character <= 122)
		{
			putchar(character);
			counter += character;
		}
		else if (character >= 48 && character <= 57)
		{
			putchar(character);
			counter += character;
		}
	}

	return (0);
}
