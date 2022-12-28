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
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
