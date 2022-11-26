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
	list_t *tmp = *head;
	int endlen = 0;

	newend = malloc(sizeof(list_t));

	if (newend == NULL)
	{
		return (NULL);
	}

	newend->str = strdup(str);

	newend->next = NULL;

	if (*head == NULL)
	{
		*head = newend;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newend;
	}
	while (str[endlen])
	{
		endlen++;
	}
	newend->len = endlen;
	return (newend);
}
