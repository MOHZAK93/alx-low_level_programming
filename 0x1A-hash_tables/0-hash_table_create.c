#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table)
	{
		table->size = size;
		table->array = malloc(sizeof(hash_table_t*) * size);

		if (table->array)
			return (table);
		free(table);
	}
	return (NULL);
}
