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
if (size <= 0)
_putchar('\n');
int i;
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
int j;
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
