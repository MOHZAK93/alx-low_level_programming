#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table to update key/value to
 * @key: key
 * @value: value associated with key
 *
 * Return: 1 on success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *check, *node = malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (!ht || !ht->array || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node->key = strdup(key);
	node->value = strdup(value);
	check = ht->array[index];
	if (check == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		if (strcmp(check->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
}
