#include "lists.h"

/**
  *get_nodeint_at_index - function that returns the nth node of a list
  *
  *@head: head of the list
  *@index: index of node to return
  *
  *Return: nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		i++;
		head = head->next;
	}
	if (head != NULL)
		return (NULL);

	return (head);
}
