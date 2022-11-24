#include "lists.h"

/**
  *print_list - function that prints a list
  *
  *@h: object argument
  *
  *Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		printf("%s\n", h->str);
		h = h->next;
		i++;
	}
	return (i);
}
