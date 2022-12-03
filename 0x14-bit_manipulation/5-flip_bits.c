#include "main.h"

/**
  *flip_bits - function that returns the number of bits you
  *would need to flip to get from one number to another
  *
  *@n: first number
  *@m: second number
  *
  *Return: number of bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, x = 16;

	while (x)
	{
		if (((n | 1) != n && (m | 1) == m) ||
				((n | 1) == n && (m | 1) != m))
			i++;
		n = n >> 1;
		m = m >> 1;
		x--;
	}
	return (i);
}
