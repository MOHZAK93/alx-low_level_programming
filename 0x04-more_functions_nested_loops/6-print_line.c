#include "main.h"

/**
 * print_line - The function called by main
 *
 * @n: The parameter to the function
 *
 * Description: Write a function that draws a
 * straight line in the terminal.
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
