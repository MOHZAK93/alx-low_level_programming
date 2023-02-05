#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table to look into
 * @key: key to search
 *
 * Return: value associated with the element or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		return (node->value);
	}
	return (NULL);
}
