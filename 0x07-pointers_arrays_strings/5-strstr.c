#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_strstr - function to locate a substring
  *
  *@haystack: string to search
  *@needle: pattern to search
  *
  *Return: pointer
  */

char *_strstr(char *haystack, char *needle)
{
	while (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			if (*haystack == *needle)
				return (haystack);
			haystack++;
		}
		needle++;
	}
	return (NULL);
}
