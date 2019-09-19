#include <stdio.h>
/**
 * main - Show the number 0 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char start, finish;
start = 'z';
finish = 'a';
while (start >= finish)
{
putchar(start);
start--;
}
putchar('\n');
return (0);
}
