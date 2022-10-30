#include <stdio.h>
#include <math.h>

int main(void)
{
	long y = 612852475143;
	long int x;

	for (x = sqrt(y); x < y; x++)
	{
		if (y % x == 0)
		{
			printf("%lu\n", x);
			break;
		}
	}
	return (0);
}
