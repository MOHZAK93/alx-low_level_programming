#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int i;
	long j = 1;
	long k = 2;

	for (i = 1; i <= 25; i++)
	{
		printf("%ld, %ld", j, k);
		if (i < 25)
			printf(", ");
		j += k;
		k += j;
	}
	printf("\n");
	return (0);
}
