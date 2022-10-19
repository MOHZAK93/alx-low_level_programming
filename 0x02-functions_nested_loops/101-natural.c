#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that computes and prints the sum
 * of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
int num;
int sum = 0;
for (num = 0; num < 1024; num++)
{
if (num % 3 == 0 || num % 5 == 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
