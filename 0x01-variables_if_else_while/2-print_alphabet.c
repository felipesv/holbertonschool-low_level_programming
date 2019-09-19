#include <stdlib.h>
/**
 * main - Show the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
putchar (alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
