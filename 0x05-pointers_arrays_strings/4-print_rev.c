#include "main.h"

/**
  *print_rev - a function that prints a string, in reverse,
  *followed by a new line.
  *
  *@s: pointer parameter to the function
  *Return: nothing
  */

void print_rev(char *s)
{
	int i = 0;
	int total = 0;

	while (s[i] != '\0')
	{
		total++;
		i++;
	}
	while ((total - 1) >= 0)
	{
		_putchar(s[total]);
		total--;
	}
	_putchar('\n');
}

