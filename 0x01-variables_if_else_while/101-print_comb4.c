#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Possible combinations of three digits
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
int i, j, k, l;
i = 0;
j = 1;
k = 2;
while (i < 8)
{
while (j < 9)
{
while (k < 10)
{
if (i < j && j < k)
{
putchar((i % 10) + '0');
putchar((j % 10) + '0');
putchar((k % 10) + '0');
l = i + j + k;
if (l < 24)
{
putchar(44);
putchar(32);
}
else
{
}
}
else
{
}
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
