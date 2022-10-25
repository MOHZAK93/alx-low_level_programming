#include "main.h"

/**
  *_strcpy - a funtion that copies the string pointed to by src
  *
  *@dest: first pointer parameter of function
  *@src: second pointer parameter of function
  *Return: string
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
