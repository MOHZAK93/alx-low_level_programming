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
	unsigned long int j = 1, k = 2;

	for (i = 0; i < 48; i++)
	{
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
