#include "lists.h"

/**
  *pop_listint - function that deletes head of node
  *
  *@head: head of list
  *
  *Return: head node's data
  */

int pop_listint(listint_t **head)
{
	if (head == NULL)
		return (0);

	listint_t *temp;

	temp = *head;
	(*head) = (*head)->next;
	free(temp);
	return ((*head)->n);
}
