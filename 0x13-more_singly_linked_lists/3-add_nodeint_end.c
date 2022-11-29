#include "lists.h"

/**
  *add_nodeint_end - function that adds a new node at the end of list
  *
  *@head: pointer to the list
  *@n: element of new node
  *
  *Return: address of new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *find_end, *new_node;

	find_end = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (find_end->next != NULL)
	{
		find_end = find_end->next;
	}
	find_end->next = new_node;

	return (new_node);
}
