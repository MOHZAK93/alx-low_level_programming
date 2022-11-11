#include "main.h"
#include <stdlib.h>
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
	int *ptr;
	int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc((nmemb + 1) * size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (nmemb)
	{
		ptr[i] = size;
		i++;
		nmemb--;
	}
	return (ptr);
}
