#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 *
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node, *temp;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (!node)
			continue;
		while (node)
		{
			temp = node;
			free(temp->key);
			free(temp->value);
			free(temp);
			node = node->next;
		}
	}
	free(ht->array);
	free(ht);
}
