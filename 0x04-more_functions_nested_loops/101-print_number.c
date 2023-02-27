#include "main.h"

/**
  *print_number - This function prints an integer
  *
  *@n: The integer
  */

void print_number(int n)
{
	int i = 0, res = 0;
	char c;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n)
	{
		while (n > 0)
		{
			res = res * 10 + (n % 10);
			n = n / 10;
			i++;
		}
		while (res > 0)
		{
			c = (char)((res % 10) + '0');
			_putchar(c);
			res = res / 10;
			i--;
		}
		while (i)
		{
			_putchar('0');
			i--;
		}
	}
	else
	{
		_putchar('0');
	}
}
