#include "main.h"

/**
  *print_number - This function prints an integer
  *
  *@n: The integer
  */

void print_number(int n)
{
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n > 9 && < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 0 && n > -100)
	{
		_putchar('-');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
