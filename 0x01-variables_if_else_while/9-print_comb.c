#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This code prints all single-digit numbers
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
int i = 0;
while (i <= 9)
{
putchar(i + '0');
if (i < 9)
{
putchar(44);
putchar(32);
}
else
{
}
i++;
}
putchar(10);
return (0);
}
