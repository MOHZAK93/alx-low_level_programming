#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 *
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i, num;

	if (!ht)
		return;
	printf("{");
	for (i = 0, num = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (!node)
			continue;
		while (node)
		{
			if (num)
				printf(", ");
			num++;
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
