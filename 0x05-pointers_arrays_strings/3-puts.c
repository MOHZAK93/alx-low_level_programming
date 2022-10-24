#include "main.h"

/**
  *_puts - function prints a string
  *
  *@str: pointer parameter
  *
  *Return: nothing
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
