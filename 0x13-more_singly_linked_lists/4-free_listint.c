#include "lists.h"

/**
  *free_listint - function that frees a list
  *
  *@head: list
  */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
