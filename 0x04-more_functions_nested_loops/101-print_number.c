#include "holberton.h"
/**
 * print_number - print number
 * @n: number
 * 
 * Return: is a void
 */
int numDigit(int number);
int numRever(int numbDigit, int Number);
int expo(int counter);

void print_number(int n)
{
	int numdigit, reverNum, lastDigit, i;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	numdigit = numDigit(n);
	reverNum = numRever(numdigit - 1, n);

	while (reverNum > 0)
	{
		lastDigit = reverNum % 10;
		reverNum = reverNum / 10;
		_putchar('0' + lastDigit);
	}

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n % 10 == 0)
	{
		for (i = 0; i < numdigit - numDigit(numRever(numdigit - 1, n)); i++)
		{
			_putchar('0');
		}
	}
}
/**
 * numDigit - counter digits
 * @number: number
 *
 * Return: is a void
 */
int numDigit(int number)
{
	int counter = 0;

	while (number > 0)
	{
		number = number / 10;
		counter++;
	}

	return (counter);
}
/**
 * numRever - reverse number
 * @numbDigit: digits
 * @Number: number
 *
 * Return: is a void
 */
int numRever(int numbDigit, int Number)
{
	int lastDigit, reverNum = 0;

	while (Number > 0)
	{
		lastDigit = Number % 10;
		Number = Number / 10;

		reverNum += lastDigit * expo(numbDigit);
		numbDigit--;
	}

	return (reverNum);
}
/**
 * expo - exponential
 * @counter: exponential
 *
 * Return: is a void
 */
int expo(int counter)
{
	int i, expoNum = 10;

	if (counter == 0)
	{
		return (1);
	}

	for (i = 1; i < counter; i++)
	{
		expoNum *= 10;
	}

	return (expoNum);
}
