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
finish = 9;
while (start <= finish)
{
printf("%d", start);
start++;
}
putchar('\n');
return (0);
}
