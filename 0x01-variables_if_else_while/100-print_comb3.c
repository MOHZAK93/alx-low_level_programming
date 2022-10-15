#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This code prints all combination of 2-digits
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
int i = 0;
int j = 1;
int k = 0;
while (i <= 8)
{
while (j <= 9)
{
if (i < j)
{
putchar(i + '0');
putchar(j + '0');

k = i + j;
if (k < 17)
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
j++;
}
j = 1;
i++;
}
putchar(10);
return (0);
}
