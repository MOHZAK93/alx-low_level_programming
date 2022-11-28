#include "lists.h"

/**
  *add_nodeint - function that adds a node to beginning of list
  *
  *@head: pointer to head of list
  *@n: element of list
  *
  *Return: address of new element
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
