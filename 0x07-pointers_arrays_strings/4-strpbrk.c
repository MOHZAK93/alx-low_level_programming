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
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}
