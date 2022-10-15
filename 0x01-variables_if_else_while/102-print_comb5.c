#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: All possible combinations of 2-2 digit numbers
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
int i, j, p;
i = 0;
j = 1;
while (i <= 99)
{
while (j <= 99)
{
putchar((i % 10) + '0');
putchar(32);
putchar((j % 10) + '0');
p = i + j;
if (p <= 35)
{
putchar(44);
}
else
{
}
putchar(32);
j++;
}
j = 0;
i++;
}
putchar(10);
return (0);
}
