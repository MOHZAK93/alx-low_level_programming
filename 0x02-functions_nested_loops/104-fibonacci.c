#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that finds
 * and prints the first 98 Fibonacci numbers
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int j = 1, k = 2, x, y;

	for (i = 0; i < 48; i++)
	{
		if (i > 45)
		{
			x = j % 10;
			y = k % 10;
			j = j / 10;
			k = j /10;
			printf("%lu%lu, %lu%lu", j, x, k, y);
		}
		printf("%lu, %lu", j, k);
		if (i < 47)
		{
			printf(", ");
		}
		j += k;
		k += j;
	}
	printf("\n");
	return (0);
}
