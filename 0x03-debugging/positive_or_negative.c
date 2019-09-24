#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Show if a random number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
  if (i < 0)
    {
      printf("%d is negative\n", i);
    }
  else if (i == 0)
    {
      printf("%d is zero\n", i);
    }
  else
    {
      printf("%d is positive\n", i);
    }
}
