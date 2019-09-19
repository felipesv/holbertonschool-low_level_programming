#include <stdio.h>
/**
 * main - Show the alphabet except q and e
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
if (start != 'q' && start != 'e')
{
putchar (start);
}
start++;
}
putchar('\n');
return (0);
}
