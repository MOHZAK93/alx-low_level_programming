#include "main.h"

/**
  *print_binary - function that prints the binary of a number
  *
  *@n: decimal number
  */

void print_binary(unsigned long int n)
{
	int print = ((n & 1) + '0');

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(print);
}
