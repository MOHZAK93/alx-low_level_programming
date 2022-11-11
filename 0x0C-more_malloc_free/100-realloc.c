#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_realloc - function to reallocate memory block
  *
  *@old_size: old size allocated
  *@new_size: new size allocated
  *
  *Return: void pointer
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;
	if (new_size == 0)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size * sizeof(int));
}
