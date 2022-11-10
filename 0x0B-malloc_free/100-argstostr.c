#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *argstostr - function that concatenates arguments
  *
  *@ac: number of arguments
  *@av: pointer to arguments
  *
  *Return: char pointer
  */

char *argstostr(int ac, char **av)
{
	char *str, *c;
	int j, i = 0;
	int b, a = 0;
	int size = 0;

	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			size++;
			b++;
		}
		a++;
	}
	size++;

	if (ac == 0 || av == NULL)
		return (NULL);
	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);
	c = str;
	while (i < ac)
	{
		j = 0;

		while (av[i][j])
		{
			*str = av[i][j];
			str++;
			j++;
		}
		*str = '\n';
		str++;
		i++;
	}
	return (c);
}
