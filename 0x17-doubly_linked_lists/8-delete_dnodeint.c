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
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (i != index)
	{
		if (lookup == NULL)
			return (-1);
		lookup = lookup->next;
		i++;
	}
	if (lookup == *head)
	{
		(*head) = lookup->next;
		if (*head != NULL)
			(*head)->prev = NULL;

	}

	else
	{
		if (lookup->next != NULL)
			lookup->next->prev = lookup->prev;
		lookup->prev->next = lookup->next;
	}
	free(lookup);
	return (1);
}
