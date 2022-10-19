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
for (i = 0; < 10; i++)
{
int j;
for (j = 0; j < 10; j++)
{
_putchar(j + '0');
_putchar(',');
_putchar(32);
}
}
}
