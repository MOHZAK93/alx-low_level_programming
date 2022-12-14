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
	unsigned int i = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		if ((xor & 1) == 1)
			i++;
		xor = xor >> 1;
	}
	return (i);
}
