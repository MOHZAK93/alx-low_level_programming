#include "main.h"

/**
  *get_bit - function that returns the value of a bit at an index
  *
  *@n: number
  *@index: index
  *
  *Return: value of a bit
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	else
		return (n >> index & 1);
}
