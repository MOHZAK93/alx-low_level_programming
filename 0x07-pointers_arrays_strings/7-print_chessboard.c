#include "main.h"

/**
  *print_chessboard - function to print chessboard
  *
  *@a: first pointer parameter of function
  */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
			j++;
		}
		i++;
	}
}
