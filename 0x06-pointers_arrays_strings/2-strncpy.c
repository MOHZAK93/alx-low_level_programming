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
	int i = 0;
	int src_len = 0;

	while (src[i])
	{
		src_len++;
		i++;
	}

	for (i = 0; src[i] && i < n; i++)
			dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
