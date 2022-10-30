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
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');

	return (dest);
}
