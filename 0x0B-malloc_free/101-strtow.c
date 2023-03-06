#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  *strtow - splits string into words
  *
  *@str: string
  *
  *Return: double pointer
  */

char **strtow(char *str)
{
	char **ptr, *copy;
	int w = word_count(str), i = 0, j, k;

	if (str == 0)
		return (0);
	ptr = malloc(sizeof(char *) * (w + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < w)
	{
		if (*str != ' ')
		{
			copy = str;
			j = 0;
			while (*str != ' ')
			{
				j++;
				str++;
			}
			ptr[i] = malloc(sizeof(char) * j);
			if (ptr[i] == NULL)
			{
				for (k = 0; k < w; k++)
					free(ptr[k]);
				free(ptr);
				return (NULL);
			}
			k = 0;
			while (k < j)
			{
				ptr[i][k] = *copy;
				copy++;
				k++;
			}
			i++;
		}
		str++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * word_count - Gets number of words in string
 *
 * @str: string
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int w = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			w++;
			while (*str != ' ')
				str++;
		}
		str++;
	}
	return (w);
}
