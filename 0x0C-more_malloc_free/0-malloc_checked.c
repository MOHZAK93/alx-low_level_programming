#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *malloc_checked - function that allocates memory using malloc
  *
  *@b: size of argument
  *
  *Return: void
  */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b * sizeof(*ptr));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
