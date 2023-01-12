#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double list
 *
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    int n = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        n++;
    }
    return (n);
}
