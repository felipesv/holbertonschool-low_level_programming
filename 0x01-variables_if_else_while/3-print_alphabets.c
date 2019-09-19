#include <stdio.h>
/**
 * main - Show the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char start, finish;
start = 'a';
finish = 'z';
while (start <= finish)
{
putchar (start);
start++;
if ((start - 1) == 'z')
{
start = 'A';
finish = 'Z';
}
}
putchar('\n');
return (0);
}
