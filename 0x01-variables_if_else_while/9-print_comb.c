#include <stdio.h>
/**
 * main - Show the number 0 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int start, finish;
char espacio;
start = 0;
finish = 9;
espacio = 32;
while (start <= finish)
{
putchar('0' + start);
if (start != finish)
{
putchar(',');
putchar(espacio);
}
start++;
}
putchar('\n');
return (0);
}
