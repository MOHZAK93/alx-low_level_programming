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
	int i = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
