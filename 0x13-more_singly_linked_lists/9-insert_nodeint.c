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
	unsigned int i = 0, index;
	listint_t *new_node, *temp = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	index = idx - 1;
	while (i != index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	if (temp)
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
