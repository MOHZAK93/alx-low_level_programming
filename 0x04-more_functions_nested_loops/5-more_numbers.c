#include "main.h"

/**
 * more_numbers - The function called by main
 *
 * Description:  Write a function that prints 10 times
 * the numbers, from 0 to 14, followed by a new line.
 *
 * Return: 0
 */

void more_numbers(void)
{
int i;
char j;

for (i = 1; i <= 10; i++)
{
for (j = 1; j <= 14; j++)
{
if (i / 10 > 0)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
