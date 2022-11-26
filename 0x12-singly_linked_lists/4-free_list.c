#include "lists.h"

/**
  *free_list - function that frees a list
  *
  *@head: head of list
  */

void free_list(list_t *head)
{
	free(head);
}
