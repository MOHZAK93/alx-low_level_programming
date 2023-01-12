#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 *
 * @head: head of the node
 * @n: data of node
 *
 * Return: address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	last_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (last_node == NULL)
	{
		new_node->prev = NULL;
		last_node = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}
