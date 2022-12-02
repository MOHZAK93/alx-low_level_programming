#include "main.h"

/**
  *print_binary - function that prints the binary of a number
  *
  *@n: decimal number
  */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}

	while (n > 0)
	{
		_putchar((n & 1) + '0');
		n = n >> 1;
	}
}
