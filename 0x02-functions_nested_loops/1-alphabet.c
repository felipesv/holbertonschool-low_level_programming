#include "holberton.h"
/**
 * print_alphabet - Show the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
_putchar (alphabet);
alphabet++;
}
_putchar ('\n');
}
