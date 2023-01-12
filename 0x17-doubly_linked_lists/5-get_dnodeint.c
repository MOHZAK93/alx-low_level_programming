#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 *
 * @head: head of list
 * @index: index of node
 *
 * Return: pointer to node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_node, *lookup = head;
	unsigned int n = 0, i = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	while (head != NULL)
	{
		n++;
		head = head->next;
	}
	if (index > n)
		return (NULL);
	while (i < index)
	{
		lookup = lookup->next;
		i++;
	}
	new_node = lookup->next;

	return (lookup);
}
