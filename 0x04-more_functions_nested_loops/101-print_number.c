#include "main.h"

/**
  *print_number - This function prints an integer
  *
  *@n: The integer
  */

void print_number(int n)
{
	int i = 0, res = 0, cl;
	char c;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	cl = n;
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	if (i == 0)
		_putchar('0');
	while (i)
	{
		res = res * 10 + (cl % 10);
		cl = cl / 10;
		i--;
	}
	while (res > 0)
	{
		c = (char)((res % 10) + '0');
		_putchar(c);
		res = res / 10;
	}
}
