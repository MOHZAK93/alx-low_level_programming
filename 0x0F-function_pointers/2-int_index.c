#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *int_index - function that searches for integer
  *
  *@array: array to search
  *@size: size of array
  *@cmp: function pointer
  *
  *Return: index
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
