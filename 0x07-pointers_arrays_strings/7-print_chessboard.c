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

	while (a[j])
	{
		while (i < 8)
		{
			_putchar(a[j][i]);
			i++;
		}
		j++;
	}
}
