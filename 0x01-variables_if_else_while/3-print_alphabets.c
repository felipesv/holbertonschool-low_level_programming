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
if (start == 'z')
{
start = 'A';
finish = 'Z';
}
start++;
}
putchar('\n');
return (0);
}
