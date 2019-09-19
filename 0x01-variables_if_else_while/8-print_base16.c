#include <stdio.h>
/**
 * main - Show the number 0 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int start1, finish1;
char start2, finish2;
start1 = 0;
finish1 = 9;
start2 = 'a';
finish2 = 'f';
while (start1 <= finish1)
{
putchar('0' + start1);
start1++;
}
while (start2 <= finish2)
{
putchar(start2);
start2++;
}
putchar('\n');
return (0);
}
