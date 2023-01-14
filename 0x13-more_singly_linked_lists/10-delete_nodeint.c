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
	listint_t *sub, *tmp = *head;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		i++;
	}
	sub = tmp->next;
	tmp->next = sub->next;
	free(sub);
	return (1);
}
