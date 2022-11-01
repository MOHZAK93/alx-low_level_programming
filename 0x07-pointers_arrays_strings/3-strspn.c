#include "main.h"

/**
  *_strspn - function that gets length of prefix substing
  *
  *@s: string to test
  *@accept: string search
  *Return: integer
  */


unsigned int _strspn(char *s, char *accept)
{
	int k = 0;

	while (*s)
	{
		if (*s != 32)
		{
			while (*accept)
			{
				if (*s == *accept)
					k++;
				accept++;
			}
		else
			return (k);
		}
		s++;
	}
	return (k);
}
