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
int i, j, k, l;
i = 0;
while (i <= 9)
{
j = 0;
while (j <= 9)
{
k = 0;
while (k <= 9)
{
l = 0;
while (l <= 9)
{
if (i == j && j == k && k == l)
{
putchar(i + '0');
putchar(j + '0');
putchar(32);
putchar(k + '0');
putchar(l + '0');
putchar(44);
putchar(32);
l++;
}
else
{}
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
