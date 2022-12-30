#include "main.h"

/**
  *print_times_table - function that prints the n times table
  *
  *@n: number to print table
  *
  *Return: 0
  */

void print_times_table(int n)
{
	int i, j, product;

	if (n > 0 && n < 16)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j == 0)
				{
					_putchar(product + '0');
				}
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
