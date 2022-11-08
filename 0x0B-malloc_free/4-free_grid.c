#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *free_grid - function that frees a 2D grid
  *
  *@grid: pointer to a pointer
  *@height: height of grid
  *
  *Return: nothing
  */

void free_grid(int **grid, int height)
{
	int h = 0;

	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
