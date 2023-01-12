#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 *
 * @h: head of list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
