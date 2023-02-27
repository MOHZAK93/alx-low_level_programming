#include "main.h"

/**
  *_atoi - This function converts a string to an integer
  *
  *@s: pointer parameter of the function
  *Return: 0
  */

int _atoi(char *s)
{
	int res = 0, sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		while (*s >= 48 && *s <= 57)
		{
			res = res * 10 + *s - '0';
			s++;
			if (!(*s >= 48 && *s <= 57) && sign == 1)
				return (res);
			if (!(*s >= 48 && *s <= 57) && sign == -1)
				return (-res);
		}
		s++;
	}
	return (0);
}
