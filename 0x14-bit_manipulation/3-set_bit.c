#include "main.h"

/**
  *set_bit - function that sets the value of a bit to 1
  *
  *@n: number in decimal
  *@index: index to set value
  *
  *Return: 1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
