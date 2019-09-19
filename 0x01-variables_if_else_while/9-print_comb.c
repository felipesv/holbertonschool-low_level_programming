#include <stdio.h>
/**
 * main - Show the number 0 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int start, finish;
start = 0;
finish = 10;
while (start < finish)
{
putchar('0' + start);
if (start != 9)
{
putchar(',');
putchar(' ');
}
start++;
}
putchar('\n');
return (0);
}
