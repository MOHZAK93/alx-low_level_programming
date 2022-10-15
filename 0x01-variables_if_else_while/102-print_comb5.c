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
j = 0;
k = 0;
l = 1;
while (i <= 9)
{
while (j <= 9)
{
while (k <= 9)
{
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
l = 0;
k++;
}
k = 0;
j++;
}
j = 0;
i++;
}
putchar(10);
return (0);
}
