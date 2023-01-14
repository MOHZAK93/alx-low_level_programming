#include "lists.h"

/**
  *delete_nodeint_at_index - function that deletes the node
  *at the index of a list
  *
  *@head: pointer to head of list
  *@index: index of node to delete
  *
  *Return: 1
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
	}
	while (i != index - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		i++;
	}
	tmp->next = tmp->next->next;
	return (1);
}
