#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *alloc_grid - function that returns a pointer to 2D array
  *
  *@width: width of array
  *@height: height of array
  *
  *Return: pointer to a pointer
  */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int h, w;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int*) * height);
	if (ptr == NULL)
		return (NULL);
	h = 0;

	while (h < height)
	{
		ptr[h] = malloc(sizeof(int) * width);
		if (ptr[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(ptr[w]);
			free(ptr);
			return (NULL);
		}
		w = 0;

		while (w < width)
		{
			ptr[h][w] = 0;
			w++;
		}
		h++;
	}
	return (ptr);
}
