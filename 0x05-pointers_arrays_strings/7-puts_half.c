#include "main.h"

/**
  *puts_half - function prints half a string
  *
  *@str: pointer parameter of the function
  *
  *Return: nothing
  */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;

	j = (i / 2);

	if ((i % 2) == 1)
		j = ((i + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
