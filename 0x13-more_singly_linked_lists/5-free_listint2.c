#include "lists.h"

/**
  *free_listint2 - function that frees a list
  *
  *@head: pointer to list
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(tmp);
	}
}
