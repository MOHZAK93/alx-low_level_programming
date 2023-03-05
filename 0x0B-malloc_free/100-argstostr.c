#include "main.h"
#include <stdlib.h>

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
	int size = array_size(ac, av);

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

/**
 * array_size - computes size of array
 *
 * @ac: number of arguments
 * @av: argument vector
 *
 * Return: size of array
 */

int array_size(int ac, char **av)
{
	int i = 0, j, t = 0;

	while (ac > i)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			t++;
		}
		t++;
		i++;
	}
	t++;
	return (t);
}
