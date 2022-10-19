#include "main.h"

/**
 * times_table - The function called by main.
 *
 * Description: Write a function that prints the
 * 9 times table, starting with 0.
 *
 * Return: Always return 0 (Success)
 */

void times_table(void)
{
int i;
for (i = 0; i < 10; i++)
{
int j = 0;
while (j < 10)
{
_putchar(i + j);
_putchar(',');
_putchar(' ');
_putchar(' ');
j++;
}
_putchar('\n');
}
}
