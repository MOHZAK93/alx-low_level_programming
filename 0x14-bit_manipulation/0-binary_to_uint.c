#include "main.h"

/**
  *binary_to_uint - function that converts binary to decimal
  *
  *@b: pointer to string of binary characters
  *
  *Return: decimal number
  */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, decimal = 0;
	const char *c = b;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
			i++;
		else
			return (0);
		b++;
	}
	while (*c)
	{
		i--;
		decimal += ((*c - '0') << i);
		c++;
	}
	return (decimal);
}
