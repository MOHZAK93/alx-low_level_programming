#include "lists.h"

/**
  *print_len - function that prints the length of list
  *
  *@h: object argument
  *
  *Return: number of nodes
  */

size_t print_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
