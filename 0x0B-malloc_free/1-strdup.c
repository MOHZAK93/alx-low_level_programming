#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  *_strdup - function that returns a pointer
  *
  *@str: string
  *Return: string
  */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * strlen(str) + 1);

	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
