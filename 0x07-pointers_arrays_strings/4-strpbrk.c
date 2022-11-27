#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  *_strpbrk - function that searches a string for any of a set of bytes
  *
  *@s: string to search
  *@accept: test string
  *
  *Return: string
  */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == *s)
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
