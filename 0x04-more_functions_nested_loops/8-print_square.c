#include "main.h"

/**
 * print_square - This function prints a # square
 *
 * @size: Dimensions of the square
 *
 * :Description: a function that prints a square, followed by a new line.
 */

void print_square(int size)
{
if (size <= 0)
_putchar('\n');

int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
