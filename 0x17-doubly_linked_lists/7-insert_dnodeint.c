#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of list
 * @idx: index
 * @n: data to insert
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *lookup = *h;
	unsigned int j = 0, i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	while ((*h) != NULL)
	{
		j++;
		(*h) = (*h)->next;
	}
	if (idx > j)
		return (NULL);
	while (i > idx)
	{
		lookup = lookup->next;
		i++;
	}
	lookup->next = new_node;
	new_node->prev = lookup;

	return (new_node);
}
