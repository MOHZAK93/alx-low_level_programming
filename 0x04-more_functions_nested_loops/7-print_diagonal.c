#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - The function called by main
 *
 * @n: The parameter of the function
 *
 * Description: Write a function that draws a diagonal line on the terminal.
 *
 * Return: 0
 */

void main(int n)
{
n = 10;
if (n <= 0)
putchar('\n');
int i;
for (i = 0; i < n; i++)
{
putchar('\\');
putchar('\n');
putchar(' ');
}
putchar('\n');
}
