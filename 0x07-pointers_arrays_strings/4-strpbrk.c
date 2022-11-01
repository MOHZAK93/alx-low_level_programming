#include "main.h"
#include <stdlib.h>

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
	while (*s)
		if (*s != ' ')
		{
			while (*accept)
			{
				if (*accept == *s)
					return (s);
				accept++;
			}
		}
		else
			return (NULL);
}
