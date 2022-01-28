#include "hash_tables.h"
/**
 * key_index - Function that gives you the index of a key.
 * @key: Is the key.
 * @size: Is the size of the array of the hash table.
 *
 * Return: Index at which the key/value pair should be stored
 * in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = (hash_djb2(key) % size);
	return (index);
	/* It could also return (key % size); */
}
