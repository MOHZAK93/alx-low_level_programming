#include "main.h"
#include <stdlib.h>

/**
  *array_range - function that creates an array of integers
  *
  *@min: minimum number
  *@max: maximum number
  *
  *Return: integer
  */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}

