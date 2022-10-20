#include "main.h"

/**
 * print_square - The function called by main
 *
 * @size: The parameter of the function
 *
 * Description: Write a function that prints a square, followed by a new line.
 *
 * Return: 0
 */

void print_square(int size)
{
size = 5;
if (size <= 0)
{
_putchar('\n');
}
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
