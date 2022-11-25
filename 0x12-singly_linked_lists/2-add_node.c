#include "lists.h"

/**
  *add_node - function that adds a new node at beginning
  *
  *@head: new head of list
  *@str: character string
  *
  *Return: address of the new element.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (struct Node*)malloc(sizeof(struct list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;
	return (new);
}
