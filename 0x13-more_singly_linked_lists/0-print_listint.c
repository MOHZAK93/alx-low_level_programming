#include "lists.h"

/**
  *print_listint - function that prints all elements of list
  *
  *@h: list
  *
  *Return: number of nodes in list
  */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
