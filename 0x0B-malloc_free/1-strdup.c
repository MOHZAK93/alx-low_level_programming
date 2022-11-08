#include "main.h"

/**
  *_strdup - function that returns a pointer to a newly allocated   *space in memory
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

	ptr = malloc(sizeof(*ptr) * sizeof(*str));

	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
