#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 * Return: Always return 0 (Success)
 */

void times_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = (row * column);
			if (column == 0)
			{
				_putchar('0' + product);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}
		}
			_putchar('\n');
	}
}
