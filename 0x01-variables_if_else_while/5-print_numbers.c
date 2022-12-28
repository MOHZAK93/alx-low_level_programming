#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This code prints numbers from 0 to 9
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
