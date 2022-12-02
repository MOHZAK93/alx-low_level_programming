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
	unsigned int size = 0, i = 0, j = 0;
	unsigned long int temp = n;

	char *str;

	if (n == 0)
		return (0);

	while (n > 0)
	{
		n = n >> 1;
		size++;
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (-1);

	while (temp > 0)
	{
		str[i] = (temp & 1);
		temp = temp >> 1;
		i++;
	}

	while (j < index)
	{
		j++;
	}
	return (str[j]);
}
