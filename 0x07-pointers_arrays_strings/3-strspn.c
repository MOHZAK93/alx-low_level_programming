#include "main.h"
#include <stdio.h>

/**
  *_strspn - function that gets length of prefix substing
  *
  *@s: string to test
  *@accept: string search
  *
  *Return: integer
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k, l;

	k = l = 0;

	while (*s != ' ')
	{
		while (*accept)
		{
			if (*s == *accept)
				k++;
			accept++;
		}
		s++;
		l += k;
	}
	return (l);
}
