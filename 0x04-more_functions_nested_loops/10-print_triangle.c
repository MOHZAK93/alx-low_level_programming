#include <stdio.h>
#include "main.h"

/**
  * print_triangle - This function prints a triangle with #
  *
  *@size: The size of the triangle
  *
  *Description: a function that prints a triangle,
  *followed by a new line.
  */

void print_triangle(int size)
{
	if (size > 0)
	{
		int width, height;

		for (height = 0; height < size; height++)
		{
			for (int space = 1; space < size - height; space++)
			{
				_putchar(' ');
			}
			for (width = 0; width <= height; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
