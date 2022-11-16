#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  *array_iterator - function that executes a function
  *
  *@array: pointer to array
  *@size: size of the array
  *@action: function pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (array != NULL && action != NULL)
	{

	for (count = 0; count < size; count++)
		(*action)(array[count]);
	}
}
