#include "lists.h"

/**
  *insert_nodeint_at_index - function that inserts a new node at a
  *given position
  *
  *@head: pointer to head of node
  *@idx: index of the list where the new node should be added
  *@n: data to be added
  *
  *Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	i = 0;
	while (i < idx)
	{
		(*head) = (*head->next);
		i++;
	}
	if (*head == NULL)
		return (NULL);

	(*head)->next = new_node;

	return (new_node);
}
