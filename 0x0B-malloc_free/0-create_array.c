#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *create_array - function to create an array of chars
  *
  *@size: size of the array
  *@c: specific character
  *
  *Return: character pointer
  */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	str = malloc(sizeof(*str) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
