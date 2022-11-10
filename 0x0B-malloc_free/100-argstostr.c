#include "main.h"
#include <stdlib.h>

/**
  *arraysize - function to calculate size of array
  *
  *@ac: number of arguments
  *@av: pointer to arguments
  *
  *Return: integer
  */

int arraysize(int ac, char **av)
{
	int a, b, size;
	a = size = 0;

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
	return (++size);
}

/**
  *argstostr - function to concatenate strings
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

	int size = arraysize(ac, av);

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
