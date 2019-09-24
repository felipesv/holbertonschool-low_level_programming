#include "holberton.h"
/**
 * times_table - display tables 0 -9
 * @n: table
 *
 * Return: the absolute number of some number
 */
void print_times_table(int n)
{
	int i, j, multi;
	char a;
	if(n >= 0 && n <= 15){
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multi = i * j;

				if (j !=0)
				{
					if(multi < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}else if(multi <= 99)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else if(multi <= 999)
					{
						_putchar(',');
						_putchar(' ');
					}
				}

				if (multi < 10)
				{
					a = '0' + multi;
					_putchar(a);
				}
				else if(multi <= 99)
				{
					_putchar('0' + (multi / 10));
					_putchar('0' + (multi % 10));
				}
				else if(multi <= 999)
				{
					_putchar('0' + ((multi / 10) / 10));
					_putchar('0' + ((multi / 10) % 10));
					_putchar('0' + (multi % 10));
				}

				if(j == n)
				{
					_putchar('\n');
				}
			}
		}
	}
}
