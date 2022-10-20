#include "main.h"

/**
 * print_diagonal - The function called by main
 *
 * @n: The parameter of the function
 *
 * Description: Write a function that draws a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
if (n > 0)
{
int i, space;

for (i = 1; i <= n; i++)
{
for (space = 1; space < i; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
putchar('\n');
}
