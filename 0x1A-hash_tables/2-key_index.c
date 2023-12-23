#include "hash_tables.h"

/**
 * key_index - it gives the index using djb2 algorithm
 * @key: String we want to get its index in the hash table
 * @size: Size of the hash table
 *
 * Return: Return the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
