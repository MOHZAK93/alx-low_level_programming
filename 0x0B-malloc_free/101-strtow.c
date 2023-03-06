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
	int w = word_count(str);
	int i = 0, j, k;

	if (str == NULL || strcmp(str, "") == 0 || strcmp(str, " ") == 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * w);
	if (!ptr)
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
			ptr[i] = malloc(sizeof(char) * (j + 2));
			k = 0;
			while (k < j)
			{
				ptr[i][k] = *copy;
				copy++;
				k++;
			}
			ptr[i][k] = '\0';
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
