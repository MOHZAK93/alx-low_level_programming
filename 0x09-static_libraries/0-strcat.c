#include "main.h"

/**
  *_strcat - This function concatenantes two strings
  *
  *@dest: The first pointer parameter of the funciton
  *@src: The second pointer parameter of the funciton
  *
  *Return: string
  */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
