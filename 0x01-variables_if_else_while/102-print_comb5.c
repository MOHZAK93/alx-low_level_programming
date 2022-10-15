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
int i, j, k, l, p;
i = 0;
while (i <= 9)
{
j = 0;
while (j <= 8)
{
k = 0;
while (k <= 9)
{
l = 1;
while (l <= 9)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar(32);
putchar((k % 10) + '0');
putchar((l % 10) + '0');
p = i + j + k + l;
if (p < 35)
{
putchar(44);
}
else
{
}
putchar(32);
l++;
}
k++;
}
j++;
}
i++;
}
putchar(10);
return (0);
}
