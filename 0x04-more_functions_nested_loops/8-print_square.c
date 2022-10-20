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
{
_putchar('\n');
}
int i = 0;
while (i < size)
{
int j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
