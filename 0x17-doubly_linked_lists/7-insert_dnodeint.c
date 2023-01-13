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
	dlistint_t *new_node, *tmp, *lookup = *h;
	unsigned int i = 0, j = 0;

	new_node = malloc(sizeof(dlistint_t));
	tmp = malloc(sizeof(dlistint_t));

	if (new_node == NULL || tmp == NULL)
		return (NULL);
	new_node->n = n;

	while ((*h) != NULL)
	{
		i++;
		(*h) = (*h)->next;
	}
	if (idx > i)
		return (NULL);
	while (j < idx - 1)
	{
		lookup = lookup->next;
		j++;
	}

	tmp = lookup;
	lookup = lookup->next;
	tmp->next = new_node;
	new_node->next = lookup;
	lookup->prev = new_node;
	new_node->prev = tmp;

	/*printf("%d\n %d\n %d\n", new_node->n, tmp->n, lookup->n);*/

	return (new_node);
}
