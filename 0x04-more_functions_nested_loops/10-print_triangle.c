#include "main.h"

/**
 * print_triangle - The function called by main
 *
 * @size: The size of the triagle
 *
 * a function that prints a triangle, followed by a new line.
 */

void print_triangle(int size)
{
int i, space;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (space = n - i; space > 0; space--)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
