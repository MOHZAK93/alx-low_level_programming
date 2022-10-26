#include "main.h"

/**
  *_strncat - a function that concatenates two strings
  *
  *@dest: first pointer parameter of the function
  *@src: second pointer parameter of the function
  *@n: third parameter
  *Return: string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; (src[j] != '\0'); j++)
		if (sizeof(src) < n)
			dest[i + j] = src[j];
	return (dest);
}
