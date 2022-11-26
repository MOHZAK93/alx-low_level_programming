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
	int newlen = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[newlen])
	{
		newlen++;
	}
	new->len = newlen;
	new->next = (*head);
	(*head) = new;
	return (new);
}
