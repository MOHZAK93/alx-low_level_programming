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
	if (size)
	{
		hash_table_t *table = malloc(sizeof(hash_table_t));
		unsigned long int i;

		if (table == NULL)
			return (NULL);

		table->size = size;
		table->array = malloc(sizeof(hash_table_t) * table->size);

		if (table->array == NULL)
			return (NULL);

		for (i = 0; i < table->size; i++)
			table->array[i] = NULL;
		return (table);
	}
	else
		return (NULL);
}