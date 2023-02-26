#include "main.h"

/**
  *print_chessboard - function to print chessboard
  *
  *@a: first pointer parameter of function
  */

void print_chessboard(char (*a)[8])
{
	int j;

	while ((*a)[j])
	{
		j = 0;
		while (j < 8)
		{
			_putchar((*a)[j]);
			j++;
		}
		_putchar('\n');
		a++;
	}
}
