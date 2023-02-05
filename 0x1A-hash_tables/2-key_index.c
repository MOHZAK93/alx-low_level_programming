#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 *
 * @key: key
 * @size: size of the array of hash table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash % size);
}
