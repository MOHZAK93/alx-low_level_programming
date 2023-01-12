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
	dlistint_t *lookup = head;
	unsigned int n = 0, i = 0;

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
	return (lookup);
}
