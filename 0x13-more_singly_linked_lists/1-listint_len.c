#include "lists.h"

/**
  *listint_len - function that returns the number of elements in a list
  *
  *@h: list
  *
  *Return: number of elements in list
  */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
