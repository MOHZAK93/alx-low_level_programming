#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *_calloc - function that allocates memory for an array
  *
  *@nmemb: number of elements
  *@size: size of each element
  *
  *Return: void
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
