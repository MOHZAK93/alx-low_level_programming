#include "main.h"

/**
  *_strncpy - This function copies a string
  *
  *@dest: The first pointer parameter
  *@src: The second pointer parameter
  *@n: The third pointer parameter
  *Return: string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		if (i < n)
			dest[i] = src[i];
	}
	printf("%c", dest);
	return (dest);
}
