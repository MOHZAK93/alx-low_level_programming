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
	char *hold_hay, *hold_nee;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		hold_hay = haystack;
		hold_nee = needle;
		if (*haystack == *needle)
		{
			while (*haystack)
			{
				if (*needle != *haystack)
					break;
				needle++;
				haystack++;
			}
			if (*needle == '\0')
				return (hold_hay);
		}
		haystack = hold_hay;
		needle = hold_nee;
		haystack++;
	}
	return (NULL);
}
