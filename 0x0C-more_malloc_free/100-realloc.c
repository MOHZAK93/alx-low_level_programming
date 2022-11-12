#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_realloc - function to reallocate memory block
  *
  *@old_size: old size allocated
  *@new_size: new size allocated
  *@ptr: old allocated memory
  *
  *Return: void pointer
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new, *old;

	old = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size * sizeof(char));
		return (new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size * sizeof(char));
	if (new == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
		return (new);
	}
	free(ptr);
	return (new);
}
