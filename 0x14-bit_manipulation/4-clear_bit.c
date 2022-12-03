#include "main.h"

/**
  *clear_bit - function that sets the value of a bit to 0
  *
  *@n: number
  *@index: index of bit
  *
  *Return: 1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (-1);
}
