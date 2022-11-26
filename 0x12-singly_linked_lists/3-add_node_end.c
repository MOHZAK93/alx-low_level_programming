#include "lists.h"

/**
  *add_node_end - function that adds to end of list
  *
  *@head: head of the list
  *@str: string pointer
  *
  *Return: pointer to new end
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newend;
	int endlen = 0;

	list_t *tmp = *head;

	newend = malloc(sizeof(list_t));

	if (newend == NULL)
		return (NULL);

	newend->str = strdup(str);
	newend->next = NULL;

	if (*head == NULL)
	{
		newend = *head;
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	newend = tmp->next;

	while (str[endlen])
	{
		endlen++;
	}
	newend->len = endlen;

	return (newend);
}
