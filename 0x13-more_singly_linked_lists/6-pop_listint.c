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
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);

	temp = *head;
	(*head) = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
