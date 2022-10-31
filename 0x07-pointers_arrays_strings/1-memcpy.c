#include "main.h"

/**
  *_memcpy - function copies memory area
  *
  *@dest: destination location
  *@src: source location
  *@n: number of bytes to copy
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
