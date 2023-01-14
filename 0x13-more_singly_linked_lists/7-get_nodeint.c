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
	listint_t *lookup = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i != index)
	{
		i++;
		lookup = lookup->next;
		if (lookup == NULL)
			return (NULL);
	}

	return (lookup);
}
