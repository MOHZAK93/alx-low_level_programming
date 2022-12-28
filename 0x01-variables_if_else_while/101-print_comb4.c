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
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i + j + k < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}	
	putchar('\n');
	return (0);
}
