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
	unsigned int i = 0, index;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/*insert at beginning*/
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		(*h) = new_node;
		return (*h);
	}
	index = idx - 1;
	while (i != index && lookup != NULL)
	{
		lookup = lookup->next;
		i++;
	}
	if (lookup == NULL)
		return (NULL);
	if (i == index)
	{
		new_node->prev = lookup;
		new_node->next = lookup->next;
			if (lookup->next)
				lookup->next->prev = new_node;
		lookup->next = new_node;
	}
	return (new_node);
}
