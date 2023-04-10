#include "lists.h"

/**
 * print_listint_safe - reverses a singly-linked list
 *
 * @head: head of list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head;
	size_t i = 0, j;

	while (tmp->n)
	{
		i++;
		tmp = tmp->next;
	}
	i++;
	j = i;
	while (i)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i--;
	}
	return (j);
	/*return (98);*/
}
