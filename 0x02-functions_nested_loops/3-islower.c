#include "holberton.h"
/**
 * _islower - show the alphabet 10 times
 * @c: letter in ascii code
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
