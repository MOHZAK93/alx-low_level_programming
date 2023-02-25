#include "main.h"
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
	char *pos;
	
	if (!*needle)
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			pos = haystack;
			while (*needle != '\0')
			{
				if (*needle != *haystack)
					return (NULL);
				needle++;
				haystack++;
			}
			return (pos);
		}
		haystack++;
	}
	return (NULL);
}
