#include "main.h"

/**
 * jack_bauer - This function is called by main
 *
 * Description: Write a function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Always return 0 (Success)
 */

void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 5; k++)
{
for (l = 0; l < 10; l++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
}
