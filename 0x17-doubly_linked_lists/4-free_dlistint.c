#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
		head = head->next;
	}
	free(head);
}
