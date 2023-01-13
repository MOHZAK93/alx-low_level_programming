#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 *
 * @head: head of list
 * @index: where to delete from
 *
 * Return: 1 if success or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *lookup = *head;
	unsigned int i = 0, idx;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		return (1);
	}
	idx = index - 1;
	while (i != idx && lookup != NULL)
	{
		lookup = lookup->next;
		i++;
	}
	if (lookup == NULL)
		return (-1);
	if (i == idx)
	{
		if (lookup->next != NULL)
			lookup->next->prev = lookup->prev;
		lookup->prev->next = lookup->next;
		/*lookup->next = lookup->next->next;
		lookup->next->next->prev = lookup;*/
	}
	return (-1);
}
